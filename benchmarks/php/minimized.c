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

struct _IO_FILE;

struct _IO_FILE;

struct _IO_FILE;

typedef struct _IO_FILE FILE;

typedef struct _IO_FILE __FILE;

union __anonunion___value_3 {
   unsigned int __wch ;
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

typedef int wchar_t;

struct __anonstruct_div_t_6 {
   int quot ;
   int rem ;
};

typedef struct __anonstruct_div_t_6 div_t;

struct __anonstruct_ldiv_t_7 {
   long quot ;
   long rem ;
};

typedef struct __anonstruct_ldiv_t_7 ldiv_t;

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

struct __anonstruct___sigset_t_8 {
   unsigned long __val[1024UL / (8UL * sizeof(unsigned long ))] ;
};

typedef struct __anonstruct___sigset_t_8 __sigset_t;

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

struct __anonstruct_fd_set_9 {
   __fd_mask __fds_bits[1024UL / (8UL * sizeof(__fd_mask ))] ;
};

typedef struct __anonstruct_fd_set_9 fd_set;

typedef __fd_mask fd_mask;

typedef __blkcnt_t blkcnt_t;

typedef __fsblkcnt_t fsblkcnt_t;

typedef __fsfilcnt_t fsfilcnt_t;

typedef unsigned long pthread_t;

union __anonunion_pthread_attr_t_10 {
   char __size[36] ;
   long __align ;
};

typedef union __anonunion_pthread_attr_t_10 pthread_attr_t;

struct __pthread_internal_slist {
   struct __pthread_internal_slist *__next ;
};

typedef struct __pthread_internal_slist __pthread_slist_t;

union __anonunion____missing_field_name_12 {
   int __spins ;
   __pthread_slist_t __list ;
};

struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   int __kind ;
   unsigned int __nusers ;
   union __anonunion____missing_field_name_12 __annonCompField1 ;
};

union __anonunion_pthread_mutex_t_11 {
   struct __pthread_mutex_s __data ;
   char __size[24] ;
   long __align ;
};

typedef union __anonunion_pthread_mutex_t_11 pthread_mutex_t;

union __anonunion_pthread_mutexattr_t_13 {
   char __size[4] ;
   int __align ;
};

typedef union __anonunion_pthread_mutexattr_t_13 pthread_mutexattr_t;

struct __anonstruct___data_15 {
   int __lock ;
   unsigned int __futex ;
   unsigned long long __total_seq ;
   unsigned long long __wakeup_seq ;
   unsigned long long __woken_seq ;
   void *__mutex ;
   unsigned int __nwaiters ;
   unsigned int __broadcast_seq ;
};

union __anonunion_pthread_cond_t_14 {
   struct __anonstruct___data_15 __data ;
   char __size[48] ;
   long long __align ;
};

typedef union __anonunion_pthread_cond_t_14 pthread_cond_t;

union __anonunion_pthread_condattr_t_16 {
   char __size[4] ;
   int __align ;
};

typedef union __anonunion_pthread_condattr_t_16 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

struct __anonstruct___data_18 {
   int __lock ;
   unsigned int __nr_readers ;
   unsigned int __readers_wakeup ;
   unsigned int __writer_wakeup ;
   unsigned int __nr_readers_queued ;
   unsigned int __nr_writers_queued ;
   unsigned char __flags ;
   unsigned char __shared ;
   unsigned char __pad1 ;
   unsigned char __pad2 ;
   int __writer ;
};

union __anonunion_pthread_rwlock_t_17 {
   struct __anonstruct___data_18 __data ;
   char __size[32] ;
   long __align ;
};

typedef union __anonunion_pthread_rwlock_t_17 pthread_rwlock_t;

union __anonunion_pthread_rwlockattr_t_19 {
   char __size[8] ;
   long __align ;
};

typedef union __anonunion_pthread_rwlockattr_t_19 pthread_rwlockattr_t;

typedef int volatile   pthread_spinlock_t;

union __anonunion_pthread_barrier_t_20 {
   char __size[20] ;
   long __align ;
};

typedef union __anonunion_pthread_barrier_t_20 pthread_barrier_t;

union __anonunion_pthread_barrierattr_t_21 {
   char __size[4] ;
   int __align ;
};

typedef union __anonunion_pthread_barrierattr_t_21 pthread_barrierattr_t;

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

enum __anonenum__LIB_VERSION_TYPE_22 {
    _IEEE_ = -1,
    _SVID_ = 0,
    _XOPEN_ = 1,
    _POSIX_ = 2,
    _ISOC_ = 3
} ;

typedef enum __anonenum__LIB_VERSION_TYPE_22 _LIB_VERSION_TYPE;

struct exception {
   int type ;
   char *name ;
   double arg1 ;
   double arg2 ;
   double retval ;
};

typedef __gnuc_va_list va_list;

struct _zend_leak_info {
   void *addr ;
   size_t size ;
   char *filename ;
   uint lineno ;
   char *orig_filename ;
   uint orig_lineno ;
};

typedef struct _zend_leak_info zend_leak_info;

struct _zend_mm_heap;

struct _zend_mm_heap;

typedef struct _zend_mm_heap zend_mm_heap;

struct _zend_mm_storage;

struct _zend_mm_storage;

typedef struct _zend_mm_storage zend_mm_storage;

struct _zend_mm_segment {
   size_t size ;
   struct _zend_mm_segment *next_segment ;
};

typedef struct _zend_mm_segment zend_mm_segment;

struct _zend_mm_mem_handlers {
   char const   *name ;
   zend_mm_storage *(*init)(void *params ) ;
   void (*dtor)(zend_mm_storage *storage ) ;
   zend_mm_segment *(*_alloc)(zend_mm_storage *storage , size_t size ) ;
   zend_mm_segment *(*_realloc)(zend_mm_storage *storage ,
                                zend_mm_segment *ptr , size_t size ) ;
   void (*_free)(zend_mm_storage *storage , zend_mm_segment *ptr ) ;
};

typedef struct _zend_mm_mem_handlers zend_mm_mem_handlers;

struct _zend_mm_storage {
   zend_mm_mem_handlers const   *handlers ;
   void *data ;
};

typedef unsigned char zend_bool;

typedef unsigned char zend_uchar;

typedef unsigned int zend_uint;

typedef unsigned long zend_ulong;

typedef unsigned short zend_ushort;

typedef unsigned int zend_object_handle;

struct _zend_object_handlers;

struct _zend_object_handlers;

typedef struct _zend_object_handlers zend_object_handlers;

struct _zend_object_value {
   zend_object_handle handle ;
   zend_object_handlers *handlers ;
};

typedef struct _zend_object_value zend_object_value;

typedef ulong (*hash_func_t)(char *arKey , uint nKeyLength );

typedef int (*compare_func_t)(void const   * , void const   * );

typedef void (*sort_func_t)(void * , size_t  , size_t  ,
                            int (*)(void const   * , void const   * ) );

typedef void (*dtor_func_t)(void *pDest );

typedef void (*copy_ctor_func_t)(void *pElement );

typedef void (*copy_ctor_param_func_t)(void *pElement , void *pParam );

struct _hashtable;

struct _hashtable;

struct _hashtable;

struct bucket {
   ulong h ;
   uint nKeyLength ;
   void *pData ;
   void *pDataPtr ;
   struct bucket *pListNext ;
   struct bucket *pListLast ;
   struct bucket *pNext ;
   struct bucket *pLast ;
   char arKey[1] ;
};

typedef struct bucket Bucket;

struct _hashtable {
   uint nTableSize ;
   uint nTableMask ;
   uint nNumOfElements ;
   ulong nNextFreeElement ;
   Bucket *pInternalPointer ;
   Bucket *pListHead ;
   Bucket *pListTail ;
   Bucket **arBuckets ;
   void (*pDestructor)(void *pDest ) ;
   zend_bool persistent ;
   unsigned char nApplyCount ;
   zend_bool bApplyProtection ;
};

typedef struct _hashtable HashTable;

struct _zend_hash_key {
   char *arKey ;
   uint nKeyLength ;
   ulong h ;
};

typedef struct _zend_hash_key zend_hash_key;

typedef zend_bool (*merge_checker_func_t)(HashTable *target_ht ,
                                          void *source_data ,
                                          zend_hash_key *hash_key ,
                                          void *pParam );

typedef Bucket *HashPosition;

typedef int (*apply_func_t)(void *pDest );

typedef int (*apply_func_arg_t)(void *pDest , void *argument );

typedef int (*apply_func_args_t)(void *pDest , int num_args , va_list args ,
                                 zend_hash_key *hash_key );

struct _HashPointer {
   HashPosition pos ;
   ulong h ;
};

typedef struct _HashPointer HashPointer;

struct _zend_ts_hashtable {
   HashTable hash ;
   zend_uint reader ;
};

typedef struct _zend_ts_hashtable TsHashTable;

struct _zend_llist_element {
   struct _zend_llist_element *next ;
   struct _zend_llist_element *prev ;
   char data[1] ;
};

typedef struct _zend_llist_element zend_llist_element;

typedef void (*llist_dtor_func_t)(void * );

typedef int (*llist_compare_func_t)(zend_llist_element const   ** ,
                                    zend_llist_element const   ** );

typedef void (*llist_apply_with_args_func_t)(void *data , int num_args ,
                                             va_list args );

typedef void (*llist_apply_with_arg_func_t)(void *data , void *arg );

typedef void (*llist_apply_func_t)(void * );

struct _zend_llist {
   zend_llist_element *head ;
   zend_llist_element *tail ;
   size_t count ;
   size_t size ;
   void (*dtor)(void * ) ;
   unsigned char persistent ;
   zend_llist_element *traverse_ptr ;
};

typedef struct _zend_llist zend_llist;

typedef zend_llist_element *zend_llist_position;

struct _zval_struct;

struct _zval_struct;

typedef struct _zval_struct zval;

struct _zend_class_entry;

struct _zend_class_entry;

typedef struct _zend_class_entry zend_class_entry;

struct _zend_guard {
   zend_bool in_get ;
   zend_bool in_set ;
   zend_bool in_unset ;
   zend_bool in_isset ;
   zend_bool dummy ;
};

typedef struct _zend_guard zend_guard;

struct _zend_object {
   zend_class_entry *ce ;
   HashTable *properties ;
   HashTable *guards ;
};

typedef struct _zend_object zend_object;

union _zend_function;

union _zend_function;

union _zend_function;

struct _zend_property_info;

struct _zend_property_info;

struct _zend_property_info;

typedef zval *(*zend_object_read_property_t)(zval *object , zval *member ,
                                             int type );

typedef zval *(*zend_object_read_dimension_t)(zval *object , zval *offset ,
                                              int type );

typedef void (*zend_object_write_property_t)(zval *object , zval *member ,
                                             zval *value );

typedef void (*zend_object_write_dimension_t)(zval *object , zval *offset ,
                                              zval *value );

typedef zval **(*zend_object_get_property_ptr_ptr_t)(zval *object ,
                                                     zval *member );

typedef void (*zend_object_set_t)(zval **object , zval *value );

typedef zval *(*zend_object_get_t)(zval *object );

typedef int (*zend_object_has_property_t)(zval *object , zval *member ,
                                          int has_set_exists );

typedef int (*zend_object_has_dimension_t)(zval *object , zval *member ,
                                           int check_empty );

typedef void (*zend_object_unset_property_t)(zval *object , zval *member );

typedef void (*zend_object_unset_dimension_t)(zval *object , zval *offset );

typedef HashTable *(*zend_object_get_properties_t)(zval *object );

typedef int (*zend_object_call_method_t)(char *method , int ht ,
                                         zval *return_value ,
                                         zval **return_value_ptr ,
                                         zval *this_ptr , int return_value_used );

typedef union _zend_function *(*zend_object_get_method_t)(zval **object_ptr ,
                                                          char *method ,
                                                          int method_len );

typedef union _zend_function *(*zend_object_get_constructor_t)(zval *object );

typedef void (*zend_object_add_ref_t)(zval *object );

typedef void (*zend_object_del_ref_t)(zval *object );

typedef void (*zend_object_delete_obj_t)(zval *object );

typedef zend_object_value (*zend_object_clone_obj_t)(zval *object );

typedef zend_class_entry *(*zend_object_get_class_entry_t)(zval *object );

typedef int (*zend_object_get_class_name_t)(zval *object , char **class_name ,
                                            zend_uint *class_name_len ,
                                            int parent );

typedef int (*zend_object_compare_t)(zval *object1 , zval *object2 );

typedef int (*zend_object_cast_t)(zval *readobj , zval *retval , int type );

typedef int (*zend_object_count_elements_t)(zval *object , long *count );

struct _zend_object_handlers {
   void (*add_ref)(zval *object ) ;
   void (*del_ref)(zval *object ) ;
   zend_object_value (*clone_obj)(zval *object ) ;
   zval *(*read_property)(zval *object , zval *member , int type ) ;
   void (*write_property)(zval *object , zval *member , zval *value ) ;
   zval *(*read_dimension)(zval *object , zval *offset , int type ) ;
   void (*write_dimension)(zval *object , zval *offset , zval *value ) ;
   zval **(*get_property_ptr_ptr)(zval *object , zval *member ) ;
   zval *(*get)(zval *object ) ;
   void (*set)(zval **object , zval *value ) ;
   int (*has_property)(zval *object , zval *member , int has_set_exists ) ;
   void (*unset_property)(zval *object , zval *member ) ;
   int (*has_dimension)(zval *object , zval *member , int check_empty ) ;
   void (*unset_dimension)(zval *object , zval *offset ) ;
   HashTable *(*get_properties)(zval *object ) ;
   union _zend_function *(*get_method)(zval **object_ptr , char *method ,
                                       int method_len ) ;
   int (*call_method)(char *method , int ht , zval *return_value ,
                      zval **return_value_ptr , zval *this_ptr ,
                      int return_value_used ) ;
   union _zend_function *(*get_constructor)(zval *object ) ;
   zend_class_entry *(*get_class_entry)(zval *object ) ;
   int (*get_class_name)(zval *object , char **class_name ,
                         zend_uint *class_name_len , int parent ) ;
   int (*compare_objects)(zval *object1 , zval *object2 ) ;
   int (*cast_object)(zval *readobj , zval *retval , int type ) ;
   int (*count_elements)(zval *object , long *count ) ;
};

struct __anonstruct_str_23 {
   char *val ;
   int len ;
};

union _zvalue_value {
   long lval ;
   double dval ;
   struct __anonstruct_str_23 str ;
   HashTable *ht ;
   zend_object_value obj ;
};

typedef union _zvalue_value zvalue_value;

struct _zval_struct {
   zvalue_value value ;
   zend_uint refcount ;
   zend_uchar type ;
   zend_uchar is_ref ;
};

union _zend_function;

struct _zend_object_iterator;

struct _zend_object_iterator;

typedef struct _zend_object_iterator zend_object_iterator;

struct _zend_object_iterator_funcs {
   void (*dtor)(zend_object_iterator *iter ) ;
   int (*valid)(zend_object_iterator *iter ) ;
   void (*get_current_data)(zend_object_iterator *iter , zval ***data ) ;
   int (*get_current_key)(zend_object_iterator *iter , char **str_key ,
                          uint *str_key_len , ulong *int_key ) ;
   void (*move_forward)(zend_object_iterator *iter ) ;
   void (*rewind)(zend_object_iterator *iter ) ;
   void (*invalidate_current)(zend_object_iterator *iter ) ;
};

typedef struct _zend_object_iterator_funcs zend_object_iterator_funcs;

struct _zend_object_iterator {
   void *data ;
   zend_object_iterator_funcs *funcs ;
   ulong index ;
};

struct _zend_class_iterator_funcs {
   zend_object_iterator_funcs *funcs ;
   union _zend_function *zf_new_iterator ;
   union _zend_function *zf_valid ;
   union _zend_function *zf_current ;
   union _zend_function *zf_key ;
   union _zend_function *zf_next ;
   union _zend_function *zf_rewind ;
};

typedef struct _zend_class_iterator_funcs zend_class_iterator_funcs;

enum zend_object_iterator_kind {
    ZEND_ITER_INVALID = 0,
    ZEND_ITER_PLAIN_ARRAY = 1,
    ZEND_ITER_PLAIN_OBJECT = 2,
    ZEND_ITER_OBJECT = 3
} ;

struct _zend_serialize_data;

struct _zend_serialize_data;

struct _zend_serialize_data;

struct _zend_unserialize_data;

struct _zend_unserialize_data;

struct _zend_unserialize_data;

typedef struct _zend_serialize_data zend_serialize_data;

typedef struct _zend_unserialize_data zend_unserialize_data;

struct _zend_function_entry;

struct _zend_function_entry;

struct _zend_module_entry;

struct _zend_module_entry;

struct _zend_class_entry {
   char type ;
   char *name ;
   zend_uint name_length ;
   struct _zend_class_entry *parent ;
   int refcount ;
   zend_bool constants_updated ;
   zend_uint ce_flags ;
   HashTable function_table ;
   HashTable default_properties ;
   HashTable properties_info ;
   HashTable default_static_members ;
   HashTable *static_members ;
   HashTable constants_table ;
   struct _zend_function_entry *builtin_functions ;
   union _zend_function *constructor ;
   union _zend_function *destructor ;
   union _zend_function *clone ;
   union _zend_function *__get ;
   union _zend_function *__set ;
   union _zend_function *__unset ;
   union _zend_function *__isset ;
   union _zend_function *__call ;
   union _zend_function *__tostring ;
   union _zend_function *serialize_func ;
   union _zend_function *unserialize_func ;
   zend_class_iterator_funcs iterator_funcs ;
   zend_object_value (*create_object)(zend_class_entry *class_type ) ;
   zend_object_iterator *(*get_iterator)(zend_class_entry *ce , zval *object ,
                                         int by_ref ) ;
   int (*interface_gets_implemented)(zend_class_entry *iface ,
                                     zend_class_entry *class_type ) ;
   int (*serialize)(zval *object , unsigned char **buffer , zend_uint *buf_len ,
                    zend_serialize_data *data ) ;
   int (*unserialize)(zval **object , zend_class_entry *ce ,
                      unsigned char const   *buf , zend_uint buf_len ,
                      zend_unserialize_data *data ) ;
   zend_class_entry **interfaces ;
   zend_uint num_interfaces ;
   char *filename ;
   zend_uint line_start ;
   zend_uint line_end ;
   char *doc_comment ;
   zend_uint doc_comment_len ;
   struct _zend_module_entry *module ;
};

typedef size_t (*zend_stream_reader_t)(void *handle , char *buf , size_t len );

typedef void (*zend_stream_closer_t)(void *handle );

typedef long (*zend_stream_fteller_t)(void *handle );

struct _zend_stream {
   void *handle ;
   size_t (*reader)(void *handle , char *buf , size_t len ) ;
   void (*closer)(void *handle ) ;
   long (*fteller)(void *handle ) ;
   int interactive ;
};

typedef struct _zend_stream zend_stream;

union __anonunion_handle_24 {
   int fd ;
   FILE *fp ;
   zend_stream stream ;
};

struct _zend_file_handle {
   zend_uchar type ;
   char *filename ;
   char *opened_path ;
   union __anonunion_handle_24 handle ;
   zend_bool free_filename ;
};

typedef struct _zend_file_handle zend_file_handle;

struct _zend_utility_functions {
   void (*error_function)(int type , char const   *error_filename ,
                          uint error_lineno , char const   *format ,
                          va_list args ) ;
   int (*printf_function)(char const   *format  , ...) ;
   int (*write_function)(char const   *str , uint str_length ) ;
   FILE *(*fopen_function)(char const   *filename , char **opened_path ) ;
   void (*message_handler)(long message , void *data ) ;
   void (*block_interruptions)(void) ;
   void (*unblock_interruptions)(void) ;
   int (*get_configuration_directive)(char *name , uint name_length ,
                                      zval *contents ) ;
   void (*ticks_function)(int ticks ) ;
   void (*on_timeout)(int seconds ) ;
   int (*stream_open_function)(char const   *filename ,
                               zend_file_handle *handle ) ;
   int (*vspprintf_function)(char **pbuf , size_t max_len ,
                             char const   *format , va_list ap ) ;
   char *(*getenv_function)(char *name , size_t name_len ) ;
};

typedef struct _zend_utility_functions zend_utility_functions;

struct _zend_utility_values {
   char *import_use_extension ;
   uint import_use_extension_length ;
   zend_bool html_errors ;
};

typedef struct _zend_utility_values zend_utility_values;

typedef int (*zend_write_func_t)(char const   *str , uint str_length );

struct _zend_op_array;

struct _zend_op_array;

typedef struct _zend_op_array zend_op_array;

struct _zend_op;

struct _zend_op;

typedef struct _zend_op zend_op;

struct __anonstruct_EA_26 {
   zend_uint var ;
   zend_uint type ;
};

union __anonunion_u_25 {
   zval constant ;
   zend_uint var ;
   zend_uint opline_num ;
   zend_op_array *op_array ;
   zend_op *jmp_addr ;
   struct __anonstruct_EA_26 EA ;
};

struct _znode {
   int op_type ;
   union __anonunion_u_25 u ;
};

typedef struct _znode znode;

struct _zend_execute_data;

struct _zend_execute_data;

typedef struct _zend_execute_data zend_execute_data;

typedef int (*opcode_handler_t)(zend_execute_data *execute_data );

struct _zend_op {
   int (*handler)(zend_execute_data *execute_data ) ;
   znode result ;
   znode op1 ;
   znode op2 ;
   ulong extended_value ;
   uint lineno ;
   zend_uchar opcode ;
};

struct _zend_brk_cont_element {
   int start ;
   int cont ;
   int brk ;
   int parent ;
};

typedef struct _zend_brk_cont_element zend_brk_cont_element;

struct _zend_try_catch_element {
   zend_uint try_op ;
   zend_uint catch_op ;
};

typedef struct _zend_try_catch_element zend_try_catch_element;

struct _zend_property_info {
   zend_uint flags ;
   char *name ;
   int name_length ;
   ulong h ;
   char *doc_comment ;
   int doc_comment_len ;
   zend_class_entry *ce ;
};

typedef struct _zend_property_info zend_property_info;

struct _zend_arg_info {
   char *name ;
   zend_uint name_len ;
   char *class_name ;
   zend_uint class_name_len ;
   zend_bool array_type_hint ;
   zend_bool allow_null ;
   zend_bool pass_by_reference ;
   zend_bool return_reference ;
   int required_num_args ;
};

typedef struct _zend_arg_info zend_arg_info;

struct _zend_compiled_variable {
   char *name ;
   int name_len ;
   ulong hash_value ;
};

typedef struct _zend_compiled_variable zend_compiled_variable;

struct _zend_op_array {
   zend_uchar type ;
   char *function_name ;
   zend_class_entry *scope ;
   zend_uint fn_flags ;
   union _zend_function *prototype ;
   zend_uint num_args ;
   zend_uint required_num_args ;
   zend_arg_info *arg_info ;
   zend_bool pass_rest_by_reference ;
   unsigned char return_reference ;
   zend_uint *refcount ;
   zend_op *opcodes ;
   zend_uint last ;
   zend_uint size ;
   zend_compiled_variable *vars ;
   int last_var ;
   int size_var ;
   zend_uint T ;
   zend_brk_cont_element *brk_cont_array ;
   zend_uint last_brk_cont ;
   zend_uint current_brk_cont ;
   zend_try_catch_element *try_catch_array ;
   int last_try_catch ;
   HashTable *static_variables ;
   zend_op *start_op ;
   int backpatch_count ;
   zend_bool done_pass_two ;
   zend_bool uses_this ;
   char *filename ;
   zend_uint line_start ;
   zend_uint line_end ;
   char *doc_comment ;
   zend_uint doc_comment_len ;
   void *reserved[4] ;
};

struct _zend_internal_function {
   zend_uchar type ;
   char *function_name ;
   zend_class_entry *scope ;
   zend_uint fn_flags ;
   union _zend_function *prototype ;
   zend_uint num_args ;
   zend_uint required_num_args ;
   zend_arg_info *arg_info ;
   zend_bool pass_rest_by_reference ;
   unsigned char return_reference ;
   void (*handler)(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) ;
   struct _zend_module_entry *module ;
};

typedef struct _zend_internal_function zend_internal_function;

struct __anonstruct_common_27 {
   zend_uchar type ;
   char *function_name ;
   zend_class_entry *scope ;
   zend_uint fn_flags ;
   union _zend_function *prototype ;
   zend_uint num_args ;
   zend_uint required_num_args ;
   zend_arg_info *arg_info ;
   zend_bool pass_rest_by_reference ;
   unsigned char return_reference ;
};

union _zend_function {
   zend_uchar type ;
   struct __anonstruct_common_27 common ;
   zend_op_array op_array ;
   zend_internal_function internal_function ;
};

typedef union _zend_function zend_function;

struct _zend_function_state {
   HashTable *function_symbol_table ;
   zend_function *function ;
   void *reserved[4] ;
};

typedef struct _zend_function_state zend_function_state;

struct _zend_switch_entry {
   znode cond ;
   int default_case ;
   int control_var ;
};

typedef struct _zend_switch_entry zend_switch_entry;

struct _list_llist_element {
   znode var ;
   zend_llist dimensions ;
   znode value ;
};

typedef struct _list_llist_element list_llist_element;

union _temp_variable;

union _temp_variable;

union _temp_variable;

struct _zend_execute_data {
   struct _zend_op *opline ;
   zend_function_state function_state ;
   zend_function *fbc ;
   zend_op_array *op_array ;
   zval *object ;
   union _temp_variable *Ts ;
   zval ***CVs ;
   zend_bool original_in_execution ;
   HashTable *symbol_table ;
   struct _zend_execute_data *prev_execute_data ;
   zval *old_error_reporting ;
};

typedef int __jmp_buf[6];

struct __jmp_buf_tag {
   __jmp_buf __jmpbuf ;
   int __mask_was_saved ;
   __sigset_t __saved_mask ;
};

typedef struct __jmp_buf_tag jmp_buf[1];

typedef struct __jmp_buf_tag sigjmp_buf[1];

struct _zend_compiler_globals;

struct _zend_compiler_globals;

typedef struct _zend_compiler_globals zend_compiler_globals;

struct _zend_executor_globals;

struct _zend_executor_globals;

typedef struct _zend_executor_globals zend_executor_globals;

struct _zend_scanner_globals;

struct _zend_scanner_globals;

typedef struct _zend_scanner_globals zend_scanner_globals;

struct _zend_stack {
   int top ;
   int max ;
   void **elements ;
};

typedef struct _zend_stack zend_stack;

struct _zend_ptr_stack {
   int top ;
   int max ;
   void **elements ;
   void **top_element ;
};

typedef struct _zend_ptr_stack zend_ptr_stack;

typedef void (*zend_objects_store_dtor_t)(void *object ,
                                          zend_object_handle handle );

typedef void (*zend_objects_free_object_storage_t)(void *object );

typedef void (*zend_objects_store_clone_t)(void *object , void **object_clone );

struct _store_object {
   void *object ;
   void (*dtor)(void *object , zend_object_handle handle ) ;
   void (*free_storage)(void *object ) ;
   void (*clone)(void *object , void **object_clone ) ;
   zend_uint refcount ;
};

struct __anonstruct_free_list_28 {
   int next ;
};

union _store_bucket {
   struct _store_object obj ;
   struct __anonstruct_free_list_28 free_list ;
};

struct _zend_object_store_bucket {
   zend_bool destructor_called ;
   zend_bool valid ;
   union _store_bucket bucket ;
};

typedef struct _zend_object_store_bucket zend_object_store_bucket;

struct _zend_objects_store {
   zend_object_store_bucket *object_buckets ;
   zend_uint top ;
   zend_uint size ;
   int free_list_head ;
};

typedef struct _zend_objects_store zend_objects_store;

struct _zend_declarables {
   zval ticks ;
};

typedef struct _zend_declarables zend_declarables;

struct _zend_ini_parser_param;

struct _zend_ini_parser_param;

struct _zend_compiler_globals {
   zend_stack bp_stack ;
   zend_stack switch_cond_stack ;
   zend_stack foreach_copy_stack ;
   zend_stack object_stack ;
   zend_stack declare_stack ;
   zend_class_entry *active_class_entry ;
   zend_llist list_llist ;
   zend_llist dimension_llist ;
   zend_stack list_stack ;
   zend_stack function_call_stack ;
   char *compiled_filename ;
   int zend_lineno ;
   int comment_start_line ;
   char *heredoc ;
   int heredoc_len ;
   zend_op_array *active_op_array ;
   HashTable *function_table ;
   HashTable *class_table ;
   HashTable filenames_table ;
   HashTable *auto_globals ;
   zend_bool in_compilation ;
   zend_bool short_tags ;
   zend_bool asp_tags ;
   zend_bool allow_call_time_pass_reference ;
   zend_declarables declarables ;
   zend_bool extended_info ;
   zend_bool handle_op_arrays ;
   zend_bool unclean_shutdown ;
   zend_bool ini_parser_unbuffered_errors ;
   zend_llist open_files ;
   long catch_begin ;
   struct _zend_ini_parser_param *ini_parser_param ;
   int interactive ;
   zend_uint start_lineno ;
   zend_bool increment_lineno ;
   znode implementing_class ;
   zend_uint access_type ;
   char *doc_comment ;
   zend_uint doc_comment_len ;
};

struct _zend_executor_globals {
   zval **return_value_ptr_ptr ;
   zval uninitialized_zval ;
   zval *uninitialized_zval_ptr ;
   zval error_zval ;
   zval *error_zval_ptr ;
   zend_function_state *function_state_ptr ;
   zend_ptr_stack arg_types_stack ;
   HashTable *symtable_cache[32] ;
   HashTable **symtable_cache_limit ;
   HashTable **symtable_cache_ptr ;
   zend_op **opline_ptr ;
   HashTable *active_symbol_table ;
   HashTable symbol_table ;
   HashTable included_files ;
   jmp_buf *bailout ;
   int error_reporting ;
   int orig_error_reporting ;
   int exit_status ;
   zend_op_array *active_op_array ;
   HashTable *function_table ;
   HashTable *class_table ;
   HashTable *zend_constants ;
   zend_class_entry *scope ;
   zval *This ;
   long precision ;
   int ticks_count ;
   zend_bool in_execution ;
   HashTable *in_autoload ;
   zend_function *autoload_func ;
   zend_bool full_tables_cleanup ;
   zend_bool ze1_compatibility_mode ;
   zend_bool no_extensions ;
   HashTable regular_list ;
   HashTable persistent_list ;
   zend_ptr_stack argument_stack ;
   int user_error_handler_error_reporting ;
   zval *user_error_handler ;
   zval *user_exception_handler ;
   zend_stack user_error_handlers_error_reporting ;
   zend_ptr_stack user_error_handlers ;
   zend_ptr_stack user_exception_handlers ;
   int timeout_seconds ;
   int lambda_count ;
   HashTable *ini_directives ;
   HashTable *modified_ini_directives ;
   zend_objects_store objects_store ;
   zval *exception ;
   zend_op *opline_before_exception ;
   struct _zend_execute_data *current_execute_data ;
   struct _zend_module_entry *current_module ;
   zend_property_info std_property_info ;
   zend_bool active ;
   void *reserved[4] ;
};

struct yy_buffer_state;

struct yy_buffer_state;

struct _zend_scanner_globals {
   zend_file_handle *yy_in ;
   zend_file_handle *yy_out ;
   int yy_leng ;
   char *yy_text ;
   struct yy_buffer_state *current_buffer ;
   char *c_buf_p ;
   int init ;
   int start ;
   int lineno ;
   char _yy_hold_char ;
   int yy_n_chars ;
   int _yy_did_buffer_switch_on_eof ;
   int _yy_last_accepting_state ;
   char *_yy_last_accepting_cpos ;
   int _yy_more_flag ;
   int _yy_more_len ;
   int yy_start_stack_ptr ;
   int yy_start_stack_depth ;
   int *yy_start_stack ;
};

typedef int (*unary_op_type)(zval * , zval * );

typedef zend_bool (*zend_auto_global_callback)(char *name , uint name_len );

struct _zend_auto_global {
   char *name ;
   uint name_len ;
   zend_bool (*auto_global_callback)(char *name , uint name_len ) ;
   zend_bool armed ;
};

typedef struct _zend_auto_global zend_auto_global;

struct _zend_ini_entry;

struct _zend_ini_entry;

struct _zend_ini_entry;

typedef struct _zend_module_entry zend_module_entry;

struct _zend_module_dep;

struct _zend_module_dep;

typedef struct _zend_module_dep zend_module_dep;

struct _zend_module_entry {
   unsigned short size ;
   unsigned int zend_api ;
   unsigned char zend_debug ;
   unsigned char zts ;
   struct _zend_ini_entry *ini_entry ;
   struct _zend_module_dep *deps ;
   char *name ;
   struct _zend_function_entry *functions ;
   int (*module_startup_func)(int type , int module_number ) ;
   int (*module_shutdown_func)(int type , int module_number ) ;
   int (*request_startup_func)(int type , int module_number ) ;
   int (*request_shutdown_func)(int type , int module_number ) ;
   void (*info_func)(zend_module_entry *zend_module ) ;
   char *version ;
   size_t globals_size ;
   void *globals_ptr ;
   void (*globals_ctor)(void *global ) ;
   void (*globals_dtor)(void *global ) ;
   int (*post_deactivate_func)(void) ;
   int module_started ;
   unsigned char type ;
   void *handle ;
   int module_number ;
};

struct _zend_module_dep {
   char *name ;
   char *rel ;
   char *version ;
   unsigned char type ;
};

struct _zend_rsrc_list_entry {
   void *ptr ;
   int type ;
   int refcount ;
};

typedef struct _zend_rsrc_list_entry zend_rsrc_list_entry;

typedef void (*rsrc_dtor_func_t)(zend_rsrc_list_entry *rsrc );

struct _zend_rsrc_list_dtors_entry {
   void (*list_dtor)(void * ) ;
   void (*plist_dtor)(void * ) ;
   void (*list_dtor_ex)(zend_rsrc_list_entry *rsrc ) ;
   void (*plist_dtor_ex)(zend_rsrc_list_entry *rsrc ) ;
   char *type_name ;
   int module_number ;
   int resource_id ;
   unsigned char type ;
};

typedef struct _zend_rsrc_list_dtors_entry zend_rsrc_list_dtors_entry;

struct __anonstruct_var_29 {
   zval **ptr_ptr ;
   zval *ptr ;
   zend_bool fcall_returned_reference ;
};

struct __anonstruct_str_offset_30 {
   zval **ptr_ptr ;
   zval *ptr ;
   zend_bool fcall_returned_reference ;
   zval *str ;
   zend_uint offset ;
};

struct __anonstruct_fe_31 {
   zval **ptr_ptr ;
   zval *ptr ;
   zend_bool fcall_returned_reference ;
   HashPointer fe_pos ;
};

union _temp_variable {
   zval tmp_var ;
   struct __anonstruct_var_29 var ;
   struct __anonstruct_str_offset_30 str_offset ;
   struct __anonstruct_fe_31 fe ;
   zend_class_entry *class_entry ;
};

typedef union _temp_variable temp_variable;

struct _zend_free_op {
   zval *var ;
};

typedef struct _zend_free_op zend_free_op;

struct _zend_function_entry {
   char *fname ;
   void (*handler)(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) ;
   struct _zend_arg_info *arg_info ;
   zend_uint num_args ;
   zend_uint flags ;
};

typedef struct _zend_function_entry zend_function_entry;

struct _zend_fcall_info {
   size_t size ;
   HashTable *function_table ;
   zval *function_name ;
   HashTable *symbol_table ;
   zval **retval_ptr_ptr ;
   zend_uint param_count ;
   zval ***params ;
   zval **object_pp ;
   zend_bool no_separation ;
};

typedef struct _zend_fcall_info zend_fcall_info;

struct _zend_fcall_info_cache {
   zend_bool initialized ;
   zend_function *function_handler ;
   zend_class_entry *calling_scope ;
   zval **object_pp ;
};

typedef struct _zend_fcall_info_cache zend_fcall_info_cache;

typedef off_t regoff_t;

struct re_guts;

struct re_guts;

struct __anonstruct_regex_t_32 {
   int re_magic ;
   size_t re_nsub ;
   char const   *re_endp ;
   struct re_guts *re_g ;
};

typedef struct __anonstruct_regex_t_32 regex_t;

struct __anonstruct_regmatch_t_33 {
   regoff_t rm_so ;
   regoff_t rm_eo ;
};

typedef struct __anonstruct_regmatch_t_33 regmatch_t;

enum __anonenum_34 {
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

typedef __useconds_t useconds_t;

typedef __intptr_t intptr_t;

typedef __socklen_t socklen_t;

enum __anonenum_35 {
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

enum __anonenum_36 {
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

enum __anonenum_37 {
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

typedef zval pval;

struct passwd {
   char *pw_name ;
   char *pw_passwd ;
   __uid_t pw_uid ;
   __gid_t pw_gid ;
   char *pw_gecos ;
   char *pw_dir ;
   char *pw_shell ;
};

typedef int bool_int;

enum __anonenum_boolean_e_38 {
    NO = 0,
    YES = 1
} ;

typedef enum __anonenum_boolean_e_38 boolean_e;

enum __anonenum_length_modifier_e_39 {
    LM_STD = 0,
    LM_LONG_LONG = 1,
    LM_SIZE_T = 2,
    LM_LONG = 3,
    LM_LONG_DOUBLE = 4
} ;

typedef enum __anonenum_length_modifier_e_39 length_modifier_e;

typedef long long wide_int;

typedef unsigned long long u_wide_int;

enum __anonenum_error_handling_t_40 {
    EH_NORMAL = 0,
    EH_SUPPRESS = 1,
    EH_THROW = 2
} ;

typedef enum __anonenum_error_handling_t_40 error_handling_t;

typedef void (*php_output_handler_func_t)(char *output , uint output_len ,
                                          char **handled_output ,
                                          uint *handled_output_len , int mode );

struct _php_ob_buffer {
   char *buffer ;
   uint size ;
   uint text_length ;
   int block_size ;
   uint chunk_size ;
   int status ;
   zval *output_handler ;
   void (*internal_output_handler)(char *output , uint output_len ,
                                   char **handled_output ,
                                   uint *handled_output_len , int mode ) ;
   char *internal_output_handler_buffer ;
   uint internal_output_handler_buffer_size ;
   char *handler_name ;
   zend_bool erase ;
};

typedef struct _php_ob_buffer php_ob_buffer;

struct _php_output_globals {
   int (*php_body_write)(char const   *str , uint str_length ) ;
   int (*php_header_write)(char const   *str , uint str_length ) ;
   php_ob_buffer active_ob_buffer ;
   unsigned char implicit_flush ;
   char *output_start_filename ;
   int output_start_lineno ;
   zend_stack ob_buffers ;
   int ob_nesting_level ;
   zend_bool ob_lock ;
   zend_bool disable_output ;
};

typedef struct _php_output_globals php_output_globals;

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
   __ino_t st_ino ;
   __mode_t st_mode ;
   __nlink_t st_nlink ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   __dev_t st_rdev ;
   unsigned short __pad2 ;
   __off_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   unsigned long __unused4 ;
   unsigned long __unused5 ;
};

struct _php_stream;

struct _php_stream;

typedef struct _php_stream php_stream;

struct _php_stream_wrapper;

struct _php_stream_wrapper;

typedef struct _php_stream_wrapper php_stream_wrapper;

struct _php_stream_context;

struct _php_stream_context;

typedef struct _php_stream_context php_stream_context;

struct _php_stream_filter;

struct _php_stream_filter;

typedef struct _php_stream_filter php_stream_filter;

typedef void (*php_stream_notification_func)(php_stream_context *context ,
                                             int notifycode , int severity ,
                                             char *xmsg , int xcode ,
                                             size_t bytes_sofar ,
                                             size_t bytes_max , void *ptr );

struct _php_stream_notifier;

struct _php_stream_notifier;

typedef struct _php_stream_notifier php_stream_notifier;

struct _php_stream_notifier {
   void (*func)(php_stream_context *context , int notifycode , int severity ,
                char *xmsg , int xcode , size_t bytes_sofar , size_t bytes_max ,
                void *ptr ) ;
   void (*dtor)(php_stream_notifier *notifier ) ;
   void *ptr ;
   int mask ;
   size_t progress ;
   size_t progress_max ;
};

struct _php_stream_context {
   php_stream_notifier *notifier ;
   zval *options ;
   zval *links ;
   int rsrc_id ;
};

struct _php_stream_bucket;

struct _php_stream_bucket;

typedef struct _php_stream_bucket php_stream_bucket;

struct _php_stream_bucket_brigade;

struct _php_stream_bucket_brigade;

typedef struct _php_stream_bucket_brigade php_stream_bucket_brigade;

struct _php_stream_bucket {
   php_stream_bucket *next ;
   php_stream_bucket *prev ;
   php_stream_bucket_brigade *brigade ;
   char *buf ;
   size_t buflen ;
   int own_buf ;
   int is_persistent ;
   int refcount ;
};

struct _php_stream_bucket_brigade {
   php_stream_bucket *head ;
   php_stream_bucket *tail ;
};

enum __anonenum_php_stream_filter_status_t_41 {
    PSFS_ERR_FATAL = 0,
    PSFS_FEED_ME = 1,
    PSFS_PASS_ON = 2
} ;

typedef enum __anonenum_php_stream_filter_status_t_41 php_stream_filter_status_t;

struct _php_stream_filter_ops {
   php_stream_filter_status_t (*filter)(php_stream *stream ,
                                        php_stream_filter *thisfilter ,
                                        php_stream_bucket_brigade *buckets_in ,
                                        php_stream_bucket_brigade *buckets_out ,
                                        size_t *bytes_consumed , int flags ) ;
   void (*dtor)(php_stream_filter *thisfilter ) ;
   char const   *label ;
};

typedef struct _php_stream_filter_ops php_stream_filter_ops;

struct _php_stream_filter_chain {
   php_stream_filter *head ;
   php_stream_filter *tail ;
   php_stream *stream ;
};

typedef struct _php_stream_filter_chain php_stream_filter_chain;

struct _php_stream_filter {
   php_stream_filter_ops *fops ;
   void *abstract ;
   php_stream_filter *next ;
   php_stream_filter *prev ;
   int is_persistent ;
   php_stream_filter_chain *chain ;
   php_stream_bucket_brigade buffer ;
   int rsrc_id ;
};

struct _php_stream_filter_factory {
   php_stream_filter *(*create_filter)(char const   *filtername ,
                                       zval *filterparams , int persistent ) ;
};

typedef struct _php_stream_filter_factory php_stream_filter_factory;

struct _php_stream_statbuf {
   struct stat sb ;
};

typedef struct _php_stream_statbuf php_stream_statbuf;

struct _php_stream_dirent {
   char d_name[4096] ;
};

typedef struct _php_stream_dirent php_stream_dirent;

struct _php_stream_ops {
   size_t (*write)(php_stream *stream , char const   *buf , size_t count ) ;
   size_t (*read)(php_stream *stream , char *buf , size_t count ) ;
   int (*close)(php_stream *stream , int close_handle ) ;
   int (*flush)(php_stream *stream ) ;
   char const   *label ;
   int (*seek)(php_stream *stream , off_t offset , int whence ,
               off_t *newoffset ) ;
   int (*cast)(php_stream *stream , int castas , void **ret ) ;
   int (*stat)(php_stream *stream , php_stream_statbuf *ssb ) ;
   int (*set_option)(php_stream *stream , int option , int value ,
                     void *ptrparam ) ;
};

typedef struct _php_stream_ops php_stream_ops;

struct _php_stream_wrapper_ops {
   php_stream *(*stream_opener)(php_stream_wrapper *wrapper , char *filename ,
                                char *mode , int options , char **opened_path ,
                                php_stream_context *context ) ;
   int (*stream_closer)(php_stream_wrapper *wrapper , php_stream *stream ) ;
   int (*stream_stat)(php_stream_wrapper *wrapper , php_stream *stream ,
                      php_stream_statbuf *ssb ) ;
   int (*url_stat)(php_stream_wrapper *wrapper , char *url , int flags ,
                   php_stream_statbuf *ssb , php_stream_context *context ) ;
   php_stream *(*dir_opener)(php_stream_wrapper *wrapper , char *filename ,
                             char *mode , int options , char **opened_path ,
                             php_stream_context *context ) ;
   char const   *label ;
   int (*unlink)(php_stream_wrapper *wrapper , char *url , int options ,
                 php_stream_context *context ) ;
   int (*rename)(php_stream_wrapper *wrapper , char *url_from , char *url_to ,
                 int options , php_stream_context *context ) ;
   int (*stream_mkdir)(php_stream_wrapper *wrapper , char *url , int mode ,
                       int options , php_stream_context *context ) ;
   int (*stream_rmdir)(php_stream_wrapper *wrapper , char *url , int options ,
                       php_stream_context *context ) ;
};

typedef struct _php_stream_wrapper_ops php_stream_wrapper_ops;

struct _php_stream_wrapper {
   php_stream_wrapper_ops *wops ;
   void *abstract ;
   int is_url ;
   int err_count ;
   char **err_stack ;
};

struct _php_stream {
   php_stream_ops *ops ;
   void *abstract ;
   php_stream_filter_chain readfilters ;
   php_stream_filter_chain writefilters ;
   php_stream_wrapper *wrapper ;
   void *wrapperthis ;
   zval *wrapperdata ;
   int fgetss_state ;
   int is_persistent ;
   char mode[16] ;
   int rsrc_id ;
   int in_free ;
   int fclose_stdiocast ;
   FILE *stdiocast ;
   char *orig_path ;
   php_stream_context *context ;
   int flags ;
   off_t position ;
   unsigned char *readbuf ;
   size_t readbuflen ;
   off_t readpos ;
   off_t writepos ;
   size_t chunk_size ;
   int eof ;
};

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
   char __ss_padding[128UL - 2UL * sizeof(__uint32_t )] ;
};

enum __anonenum_42 {
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
    MSG_MORE = 32768,
    MSG_CMSG_CLOEXEC = 1073741824
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

enum __anonenum_43 {
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

enum __anonenum_44 {
    SHUT_RD = 0,
    SHUT_WR = 1,
    SHUT_RDWR = 2
} ;

typedef php_stream *php_stream_transport_factory_func(char const   *proto ,
                                                      long protolen ,
                                                      char *resourcename ,
                                                      long resourcenamelen ,
                                                      char const   *persistent_id ,
                                                      int options , int flags ,
                                                      struct timeval *timeout ,
                                                      php_stream_context *context );

typedef php_stream_transport_factory_func *php_stream_transport_factory;

enum php_stream_xport_send_recv_flags {
    STREAM_OOB = 1,
    STREAM_PEEK = 2
} ;

enum __anonenum_stream_shutdown_t_45 {
    STREAM_SHUT_RD = 0,
    STREAM_SHUT_WR = 1,
    STREAM_SHUT_RDWR = 2
} ;

typedef enum __anonenum_stream_shutdown_t_45 stream_shutdown_t;

enum __anonenum_op_46 {
    STREAM_XPORT_OP_BIND = 0,
    STREAM_XPORT_OP_CONNECT = 1,
    STREAM_XPORT_OP_LISTEN = 2,
    STREAM_XPORT_OP_ACCEPT = 3,
    STREAM_XPORT_OP_CONNECT_ASYNC = 4,
    STREAM_XPORT_OP_GET_NAME = 5,
    STREAM_XPORT_OP_GET_PEER_NAME = 6,
    STREAM_XPORT_OP_RECV = 7,
    STREAM_XPORT_OP_SEND = 8,
    STREAM_XPORT_OP_SHUTDOWN = 9
} ;

struct __anonstruct_inputs_47 {
   char *name ;
   long namelen ;
   int backlog ;
   struct timeval *timeout ;
   struct sockaddr *addr ;
   socklen_t addrlen ;
   char *buf ;
   size_t buflen ;
   long flags ;
};

struct __anonstruct_outputs_48 {
   php_stream *client ;
   int returncode ;
   struct sockaddr *addr ;
   socklen_t addrlen ;
   char *textaddr ;
   long textaddrlen ;
   char *error_text ;
   int error_code ;
};

struct _php_stream_xport_param {
   enum __anonenum_op_46 op ;
   unsigned int want_addr : 1 ;
   unsigned int want_textaddr : 1 ;
   unsigned int want_errortext : 1 ;
   unsigned int how : 2 ;
   struct __anonstruct_inputs_47 inputs ;
   struct __anonstruct_outputs_48 outputs ;
};

typedef struct _php_stream_xport_param php_stream_xport_param;

enum __anonenum_php_stream_xport_crypt_method_t_49 {
    STREAM_CRYPTO_METHOD_SSLv2_CLIENT = 0,
    STREAM_CRYPTO_METHOD_SSLv3_CLIENT = 1,
    STREAM_CRYPTO_METHOD_SSLv23_CLIENT = 2,
    STREAM_CRYPTO_METHOD_TLS_CLIENT = 3,
    STREAM_CRYPTO_METHOD_SSLv2_SERVER = 4,
    STREAM_CRYPTO_METHOD_SSLv3_SERVER = 5,
    STREAM_CRYPTO_METHOD_SSLv23_SERVER = 6,
    STREAM_CRYPTO_METHOD_TLS_SERVER = 7
} ;

typedef enum __anonenum_php_stream_xport_crypt_method_t_49 php_stream_xport_crypt_method_t;

enum __anonenum_op_50 {
    STREAM_XPORT_CRYPTO_OP_SETUP = 0,
    STREAM_XPORT_CRYPTO_OP_ENABLE = 1
} ;

struct __anonstruct_inputs_51 {
   int activate ;
   php_stream_xport_crypt_method_t method ;
   php_stream *session ;
};

struct __anonstruct_outputs_52 {
   int returncode ;
};

struct _php_stream_xport_crypto_param {
   enum __anonenum_op_50 op ;
   struct __anonstruct_inputs_51 inputs ;
   struct __anonstruct_outputs_52 outputs ;
};

typedef struct _php_stream_xport_crypto_param php_stream_xport_crypto_param;

enum __anonenum_php_stream_mmap_operation_t_53 {
    PHP_STREAM_MMAP_SUPPORTED = 0,
    PHP_STREAM_MMAP_MAP_RANGE = 1,
    PHP_STREAM_MMAP_UNMAP = 2
} ;

typedef enum __anonenum_php_stream_mmap_operation_t_53 php_stream_mmap_operation_t;

enum __anonenum_php_stream_mmap_access_t_54 {
    PHP_STREAM_MAP_MODE_READONLY = 0,
    PHP_STREAM_MAP_MODE_READWRITE = 1,
    PHP_STREAM_MAP_MODE_SHARED_READONLY = 2,
    PHP_STREAM_MAP_MODE_SHARED_READWRITE = 3
} ;

typedef enum __anonenum_php_stream_mmap_access_t_54 php_stream_mmap_access_t;

struct __anonstruct_php_stream_mmap_range_55 {
   size_t offset ;
   size_t length ;
   php_stream_mmap_access_t mode ;
   char *mapped ;
};

typedef struct __anonstruct_php_stream_mmap_range_55 php_stream_mmap_range;

struct _php_core_globals;

struct _php_core_globals;

typedef struct _php_core_globals php_core_globals;

struct _php_tick_function_entry;

struct _php_tick_function_entry;

struct _php_tick_function_entry;

struct _arg_separators {
   char *output ;
   char *input ;
};

typedef struct _arg_separators arg_separators;

struct _php_core_globals {
   zend_bool magic_quotes_gpc ;
   zend_bool magic_quotes_runtime ;
   zend_bool magic_quotes_sybase ;
   zend_bool safe_mode ;
   zend_bool allow_call_time_pass_reference ;
   zend_bool implicit_flush ;
   long output_buffering ;
   char *safe_mode_include_dir ;
   zend_bool safe_mode_gid ;
   zend_bool sql_safe_mode ;
   zend_bool enable_dl ;
   char *output_handler ;
   char *unserialize_callback_func ;
   long serialize_precision ;
   char *safe_mode_exec_dir ;
   long memory_limit ;
   long max_input_time ;
   zend_bool track_errors ;
   zend_bool display_errors ;
   zend_bool display_startup_errors ;
   zend_bool log_errors ;
   long log_errors_max_len ;
   zend_bool ignore_repeated_errors ;
   zend_bool ignore_repeated_source ;
   zend_bool report_memleaks ;
   char *error_log ;
   char *doc_root ;
   char *user_dir ;
   char *include_path ;
   char *open_basedir ;
   char *extension_dir ;
   char *upload_tmp_dir ;
   long upload_max_filesize ;
   char *error_append_string ;
   char *error_prepend_string ;
   char *auto_prepend_file ;
   char *auto_append_file ;
   arg_separators arg_separator ;
   char *variables_order ;
   HashTable rfc1867_protected_variables ;
   short connection_status ;
   short ignore_user_abort ;
   unsigned char header_is_being_sent ;
   zend_llist tick_functions ;
   zval *http_globals[6] ;
   zend_bool expose_php ;
   zend_bool register_globals ;
   zend_bool register_long_arrays ;
   zend_bool register_argc_argv ;
   zend_bool auto_globals_jit ;
   zend_bool y2k_compliance ;
   char *docref_root ;
   char *docref_ext ;
   zend_bool html_errors ;
   zend_bool xmlrpc_errors ;
   long xmlrpc_error_number ;
   zend_bool activated_auto_globals[8] ;
   zend_bool modules_activated ;
   zend_bool file_uploads ;
   zend_bool during_request_startup ;
   zend_bool allow_url_fopen ;
   zend_bool always_populate_raw_post_data ;
   zend_bool report_zend_debug ;
   int last_error_type ;
   char *last_error_message ;
   char *last_error_file ;
   int last_error_lineno ;
   error_handling_t error_handling ;
   zend_class_entry *exception_class ;
   char *disable_functions ;
   char *disable_classes ;
   zend_bool allow_url_include ;
};

struct utimbuf {
   __time_t actime ;
   __time_t modtime ;
};

struct dirent {
   __ino_t d_ino ;
   __off_t d_off ;
   unsigned short d_reclen ;
   unsigned char d_type ;
   char d_name[256] ;
};

enum __anonenum_56 {
    DT_UNKNOWN = 0,
    DT_FIFO = 1,
    DT_CHR = 2,
    DT_DIR = 4,
    DT_BLK = 6,
    DT_REG = 8,
    DT_LNK = 10,
    DT_SOCK = 12,
    DT_WHT = 14
} ;

struct __dirstream;

struct __dirstream;

typedef struct __dirstream DIR;

struct _cwd_state {
   char *cwd ;
   int cwd_length ;
};

typedef struct _cwd_state cwd_state;

typedef int (*verify_path_func)(cwd_state const   * );

struct _realpath_cache_bucket {
   unsigned long key ;
   char *path ;
   int path_len ;
   char *realpath ;
   int realpath_len ;
   time_t expires ;
   struct _realpath_cache_bucket *next ;
};

typedef struct _realpath_cache_bucket realpath_cache_bucket;

struct _virtual_cwd_globals {
   cwd_state cwd ;
   long realpath_cache_size ;
   long realpath_cache_size_limit ;
   long realpath_cache_ttl ;
   realpath_cache_bucket *realpath_cache[1024] ;
};

typedef struct _virtual_cwd_globals virtual_cwd_globals;

struct _zend_constant {
   zval value ;
   int flags ;
   char *name ;
   uint name_len ;
   int module_number ;
};

typedef struct _zend_constant zend_constant;

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

struct sigevent;

struct sigevent;

struct _zend_reg_globals {
   HashTable ht_rc ;
};

typedef struct _zend_reg_globals zend_reg_globals;

typedef unsigned int wint_t;

typedef __mbstate_t mbstate_t;

struct tm;

typedef int php_stat_len;

struct _zend_syntax_highlighter_ini {
   char *highlight_html ;
   char *highlight_comment ;
   char *highlight_default ;
   char *highlight_string ;
   char *highlight_keyword ;
};

typedef struct _zend_syntax_highlighter_ini zend_syntax_highlighter_ini;

enum url_state {
    STATE_NORMAL = 0,
    STATE_TAG_START = 1,
    STATE_TAG = 2,
    STATE_IN_TAG = 3,
    STATE_TAG_ATTR = 4,
    STATE_TAG_IS = 5,
    STATE_TAG_IS2 = 6,
    STATE_TAG_VAL = 7,
    STATE_TAG_VAL2 = 8,
    STATE_TAG_QVAL1 = 9,
    STATE_TAG_QVAL2 = 10,
    STATE_TAG_QVAL2b = 11
} ;

struct url_adapt_struct {
   enum url_state state ;
   char *tag ;
   char *attr ;
   char *val ;
   char delim ;
   char *p ;
   int l ;
   int ml ;
   int attr_done ;
};

typedef struct url_adapt_struct url_adapt_state_t;

struct __anonstruct_smart_str_57 {
   char *c ;
   size_t len ;
   size_t a ;
};

typedef struct __anonstruct_smart_str_57 smart_str;

struct __anonstruct_url_adapt_state_ex_t_58 {
   smart_str tag ;
   smart_str arg ;
   smart_str val ;
   smart_str buf ;
   smart_str result ;
   smart_str form_app ;
   smart_str url_app ;
   int active ;
   char *lookup_data ;
   int state ;
   HashTable *tags ;
};

typedef struct __anonstruct_url_adapt_state_ex_t_58 url_adapt_state_ex_t;

struct __anonstruct_url_adapt_var_t_59 {
   smart_str var ;
   smart_str val ;
};

typedef struct __anonstruct_url_adapt_var_t_59 url_adapt_var_t;

typedef unsigned int php_uint32;

typedef int php_int32;

struct _php_basic_globals {
   HashTable *user_shutdown_function_names ;
   HashTable putenv_ht ;
   zval *strtok_zval ;
   char *strtok_string ;
   char *locale_string ;
   char *strtok_last ;
   char strtok_table[256] ;
   ulong strtok_len ;
   char str_ebuf[40] ;
   zval **array_walk_func_name ;
   zval **user_compare_func_name ;
   zend_fcall_info_cache user_compare_fci_cache ;
   zend_llist *user_tick_functions ;
   zval *active_ini_file_section ;
   HashTable sm_protected_env_vars ;
   char *sm_allowed_env_vars ;
   long page_uid ;
   long page_gid ;
   long page_inode ;
   long page_mtime ;
   char *CurrentStatFile ;
   char *CurrentLStatFile ;
   php_stream_statbuf ssb ;
   php_stream_statbuf lssb ;
   php_uint32 state[625] ;
   php_uint32 *next ;
   int left ;
   unsigned int rand_seed ;
   zend_bool rand_is_seeded ;
   zend_bool mt_rand_is_seeded ;
   int syslog_started ;
   char *syslog_device ;
   zend_class_entry *incomplete_class ;
   url_adapt_state_t url_adapt_state ;
   url_adapt_state_ex_t url_adapt_state_ex ;
   void *mmap_file ;
   size_t mmap_len ;
   HashTable *user_filter_map ;
   int umask ;
};

typedef struct _php_basic_globals php_basic_globals;

struct __anonstruct_putenv_entry_60 {
   char *putenv_string ;
   char *previous_value ;
   char *key ;
   int key_len ;
};

typedef struct __anonstruct_putenv_entry_60 putenv_entry;

struct lconv;

struct lconv;

struct __anonstruct_sapi_header_struct_61 {
   char *header ;
   uint header_len ;
   zend_bool replace ;
};

typedef struct __anonstruct_sapi_header_struct_61 sapi_header_struct;

struct __anonstruct_sapi_headers_struct_62 {
   zend_llist headers ;
   int http_response_code ;
   unsigned char send_default_content_type ;
   char *mimetype ;
   char *http_status_line ;
};

typedef struct __anonstruct_sapi_headers_struct_62 sapi_headers_struct;

struct _sapi_post_entry;

struct _sapi_post_entry;

typedef struct _sapi_post_entry sapi_post_entry;

struct _sapi_module_struct;

struct _sapi_module_struct;

typedef struct _sapi_module_struct sapi_module_struct;

struct __anonstruct_sapi_request_info_63 {
   char const   *request_method ;
   char *query_string ;
   char *post_data ;
   char *raw_post_data ;
   char *cookie_data ;
   long content_length ;
   uint post_data_length ;
   uint raw_post_data_length ;
   char *path_translated ;
   char *request_uri ;
   char const   *content_type ;
   zend_bool headers_only ;
   zend_bool no_headers ;
   zend_bool headers_read ;
   sapi_post_entry *post_entry ;
   char *content_type_dup ;
   char *auth_user ;
   char *auth_password ;
   char *auth_digest ;
   char *argv0 ;
   char *current_user ;
   int current_user_length ;
   int argc ;
   char **argv ;
   int proto_num ;
};

typedef struct __anonstruct_sapi_request_info_63 sapi_request_info;

struct _sapi_globals_struct {
   void *server_context ;
   sapi_request_info request_info ;
   sapi_headers_struct sapi_headers ;
   int read_post_bytes ;
   unsigned char headers_sent ;
   struct stat global_stat ;
   char *default_mimetype ;
   char *default_charset ;
   HashTable *rfc1867_uploaded_files ;
   long post_max_size ;
   int options ;
   zend_bool sapi_started ;
   time_t global_request_time ;
   HashTable known_post_content_types ;
};

typedef struct _sapi_globals_struct sapi_globals_struct;

struct __anonstruct_sapi_header_line_64 {
   char *line ;
   uint line_len ;
   long response_code ;
};

typedef struct __anonstruct_sapi_header_line_64 sapi_header_line;

enum __anonenum_sapi_header_op_enum_65 {
    SAPI_HEADER_REPLACE = 0,
    SAPI_HEADER_ADD = 1,
    SAPI_HEADER_SET_STATUS = 2
} ;

typedef enum __anonenum_sapi_header_op_enum_65 sapi_header_op_enum;

struct _sapi_module_struct {
   char *name ;
   char *pretty_name ;
   int (*startup)(struct _sapi_module_struct *sapi_module ) ;
   int (*shutdown)(struct _sapi_module_struct *sapi_module ) ;
   int (*activate)(void) ;
   int (*deactivate)(void) ;
   int (*ub_write)(char const   *str , unsigned int str_length ) ;
   void (*flush)(void *server_context ) ;
   struct stat *(*get_stat)(void) ;
   char *(*getenv)(char *name , size_t name_len ) ;
   void (*sapi_error)(int type , char const   *error_msg  , ...) ;
   int (*header_handler)(sapi_header_struct *sapi_header ,
                         sapi_headers_struct *sapi_headers ) ;
   int (*send_headers)(sapi_headers_struct *sapi_headers ) ;
   void (*send_header)(sapi_header_struct *sapi_header , void *server_context ) ;
   int (*read_post)(char *buffer , uint count_bytes ) ;
   char *(*read_cookies)(void) ;
   void (*register_server_variables)(zval *track_vars_array ) ;
   void (*log_message)(char *message ) ;
   time_t (*get_request_time)(void) ;
   char *php_ini_path_override ;
   void (*block_interruptions)(void) ;
   void (*unblock_interruptions)(void) ;
   void (*default_post_reader)(void) ;
   void (*treat_data)(int arg , char *str , zval *destArray ) ;
   char *executable_location ;
   int php_ini_ignore ;
   int (*get_fd)(int *fd ) ;
   int (*force_http_10)(void) ;
   int (*get_target_uid)(uid_t * ) ;
   int (*get_target_gid)(gid_t * ) ;
   unsigned int (*input_filter)(int arg , char *var , char **val ,
                                unsigned int val_len ,
                                unsigned int *new_val_len ) ;
   void (*ini_defaults)(HashTable *configuration_hash ) ;
   int phpinfo_as_text ;
   char *ini_entries ;
};

struct _sapi_post_entry {
   char *content_type ;
   uint content_type_len ;
   void (*post_reader)(void) ;
   void (*post_handler)(char *content_type_dup , void *arg ) ;
};

enum __anonenum_66 {
    __LC_CTYPE = 0,
    __LC_NUMERIC = 1,
    __LC_TIME = 2,
    __LC_COLLATE = 3,
    __LC_MONETARY = 4,
    __LC_MESSAGES = 5,
    __LC_ALL = 6,
    __LC_PAPER = 7,
    __LC_NAME = 8,
    __LC_ADDRESS = 9,
    __LC_TELEPHONE = 10,
    __LC_MEASUREMENT = 11,
    __LC_IDENTIFICATION = 12
} ;

struct lconv {
   char *decimal_point ;
   char *thousands_sep ;
   char *grouping ;
   char *int_curr_symbol ;
   char *currency_symbol ;
   char *mon_decimal_point ;
   char *mon_thousands_sep ;
   char *mon_grouping ;
   char *positive_sign ;
   char *negative_sign ;
   char int_frac_digits ;
   char frac_digits ;
   char p_cs_precedes ;
   char p_sep_by_space ;
   char n_cs_precedes ;
   char n_sep_by_space ;
   char p_sign_posn ;
   char n_sign_posn ;
   char __int_p_cs_precedes ;
   char __int_p_sep_by_space ;
   char __int_n_cs_precedes ;
   char __int_n_sep_by_space ;
   char __int_p_sign_posn ;
   char __int_n_sign_posn ;
};

typedef void *nl_catd;

typedef int nl_item;

enum __anonenum_67 {
    ABDAY_1 = 131072,
    ABDAY_2 = 131073,
    ABDAY_3 = 131074,
    ABDAY_4 = 131075,
    ABDAY_5 = 131076,
    ABDAY_6 = 131077,
    ABDAY_7 = 131078,
    DAY_1 = 131079,
    DAY_2 = 131080,
    DAY_3 = 131081,
    DAY_4 = 131082,
    DAY_5 = 131083,
    DAY_6 = 131084,
    DAY_7 = 131085,
    ABMON_1 = 131086,
    ABMON_2 = 131087,
    ABMON_3 = 131088,
    ABMON_4 = 131089,
    ABMON_5 = 131090,
    ABMON_6 = 131091,
    ABMON_7 = 131092,
    ABMON_8 = 131093,
    ABMON_9 = 131094,
    ABMON_10 = 131095,
    ABMON_11 = 131096,
    ABMON_12 = 131097,
    MON_1 = 131098,
    MON_2 = 131099,
    MON_3 = 131100,
    MON_4 = 131101,
    MON_5 = 131102,
    MON_6 = 131103,
    MON_7 = 131104,
    MON_8 = 131105,
    MON_9 = 131106,
    MON_10 = 131107,
    MON_11 = 131108,
    MON_12 = 131109,
    AM_STR = 131110,
    PM_STR = 131111,
    D_T_FMT = 131112,
    D_FMT = 131113,
    T_FMT = 131114,
    T_FMT_AMPM = 131115,
    ERA = 131116,
    __ERA_YEAR = 131117,
    ERA_D_FMT = 131118,
    ALT_DIGITS = 131119,
    ERA_D_T_FMT = 131120,
    ERA_T_FMT = 131121,
    _NL_TIME_ERA_NUM_ENTRIES = 131122,
    _NL_TIME_ERA_ENTRIES = 131123,
    _NL_WABDAY_1 = 131124,
    _NL_WABDAY_2 = 131125,
    _NL_WABDAY_3 = 131126,
    _NL_WABDAY_4 = 131127,
    _NL_WABDAY_5 = 131128,
    _NL_WABDAY_6 = 131129,
    _NL_WABDAY_7 = 131130,
    _NL_WDAY_1 = 131131,
    _NL_WDAY_2 = 131132,
    _NL_WDAY_3 = 131133,
    _NL_WDAY_4 = 131134,
    _NL_WDAY_5 = 131135,
    _NL_WDAY_6 = 131136,
    _NL_WDAY_7 = 131137,
    _NL_WABMON_1 = 131138,
    _NL_WABMON_2 = 131139,
    _NL_WABMON_3 = 131140,
    _NL_WABMON_4 = 131141,
    _NL_WABMON_5 = 131142,
    _NL_WABMON_6 = 131143,
    _NL_WABMON_7 = 131144,
    _NL_WABMON_8 = 131145,
    _NL_WABMON_9 = 131146,
    _NL_WABMON_10 = 131147,
    _NL_WABMON_11 = 131148,
    _NL_WABMON_12 = 131149,
    _NL_WMON_1 = 131150,
    _NL_WMON_2 = 131151,
    _NL_WMON_3 = 131152,
    _NL_WMON_4 = 131153,
    _NL_WMON_5 = 131154,
    _NL_WMON_6 = 131155,
    _NL_WMON_7 = 131156,
    _NL_WMON_8 = 131157,
    _NL_WMON_9 = 131158,
    _NL_WMON_10 = 131159,
    _NL_WMON_11 = 131160,
    _NL_WMON_12 = 131161,
    _NL_WAM_STR = 131162,
    _NL_WPM_STR = 131163,
    _NL_WD_T_FMT = 131164,
    _NL_WD_FMT = 131165,
    _NL_WT_FMT = 131166,
    _NL_WT_FMT_AMPM = 131167,
    _NL_WERA_YEAR = 131168,
    _NL_WERA_D_FMT = 131169,
    _NL_WALT_DIGITS = 131170,
    _NL_WERA_D_T_FMT = 131171,
    _NL_WERA_T_FMT = 131172,
    _NL_TIME_WEEK_NDAYS = 131173,
    _NL_TIME_WEEK_1STDAY = 131174,
    _NL_TIME_WEEK_1STWEEK = 131175,
    _NL_TIME_FIRST_WEEKDAY = 131176,
    _NL_TIME_FIRST_WORKDAY = 131177,
    _NL_TIME_CAL_DIRECTION = 131178,
    _NL_TIME_TIMEZONE = 131179,
    _DATE_FMT = 131180,
    _NL_W_DATE_FMT = 131181,
    _NL_TIME_CODESET = 131182,
    _NL_NUM_LC_TIME = 131183,
    _NL_COLLATE_NRULES = 196608,
    _NL_COLLATE_RULESETS = 196609,
    _NL_COLLATE_TABLEMB = 196610,
    _NL_COLLATE_WEIGHTMB = 196611,
    _NL_COLLATE_EXTRAMB = 196612,
    _NL_COLLATE_INDIRECTMB = 196613,
    _NL_COLLATE_GAP1 = 196614,
    _NL_COLLATE_GAP2 = 196615,
    _NL_COLLATE_GAP3 = 196616,
    _NL_COLLATE_TABLEWC = 196617,
    _NL_COLLATE_WEIGHTWC = 196618,
    _NL_COLLATE_EXTRAWC = 196619,
    _NL_COLLATE_INDIRECTWC = 196620,
    _NL_COLLATE_SYMB_HASH_SIZEMB = 196621,
    _NL_COLLATE_SYMB_TABLEMB = 196622,
    _NL_COLLATE_SYMB_EXTRAMB = 196623,
    _NL_COLLATE_COLLSEQMB = 196624,
    _NL_COLLATE_COLLSEQWC = 196625,
    _NL_COLLATE_CODESET = 196626,
    _NL_NUM_LC_COLLATE = 196627,
    _NL_CTYPE_CLASS = 0,
    _NL_CTYPE_TOUPPER = 1,
    _NL_CTYPE_GAP1 = 2,
    _NL_CTYPE_TOLOWER = 3,
    _NL_CTYPE_GAP2 = 4,
    _NL_CTYPE_CLASS32 = 5,
    _NL_CTYPE_GAP3 = 6,
    _NL_CTYPE_GAP4 = 7,
    _NL_CTYPE_GAP5 = 8,
    _NL_CTYPE_GAP6 = 9,
    _NL_CTYPE_CLASS_NAMES = 10,
    _NL_CTYPE_MAP_NAMES = 11,
    _NL_CTYPE_WIDTH = 12,
    _NL_CTYPE_MB_CUR_MAX = 13,
    _NL_CTYPE_CODESET_NAME = 14,
    CODESET = 14,
    _NL_CTYPE_TOUPPER32 = 15,
    _NL_CTYPE_TOLOWER32 = 16,
    _NL_CTYPE_CLASS_OFFSET = 17,
    _NL_CTYPE_MAP_OFFSET = 18,
    _NL_CTYPE_INDIGITS_MB_LEN = 19,
    _NL_CTYPE_INDIGITS0_MB = 20,
    _NL_CTYPE_INDIGITS1_MB = 21,
    _NL_CTYPE_INDIGITS2_MB = 22,
    _NL_CTYPE_INDIGITS3_MB = 23,
    _NL_CTYPE_INDIGITS4_MB = 24,
    _NL_CTYPE_INDIGITS5_MB = 25,
    _NL_CTYPE_INDIGITS6_MB = 26,
    _NL_CTYPE_INDIGITS7_MB = 27,
    _NL_CTYPE_INDIGITS8_MB = 28,
    _NL_CTYPE_INDIGITS9_MB = 29,
    _NL_CTYPE_INDIGITS_WC_LEN = 30,
    _NL_CTYPE_INDIGITS0_WC = 31,
    _NL_CTYPE_INDIGITS1_WC = 32,
    _NL_CTYPE_INDIGITS2_WC = 33,
    _NL_CTYPE_INDIGITS3_WC = 34,
    _NL_CTYPE_INDIGITS4_WC = 35,
    _NL_CTYPE_INDIGITS5_WC = 36,
    _NL_CTYPE_INDIGITS6_WC = 37,
    _NL_CTYPE_INDIGITS7_WC = 38,
    _NL_CTYPE_INDIGITS8_WC = 39,
    _NL_CTYPE_INDIGITS9_WC = 40,
    _NL_CTYPE_OUTDIGIT0_MB = 41,
    _NL_CTYPE_OUTDIGIT1_MB = 42,
    _NL_CTYPE_OUTDIGIT2_MB = 43,
    _NL_CTYPE_OUTDIGIT3_MB = 44,
    _NL_CTYPE_OUTDIGIT4_MB = 45,
    _NL_CTYPE_OUTDIGIT5_MB = 46,
    _NL_CTYPE_OUTDIGIT6_MB = 47,
    _NL_CTYPE_OUTDIGIT7_MB = 48,
    _NL_CTYPE_OUTDIGIT8_MB = 49,
    _NL_CTYPE_OUTDIGIT9_MB = 50,
    _NL_CTYPE_OUTDIGIT0_WC = 51,
    _NL_CTYPE_OUTDIGIT1_WC = 52,
    _NL_CTYPE_OUTDIGIT2_WC = 53,
    _NL_CTYPE_OUTDIGIT3_WC = 54,
    _NL_CTYPE_OUTDIGIT4_WC = 55,
    _NL_CTYPE_OUTDIGIT5_WC = 56,
    _NL_CTYPE_OUTDIGIT6_WC = 57,
    _NL_CTYPE_OUTDIGIT7_WC = 58,
    _NL_CTYPE_OUTDIGIT8_WC = 59,
    _NL_CTYPE_OUTDIGIT9_WC = 60,
    _NL_CTYPE_TRANSLIT_TAB_SIZE = 61,
    _NL_CTYPE_TRANSLIT_FROM_IDX = 62,
    _NL_CTYPE_TRANSLIT_FROM_TBL = 63,
    _NL_CTYPE_TRANSLIT_TO_IDX = 64,
    _NL_CTYPE_TRANSLIT_TO_TBL = 65,
    _NL_CTYPE_TRANSLIT_DEFAULT_MISSING_LEN = 66,
    _NL_CTYPE_TRANSLIT_DEFAULT_MISSING = 67,
    _NL_CTYPE_TRANSLIT_IGNORE_LEN = 68,
    _NL_CTYPE_TRANSLIT_IGNORE = 69,
    _NL_CTYPE_MAP_TO_NONASCII = 70,
    _NL_CTYPE_EXTRA_MAP_1 = 71,
    _NL_CTYPE_EXTRA_MAP_2 = 72,
    _NL_CTYPE_EXTRA_MAP_3 = 73,
    _NL_CTYPE_EXTRA_MAP_4 = 74,
    _NL_CTYPE_EXTRA_MAP_5 = 75,
    _NL_CTYPE_EXTRA_MAP_6 = 76,
    _NL_CTYPE_EXTRA_MAP_7 = 77,
    _NL_CTYPE_EXTRA_MAP_8 = 78,
    _NL_CTYPE_EXTRA_MAP_9 = 79,
    _NL_CTYPE_EXTRA_MAP_10 = 80,
    _NL_CTYPE_EXTRA_MAP_11 = 81,
    _NL_CTYPE_EXTRA_MAP_12 = 82,
    _NL_CTYPE_EXTRA_MAP_13 = 83,
    _NL_CTYPE_EXTRA_MAP_14 = 84,
    _NL_NUM_LC_CTYPE = 85,
    __INT_CURR_SYMBOL = 262144,
    __CURRENCY_SYMBOL = 262145,
    __MON_DECIMAL_POINT = 262146,
    __MON_THOUSANDS_SEP = 262147,
    __MON_GROUPING = 262148,
    __POSITIVE_SIGN = 262149,
    __NEGATIVE_SIGN = 262150,
    __INT_FRAC_DIGITS = 262151,
    __FRAC_DIGITS = 262152,
    __P_CS_PRECEDES = 262153,
    __P_SEP_BY_SPACE = 262154,
    __N_CS_PRECEDES = 262155,
    __N_SEP_BY_SPACE = 262156,
    __P_SIGN_POSN = 262157,
    __N_SIGN_POSN = 262158,
    _NL_MONETARY_CRNCYSTR = 262159,
    __INT_P_CS_PRECEDES = 262160,
    __INT_P_SEP_BY_SPACE = 262161,
    __INT_N_CS_PRECEDES = 262162,
    __INT_N_SEP_BY_SPACE = 262163,
    __INT_P_SIGN_POSN = 262164,
    __INT_N_SIGN_POSN = 262165,
    _NL_MONETARY_DUO_INT_CURR_SYMBOL = 262166,
    _NL_MONETARY_DUO_CURRENCY_SYMBOL = 262167,
    _NL_MONETARY_DUO_INT_FRAC_DIGITS = 262168,
    _NL_MONETARY_DUO_FRAC_DIGITS = 262169,
    _NL_MONETARY_DUO_P_CS_PRECEDES = 262170,
    _NL_MONETARY_DUO_P_SEP_BY_SPACE = 262171,
    _NL_MONETARY_DUO_N_CS_PRECEDES = 262172,
    _NL_MONETARY_DUO_N_SEP_BY_SPACE = 262173,
    _NL_MONETARY_DUO_INT_P_CS_PRECEDES = 262174,
    _NL_MONETARY_DUO_INT_P_SEP_BY_SPACE = 262175,
    _NL_MONETARY_DUO_INT_N_CS_PRECEDES = 262176,
    _NL_MONETARY_DUO_INT_N_SEP_BY_SPACE = 262177,
    _NL_MONETARY_DUO_P_SIGN_POSN = 262178,
    _NL_MONETARY_DUO_N_SIGN_POSN = 262179,
    _NL_MONETARY_DUO_INT_P_SIGN_POSN = 262180,
    _NL_MONETARY_DUO_INT_N_SIGN_POSN = 262181,
    _NL_MONETARY_UNO_VALID_FROM = 262182,
    _NL_MONETARY_UNO_VALID_TO = 262183,
    _NL_MONETARY_DUO_VALID_FROM = 262184,
    _NL_MONETARY_DUO_VALID_TO = 262185,
    _NL_MONETARY_CONVERSION_RATE = 262186,
    _NL_MONETARY_DECIMAL_POINT_WC = 262187,
    _NL_MONETARY_THOUSANDS_SEP_WC = 262188,
    _NL_MONETARY_CODESET = 262189,
    _NL_NUM_LC_MONETARY = 262190,
    __DECIMAL_POINT = 65536,
    RADIXCHAR = 65536,
    __THOUSANDS_SEP = 65537,
    THOUSEP = 65537,
    __GROUPING = 65538,
    _NL_NUMERIC_DECIMAL_POINT_WC = 65539,
    _NL_NUMERIC_THOUSANDS_SEP_WC = 65540,
    _NL_NUMERIC_CODESET = 65541,
    _NL_NUM_LC_NUMERIC = 65542,
    __YESEXPR = 327680,
    __NOEXPR = 327681,
    __YESSTR = 327682,
    __NOSTR = 327683,
    _NL_MESSAGES_CODESET = 327684,
    _NL_NUM_LC_MESSAGES = 327685,
    _NL_PAPER_HEIGHT = 458752,
    _NL_PAPER_WIDTH = 458753,
    _NL_PAPER_CODESET = 458754,
    _NL_NUM_LC_PAPER = 458755,
    _NL_NAME_NAME_FMT = 524288,
    _NL_NAME_NAME_GEN = 524289,
    _NL_NAME_NAME_MR = 524290,
    _NL_NAME_NAME_MRS = 524291,
    _NL_NAME_NAME_MISS = 524292,
    _NL_NAME_NAME_MS = 524293,
    _NL_NAME_CODESET = 524294,
    _NL_NUM_LC_NAME = 524295,
    _NL_ADDRESS_POSTAL_FMT = 589824,
    _NL_ADDRESS_COUNTRY_NAME = 589825,
    _NL_ADDRESS_COUNTRY_POST = 589826,
    _NL_ADDRESS_COUNTRY_AB2 = 589827,
    _NL_ADDRESS_COUNTRY_AB3 = 589828,
    _NL_ADDRESS_COUNTRY_CAR = 589829,
    _NL_ADDRESS_COUNTRY_NUM = 589830,
    _NL_ADDRESS_COUNTRY_ISBN = 589831,
    _NL_ADDRESS_LANG_NAME = 589832,
    _NL_ADDRESS_LANG_AB = 589833,
    _NL_ADDRESS_LANG_TERM = 589834,
    _NL_ADDRESS_LANG_LIB = 589835,
    _NL_ADDRESS_CODESET = 589836,
    _NL_NUM_LC_ADDRESS = 589837,
    _NL_TELEPHONE_TEL_INT_FMT = 655360,
    _NL_TELEPHONE_TEL_DOM_FMT = 655361,
    _NL_TELEPHONE_INT_SELECT = 655362,
    _NL_TELEPHONE_INT_PREFIX = 655363,
    _NL_TELEPHONE_CODESET = 655364,
    _NL_NUM_LC_TELEPHONE = 655365,
    _NL_MEASUREMENT_MEASUREMENT = 720896,
    _NL_MEASUREMENT_CODESET = 720897,
    _NL_NUM_LC_MEASUREMENT = 720898,
    _NL_IDENTIFICATION_TITLE = 786432,
    _NL_IDENTIFICATION_SOURCE = 786433,
    _NL_IDENTIFICATION_ADDRESS = 786434,
    _NL_IDENTIFICATION_CONTACT = 786435,
    _NL_IDENTIFICATION_EMAIL = 786436,
    _NL_IDENTIFICATION_TEL = 786437,
    _NL_IDENTIFICATION_FAX = 786438,
    _NL_IDENTIFICATION_LANGUAGE = 786439,
    _NL_IDENTIFICATION_TERRITORY = 786440,
    _NL_IDENTIFICATION_AUDIENCE = 786441,
    _NL_IDENTIFICATION_APPLICATION = 786442,
    _NL_IDENTIFICATION_ABBREVIATION = 786443,
    _NL_IDENTIFICATION_REVISION = 786444,
    _NL_IDENTIFICATION_DATE = 786445,
    _NL_IDENTIFICATION_CATEGORY = 786446,
    _NL_IDENTIFICATION_CODESET = 786447,
    _NL_NUM_LC_IDENTIFICATION = 786448,
    _NL_NUM = 786449
} ;

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

extern struct _IO_FILE_plus _IO_2_1_stdin_ ;

extern struct _IO_FILE_plus _IO_2_1_stdout_ ;

extern struct _IO_FILE_plus _IO_2_1_stderr_ ;

extern int __underflow(_IO_FILE * ) ;

extern int __uflow(_IO_FILE * ) ;

extern int __overflow(_IO_FILE * , int  ) ;

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

extern  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;

extern  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;

extern  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                        unsigned int __minor ) ;

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

extern  __attribute__((__nothrow__)) void *realloc(void *__ptr , size_t __size )  __attribute__((__warn_unused_result__)) ;

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

extern  __attribute__((__nothrow__)) double acos(double __x ) ;

extern  __attribute__((__nothrow__)) double __acos(double __x ) ;

extern  __attribute__((__nothrow__)) double asin(double __x ) ;

extern  __attribute__((__nothrow__)) double __asin(double __x ) ;

extern  __attribute__((__nothrow__)) double atan(double __x ) ;

extern  __attribute__((__nothrow__)) double __atan(double __x ) ;

extern  __attribute__((__nothrow__)) double atan2(double __y , double __x ) ;

extern  __attribute__((__nothrow__)) double __atan2(double __y , double __x ) ;

extern  __attribute__((__nothrow__)) double cos(double __x ) ;

extern  __attribute__((__nothrow__)) double __cos(double __x ) ;

extern  __attribute__((__nothrow__)) double sin(double __x ) ;

extern  __attribute__((__nothrow__)) double __sin(double __x ) ;

extern  __attribute__((__nothrow__)) double tan(double __x ) ;

extern  __attribute__((__nothrow__)) double __tan(double __x ) ;

extern  __attribute__((__nothrow__)) double cosh(double __x ) ;

extern  __attribute__((__nothrow__)) double __cosh(double __x ) ;

extern  __attribute__((__nothrow__)) double sinh(double __x ) ;

extern  __attribute__((__nothrow__)) double __sinh(double __x ) ;

extern  __attribute__((__nothrow__)) double tanh(double __x ) ;

extern  __attribute__((__nothrow__)) double __tanh(double __x ) ;

extern  __attribute__((__nothrow__)) double acosh(double __x ) ;

extern  __attribute__((__nothrow__)) double __acosh(double __x ) ;

extern  __attribute__((__nothrow__)) double asinh(double __x ) ;

extern  __attribute__((__nothrow__)) double __asinh(double __x ) ;

extern  __attribute__((__nothrow__)) double atanh(double __x ) ;

extern  __attribute__((__nothrow__)) double __atanh(double __x ) ;

extern  __attribute__((__nothrow__)) double exp(double __x ) ;

extern  __attribute__((__nothrow__)) double __exp(double __x ) ;

extern  __attribute__((__nothrow__)) double frexp(double __x , int *__exponent ) ;

extern  __attribute__((__nothrow__)) double __frexp(double __x ,
                                                    int *__exponent ) ;

extern  __attribute__((__nothrow__)) double ldexp(double __x , int __exponent ) ;

extern  __attribute__((__nothrow__)) double __ldexp(double __x , int __exponent ) ;

extern  __attribute__((__nothrow__)) double log(double __x ) ;

extern  __attribute__((__nothrow__)) double __log(double __x ) ;

extern  __attribute__((__nothrow__)) double log10(double __x ) ;

extern  __attribute__((__nothrow__)) double __log10(double __x ) ;

extern  __attribute__((__nothrow__)) double modf(double __x , double *__iptr ) ;

extern  __attribute__((__nothrow__)) double __modf(double __x , double *__iptr ) ;

extern  __attribute__((__nothrow__)) double expm1(double __x ) ;

extern  __attribute__((__nothrow__)) double __expm1(double __x ) ;

extern  __attribute__((__nothrow__)) double log1p(double __x ) ;

extern  __attribute__((__nothrow__)) double __log1p(double __x ) ;

extern  __attribute__((__nothrow__)) double logb(double __x ) ;

extern  __attribute__((__nothrow__)) double __logb(double __x ) ;

extern  __attribute__((__nothrow__)) double pow(double __x , double __y ) ;

extern  __attribute__((__nothrow__)) double __pow(double __x , double __y ) ;

extern  __attribute__((__nothrow__)) double sqrt(double __x ) ;

extern  __attribute__((__nothrow__)) double __sqrt(double __x ) ;

extern  __attribute__((__nothrow__)) double hypot(double __x , double __y ) ;

extern  __attribute__((__nothrow__)) double __hypot(double __x , double __y ) ;

extern  __attribute__((__nothrow__)) double cbrt(double __x ) ;

extern  __attribute__((__nothrow__)) double __cbrt(double __x ) ;

extern  __attribute__((__nothrow__)) double ceil(double __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) double __ceil(double __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) double fabs(double __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) double __fabs(double __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) double floor(double __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) double __floor(double __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) double fmod(double __x , double __y ) ;

extern  __attribute__((__nothrow__)) double __fmod(double __x , double __y ) ;

extern  __attribute__((__nothrow__)) int __isinf(double __value )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int __finite(double __value )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int isinf(double __value )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int finite(double __value )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) double drem(double __x , double __y ) ;

extern  __attribute__((__nothrow__)) double __drem(double __x , double __y ) ;

extern  __attribute__((__nothrow__)) double significand(double __x ) ;

extern  __attribute__((__nothrow__)) double __significand(double __x ) ;

extern  __attribute__((__nothrow__)) double copysign(double __x , double __y )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) double __copysign(double __x , double __y )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int __isnan(double __value )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int isnan(double __value )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) double j0(double  ) ;

extern  __attribute__((__nothrow__)) double __j0(double  ) ;

extern  __attribute__((__nothrow__)) double j1(double  ) ;

extern  __attribute__((__nothrow__)) double __j1(double  ) ;

extern  __attribute__((__nothrow__)) double jn(int  , double  ) ;

extern  __attribute__((__nothrow__)) double __jn(int  , double  ) ;

extern  __attribute__((__nothrow__)) double y0(double  ) ;

extern  __attribute__((__nothrow__)) double __y0(double  ) ;

extern  __attribute__((__nothrow__)) double y1(double  ) ;

extern  __attribute__((__nothrow__)) double __y1(double  ) ;

extern  __attribute__((__nothrow__)) double yn(int  , double  ) ;

extern  __attribute__((__nothrow__)) double __yn(int  , double  ) ;

extern  __attribute__((__nothrow__)) double erf(double  ) ;

extern  __attribute__((__nothrow__)) double __erf(double  ) ;

extern  __attribute__((__nothrow__)) double erfc(double  ) ;

extern  __attribute__((__nothrow__)) double __erfc(double  ) ;

extern  __attribute__((__nothrow__)) double lgamma(double  ) ;

extern  __attribute__((__nothrow__)) double __lgamma(double  ) ;

extern  __attribute__((__nothrow__)) double gamma(double  ) ;

extern  __attribute__((__nothrow__)) double __gamma(double  ) ;

extern  __attribute__((__nothrow__)) double lgamma_r(double  , int *__signgamp ) ;

extern  __attribute__((__nothrow__)) double __lgamma_r(double  ,
                                                       int *__signgamp ) ;

extern  __attribute__((__nothrow__)) double rint(double __x ) ;

extern  __attribute__((__nothrow__)) double __rint(double __x ) ;

extern  __attribute__((__nothrow__)) double nextafter(double __x , double __y )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) double __nextafter(double __x , double __y )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) double remainder(double __x , double __y ) ;

extern  __attribute__((__nothrow__)) double __remainder(double __x , double __y ) ;

extern  __attribute__((__nothrow__)) double scalbn(double __x , int __n ) ;

extern  __attribute__((__nothrow__)) double __scalbn(double __x , int __n ) ;

extern  __attribute__((__nothrow__)) int ilogb(double __x ) ;

extern  __attribute__((__nothrow__)) int __ilogb(double __x ) ;

extern  __attribute__((__nothrow__)) double scalb(double __x , double __n ) ;

extern  __attribute__((__nothrow__)) double __scalb(double __x , double __n ) ;

extern  __attribute__((__nothrow__)) float acosf(float __x ) ;

extern  __attribute__((__nothrow__)) float __acosf(float __x ) ;

extern  __attribute__((__nothrow__)) float asinf(float __x ) ;

extern  __attribute__((__nothrow__)) float __asinf(float __x ) ;

extern  __attribute__((__nothrow__)) float atanf(float __x ) ;

extern  __attribute__((__nothrow__)) float __atanf(float __x ) ;

extern  __attribute__((__nothrow__)) float atan2f(float __y , float __x ) ;

extern  __attribute__((__nothrow__)) float __atan2f(float __y , float __x ) ;

extern  __attribute__((__nothrow__)) float cosf(float __x ) ;

extern  __attribute__((__nothrow__)) float __cosf(float __x ) ;

extern  __attribute__((__nothrow__)) float sinf(float __x ) ;

extern  __attribute__((__nothrow__)) float __sinf(float __x ) ;

extern  __attribute__((__nothrow__)) float tanf(float __x ) ;

extern  __attribute__((__nothrow__)) float __tanf(float __x ) ;

extern  __attribute__((__nothrow__)) float coshf(float __x ) ;

extern  __attribute__((__nothrow__)) float __coshf(float __x ) ;

extern  __attribute__((__nothrow__)) float sinhf(float __x ) ;

extern  __attribute__((__nothrow__)) float __sinhf(float __x ) ;

extern  __attribute__((__nothrow__)) float tanhf(float __x ) ;

extern  __attribute__((__nothrow__)) float __tanhf(float __x ) ;

extern  __attribute__((__nothrow__)) float acoshf(float __x ) ;

extern  __attribute__((__nothrow__)) float __acoshf(float __x ) ;

extern  __attribute__((__nothrow__)) float asinhf(float __x ) ;

extern  __attribute__((__nothrow__)) float __asinhf(float __x ) ;

extern  __attribute__((__nothrow__)) float atanhf(float __x ) ;

extern  __attribute__((__nothrow__)) float __atanhf(float __x ) ;

extern  __attribute__((__nothrow__)) float expf(float __x ) ;

extern  __attribute__((__nothrow__)) float __expf(float __x ) ;

extern  __attribute__((__nothrow__)) float frexpf(float __x , int *__exponent ) ;

extern  __attribute__((__nothrow__)) float __frexpf(float __x , int *__exponent ) ;

extern  __attribute__((__nothrow__)) float ldexpf(float __x , int __exponent ) ;

extern  __attribute__((__nothrow__)) float __ldexpf(float __x , int __exponent ) ;

extern  __attribute__((__nothrow__)) float logf(float __x ) ;

extern  __attribute__((__nothrow__)) float __logf(float __x ) ;

extern  __attribute__((__nothrow__)) float log10f(float __x ) ;

extern  __attribute__((__nothrow__)) float __log10f(float __x ) ;

extern  __attribute__((__nothrow__)) float modff(float __x , float *__iptr ) ;

extern  __attribute__((__nothrow__)) float __modff(float __x , float *__iptr ) ;

extern  __attribute__((__nothrow__)) float expm1f(float __x ) ;

extern  __attribute__((__nothrow__)) float __expm1f(float __x ) ;

extern  __attribute__((__nothrow__)) float log1pf(float __x ) ;

extern  __attribute__((__nothrow__)) float __log1pf(float __x ) ;

extern  __attribute__((__nothrow__)) float logbf(float __x ) ;

extern  __attribute__((__nothrow__)) float __logbf(float __x ) ;

extern  __attribute__((__nothrow__)) float powf(float __x , float __y ) ;

extern  __attribute__((__nothrow__)) float __powf(float __x , float __y ) ;

extern  __attribute__((__nothrow__)) float sqrtf(float __x ) ;

extern  __attribute__((__nothrow__)) float __sqrtf(float __x ) ;

extern  __attribute__((__nothrow__)) float hypotf(float __x , float __y ) ;

extern  __attribute__((__nothrow__)) float __hypotf(float __x , float __y ) ;

extern  __attribute__((__nothrow__)) float cbrtf(float __x ) ;

extern  __attribute__((__nothrow__)) float __cbrtf(float __x ) ;

extern  __attribute__((__nothrow__)) float ceilf(float __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) float __ceilf(float __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) float fabsf(float __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) float __fabsf(float __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) float floorf(float __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) float __floorf(float __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) float fmodf(float __x , float __y ) ;

extern  __attribute__((__nothrow__)) float __fmodf(float __x , float __y ) ;

extern  __attribute__((__nothrow__)) int __isinff(float __value )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int __finitef(float __value )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int isinff(float __value )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int finitef(float __value )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) float dremf(float __x , float __y ) ;

extern  __attribute__((__nothrow__)) float __dremf(float __x , float __y ) ;

extern  __attribute__((__nothrow__)) float significandf(float __x ) ;

extern  __attribute__((__nothrow__)) float __significandf(float __x ) ;

extern  __attribute__((__nothrow__)) float copysignf(float __x , float __y )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) float __copysignf(float __x , float __y )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int __isnanf(float __value )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int isnanf(float __value )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) float j0f(float  ) ;

extern  __attribute__((__nothrow__)) float __j0f(float  ) ;

extern  __attribute__((__nothrow__)) float j1f(float  ) ;

extern  __attribute__((__nothrow__)) float __j1f(float  ) ;

extern  __attribute__((__nothrow__)) float jnf(int  , float  ) ;

extern  __attribute__((__nothrow__)) float __jnf(int  , float  ) ;

extern  __attribute__((__nothrow__)) float y0f(float  ) ;

extern  __attribute__((__nothrow__)) float __y0f(float  ) ;

extern  __attribute__((__nothrow__)) float y1f(float  ) ;

extern  __attribute__((__nothrow__)) float __y1f(float  ) ;

extern  __attribute__((__nothrow__)) float ynf(int  , float  ) ;

extern  __attribute__((__nothrow__)) float __ynf(int  , float  ) ;

extern  __attribute__((__nothrow__)) float erff(float  ) ;

extern  __attribute__((__nothrow__)) float __erff(float  ) ;

extern  __attribute__((__nothrow__)) float erfcf(float  ) ;

extern  __attribute__((__nothrow__)) float __erfcf(float  ) ;

extern  __attribute__((__nothrow__)) float lgammaf(float  ) ;

extern  __attribute__((__nothrow__)) float __lgammaf(float  ) ;

extern  __attribute__((__nothrow__)) float gammaf(float  ) ;

extern  __attribute__((__nothrow__)) float __gammaf(float  ) ;

extern  __attribute__((__nothrow__)) float lgammaf_r(float  , int *__signgamp ) ;

extern  __attribute__((__nothrow__)) float __lgammaf_r(float  , int *__signgamp ) ;

extern  __attribute__((__nothrow__)) float rintf(float __x ) ;

extern  __attribute__((__nothrow__)) float __rintf(float __x ) ;

extern  __attribute__((__nothrow__)) float nextafterf(float __x , float __y )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) float __nextafterf(float __x , float __y )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) float remainderf(float __x , float __y ) ;

extern  __attribute__((__nothrow__)) float __remainderf(float __x , float __y ) ;

extern  __attribute__((__nothrow__)) float scalbnf(float __x , int __n ) ;

extern  __attribute__((__nothrow__)) float __scalbnf(float __x , int __n ) ;

extern  __attribute__((__nothrow__)) int ilogbf(float __x ) ;

extern  __attribute__((__nothrow__)) int __ilogbf(float __x ) ;

extern  __attribute__((__nothrow__)) float scalbf(float __x , float __n ) ;

extern  __attribute__((__nothrow__)) float __scalbf(float __x , float __n ) ;

extern  __attribute__((__nothrow__)) long double acosl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __acosl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double asinl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __asinl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double atanl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __atanl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double atan2l(long double __y ,
                                                        long double __x ) ;

extern  __attribute__((__nothrow__)) long double __atan2l(long double __y ,
                                                          long double __x ) ;

extern  __attribute__((__nothrow__)) long double cosl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __cosl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double sinl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __sinl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double tanl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __tanl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double coshl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __coshl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double sinhl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __sinhl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double tanhl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __tanhl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double acoshl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __acoshl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double asinhl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __asinhl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double atanhl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __atanhl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double expl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __expl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double frexpl(long double __x ,
                                                        int *__exponent ) ;

extern  __attribute__((__nothrow__)) long double __frexpl(long double __x ,
                                                          int *__exponent ) ;

extern  __attribute__((__nothrow__)) long double ldexpl(long double __x ,
                                                        int __exponent ) ;

extern  __attribute__((__nothrow__)) long double __ldexpl(long double __x ,
                                                          int __exponent ) ;

extern  __attribute__((__nothrow__)) long double logl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __logl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double log10l(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __log10l(long double __x ) ;

extern  __attribute__((__nothrow__)) long double modfl(long double __x ,
                                                       long double *__iptr ) ;

extern  __attribute__((__nothrow__)) long double __modfl(long double __x ,
                                                         long double *__iptr ) ;

extern  __attribute__((__nothrow__)) long double expm1l(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __expm1l(long double __x ) ;

extern  __attribute__((__nothrow__)) long double log1pl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __log1pl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double logbl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __logbl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double powl(long double __x ,
                                                      long double __y ) ;

extern  __attribute__((__nothrow__)) long double __powl(long double __x ,
                                                        long double __y ) ;

extern  __attribute__((__nothrow__)) long double sqrtl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __sqrtl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double hypotl(long double __x ,
                                                        long double __y ) ;

extern  __attribute__((__nothrow__)) long double __hypotl(long double __x ,
                                                          long double __y ) ;

extern  __attribute__((__nothrow__)) long double cbrtl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __cbrtl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double ceill(long double __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) long double __ceill(long double __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) long double fabsl(long double __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) long double __fabsl(long double __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) long double floorl(long double __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) long double __floorl(long double __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) long double fmodl(long double __x ,
                                                       long double __y ) ;

extern  __attribute__((__nothrow__)) long double __fmodl(long double __x ,
                                                         long double __y ) ;

extern  __attribute__((__nothrow__)) int __isinfl(long double __value )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int __finitel(long double __value )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int isinfl(long double __value )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int finitel(long double __value )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) long double dreml(long double __x ,
                                                       long double __y ) ;

extern  __attribute__((__nothrow__)) long double __dreml(long double __x ,
                                                         long double __y ) ;

extern  __attribute__((__nothrow__)) long double significandl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __significandl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double copysignl(long double __x ,
                                                           long double __y )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) long double __copysignl(long double __x ,
                                                             long double __y )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int __isnanl(long double __value )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int isnanl(long double __value )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) long double j0l(long double  ) ;

extern  __attribute__((__nothrow__)) long double __j0l(long double  ) ;

extern  __attribute__((__nothrow__)) long double j1l(long double  ) ;

extern  __attribute__((__nothrow__)) long double __j1l(long double  ) ;

extern  __attribute__((__nothrow__)) long double jnl(int  , long double  ) ;

extern  __attribute__((__nothrow__)) long double __jnl(int  , long double  ) ;

extern  __attribute__((__nothrow__)) long double y0l(long double  ) ;

extern  __attribute__((__nothrow__)) long double __y0l(long double  ) ;

extern  __attribute__((__nothrow__)) long double y1l(long double  ) ;

extern  __attribute__((__nothrow__)) long double __y1l(long double  ) ;

extern  __attribute__((__nothrow__)) long double ynl(int  , long double  ) ;

extern  __attribute__((__nothrow__)) long double __ynl(int  , long double  ) ;

extern  __attribute__((__nothrow__)) long double erfl(long double  ) ;

extern  __attribute__((__nothrow__)) long double __erfl(long double  ) ;

extern  __attribute__((__nothrow__)) long double erfcl(long double  ) ;

extern  __attribute__((__nothrow__)) long double __erfcl(long double  ) ;

extern  __attribute__((__nothrow__)) long double lgammal(long double  ) ;

extern  __attribute__((__nothrow__)) long double __lgammal(long double  ) ;

extern  __attribute__((__nothrow__)) long double gammal(long double  ) ;

extern  __attribute__((__nothrow__)) long double __gammal(long double  ) ;

extern  __attribute__((__nothrow__)) long double lgammal_r(long double  ,
                                                           int *__signgamp ) ;

extern  __attribute__((__nothrow__)) long double __lgammal_r(long double  ,
                                                             int *__signgamp ) ;

extern  __attribute__((__nothrow__)) long double rintl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double __rintl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double nextafterl(long double __x ,
                                                            long double __y )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) long double __nextafterl(long double __x ,
                                                              long double __y )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) long double remainderl(long double __x ,
                                                            long double __y ) ;

extern  __attribute__((__nothrow__)) long double __remainderl(long double __x ,
                                                              long double __y ) ;

extern  __attribute__((__nothrow__)) long double scalbnl(long double __x ,
                                                         int __n ) ;

extern  __attribute__((__nothrow__)) long double __scalbnl(long double __x ,
                                                           int __n ) ;

extern  __attribute__((__nothrow__)) int ilogbl(long double __x ) ;

extern  __attribute__((__nothrow__)) int __ilogbl(long double __x ) ;

extern  __attribute__((__nothrow__)) long double scalbl(long double __x ,
                                                        long double __n ) ;

extern  __attribute__((__nothrow__)) long double __scalbl(long double __x ,
                                                          long double __n ) ;

extern int signgam ;

extern _LIB_VERSION_TYPE _LIB_VERSION ;

extern int matherr(struct exception *__exc ) ;

extern  __attribute__((__nothrow__)) void *dlopen(char const   *__file ,
                                                  int __mode ) ;

extern  __attribute__((__nothrow__)) int dlclose(void *__handle )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) void *dlsym(void * __restrict  __handle ,
                                                 char const   * __restrict  __name )  __attribute__((__nonnull__(2))) ;

extern  __attribute__((__nothrow__)) char *dlerror(void) ;

extern char *zend_strndup(char const   *s , unsigned int length )  __attribute__((__malloc__)) ;

extern void *_emalloc(size_t size )  __attribute__((__malloc__)) ;

extern void *_safe_emalloc(size_t nmemb , size_t size , size_t offset )  __attribute__((__malloc__)) ;

extern void *_safe_malloc(size_t nmemb , size_t size , size_t offset )  __attribute__((__malloc__)) ;

extern void _efree(void *ptr ) ;

extern void *_ecalloc(size_t nmemb , size_t size )  __attribute__((__malloc__)) ;

extern void *_erealloc(void *ptr , size_t size , int allow_failure ) ;

extern char *_estrdup(char const   *s )  __attribute__((__malloc__)) ;

extern char *_estrndup(char const   *s , unsigned int length )  __attribute__((__malloc__)) ;

extern size_t _zend_mem_block_size(void *ptr ) ;

extern int zend_set_memory_limit(unsigned int memory_limit ) ;

extern void start_memory_manager(void) ;

extern void shutdown_memory_manager(int silent , int full_shutdown ) ;

extern int is_zend_mm(void) ;

extern size_t zend_memory_usage(int real_usage ) ;

extern size_t zend_memory_peak_usage(int real_usage ) ;

extern zend_mm_heap *zend_mm_startup(void) ;

extern void zend_mm_shutdown(zend_mm_heap *heap , int full_shutdown ,
                             int silent ) ;

extern void *_zend_mm_alloc(zend_mm_heap *heap , size_t size )  __attribute__((__malloc__)) ;

extern void _zend_mm_free(zend_mm_heap *heap , void *p ) ;

extern void *_zend_mm_realloc(zend_mm_heap *heap , void *p , size_t size ) ;

extern size_t _zend_mm_block_size(zend_mm_heap *heap , void *p ) ;

extern zend_mm_heap *zend_mm_startup_ex(zend_mm_mem_handlers const   *handlers ,
                                        size_t block_size , void *params ) ;

extern zend_mm_heap *zend_mm_set_heap(zend_mm_heap *new_heap ) ;

extern int _zend_hash_init(HashTable *ht , uint nSize ,
                           ulong (*pHashFunction)(char *arKey , uint nKeyLength ) ,
                           void (*pDestructor)(void *pDest ) ,
                           zend_bool persistent ) ;

extern int _zend_hash_init_ex(HashTable *ht , uint nSize ,
                              ulong (*pHashFunction)(char *arKey ,
                                                     uint nKeyLength ) ,
                              void (*pDestructor)(void *pDest ) ,
                              zend_bool persistent , zend_bool bApplyProtection ) ;

extern void zend_hash_destroy(HashTable *ht ) ;

extern void zend_hash_clean(HashTable *ht ) ;

extern int _zend_hash_add_or_update(HashTable *ht , char *arKey ,
                                    uint nKeyLength , void *pData ,
                                    uint nDataSize , void **pDest , int flag ) ;

extern int _zend_hash_quick_add_or_update(HashTable *ht , char *arKey ,
                                          uint nKeyLength , ulong h ,
                                          void *pData , uint nDataSize ,
                                          void **pDest , int flag ) ;

extern int _zend_hash_index_update_or_next_insert(HashTable *ht , ulong h ,
                                                  void *pData , uint nDataSize ,
                                                  void **pDest , int flag ) ;

extern int zend_hash_add_empty_element(HashTable *ht , char *arKey ,
                                       uint nKeyLength ) ;

extern void zend_hash_graceful_destroy(HashTable *ht ) ;

extern void zend_hash_graceful_reverse_destroy(HashTable *ht ) ;

extern void zend_hash_apply(HashTable *ht , int (*apply_func)(void *pDest ) ) ;

extern void zend_hash_apply_with_argument(HashTable *ht ,
                                          int (*apply_func)(void *pDest ,
                                                            void *argument ) ,
                                          void * ) ;

extern void zend_hash_apply_with_arguments(HashTable *ht ,
                                           int (*apply_func)(void *pDest ,
                                                             int num_args ,
                                                             va_list args ,
                                                             zend_hash_key *hash_key ) ,
                                           int   , ...) ;

extern void zend_hash_reverse_apply(HashTable *ht ,
                                    int (*apply_func)(void *pDest ) ) ;

extern int zend_hash_del_key_or_index(HashTable *ht , char *arKey ,
                                      uint nKeyLength , ulong h , int flag ) ;

extern ulong zend_get_hash_value(char *arKey , uint nKeyLength ) ;

extern int zend_hash_find(HashTable *ht , char *arKey , uint nKeyLength ,
                          void **pData ) ;

extern int zend_hash_quick_find(HashTable *ht , char *arKey , uint nKeyLength ,
                                ulong h , void **pData ) ;

extern int zend_hash_index_find(HashTable *ht , ulong h , void **pData ) ;

extern int zend_hash_exists(HashTable *ht , char *arKey , uint nKeyLength ) ;

extern int zend_hash_quick_exists(HashTable *ht , char *arKey ,
                                  uint nKeyLength , ulong h ) ;

extern int zend_hash_index_exists(HashTable *ht , ulong h ) ;

extern ulong zend_hash_next_free_element(HashTable *ht ) ;

extern int zend_hash_move_forward_ex(HashTable *ht , HashPosition *pos ) ;

extern int zend_hash_move_backwards_ex(HashTable *ht , HashPosition *pos ) ;

extern int zend_hash_get_current_key_ex(HashTable *ht , char **str_index ,
                                        uint *str_length , ulong *num_index ,
                                        zend_bool duplicate , HashPosition *pos ) ;

extern int zend_hash_get_current_key_type_ex(HashTable *ht , HashPosition *pos ) ;

extern int zend_hash_get_current_data_ex(HashTable *ht , void **pData ,
                                         HashPosition *pos ) ;

extern void zend_hash_internal_pointer_reset_ex(HashTable *ht ,
                                                HashPosition *pos ) ;

extern void zend_hash_internal_pointer_end_ex(HashTable *ht , HashPosition *pos ) ;

extern int zend_hash_update_current_key_ex(HashTable *ht , int key_type ,
                                           char *str_index , uint str_length ,
                                           ulong num_index , HashPosition *pos ) ;

extern int zend_hash_get_pointer(HashTable *ht , HashPointer *ptr ) ;

extern int zend_hash_set_pointer(HashTable *ht , HashPointer const   *ptr ) ;

extern void zend_hash_copy(HashTable *target , HashTable *source ,
                           void (*pCopyConstructor)(void *pElement ) ,
                           void *tmp , uint size ) ;

extern void _zend_hash_merge(HashTable *target , HashTable *source ,
                             void (*pCopyConstructor)(void *pElement ) ,
                             void *tmp , uint size , int overwrite ) ;

extern void zend_hash_merge_ex(HashTable *target , HashTable *source ,
                               void (*pCopyConstructor)(void *pElement ) ,
                               uint size ,
                               zend_bool (*pMergeSource)(HashTable *target_ht ,
                                                         void *source_data ,
                                                         zend_hash_key *hash_key ,
                                                         void *pParam ) ,
                               void *pParam ) ;

extern int zend_hash_sort(HashTable *ht ,
                          void (*sort_func)(void * , size_t  ,
                                            size_t  , int (*)(void const   * ,
                                                              void const   * ) ) ,
                          int (*compare_func)(void const   * , void const   * ) ,
                          int renumber ) ;

extern int zend_hash_compare(HashTable *ht1 , HashTable *ht2 ,
                             int (*compar)(void const   * , void const   * ) ,
                             zend_bool ordered ) ;

extern int zend_hash_minmax(HashTable *ht , int (*compar)(void const   * ,
                                                          void const   * ) ,
                            int flag , void **pData ) ;

extern int zend_hash_num_elements(HashTable *ht ) ;

extern int zend_hash_rehash(HashTable *ht ) ;

__inline static ulong zend_inline_hash_func(char *arKey , uint nKeyLength ) 
{ register ulong hash ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;
  char *tmp___12 ;
  char *tmp___13 ;

  {
  hash = 5381UL;
  while (nKeyLength >= 8U) {
    tmp = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (unsigned long )*tmp;
    tmp___0 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (unsigned long )*tmp___0;
    tmp___1 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (unsigned long )*tmp___1;
    tmp___2 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (unsigned long )*tmp___2;
    tmp___3 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (unsigned long )*tmp___3;
    tmp___4 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (unsigned long )*tmp___4;
    tmp___5 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (unsigned long )*tmp___5;
    tmp___6 = arKey;
    arKey ++;
    hash = ((hash << 5) + hash) + (unsigned long )*tmp___6;
    nKeyLength -= 8U;
  }
  switch ((int )nKeyLength) {
  case 7: 
  tmp___7 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (unsigned long )*tmp___7;
  case 6: 
  tmp___8 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (unsigned long )*tmp___8;
  case 5: 
  tmp___9 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (unsigned long )*tmp___9;
  case 4: 
  tmp___10 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (unsigned long )*tmp___10;
  case 3: 
  tmp___11 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (unsigned long )*tmp___11;
  case 2: 
  tmp___12 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (unsigned long )*tmp___12;
  case 1: 
  tmp___13 = arKey;
  arKey ++;
  hash = ((hash << 5) + hash) + (unsigned long )*tmp___13;
  break;
  case 0: 
  break;
  }
  return (hash);
}
}

extern ulong zend_hash_func(char *arKey , uint nKeyLength ) ;

__inline static int zend_symtable_update(HashTable *ht , char *arKey ,
                                         uint nKeyLength , void *pData ,
                                         uint nDataSize , void **pDest ) 
{ register char *tmp ;
  char *end ;
  long idx ;
  char *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  tmp = arKey;
  if ((int )*tmp == 45) {
    tmp ++;
  }
  if ((int )*tmp >= 48) {
    if ((int )*tmp <= 57) {
      while (1) {
        end = (arKey + nKeyLength) - 1;
        tmp___0 = tmp;
        tmp ++;
        if ((int )*tmp___0 == 48) {
          if (nKeyLength > 2U) {
            break;
          }
        }
        while ((unsigned int )tmp < (unsigned int )end) {
          if ((int )*tmp >= 48) {
            if (! ((int )*tmp <= 57)) {
              break;
            }
          } else {
            break;
          }
          tmp ++;
        }
        if ((unsigned int )tmp == (unsigned int )end) {
          if ((int )*tmp == 0) {
            if ((int )*arKey == 45) {
              idx = strtol((char const   */* __restrict  */)((char const   *)arKey),
                           (char **/* __restrict  */)((char **)((void *)0)), 10);
              if (idx != (-0x7FFFFFFF-1)) {
                tmp___1 = _zend_hash_index_update_or_next_insert(ht,
                                                                 (unsigned long )idx,
                                                                 pData,
                                                                 nDataSize,
                                                                 pDest, 1);
                return (tmp___1);
              }
            } else {
              idx = strtol((char const   */* __restrict  */)((char const   *)arKey),
                           (char **/* __restrict  */)((char **)((void *)0)), 10);
              if (idx != 2147483647L) {
                tmp___2 = _zend_hash_index_update_or_next_insert(ht,
                                                                 (unsigned long )idx,
                                                                 pData,
                                                                 nDataSize,
                                                                 pDest, 1);
                return (tmp___2);
              }
            }
          }
        }
        break;
      }
    }
  }
  tmp___3 = _zend_hash_add_or_update(ht, arKey, nKeyLength, pData, nDataSize,
                                     pDest, 1);
  return (tmp___3);
}
}

__inline static int zend_symtable_del(HashTable *ht , char *arKey ,
                                      uint nKeyLength ) 
{ register char *tmp ;
  char *end ;
  long idx ;
  char *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  tmp = arKey;
  if ((int )*tmp == 45) {
    tmp ++;
  }
  if ((int )*tmp >= 48) {
    if ((int )*tmp <= 57) {
      while (1) {
        end = (arKey + nKeyLength) - 1;
        tmp___0 = tmp;
        tmp ++;
        if ((int )*tmp___0 == 48) {
          if (nKeyLength > 2U) {
            break;
          }
        }
        while ((unsigned int )tmp < (unsigned int )end) {
          if ((int )*tmp >= 48) {
            if (! ((int )*tmp <= 57)) {
              break;
            }
          } else {
            break;
          }
          tmp ++;
        }
        if ((unsigned int )tmp == (unsigned int )end) {
          if ((int )*tmp == 0) {
            if ((int )*arKey == 45) {
              idx = strtol((char const   */* __restrict  */)((char const   *)arKey),
                           (char **/* __restrict  */)((char **)((void *)0)), 10);
              if (idx != (-0x7FFFFFFF-1)) {
                tmp___1 = zend_hash_del_key_or_index(ht, (char *)((void *)0),
                                                     0U, (unsigned long )idx, 1);
                return (tmp___1);
              }
            } else {
              idx = strtol((char const   */* __restrict  */)((char const   *)arKey),
                           (char **/* __restrict  */)((char **)((void *)0)), 10);
              if (idx != 2147483647L) {
                tmp___2 = zend_hash_del_key_or_index(ht, (char *)((void *)0),
                                                     0U, (unsigned long )idx, 1);
                return (tmp___2);
              }
            }
          }
        }
        break;
      }
    }
  }
  tmp___3 = zend_hash_del_key_or_index(ht, arKey, nKeyLength, 0UL, 0);
  return (tmp___3);
}
}

__inline static int zend_symtable_find(HashTable *ht , char *arKey ,
                                       uint nKeyLength , void **pData ) 
{ register char *tmp ;
  char *end ;
  long idx ;
  char *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  tmp = arKey;
  if ((int )*tmp == 45) {
    tmp ++;
  }
  if ((int )*tmp >= 48) {
    if ((int )*tmp <= 57) {
      while (1) {
        end = (arKey + nKeyLength) - 1;
        tmp___0 = tmp;
        tmp ++;
        if ((int )*tmp___0 == 48) {
          if (nKeyLength > 2U) {
            break;
          }
        }
        while ((unsigned int )tmp < (unsigned int )end) {
          if ((int )*tmp >= 48) {
            if (! ((int )*tmp <= 57)) {
              break;
            }
          } else {
            break;
          }
          tmp ++;
        }
        if ((unsigned int )tmp == (unsigned int )end) {
          if ((int )*tmp == 0) {
            if ((int )*arKey == 45) {
              idx = strtol((char const   */* __restrict  */)((char const   *)arKey),
                           (char **/* __restrict  */)((char **)((void *)0)), 10);
              if (idx != (-0x7FFFFFFF-1)) {
                tmp___1 = zend_hash_index_find(ht, (unsigned long )idx, pData);
                return (tmp___1);
              }
            } else {
              idx = strtol((char const   */* __restrict  */)((char const   *)arKey),
                           (char **/* __restrict  */)((char **)((void *)0)), 10);
              if (idx != 2147483647L) {
                tmp___2 = zend_hash_index_find(ht, (unsigned long )idx, pData);
                return (tmp___2);
              }
            }
          }
        }
        break;
      }
    }
  }
  tmp___3 = zend_hash_find(ht, arKey, nKeyLength, pData);
  return (tmp___3);
}
}

__inline static int zend_symtable_exists(HashTable *ht , char *arKey ,
                                         uint nKeyLength ) 
{ register char *tmp ;
  char *end ;
  long idx ;
  char *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  tmp = arKey;
  if ((int )*tmp == 45) {
    tmp ++;
  }
  if ((int )*tmp >= 48) {
    if ((int )*tmp <= 57) {
      while (1) {
        end = (arKey + nKeyLength) - 1;
        tmp___0 = tmp;
        tmp ++;
        if ((int )*tmp___0 == 48) {
          if (nKeyLength > 2U) {
            break;
          }
        }
        while ((unsigned int )tmp < (unsigned int )end) {
          if ((int )*tmp >= 48) {
            if (! ((int )*tmp <= 57)) {
              break;
            }
          } else {
            break;
          }
          tmp ++;
        }
        if ((unsigned int )tmp == (unsigned int )end) {
          if ((int )*tmp == 0) {
            if ((int )*arKey == 45) {
              idx = strtol((char const   */* __restrict  */)((char const   *)arKey),
                           (char **/* __restrict  */)((char **)((void *)0)), 10);
              if (idx != (-0x7FFFFFFF-1)) {
                tmp___1 = zend_hash_index_exists(ht, (unsigned long )idx);
                return (tmp___1);
              }
            } else {
              idx = strtol((char const   */* __restrict  */)((char const   *)arKey),
                           (char **/* __restrict  */)((char **)((void *)0)), 10);
              if (idx != 2147483647L) {
                tmp___2 = zend_hash_index_exists(ht, (unsigned long )idx);
                return (tmp___2);
              }
            }
          }
        }
        break;
      }
    }
  }
  tmp___3 = zend_hash_exists(ht, arKey, nKeyLength);
  return (tmp___3);
}
}

__inline static int zend_symtable_update_current_key(HashTable *ht ,
                                                     char *arKey ,
                                                     uint nKeyLength ) 
{ register char *tmp ;
  char *end ;
  long idx ;
  char *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  tmp = arKey;
  if ((int )*tmp == 45) {
    tmp ++;
  }
  if ((int )*tmp >= 48) {
    if ((int )*tmp <= 57) {
      while (1) {
        end = (arKey + nKeyLength) - 1;
        tmp___0 = tmp;
        tmp ++;
        if ((int )*tmp___0 == 48) {
          if (nKeyLength > 2U) {
            break;
          }
        }
        while ((unsigned int )tmp < (unsigned int )end) {
          if ((int )*tmp >= 48) {
            if (! ((int )*tmp <= 57)) {
              break;
            }
          } else {
            break;
          }
          tmp ++;
        }
        if ((unsigned int )tmp == (unsigned int )end) {
          if ((int )*tmp == 0) {
            if ((int )*arKey == 45) {
              idx = strtol((char const   */* __restrict  */)((char const   *)arKey),
                           (char **/* __restrict  */)((char **)((void *)0)), 10);
              if (idx != (-0x7FFFFFFF-1)) {
                tmp___1 = zend_hash_update_current_key_ex(ht, 2,
                                                          (char *)((void *)0),
                                                          0U,
                                                          (unsigned long )idx,
                                                          (HashPosition *)((void *)0));
                return (tmp___1);
              }
            } else {
              idx = strtol((char const   */* __restrict  */)((char const   *)arKey),
                           (char **/* __restrict  */)((char **)((void *)0)), 10);
              if (idx != 2147483647L) {
                tmp___2 = zend_hash_update_current_key_ex(ht, 2,
                                                          (char *)((void *)0),
                                                          0U,
                                                          (unsigned long )idx,
                                                          (HashPosition *)((void *)0));
                return (tmp___2);
              }
            }
          }
        }
        break;
      }
    }
  }
  tmp___3 = zend_hash_update_current_key_ex(ht, 1, arKey, nKeyLength, 0UL,
                                            (HashPosition *)((void *)0));
  return (tmp___3);
}
}

extern int _zend_ts_hash_init(TsHashTable *ht , uint nSize ,
                              ulong (*pHashFunction)(char *arKey ,
                                                     uint nKeyLength ) ,
                              void (*pDestructor)(void *pDest ) ,
                              zend_bool persistent ) ;

extern int _zend_ts_hash_init_ex(TsHashTable *ht , uint nSize ,
                                 ulong (*pHashFunction)(char *arKey ,
                                                        uint nKeyLength ) ,
                                 void (*pDestructor)(void *pDest ) ,
                                 zend_bool persistent ,
                                 zend_bool bApplyProtection ) ;

extern void zend_ts_hash_destroy(TsHashTable *ht ) ;

extern void zend_ts_hash_clean(TsHashTable *ht ) ;

extern int _zend_ts_hash_add_or_update(TsHashTable *ht , char *arKey ,
                                       uint nKeyLength , void *pData ,
                                       uint nDataSize , void **pDest , int flag ) ;

extern int _zend_ts_hash_quick_add_or_update(TsHashTable *ht , char *arKey ,
                                             uint nKeyLength , ulong h ,
                                             void *pData , uint nDataSize ,
                                             void **pDest , int flag ) ;

extern int _zend_ts_hash_index_update_or_next_insert(TsHashTable *ht , ulong h ,
                                                     void *pData ,
                                                     uint nDataSize ,
                                                     void **pDest , int flag ) ;

extern int zend_ts_hash_add_empty_element(TsHashTable *ht , char *arKey ,
                                          uint nKeyLength ) ;

extern void zend_ts_hash_graceful_destroy(TsHashTable *ht ) ;

extern void zend_ts_hash_apply(TsHashTable *ht ,
                               int (*apply_func)(void *pDest ) ) ;

extern void zend_ts_hash_apply_with_argument(TsHashTable *ht ,
                                             int (*apply_func)(void *pDest ,
                                                               void *argument ) ,
                                             void * ) ;

extern void zend_ts_hash_apply_with_arguments(TsHashTable *ht ,
                                              int (*apply_func)(void *pDest ,
                                                                int num_args ,
                                                                va_list args ,
                                                                zend_hash_key *hash_key ) ,
                                              int   , ...) ;

extern void zend_ts_hash_reverse_apply(TsHashTable *ht ,
                                       int (*apply_func)(void *pDest ) ) ;

extern int zend_ts_hash_del_key_or_index(TsHashTable *ht , char *arKey ,
                                         uint nKeyLength , ulong h , int flag ) ;

extern ulong zend_ts_get_hash_value(TsHashTable *ht , char *arKey ,
                                    uint nKeyLength ) ;

extern int zend_ts_hash_find(TsHashTable *ht , char *arKey , uint nKeyLength ,
                             void **pData ) ;

extern int zend_ts_hash_quick_find(TsHashTable *ht , char *arKey ,
                                   uint nKeyLength , ulong h , void **pData ) ;

extern int zend_ts_hash_index_find(TsHashTable *ht , ulong h , void **pData ) ;

extern int zend_ts_hash_exists(TsHashTable *ht , char *arKey , uint nKeyLength ) ;

extern int zend_ts_hash_index_exists(TsHashTable *ht , ulong h ) ;

extern void zend_ts_hash_copy(TsHashTable *target , TsHashTable *source ,
                              void (*pCopyConstructor)(void *pElement ) ,
                              void *tmp , uint size ) ;

extern void zend_ts_hash_merge(TsHashTable *target , TsHashTable *source ,
                               void (*pCopyConstructor)(void *pElement ) ,
                               void *tmp , uint size , int overwrite ) ;

extern void zend_ts_hash_merge_ex(TsHashTable *target , TsHashTable *source ,
                                  void (*pCopyConstructor)(void *pElement ) ,
                                  uint size ,
                                  zend_bool (*pMergeSource)(HashTable *target_ht ,
                                                            void *source_data ,
                                                            zend_hash_key *hash_key ,
                                                            void *pParam ) ,
                                  void *pParam ) ;

extern int zend_ts_hash_sort(TsHashTable *ht ,
                             void (*sort_func)(void * , size_t  , size_t  ,
                                               int (*)(void const   * ,
                                                       void const   * ) ) ,
                             int (*compare_func)(void const   * ,
                                                 void const   * ) ,
                             int renumber ) ;

extern int zend_ts_hash_compare(TsHashTable *ht1 , TsHashTable *ht2 ,
                                int (*compar)(void const   * , void const   * ) ,
                                zend_bool ordered ) ;

extern int zend_ts_hash_minmax(TsHashTable *ht ,
                               int (*compar)(void const   * , void const   * ) ,
                               int flag , void **pData ) ;

extern int zend_ts_hash_num_elements(TsHashTable *ht ) ;

extern int zend_ts_hash_rehash(TsHashTable *ht ) ;

extern ulong zend_ts_hash_func(char *arKey , uint nKeyLength ) ;

extern void zend_llist_init(zend_llist *l , size_t size ,
                            void (*dtor)(void * ) , unsigned char persistent ) ;

extern void zend_llist_add_element(zend_llist *l , void *element ) ;

extern void zend_llist_prepend_element(zend_llist *l , void *element ) ;

extern void zend_llist_del_element(zend_llist *l , void *element ,
                                   int (*compare)(void *element1 ,
                                                  void *element2 ) ) ;

extern void zend_llist_destroy(zend_llist *l ) ;

extern void zend_llist_clean(zend_llist *l ) ;

extern void *zend_llist_remove_tail(zend_llist *l ) ;

extern void zend_llist_copy(zend_llist *dst , zend_llist *src ) ;

extern void zend_llist_apply(zend_llist *l , void (*func)(void * ) ) ;

extern void zend_llist_apply_with_del(zend_llist *l , int (*func)(void *data ) ) ;

extern void zend_llist_apply_with_argument(zend_llist *l ,
                                           void (*func)(void *data , void *arg ) ,
                                           void *arg ) ;

extern void zend_llist_apply_with_arguments(zend_llist *l ,
                                            void (*func)(void *data ,
                                                         int num_args ,
                                                         va_list args ) ,
                                            int num_args  , ...) ;

extern int zend_llist_count(zend_llist *l ) ;

extern void zend_llist_sort(zend_llist *l ,
                            int (*comp_func)(zend_llist_element const   ** ,
                                             zend_llist_element const   ** ) ) ;

extern void *zend_llist_get_first_ex(zend_llist *l , zend_llist_position *pos ) ;

extern void *zend_llist_get_last_ex(zend_llist *l , zend_llist_position *pos ) ;

extern void *zend_llist_get_next_ex(zend_llist *l , zend_llist_position *pos ) ;

extern void *zend_llist_get_prev_ex(zend_llist *l , zend_llist_position *pos ) ;

extern  __attribute__((__noreturn__)) void zend_error_noreturn(int type ,
                                                               char const   *format 
                                                               , ...) ;

extern zend_object_handlers std_object_handlers ;

extern union _zend_function *zend_std_get_static_method(zend_class_entry *ce ,
                                                        char *function_name_strval ,
                                                        int function_name_strlen ) ;

extern zval **zend_std_get_static_property(zend_class_entry *ce ,
                                           char *property_name ,
                                           int property_name_len ,
                                           zend_bool silent ) ;

extern zend_bool zend_std_unset_static_property(zend_class_entry *ce ,
                                                char *property_name ,
                                                int property_name_len ) ;

extern union _zend_function *zend_std_get_constructor(zval *object ) ;

extern struct _zend_property_info *zend_get_property_info(zend_class_entry *ce ,
                                                          zval *member ,
                                                          int silent ) ;

extern int zend_std_cast_object_tostring(zval *readobj , zval *writeobj ,
                                         int type ) ;

extern int zend_check_private(union _zend_function *fbc , zend_class_entry *ce ,
                              char *function_name_strval ,
                              int function_name_strlen ) ;

extern int zend_check_protected(zend_class_entry *ce , zend_class_entry *scope ) ;

extern int zend_check_property_access(zend_object *zobj , char *prop_info_name ,
                                      int prop_info_name_len ) ;

extern void zend_std_call_user_call(int ht , zval *return_value ,
                                    zval **return_value_ptr , zval *this_ptr ,
                                    int return_value_used ) ;

extern enum zend_object_iterator_kind zend_iterator_unwrap(zval *array_ptr ,
                                                           zend_object_iterator **iter ) ;

extern zval *zend_iterator_wrap(zend_object_iterator *iter ) ;

extern void zend_register_iterator_wrapper(void) ;

extern int zend_stream_open(char const   *filename , zend_file_handle *handle ) ;

extern int zend_stream_ferror(zend_file_handle *file_handle ) ;

extern int zend_stream_getc(zend_file_handle *file_handle ) ;

extern size_t zend_stream_read(zend_file_handle *file_handle , char *buf ,
                               size_t len ) ;

extern long zend_stream_ftell(zend_file_handle *file_handle ) ;

extern int zend_stream_fixup(zend_file_handle *file_handle ) ;

extern int zend_startup(zend_utility_functions *utility_functions ,
                        char **extensions , int start_builtin_functions ) ;

extern void zend_shutdown(void) ;

extern void zend_register_standard_ini_entries(void) ;

extern void zend_set_utility_values(zend_utility_values *utility_values ) ;

extern void _zend_bailout(char *filename , uint lineno ) ;

extern char *get_zend_version(void) ;

extern void zend_make_printable_zval(zval *expr , zval *expr_copy ,
                                     int *use_copy ) ;

extern int zend_print_zval(zval *expr , int indent ) ;

extern int zend_print_zval_ex(int (*write_func)(char const   *str ,
                                                uint str_length ) , zval *expr ,
                              int indent ) ;

extern void zend_print_zval_r(zval *expr , int indent ) ;

extern void zend_print_flat_zval_r(zval *expr ) ;

extern void zend_print_zval_r_ex(int (*write_func)(char const   *str ,
                                                   uint str_length ) ,
                                 zval *expr , int indent ) ;

extern void zend_output_debug_string(zend_bool trigger_break , char *format 
                                     , ...) ;

extern void zend_activate(void) ;

extern void zend_deactivate(void) ;

extern void zend_call_destructors(void) ;

extern void zend_activate_modules(void) ;

extern void zend_deactivate_modules(void) ;

extern void zend_post_deactivate_modules(void) ;

extern void free_estring(char **str_p ) ;

extern int (*zend_printf)(char const   *format  , ...) ;

extern int (*zend_write)(char const   *str , uint str_length ) ;

extern FILE *(*zend_fopen)(char const   *filename , char **opened_path ) ;

extern void (*zend_block_interruptions)(void) ;

extern void (*zend_unblock_interruptions)(void) ;

extern void (*zend_ticks_function)(int ticks ) ;

extern void (*zend_error_cb)(int type , char const   *error_filename ,
                             uint error_lineno , char const   *format ,
                             va_list args ) ;

extern void (*zend_on_timeout)(int seconds ) ;

extern int (*zend_stream_open_function)(char const   *filename ,
                                        zend_file_handle *handle ) ;

extern int (*zend_vspprintf)(char **pbuf , size_t max_len ,
                             char const   *format , va_list ap ) ;

extern char *(*zend_getenv)(char *name , size_t name_len ) ;

extern void zend_error(int type , char const   *format  , ...) ;

extern void zenderror(char *error ) ;

extern zend_class_entry *zend_standard_class_def ;

extern zend_utility_values zend_uv ;

extern zval zval_used_for_init ;

extern void zend_message_dispatcher(long message , void *data ) ;

extern int zend_get_configuration_directive(char *name , uint name_length ,
                                            zval *contents ) ;

extern void _zval_dtor_func(zval *zvalue ) ;

__inline static void _zval_dtor(zval *zvalue ) 
{ 

  {
  if ((int )zvalue->type <= 3) {
    return;
  }
  _zval_dtor_func(zvalue);
  return;
}
}

extern void _zval_copy_ctor_func(zval *zvalue ) ;

__inline static void _zval_copy_ctor(zval *zvalue ) 
{ 

  {
  if ((int )zvalue->type <= 3) {
    return;
  }
  _zval_copy_ctor_func(zvalue);
  return;
}
}

extern int zend_print_variable(zval *var ) ;

extern void _zval_ptr_dtor(zval **zval_ptr ) ;

extern void _zval_internal_dtor(zval *zvalue ) ;

extern void _zval_internal_ptr_dtor(zval **zvalue ) ;

extern void zval_add_ref(zval **p ) ;

extern void zend_qsort(void *base , size_t nmemb , size_t siz ,
                       int (*compare)(void const   * , void const   * ) ) ;

extern opcode_handler_t *zend_opcode_handlers ;

extern char *zend_visibility_string(zend_uint fn_flags ) ;

extern  __attribute__((__nothrow__)) int setjmp(struct __jmp_buf_tag *__env ) ;

extern  __attribute__((__nothrow__)) int __sigsetjmp(struct __jmp_buf_tag *__env ,
                                                     int __savemask ) ;

extern  __attribute__((__nothrow__)) int _setjmp(struct __jmp_buf_tag *__env ) ;

extern  __attribute__((__nothrow__,
__noreturn__)) void longjmp(struct __jmp_buf_tag *__env , int __val ) ;

extern  __attribute__((__nothrow__,
__noreturn__)) void _longjmp(struct __jmp_buf_tag *__env , int __val ) ;

extern  __attribute__((__nothrow__,
__noreturn__)) void siglongjmp(struct __jmp_buf_tag *__env , int __val ) ;

extern struct _zend_compiler_globals compiler_globals ;

extern int zendparse(void) ;

extern zend_executor_globals executor_globals ;

extern zend_scanner_globals language_scanner_globals ;

extern zend_scanner_globals ini_scanner_globals ;

extern int zend_stack_init(zend_stack *stack ) ;

extern int zend_stack_push(zend_stack *stack , void *element , int size ) ;

extern int zend_stack_top(zend_stack *stack , void **element ) ;

extern int zend_stack_del_top(zend_stack *stack ) ;

extern int zend_stack_int_top(zend_stack *stack ) ;

extern int zend_stack_is_empty(zend_stack *stack ) ;

extern int zend_stack_destroy(zend_stack *stack ) ;

extern void **zend_stack_base(zend_stack *stack ) ;

extern int zend_stack_count(zend_stack *stack ) ;

extern void zend_stack_apply(zend_stack *stack , int type ,
                             int (*apply_function)(void *element ) ) ;

extern void zend_stack_apply_with_argument(zend_stack *stack , int type ,
                                           int (*apply_function)(void *element ,
                                                                 void *arg ) ,
                                           void *arg ) ;

extern void zend_ptr_stack_init(zend_ptr_stack *stack ) ;

extern void zend_ptr_stack_n_push(zend_ptr_stack *stack , int count  , ...) ;

extern void zend_ptr_stack_n_pop(zend_ptr_stack *stack , int count  , ...) ;

extern void zend_ptr_stack_destroy(zend_ptr_stack *stack ) ;

extern void zend_ptr_stack_apply(zend_ptr_stack *stack , void (*func)(void * ) ) ;

extern void zend_ptr_stack_clean(zend_ptr_stack *stack , void (*func)(void * ) ,
                                 zend_bool free_elements ) ;

extern int zend_ptr_stack_num_elements(zend_ptr_stack *stack ) ;

__inline static void zend_ptr_stack_3_push(zend_ptr_stack *stack , void *a ,
                                           void *b , void *c ) 
{ void *tmp ;
  void **tmp___0 ;
  void **tmp___1 ;
  void **tmp___2 ;

  {
  if (stack->top + 3 > stack->max) {
    stack->max *= 2;
    stack->max += 3;
    tmp = _erealloc((void *)stack->elements,
                    (unsigned int )(sizeof(void *) * (unsigned long )((unsigned int )stack->max)),
                    0);
    stack->elements = (void **)tmp;
    stack->top_element = stack->elements + stack->top;
  }
  stack->top += 3;
  tmp___0 = stack->top_element;
  (stack->top_element) ++;
  *tmp___0 = a;
  tmp___1 = stack->top_element;
  (stack->top_element) ++;
  *tmp___1 = b;
  tmp___2 = stack->top_element;
  (stack->top_element) ++;
  *tmp___2 = c;
  return;
}
}

__inline static void zend_ptr_stack_2_push(zend_ptr_stack *stack , void *a ,
                                           void *b ) 
{ void *tmp ;
  void **tmp___0 ;
  void **tmp___1 ;

  {
  if (stack->top + 2 > stack->max) {
    stack->max *= 2;
    stack->max += 2;
    tmp = _erealloc((void *)stack->elements,
                    (unsigned int )(sizeof(void *) * (unsigned long )((unsigned int )stack->max)),
                    0);
    stack->elements = (void **)tmp;
    stack->top_element = stack->elements + stack->top;
  }
  stack->top += 2;
  tmp___0 = stack->top_element;
  (stack->top_element) ++;
  *tmp___0 = a;
  tmp___1 = stack->top_element;
  (stack->top_element) ++;
  *tmp___1 = b;
  return;
}
}

__inline static void zend_ptr_stack_3_pop(zend_ptr_stack *stack , void **a ,
                                          void **b , void **c ) 
{ 

  {
  (stack->top_element) --;
  *a = *(stack->top_element);
  (stack->top_element) --;
  *b = *(stack->top_element);
  (stack->top_element) --;
  *c = *(stack->top_element);
  stack->top -= 3;
  return;
}
}

__inline static void zend_ptr_stack_2_pop(zend_ptr_stack *stack , void **a ,
                                          void **b ) 
{ 

  {
  (stack->top_element) --;
  *a = *(stack->top_element);
  (stack->top_element) --;
  *b = *(stack->top_element);
  stack->top -= 2;
  return;
}
}

__inline static void zend_ptr_stack_push(zend_ptr_stack *stack , void *ptr ) 
{ void *tmp ;
  void **tmp___0 ;

  {
  if (stack->top + 1 > stack->max) {
    stack->max *= 2;
    (stack->max) ++;
    tmp = _erealloc((void *)stack->elements,
                    (unsigned int )(sizeof(void *) * (unsigned long )((unsigned int )stack->max)),
                    0);
    stack->elements = (void **)tmp;
    stack->top_element = stack->elements + stack->top;
  }
  (stack->top) ++;
  tmp___0 = stack->top_element;
  (stack->top_element) ++;
  *tmp___0 = ptr;
  return;
}
}

__inline static void *zend_ptr_stack_pop(zend_ptr_stack *stack ) 
{ 

  {
  (stack->top) --;
  (stack->top_element) --;
  return (*(stack->top_element));
}
}

extern void zend_object_std_init(zend_object *object , zend_class_entry *ce ) ;

extern void zend_object_std_dtor(zend_object *object ) ;

extern zend_object_value zend_objects_new(zend_object **object ,
                                          zend_class_entry *class_type ) ;

extern void zend_objects_destroy_object(zend_object *object ,
                                        zend_object_handle handle ) ;

extern zend_object *zend_objects_get_address(zval *object ) ;

extern void zend_objects_clone_members(zend_object *new_object ,
                                       zend_object_value new_obj_val ,
                                       zend_object *old_object ,
                                       zend_object_handle handle ) ;

extern zend_object_value zend_objects_clone_obj(zval *object ) ;

extern void zend_objects_free_object_storage(zend_object *object ) ;

extern void zend_objects_store_init(zend_objects_store *objects ,
                                    zend_uint init_size ) ;

extern void zend_objects_store_call_destructors(zend_objects_store *objects ) ;

extern void zend_objects_store_mark_destructed(zend_objects_store *objects ) ;

extern void zend_objects_store_destroy(zend_objects_store *objects ) ;

extern zend_object_handle zend_objects_store_put(void *object ,
                                                 void (*dtor)(void *object ,
                                                              zend_object_handle handle ) ,
                                                 void (*storage)(void *object ) ,
                                                 void (*clone)(void *object ,
                                                               void **object_clone ) ) ;

extern void zend_objects_store_add_ref(zval *object ) ;

extern void zend_objects_store_del_ref(zval *object ) ;

extern void zend_objects_store_add_ref_by_handle(zend_object_handle handle ) ;

extern void zend_objects_store_del_ref_by_handle(zend_object_handle handle ) ;

extern zend_uint zend_objects_store_get_refcount(zval *object ) ;

extern zend_object_value zend_objects_store_clone_obj(zval *object ) ;

extern void *zend_object_store_get_object(zval *object ) ;

extern void *zend_object_store_get_object_by_handle(zend_object_handle handle ) ;

extern void zend_object_store_set_object(zval *zobject , void *object ) ;

extern void zend_object_store_ctor_failed(zval *zobject ) ;

extern void zend_objects_store_free_object_storage(zend_objects_store *objects ) ;

extern zval *zend_object_create_proxy(zval *object , zval *member ) ;

extern zend_object_handlers *zend_get_std_object_handlers() ;

extern void init_compiler(void) ;

extern void shutdown_compiler(void) ;

extern void zend_init_compiler_data_structures(void) ;

extern zend_op_array *(*zend_compile_file)(zend_file_handle *file_handle ,
                                           int type ) ;

extern zend_op_array *(*zend_compile_string)(zval *source_string ,
                                             char *filename ) ;

extern int lex_scan(zval *zendlval ) ;

extern void startup_scanner(void) ;

extern void shutdown_scanner(void) ;

extern char *zend_set_compiled_filename(char *new_compiled_filename ) ;

extern void zend_restore_compiled_filename(char *original_compiled_filename ) ;

extern char *zend_get_compiled_filename(void) ;

extern int zend_get_compiled_lineno(void) ;

extern int zend_get_scanned_file_offset(void) ;

extern char *zend_get_compiled_variable_name(zend_op_array *op_array ,
                                             zend_uint var , int *name_len ) ;

extern void zend_do_binary_op(zend_uchar op , znode *result , znode *op1 ,
                              znode *op2 ) ;

extern void zend_do_unary_op(zend_uchar op , znode *result , znode *op1 ) ;

extern void zend_do_binary_assign_op(zend_uchar op , znode *result ,
                                     znode *op1 , znode *op2 ) ;

extern void zend_do_assign(znode *result , znode *variable , znode *value ) ;

extern void zend_do_assign_ref(znode *result , znode *lvar , znode *rvar ) ;

extern void fetch_simple_variable(znode *result , znode *varname , int bp ) ;

extern void fetch_simple_variable_ex(znode *result , znode *varname , int bp ,
                                     zend_uchar op ) ;

extern void zend_do_indirect_references(znode *result , znode *num_references ,
                                        znode *variable ) ;

extern void zend_do_fetch_static_variable(znode *varname ,
                                          znode *static_assignment ,
                                          int fetch_type ) ;

extern void zend_do_fetch_global_variable(znode *varname ,
                                          znode *static_assignment ,
                                          int fetch_type ) ;

extern void fetch_array_begin(znode *result , znode *varname , znode *first_dim ) ;

extern void fetch_array_dim(znode *result , znode *parent , znode *dim ) ;

extern void fetch_string_offset(znode *result , znode *parent , znode *offset ) ;

extern void zend_do_fetch_static_member(znode *result , znode *class_znode ) ;

extern void zend_do_print(znode *result , znode *arg ) ;

extern void zend_do_echo(znode *arg ) ;

extern unary_op_type get_unary_op(int opcode ) ;

extern void *get_binary_op(int opcode ) ;

extern void zend_do_while_cond(znode *expr , znode *close_bracket_token ) ;

extern void zend_do_while_end(znode *while_token , znode *close_bracket_token ) ;

extern void zend_do_do_while_begin(void) ;

extern void zend_do_do_while_end(znode *do_token , znode *expr_open_bracket ,
                                 znode *expr ) ;

extern void zend_do_if_cond(znode *cond , znode *closing_bracket_token ) ;

extern void zend_do_if_after_statement(znode *closing_bracket_token ,
                                       unsigned char initialize ) ;

extern void zend_do_if_end(void) ;

extern void zend_do_for_cond(znode *expr , znode *second_semicolon_token ) ;

extern void zend_do_for_before_statement(znode *cond_start ,
                                         znode *second_semicolon_token ) ;

extern void zend_do_for_end(znode *second_semicolon_token ) ;

extern void zend_do_pre_incdec(znode *result , znode *op1 , zend_uchar op ) ;

extern void zend_do_post_incdec(znode *result , znode *op1 , zend_uchar op ) ;

extern void zend_do_begin_variable_parse(void) ;

extern void zend_do_end_variable_parse(int type , int arg_offset ) ;

extern void zend_check_writable_variable(znode *variable ) ;

extern void zend_do_free(znode *op1 ) ;

extern void zend_do_init_string(znode *result ) ;

extern void zend_do_add_char(znode *result , znode *op1 , znode *op2 ) ;

extern void zend_do_add_string(znode *result , znode *op1 , znode *op2 ) ;

extern void zend_do_add_variable(znode *result , znode *op1 , znode *op2 ) ;

extern int zend_do_verify_access_types(znode *current_access_type ,
                                       znode *new_modifier ) ;

extern void zend_do_begin_function_declaration(znode *function_token ,
                                               znode *function_name ,
                                               int is_method ,
                                               int return_reference ,
                                               znode *fn_flags_znode ) ;

extern void zend_do_end_function_declaration(znode *function_token ) ;

extern void zend_do_receive_arg(zend_uchar op , znode *var , znode *offset ,
                                znode *initialization , znode *class_type ,
                                znode *varname , zend_bool pass_by_reference ) ;

extern int zend_do_begin_function_call(znode *function_name ) ;

extern void zend_do_begin_method_call(znode *left_bracket ) ;

extern void zend_do_clone(znode *result , znode *expr ) ;

extern void zend_do_begin_dynamic_function_call(znode *function_name ) ;

extern void zend_do_fetch_class(znode *result , znode *class_name ) ;

extern void zend_do_fetch_class_name(znode *result , znode *class_entry ,
                                     znode *class_name ) ;

extern void zend_do_begin_class_member_function_call(znode *class_name ,
                                                     znode *method_name ) ;

extern void zend_do_end_function_call(znode *function_name , znode *result ,
                                      znode *argument_list , int is_method ,
                                      int is_dynamic_fcall ) ;

extern void zend_do_return(znode *expr , int do_end_vparse ) ;

extern void zend_do_handle_exception(void) ;

extern void zend_do_try(znode *try_token ) ;

extern void zend_do_begin_catch(znode *try_token , znode *catch_class ,
                                znode *catch_var , zend_bool first_catch ) ;

extern void zend_do_end_catch(znode *try_token ) ;

extern void zend_do_throw(znode *expr ) ;

extern int do_bind_function(zend_op *opline , HashTable *function_table ,
                            zend_bool compile_time ) ;

extern zend_class_entry *do_bind_class(zend_op *opline ,
                                       HashTable *class_table ,
                                       zend_bool compile_time ) ;

extern zend_class_entry *do_bind_inherited_class(zend_op *opline ,
                                                 HashTable *class_table ,
                                                 zend_class_entry *parent_ce ,
                                                 zend_bool compile_time ) ;

extern void zend_do_inherit_interfaces(zend_class_entry *ce ,
                                       zend_class_entry *iface ) ;

extern void zend_do_implement_interface(zend_class_entry *ce ,
                                        zend_class_entry *iface ) ;

extern void zend_do_implements_interface(znode *interface_znode ) ;

extern void zend_do_inheritance(zend_class_entry *ce ,
                                zend_class_entry *parent_ce ) ;

extern void zend_do_early_binding(void) ;

extern void zend_do_pass_param(znode *param , zend_uchar op , int offset ) ;

extern void zend_do_boolean_or_begin(znode *expr1 , znode *op_token ) ;

extern void zend_do_boolean_or_end(znode *result , znode *expr1 , znode *expr2 ,
                                   znode *op_token ) ;

extern void zend_do_boolean_and_begin(znode *expr1 , znode *op_token ) ;

extern void zend_do_boolean_and_end(znode *result , znode *expr1 ,
                                    znode *expr2 , znode *op_token ) ;

extern void zend_do_brk_cont(zend_uchar op , znode *expr ) ;

extern void zend_do_switch_cond(znode *cond ) ;

extern void zend_do_switch_end(znode *case_list ) ;

extern void zend_do_case_before_statement(znode *case_list , znode *case_token ,
                                          znode *case_expr ) ;

extern void zend_do_case_after_statement(znode *result , znode *case_token ) ;

extern void zend_do_default_before_statement(znode *case_list ,
                                             znode *default_token ) ;

extern void zend_do_begin_class_declaration(znode *class_token ,
                                            znode *class_name ,
                                            znode *parent_class_name ) ;

extern void zend_do_end_class_declaration(znode *class_token ,
                                          znode *parent_token ) ;

extern void zend_do_declare_property(znode *var_name , znode *value ,
                                     zend_uint access_type ) ;

extern void zend_do_declare_implicit_property(void) ;

extern void zend_do_declare_class_constant(znode *var_name , znode *value ) ;

extern void zend_do_fetch_property(znode *result , znode *object ,
                                   znode *property ) ;

extern void zend_do_push_object(znode *object ) ;

extern void zend_do_pop_object(znode *object ) ;

extern void zend_do_begin_new_object(znode *new_token , znode *class_type ) ;

extern void zend_do_end_new_object(znode *result , znode *new_token ,
                                   znode *argument_list ) ;

extern void zend_do_fetch_constant(znode *result , znode *constant_container ,
                                   znode *constant_name , int mode ) ;

extern void zend_do_shell_exec(znode *result , znode *cmd ) ;

extern void zend_do_init_array(znode *result , znode *expr , znode *offset ,
                               zend_bool is_ref ) ;

extern void zend_do_add_array_element(znode *result , znode *expr ,
                                      znode *offset , zend_bool is_ref ) ;

extern void zend_do_add_static_array_element(znode *result , znode *offset ,
                                             znode *expr ) ;

extern void zend_do_list_init(void) ;

extern void zend_do_list_end(znode *result , znode *expr ) ;

extern void zend_do_add_list_element(znode *element ) ;

extern void zend_do_new_list_begin(void) ;

extern void zend_do_new_list_end(void) ;

extern void zend_do_cast(znode *result , znode *expr , int type ) ;

extern void zend_do_include_or_eval(int type , znode *result , znode *op1 ) ;

extern void zend_do_unset(znode *variable ) ;

extern void zend_do_isset_or_isempty(int type , znode *result , znode *variable ) ;

extern void zend_do_instanceof(znode *result , znode *expr ,
                               znode *class_znode , int type ) ;

extern void zend_do_foreach_begin(znode *foreach_token ,
                                  znode *open_brackets_token , znode *array ,
                                  znode *as_token , int variable ) ;

extern void zend_do_foreach_cont(znode *foreach_token ,
                                 znode *open_brackets_token , znode *as_token ,
                                 znode *value , znode *key ) ;

extern void zend_do_foreach_end(znode *foreach_token , znode *as_token ) ;

extern void zend_do_declare_begin(void) ;

extern void zend_do_declare_stmt(znode *var , znode *val ) ;

extern void zend_do_declare_end(znode *declare_token ) ;

extern void zend_do_end_heredoc(void) ;

extern void zend_do_exit(znode *result , znode *message ) ;

extern void zend_do_begin_silence(znode *strudel_token ) ;

extern void zend_do_end_silence(znode *strudel_token ) ;

extern void zend_do_begin_qm_op(znode *cond , znode *qm_token ) ;

extern void zend_do_qm_true(znode *true_value , znode *qm_token ,
                            znode *colon_token ) ;

extern void zend_do_qm_false(znode *result , znode *false_value ,
                             znode *qm_token , znode *colon_token ) ;

extern void zend_do_extended_info(void) ;

extern void zend_do_extended_fcall_begin(void) ;

extern void zend_do_extended_fcall_end(void) ;

extern void zend_do_ticks(void) ;

extern void zend_do_abstract_method(znode *function_name , znode *modifiers ,
                                    znode *body ) ;

extern void function_add_ref(zend_function *function ) ;

extern zend_op_array *compile_file(zend_file_handle *file_handle , int type ) ;

extern zend_op_array *compile_string(zval *source_string , char *filename ) ;

extern zend_op_array *compile_filename(int type , zval *filename ) ;

extern int zend_execute_scripts(int type , zval **retval , int file_count  , ...) ;

extern int open_file_for_scanning(zend_file_handle *file_handle ) ;

extern void init_op_array(zend_op_array *op_array , zend_uchar type ,
                          int initial_ops_size ) ;

extern void destroy_op_array(zend_op_array *op_array ) ;

extern void zend_destroy_file_handle(zend_file_handle *file_handle ) ;

extern void zend_file_handle_dtor(zend_file_handle *fh ) ;

extern int zend_cleanup_class_data(zend_class_entry **pce ) ;

extern int zend_cleanup_function_data(zend_function *function ) ;

extern int zend_cleanup_function_data_full(zend_function *function ) ;

extern void destroy_zend_function(zend_function *function ) ;

extern void zend_function_dtor(zend_function *function ) ;

extern void destroy_zend_class(zend_class_entry **pce ) ;

extern void zend_class_add_ref(zend_class_entry **ce ) ;

extern void zend_mangle_property_name(char **dest , int *dest_length ,
                                      char *src1 , int src1_length ,
                                      char *src2 , int src2_length ,
                                      int internal ) ;

extern int zend_unmangle_property_name(char *mangled_property ,
                                       int mangled_property_len ,
                                       char **prop_name , char **class_name ) ;

extern zend_op *get_next_op(zend_op_array *op_array ) ;

extern void init_op(zend_op *op ) ;

extern int get_next_op_number(zend_op_array *op_array ) ;

extern int print_class(zend_class_entry *class_entry ) ;

extern void print_op_array(zend_op_array *op_array , int optimizations ) ;

extern int pass_two(zend_op_array *op_array ) ;

extern zend_brk_cont_element *get_next_brk_cont_element(zend_op_array *op_array ) ;

extern void zend_do_first_catch(znode *open_parentheses ) ;

extern void zend_initialize_try_catch_element(znode *try_token ) ;

extern void zend_do_mark_last_catch(znode *first_catch ,
                                    znode *last_additional_catch ) ;

extern zend_bool zend_is_compiling(void) ;

extern char *zend_make_compiled_string_description(char *name ) ;

extern void zend_initialize_class_data(zend_class_entry *ce ,
                                       zend_bool nullify_handlers ) ;

extern int zend_get_class_fetch_type(char *class_name , uint class_name_len ) ;

extern void zend_auto_global_dtor(zend_auto_global *auto_global ) ;

extern int zend_register_auto_global(char *name , uint name_len ,
                                     zend_bool (*auto_global_callback)(char *name ,
                                                                       uint name_len ) ) ;

extern zend_bool zend_is_auto_global(char *name , uint name_len ) ;

extern int zend_auto_global_disable_jit(char *varname ,
                                        zend_uint varname_length ) ;

extern int zendlex(znode *zendlval ) ;

extern struct _zend_arg_info first_arg_force_ref[2] ;

extern struct _zend_arg_info second_arg_force_ref[3] ;

extern struct _zend_arg_info third_arg_force_ref[4] ;

extern struct _zend_arg_info fourth_arg_force_ref[5] ;

extern struct _zend_arg_info fifth_arg_force_ref[6] ;

extern struct _zend_arg_info all_args_by_ref[1] ;

extern HashTable module_registry ;

extern void module_destructor(zend_module_entry *module ) ;

extern int module_registry_cleanup(zend_module_entry *module ) ;

extern int module_registry_request_startup(zend_module_entry *module ) ;

extern int module_registry_unload_temp(zend_module_entry *module ) ;

extern int zend_register_list_destructors(void (*ld)(void * ) ,
                                          void (*pld)(void * ) ,
                                          int module_number ) ;

extern int zend_register_list_destructors_ex(void (*ld)(zend_rsrc_list_entry *rsrc ) ,
                                             void (*pld)(zend_rsrc_list_entry *rsrc ) ,
                                             char *type_name ,
                                             int module_number ) ;

extern void list_entry_destructor(void *ptr ) ;

extern void plist_entry_destructor(void *ptr ) ;

extern void zend_clean_module_rsrc_dtors(int module_number ) ;

extern int zend_init_rsrc_list(void) ;

extern int zend_init_rsrc_plist(void) ;

extern void zend_destroy_rsrc_list(HashTable *ht ) ;

extern int zend_init_rsrc_list_dtors(void) ;

extern void zend_destroy_rsrc_list_dtors(void) ;

extern int zend_list_insert(void *ptr , int type ) ;

extern int _zend_list_addref(int id ) ;

extern int _zend_list_delete(int id ) ;

extern void *_zend_list_find(int id , int *type ) ;

extern int zend_register_resource(zval *rsrc_result , void *rsrc_pointer ,
                                  int rsrc_type ) ;

extern void *zend_fetch_resource(zval **passed_id , int default_id ,
                                 char *resource_type_name ,
                                 int *found_resource_type ,
                                 int num_resource_types  , ...) ;

extern char *zend_rsrc_list_get_rsrc_type(int resource ) ;

extern int zend_fetch_list_dtor_id(char *type_name ) ;

extern int le_index_ptr ;

extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__const__)) ;

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

extern void zend_freedtoa(char *s ) ;

extern char *zend_dtoa(double _d , int mode , int ndigits , int *decpt ,
                       int *sign , char **rve ) ;

extern double zend_strtod(char const   *s00 , char **se ) ;

extern double zend_hex_strtod(char const   *str , char **endptr ) ;

extern int zend_startup_strtod(void) ;

extern int zend_shutdown_strtod(void) ;

static char const   long_min_digits[11]   = 
  {(char const   )'2', (char const   )'1', (char const   )'4',
   (char const   )'7', (char const   )'4', (char const   )'8',
   (char const   )'3', (char const   )'6', (char const   )'4',
   (char const   )'8', (char const   )'\000'};

extern int add_function(zval *result , zval *op1 , zval *op2 ) ;

extern int sub_function(zval *result , zval *op1 , zval *op2 ) ;

extern int mul_function(zval *result , zval *op1 , zval *op2 ) ;

extern int div_function(zval *result , zval *op1 , zval *op2 ) ;

extern int mod_function(zval *result , zval *op1 , zval *op2 ) ;

extern int boolean_xor_function(zval *result , zval *op1 , zval *op2 ) ;

extern int boolean_not_function(zval *result , zval *op1 ) ;

extern int bitwise_not_function(zval *result , zval *op1 ) ;

extern int bitwise_or_function(zval *result , zval *op1 , zval *op2 ) ;

extern int bitwise_and_function(zval *result , zval *op1 , zval *op2 ) ;

extern int bitwise_xor_function(zval *result , zval *op1 , zval *op2 ) ;

extern int shift_left_function(zval *result , zval *op1 , zval *op2 ) ;

extern int shift_right_function(zval *result , zval *op1 , zval *op2 ) ;

extern int concat_function(zval *result , zval *op1 , zval *op2 ) ;

extern int is_equal_function(zval *result , zval *op1 , zval *op2 ) ;

extern int is_identical_function(zval *result , zval *op1 , zval *op2 ) ;

extern int is_not_identical_function(zval *result , zval *op1 , zval *op2 ) ;

extern int is_not_equal_function(zval *result , zval *op1 , zval *op2 ) ;

extern int is_smaller_function(zval *result , zval *op1 , zval *op2 ) ;

extern int is_smaller_or_equal_function(zval *result , zval *op1 , zval *op2 ) ;

extern zend_bool instanceof_function_ex(zend_class_entry *instance_ce ,
                                        zend_class_entry *ce ,
                                        zend_bool interfaces_only ) ;

extern zend_bool instanceof_function(zend_class_entry *instance_ce ,
                                     zend_class_entry *ce ) ;

__inline static zend_uchar is_numeric_string(char const   *str , int length ,
                                             long *lval , double *dval ,
                                             int allow_errors ) 
{ char const   *ptr ;
  int base ;
  int digits ;
  int dp_or_e ;
  double local_dval ;
  zend_uchar type ;
  char const   *e ;
  char const   *tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  int cmp ;
  int tmp___2 ;

  {
  base = 10;
  digits = 0;
  dp_or_e = 0;
  if (! length) {
    return ((unsigned char)0);
  }
  while (1) {
    if (! ((int const   )*str == 32)) {
      if (! ((int const   )*str == 9)) {
        if (! ((int const   )*str == 10)) {
          if (! ((int const   )*str == 13)) {
            if (! ((int const   )*str == 11)) {
              if (! ((int const   )*str == 12)) {
                break;
              }
            }
          }
        }
      }
    }
    str ++;
    length --;
  }
  ptr = str;
  if ((int const   )*ptr == 45) {
    ptr ++;
  } else {
    if ((int const   )*ptr == 43) {
      ptr ++;
    }
  }
  if ((int const   )*ptr >= 48) {
    if ((int const   )*ptr <= 57) {
      if (length > 2) {
        if ((int const   )*str == 48) {
          if ((int const   )*(str + 1) == 120) {
            base = 16;
            ptr += 2;
          } else {
            if ((int const   )*(str + 1) == 88) {
              base = 16;
              ptr += 2;
            }
          }
        }
      }
      while ((int const   )*ptr == 48) {
        ptr ++;
      }
      type = (unsigned char)1;
      while (1) {
        if (digits >= 11) {
          if (dval) {
            break;
          } else {
            if (allow_errors == 1) {
              break;
            }
          }
        }
        check_digits: 
        if ((int const   )*ptr >= 48) {
          if ((int const   )*ptr <= 57) {
            goto __Cont;
          } else {
            goto _L___3;
          }
        } else {
          _L___3: 
          if (base == 16) {
            if ((int const   )*ptr >= 65) {
              if ((int const   )*ptr <= 70) {
                goto __Cont;
              } else {
                goto _L___2;
              }
            } else {
              _L___2: 
              if ((int const   )*ptr >= 97) {
                if ((int const   )*ptr <= 102) {
                  goto __Cont;
                } else {
                  goto _L___1;
                }
              } else {
                goto _L___1;
              }
            }
          } else {
            _L___1: 
            if (base == 10) {
              if ((int const   )*ptr == 46) {
                if (dp_or_e < 1) {
                  goto process_double;
                } else {
                  goto _L___0;
                }
              } else {
                _L___0: 
                if ((int const   )*ptr == 101) {
                  goto _L;
                } else {
                  if ((int const   )*ptr == 69) {
                    _L: 
                    if (dp_or_e < 2) {
                      e = ptr + 1;
                      if ((int const   )*e == 45) {
                        tmp = e;
                        e ++;
                        ptr = tmp;
                      } else {
                        if ((int const   )*e == 43) {
                          tmp = e;
                          e ++;
                          ptr = tmp;
                        }
                      }
                      if ((int const   )*e >= 48) {
                        if ((int const   )*e <= 57) {
                          goto process_double;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        break;
        __Cont: 
        digits ++;
        ptr ++;
      }
      if (base == 10) {
        if (digits >= 11) {
          dp_or_e = -1;
          goto process_double;
        }
      } else {
        if (! (digits < 8)) {
          if (digits == 8) {
            if (! ((int const   )*(ptr + - digits) <= 55)) {
              goto _L___4;
            }
          } else {
            _L___4: 
            if (dval) {
              local_dval = zend_hex_strtod(str, (char **)(& ptr));
            }
            type = (unsigned char)2;
          }
        }
      }
    } else {
      goto _L___5;
    }
  } else {
    _L___5: 
    if ((int const   )*ptr == 46) {
      if ((int const   )*(ptr + 1) >= 48) {
        if ((int const   )*(ptr + 1) <= 57) {
          process_double: 
          type = (unsigned char)2;
          if (dval) {
            local_dval = zend_strtod(str, (char **)(& ptr));
          } else {
            if (allow_errors != 1) {
              if (dp_or_e != -1) {
                tmp___1 = ptr;
                ptr ++;
                if ((int const   )*tmp___1 == 46) {
                  dp_or_e = 1;
                } else {
                  dp_or_e = 2;
                }
                goto check_digits;
              }
            }
          }
        } else {
          return ((unsigned char)0);
        }
      } else {
        return ((unsigned char)0);
      }
    } else {
      return ((unsigned char)0);
    }
  }
  if ((unsigned int )ptr != (unsigned int )(str + length)) {
    if (! allow_errors) {
      return ((unsigned char)0);
    }
    if (allow_errors == -1) {
      zend_error(1 << 3L, "A non well formed numeric value encountered");
    }
  }
  if ((int )type == 1) {
    if (digits == 10) {
      tmp___2 = strcmp(ptr + - digits, long_min_digits);
      cmp = tmp___2;
      if (! (cmp < 0)) {
        if (cmp == 0) {
          if (! ((int const   )*str == 45)) {
            goto _L___6;
          }
        } else {
          _L___6: 
          if (dval) {
            *dval = zend_strtod(str, (char **)((void *)0));
          }
          return ((unsigned char)2);
        }
      }
    }
    if (lval) {
      *lval = strtol((char const   */* __restrict  */)str,
                     (char **/* __restrict  */)((char **)((void *)0)), base);
    }
    return ((unsigned char)1);
  } else {
    if (dval) {
      *dval = local_dval;
    }
    return ((unsigned char)2);
  }
}
}

__inline static char *zend_memnstr(char *haystack , char *needle ,
                                   int needle_len , char *end ) 
{ char *p ;
  char ne ;
  int tmp ;
  void *tmp___0 ;

  {
  p = haystack;
  ne = *(needle + (needle_len - 1));
  end -= needle_len;
  while ((unsigned int )p <= (unsigned int )end) {
    tmp___0 = memchr((void const   *)p, (int )*needle,
                     (unsigned int )((end - p) + 1));
    p = (char *)tmp___0;
    if (p) {
      if ((int )ne == (int )*(p + (needle_len - 1))) {
        tmp = memcmp((void const   *)needle, (void const   *)p,
                     (unsigned int )(needle_len - 1));
        if (! tmp) {
          return (p);
        }
      }
    }
    if ((unsigned int )p == (unsigned int )((void *)0)) {
      return ((char *)((void *)0));
    }
    p ++;
  }
  return ((char *)((void *)0));
}
}

__inline static void *zend_memrchr(void const   *s , int c , size_t n ) 
{ register unsigned char *e ;

  {
  if (n <= 0U) {
    return ((void *)0);
  }
  e = ((unsigned char *)s + n) - 1;
  while ((unsigned int )e >= (unsigned int )((unsigned char *)s)) {
    if ((int )*e == (int )((unsigned char )c)) {
      return ((void *)e);
    }
    e --;
  }
  return ((void *)0);
}
}

extern int increment_function(zval *op1 ) ;

extern int decrement_function(zval *op2 ) ;

extern void convert_scalar_to_number(zval *op ) ;

extern void _convert_to_string(zval *op ) ;

extern void convert_to_long(zval *op ) ;

extern void convert_to_double(zval *op ) ;

extern void convert_to_long_base(zval *op , int base ) ;

extern void convert_to_null(zval *op ) ;

extern void convert_to_boolean(zval *op ) ;

extern void convert_to_array(zval *op ) ;

extern void convert_to_object(zval *op ) ;

extern void multi_convert_to_long_ex(int argc  , ...) ;

extern void multi_convert_to_double_ex(int argc  , ...) ;

extern void multi_convert_to_string_ex(int argc  , ...) ;

extern int add_char_to_string(zval *result , zval *op1 , zval *op2 ) ;

extern int add_string_to_string(zval *result , zval *op1 , zval *op2 ) ;

extern double zend_string_to_double(char const   *number , zend_uint length ) ;

extern int zval_is_true(zval *op ) ;

extern int compare_function(zval *result , zval *op1 , zval *op2 ) ;

extern int numeric_compare_function(zval *result , zval *op1 , zval *op2 ) ;

extern int string_compare_function(zval *result , zval *op1 , zval *op2 ) ;

extern int string_locale_compare_function(zval *result , zval *op1 , zval *op2 ) ;

extern void zend_str_tolower(char *str , unsigned int length ) ;

extern char *zend_str_tolower_copy(char *dest , char const   *source ,
                                   unsigned int length ) ;

__inline static char *zend_str_tolower_dup(char const   *source ,
                                           unsigned int length ) 
{ void *tmp ;
  char *tmp___0 ;

  {
  tmp = _emalloc(length + 1U);
  tmp___0 = zend_str_tolower_copy((char *)tmp, source, length);
  return (tmp___0);
}
}

extern int zend_binary_zval_strcmp(zval *s1 , zval *s2 ) ;

extern int zend_binary_zval_strncmp(zval *s1 , zval *s2 , zval *s3 ) ;

extern int zend_binary_zval_strcasecmp(zval *s1 , zval *s2 ) ;

extern int zend_binary_zval_strncasecmp(zval *s1 , zval *s2 , zval *s3 ) ;

extern int zend_binary_strcmp(char *s1 , uint len1 , char *s2 , uint len2 ) ;

extern int zend_binary_strncmp(char *s1 , uint len1 , char *s2 , uint len2 ,
                               uint length ) ;

extern int zend_binary_strcasecmp(char *s1 , uint len1 , char *s2 , uint len2 ) ;

extern int zend_binary_strncasecmp(char *s1 , uint len1 , char *s2 , uint len2 ,
                                   uint length ) ;

extern void zendi_smart_strcmp(zval *result , zval *s1 , zval *s2 ) ;

extern void zend_compare_symbol_tables(zval *result , HashTable *ht1 ,
                                       HashTable *ht2 ) ;

extern void zend_compare_arrays(zval *result , zval *a1 , zval *a2 ) ;

extern void zend_compare_objects(zval *result , zval *o1 , zval *o2 ) ;

extern int zend_atoi(char const   *str , int str_len ) ;

extern void zend_locale_sprintf_double(zval *op ) ;

extern void (*zend_execute)(zend_op_array *op_array ) ;

extern void (*zend_execute_internal)(zend_execute_data *execute_data_ptr ,
                                     int return_value_used ) ;

extern void init_executor(void) ;

extern void shutdown_executor(void) ;

extern void shutdown_destructors(void) ;

extern void execute(zend_op_array *op_array ) ;

extern void execute_internal(zend_execute_data *execute_data_ptr ,
                             int return_value_used ) ;

extern int zend_is_true(zval *op ) ;

__inline static void safe_free_zval_ptr_rel(zval *p ) 
{ 

  {
  if ((unsigned int )p != (unsigned int )executor_globals.uninitialized_zval_ptr) {
    _efree((void *)p);
  }
  return;
}
}

extern int zend_lookup_class(char *name , int name_length ,
                             zend_class_entry ***ce ) ;

extern int zend_lookup_class_ex(char *name , int name_length ,
                                int use_autoload , zend_class_entry ***ce ) ;

extern int zend_eval_string(char *str , zval *retval_ptr , char *string_name ) ;

extern int zend_eval_string_ex(char *str , zval *retval_ptr ,
                               char *string_name , int handle_exceptions ) ;

__inline static int i_zend_is_true(zval *op ) 
{ int result ;
  int tmp ;
  int tmp___0 ;
  zval tmp___1 ;
  int tmp___2 ;
  zval *tmp___3 ;
  zval *tmp___4 ;
  HashTable *tmp___5 ;
  int tmp___6 ;
  HashTable *tmp___7 ;
  int tmp___8 ;

  {
  switch ((int )op->type) {
  case 0: 
  result = 0;
  break;
  case 1: 
  case 3: 
  case 7: 
  if (op->value.lval) {
    result = 1;
  } else {
    result = 0;
  }
  break;
  case 2: 
  if (op->value.dval) {
    result = 1;
  } else {
    result = 0;
  }
  break;
  case 6: 
  if (op->value.str.len == 0) {
    result = 0;
  } else {
    if (op->value.str.len == 1) {
      if ((int )*(op->value.str.val + 0) == 48) {
        result = 0;
      } else {
        result = 1;
      }
    } else {
      result = 1;
    }
  }
  break;
  case 4: 
  tmp___0 = zend_hash_num_elements(op->value.ht);
  if (tmp___0) {
    result = 1;
  } else {
    result = 0;
  }
  break;
  case 5: 
  if ((int )op->type == 5) {
    if ((unsigned int )(op->value.obj.handlers)->get_class_entry != (unsigned int )((void *)0)) {
      if ((op->value.obj.handlers)->cast_object) {
        tmp___2 = (*((op->value.obj.handlers)->cast_object))(op, & tmp___1, 3);
        if (tmp___2 == 0) {
          result = (int )tmp___1.value.lval;
          break;
        }
      } else {
        if ((op->value.obj.handlers)->get) {
          tmp___4 = (*((op->value.obj.handlers)->get))(op);
          tmp___3 = tmp___4;
          if ((int )tmp___3->type != 5) {
            convert_to_boolean(tmp___3);
            result = (int )tmp___3->value.lval;
            _zval_ptr_dtor(& tmp___3);
            break;
          }
        }
      }
      if (executor_globals.ze1_compatibility_mode) {
        tmp___7 = (*((op->value.obj.handlers)->get_properties))(op);
        tmp___8 = zend_hash_num_elements(tmp___7);
        if (tmp___8) {
          result = 1;
        } else {
          result = 0;
        }
      } else {
        result = 1;
      }
    } else {
      result = 1;
    }
  } else {
    result = 1;
  }
  break;
  default: 
  result = 0;
  break;
  }
  return (result);
}
}

extern int zval_update_constant(zval **pp , void *arg ) ;

extern int zval_update_constant_ex(zval **pp , void *arg ,
                                   zend_class_entry *scope ) ;

__inline static void zend_ptr_stack_clear_multiple(void) 
{ void **p ;
  int delete_count ;
  zval *q ;

  {
  p = executor_globals.argument_stack.top_element - 2;
  delete_count = (int )((unsigned long )*p);
  executor_globals.argument_stack.top -= delete_count + 2;
  while (1) {
    delete_count --;
    if (! (delete_count >= 0)) {
      break;
    }
    p --;
    q = *((zval **)p);
    *p = (void *)0;
    _zval_ptr_dtor(& q);
  }
  executor_globals.argument_stack.top_element = p;
  return;
}
}

__inline static int zend_ptr_stack_get_arg(int requested_arg , void **data ) 
{ void **p ;
  int arg_count ;

  {
  p = executor_globals.argument_stack.top_element - 2;
  arg_count = (int )((unsigned long )*p);
  if (requested_arg > arg_count) {
    return (-1);
  }
  *data = (void *)(((p - arg_count) + requested_arg) - 1);
  return (0);
}
}

extern void execute_new_code(void) ;

extern char *get_active_class_name(char **space ) ;

extern char *get_active_function_name(void) ;

extern char *zend_get_executed_filename(void) ;

extern uint zend_get_executed_lineno(void) ;

extern zend_bool zend_is_executing(void) ;

extern void zend_set_timeout(long seconds ) ;

extern void zend_unset_timeout(void) ;

extern void zend_timeout(int dummy ) ;

extern zend_class_entry *zend_fetch_class(char *class_name ,
                                          uint class_name_len , int fetch_type ) ;

extern void zend_verify_abstract_class(zend_class_entry *ce ) ;

extern zval **zend_get_compiled_variable_value(zend_execute_data *execute_data_ptr ,
                                               zend_uint var ) ;

extern int zend_set_user_opcode_handler(zend_uchar opcode ,
                                        int (*handler)(zend_execute_data *execute_data ) ) ;

extern opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode ) ;

extern zval *zend_get_zval_ptr(znode *node , temp_variable *Ts ,
                               zend_free_op *should_free , int type ) ;

extern zval **zend_get_zval_ptr_ptr(znode *node , temp_variable *Ts ,
                                    zend_free_op *should_free , int type ) ;

extern int zend_do_fcall(zend_execute_data *execute_data ) ;

extern int zend_next_free_module(void) ;

extern int zend_get_parameters(int ht , int param_count  , ...) ;

extern int _zend_get_parameters_array(int ht , int param_count ,
                                      zval **argument_array ) ;

extern int zend_get_parameters_ex(int param_count  , ...) ;

extern int _zend_get_parameters_array_ex(int param_count ,
                                         zval ***argument_array ) ;

extern int zend_copy_parameters_array(int param_count , zval *argument_array ) ;

extern int zend_parse_parameters(int num_args , char *type_spec  , ...) ;

extern int zend_parse_parameters_ex(int flags , int num_args , char *type_spec 
                                    , ...) ;

extern char *zend_zval_type_name(zval *arg ) ;

extern int zend_parse_method_parameters(int num_args , zval *this_ptr ,
                                        char *type_spec  , ...) ;

extern int zend_parse_method_parameters_ex(int flags , int num_args ,
                                           zval *this_ptr , char *type_spec 
                                           , ...) ;

extern int zend_register_functions(zend_class_entry *scope ,
                                   zend_function_entry *functions ,
                                   HashTable *function_table , int type ) ;

extern void zend_unregister_functions(zend_function_entry *functions ,
                                      int count , HashTable *function_table ) ;

extern int zend_startup_module(zend_module_entry *module_entry ) ;

extern zend_module_entry *zend_register_internal_module(zend_module_entry *module_entry ) ;

extern zend_module_entry *zend_register_module_ex(zend_module_entry *module ) ;

extern int zend_startup_module_ex(zend_module_entry *module ) ;

extern int zend_startup_modules(void) ;

extern void zend_check_magic_method_implementation(zend_class_entry *ce ,
                                                   zend_function *fptr ,
                                                   int error_type ) ;

extern zend_class_entry *zend_register_internal_class(zend_class_entry *class_entry ) ;

extern zend_class_entry *zend_register_internal_class_ex(zend_class_entry *class_entry ,
                                                         zend_class_entry *parent_ce ,
                                                         char *parent_name ) ;

extern zend_class_entry *zend_register_internal_interface(zend_class_entry *orig_class_entry ) ;

extern void zend_class_implements(zend_class_entry *class_entry ,
                                  int num_interfaces  , ...) ;

extern int zend_disable_function(char *function_name ,
                                 uint function_name_length ) ;

extern int zend_disable_class(char *class_name , uint class_name_length ) ;

extern void zend_wrong_param_count(void) ;

extern zend_bool zend_is_callable_ex(zval *callable , uint check_flags ,
                                     char **callable_name ,
                                     int *callable_name_len ,
                                     zend_class_entry **ce_ptr ,
                                     zend_function **fptr_ptr ,
                                     zval ***zobj_ptr_ptr ) ;

extern zend_bool zend_is_callable(zval *callable , uint check_flags ,
                                  char **callable_name ) ;

extern zend_bool zend_make_callable(zval *callable , char **callable_name ) ;

extern char *zend_get_module_version(char *module_name ) ;

extern int zend_get_module_started(char *module_name ) ;

extern int zend_declare_property(zend_class_entry *ce , char *name ,
                                 int name_length , zval *property ,
                                 int access_type ) ;

extern int zend_declare_property_ex(zend_class_entry *ce , char *name ,
                                    int name_length , zval *property ,
                                    int access_type , char *doc_comment ,
                                    int doc_comment_len ) ;

extern int zend_declare_property_null(zend_class_entry *ce , char *name ,
                                      int name_length , int access_type ) ;

extern int zend_declare_property_bool(zend_class_entry *ce , char *name ,
                                      int name_length , long value ,
                                      int access_type ) ;

extern int zend_declare_property_long(zend_class_entry *ce , char *name ,
                                      int name_length , long value ,
                                      int access_type ) ;

extern int zend_declare_property_double(zend_class_entry *ce , char *name ,
                                        int name_length , double value ,
                                        int access_type ) ;

extern int zend_declare_property_string(zend_class_entry *ce , char *name ,
                                        int name_length , char *value ,
                                        int access_type ) ;

extern int zend_declare_property_stringl(zend_class_entry *ce , char *name ,
                                         int name_length , char *value ,
                                         int value_len , int access_type ) ;

extern int zend_declare_class_constant(zend_class_entry *ce , char *name ,
                                       size_t name_length , zval *value ) ;

extern int zend_declare_class_constant_null(zend_class_entry *ce , char *name ,
                                            size_t name_length ) ;

extern int zend_declare_class_constant_long(zend_class_entry *ce , char *name ,
                                            size_t name_length , long value ) ;

extern int zend_declare_class_constant_bool(zend_class_entry *ce , char *name ,
                                            size_t name_length ,
                                            zend_bool value ) ;

extern int zend_declare_class_constant_double(zend_class_entry *ce ,
                                              char *name , size_t name_length ,
                                              double value ) ;

extern int zend_declare_class_constant_stringl(zend_class_entry *ce ,
                                               char *name , size_t name_length ,
                                               char *value ,
                                               size_t value_length ) ;

extern int zend_declare_class_constant_string(zend_class_entry *ce ,
                                              char *name , size_t name_length ,
                                              char *value ) ;

extern void zend_update_class_constants(zend_class_entry *class_type ) ;

extern void zend_update_property(zend_class_entry *scope , zval *object ,
                                 char *name , int name_length , zval *value ) ;

extern void zend_update_property_null(zend_class_entry *scope , zval *object ,
                                      char *name , int name_length ) ;

extern void zend_update_property_bool(zend_class_entry *scope , zval *object ,
                                      char *name , int name_length , long value ) ;

extern void zend_update_property_long(zend_class_entry *scope , zval *object ,
                                      char *name , int name_length , long value ) ;

extern void zend_update_property_double(zend_class_entry *scope , zval *object ,
                                        char *name , int name_length ,
                                        double value ) ;

extern void zend_update_property_string(zend_class_entry *scope , zval *object ,
                                        char *name , int name_length ,
                                        char *value ) ;

extern void zend_update_property_stringl(zend_class_entry *scope ,
                                         zval *object , char *name ,
                                         int name_length , char *value ,
                                         int value_length ) ;

extern int zend_update_static_property(zend_class_entry *scope , char *name ,
                                       int name_length , zval *value ) ;

extern int zend_update_static_property_null(zend_class_entry *scope ,
                                            char *name , int name_length ) ;

extern int zend_update_static_property_bool(zend_class_entry *scope ,
                                            char *name , int name_length ,
                                            long value ) ;

extern int zend_update_static_property_long(zend_class_entry *scope ,
                                            char *name , int name_length ,
                                            long value ) ;

extern int zend_update_static_property_double(zend_class_entry *scope ,
                                              char *name , int name_length ,
                                              double value ) ;

extern int zend_update_static_property_string(zend_class_entry *scope ,
                                              char *name , int name_length ,
                                              char *value ) ;

extern int zend_update_static_property_stringl(zend_class_entry *scope ,
                                               char *name , int name_length ,
                                               char *value , int value_length ) ;

extern zval *zend_read_property(zend_class_entry *scope , zval *object ,
                                char *name , int name_length , zend_bool silent ) ;

extern zval *zend_read_static_property(zend_class_entry *scope , char *name ,
                                       int name_length , zend_bool silent ) ;

extern zend_class_entry *zend_get_class_entry(zval *zobject ) ;

extern int zend_get_object_classname(zval *object , char **class_name ,
                                     zend_uint *class_name_len ) ;

extern char *zend_get_type_by_const(int type ) ;

extern int _array_init(zval *arg ) ;

extern int _object_init(zval *arg ) ;

extern int _object_init_ex(zval *arg , zend_class_entry *ce ) ;

extern int _object_and_properties_init(zval *arg , zend_class_entry *ce ,
                                       HashTable *properties ) ;

extern void zend_merge_properties(zval *obj , HashTable *properties ,
                                  int destroy_ht ) ;

extern int add_assoc_function(zval *arg , char *key ,
                              void (*function_ptr)(int ht , zval *return_value ,
                                                   zval **return_value_ptr ,
                                                   zval *this_ptr ,
                                                   int return_value_used ) ) ;

extern int add_assoc_long_ex(zval *arg , char *key , uint key_len , long n ) ;

extern int add_assoc_null_ex(zval *arg , char *key , uint key_len ) ;

extern int add_assoc_bool_ex(zval *arg , char *key , uint key_len , int b ) ;

extern int add_assoc_resource_ex(zval *arg , char *key , uint key_len , int r ) ;

extern int add_assoc_double_ex(zval *arg , char *key , uint key_len , double d ) ;

extern int add_assoc_string_ex(zval *arg , char *key , uint key_len ,
                               char *str , int duplicate ) ;

extern int add_assoc_stringl_ex(zval *arg , char *key , uint key_len ,
                                char *str , uint length , int duplicate ) ;

extern int add_assoc_zval_ex(zval *arg , char *key , uint key_len , zval *value ) ;

extern int add_index_long(zval *arg , ulong idx , long n ) ;

extern int add_index_null(zval *arg , ulong idx ) ;

extern int add_index_bool(zval *arg , ulong idx , int b ) ;

extern int add_index_resource(zval *arg , ulong idx , int r ) ;

extern int add_index_double(zval *arg , ulong idx , double d ) ;

extern int add_index_string(zval *arg , ulong idx , char *str , int duplicate ) ;

extern int add_index_stringl(zval *arg , ulong idx , char *str , uint length ,
                             int duplicate ) ;

extern int add_index_zval(zval *arg , ulong index , zval *value ) ;

extern int add_next_index_long(zval *arg , long n ) ;

extern int add_next_index_null(zval *arg ) ;

extern int add_next_index_bool(zval *arg , int b ) ;

extern int add_next_index_resource(zval *arg , int r ) ;

extern int add_next_index_double(zval *arg , double d ) ;

extern int add_next_index_string(zval *arg , char *str , int duplicate ) ;

extern int add_next_index_stringl(zval *arg , char *str , uint length ,
                                  int duplicate ) ;

extern int add_next_index_zval(zval *arg , zval *value ) ;

extern int add_get_assoc_string_ex(zval *arg , char *key , uint key_len ,
                                   char *str , void **dest , int duplicate ) ;

extern int add_get_assoc_stringl_ex(zval *arg , char *key , uint key_len ,
                                    char *str , uint length , void **dest ,
                                    int duplicate ) ;

extern int add_get_index_long(zval *arg , ulong idx , long l , void **dest ) ;

extern int add_get_index_double(zval *arg , ulong idx , double d , void **dest ) ;

extern int add_get_index_string(zval *arg , ulong idx , char *str ,
                                void **dest , int duplicate ) ;

extern int add_get_index_stringl(zval *arg , ulong idx , char *str ,
                                 uint length , void **dest , int duplicate ) ;

extern int add_property_long_ex(zval *arg , char *key , uint key_len , long l ) ;

extern int add_property_null_ex(zval *arg , char *key , uint key_len ) ;

extern int add_property_bool_ex(zval *arg , char *key , uint key_len , int b ) ;

extern int add_property_resource_ex(zval *arg , char *key , uint key_len ,
                                    long r ) ;

extern int add_property_double_ex(zval *arg , char *key , uint key_len ,
                                  double d ) ;

extern int add_property_string_ex(zval *arg , char *key , uint key_len ,
                                  char *str , int duplicate ) ;

extern int add_property_stringl_ex(zval *arg , char *key , uint key_len ,
                                   char *str , uint length , int duplicate ) ;

extern int add_property_zval_ex(zval *arg , char *key , uint key_len ,
                                zval *value ) ;

extern int call_user_function(HashTable *function_table , zval **object_pp ,
                              zval *function_name , zval *retval_ptr ,
                              zend_uint param_count , zval **params ) ;

extern int call_user_function_ex(HashTable *function_table , zval **object_pp ,
                                 zval *function_name , zval **retval_ptr_ptr ,
                                 zend_uint param_count , zval ***params ,
                                 int no_separation , HashTable *symbol_table ) ;

extern zend_fcall_info_cache empty_fcall_info_cache ;

extern int zend_fcall_info_init(zval *callable , zend_fcall_info *fci ,
                                zend_fcall_info_cache *fcc ) ;

extern int zend_fcall_info_args(zend_fcall_info *fci , zval *args ) ;

extern int zend_fcall_info_call(zend_fcall_info *fci ,
                                zend_fcall_info_cache *fcc , zval **retval ,
                                zval *args ) ;

extern int zend_call_function(zend_fcall_info *fci ,
                              zend_fcall_info_cache *fci_cache ) ;

extern int zend_set_hash_symbol(zval *symbol , char *name , int name_length ,
                                zend_bool is_ref , int num_symbol_tables  , ...) ;

extern int zend_delete_global_variable(char *name , int name_len ) ;

extern void zend_reset_all_cv(HashTable *symbol_table ) ;

extern void zif_display_disabled_function(int ht , zval *return_value ,
                                          zval **return_value_ptr ,
                                          zval *this_ptr ,
                                          int return_value_used ) ;

extern void zif_display_disabled_class(int ht , zval *return_value ,
                                       zval **return_value_ptr ,
                                       zval *this_ptr , int return_value_used ) ;

extern int php_regcomp(regex_t * , char const   * , int  ) ;

extern size_t php_regerror(int  , regex_t const   * , char * , size_t  ) ;

extern int php_regexec(regex_t const   * , char const   * , size_t  ,
                       regmatch_t * , int  ) ;

extern void php_regfree(regex_t * ) ;

extern size_t php_strlcpy(char *dst , char const   *src , size_t siz ) ;

extern size_t php_strlcat(char *dst , char const   *src , size_t siz ) ;

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

extern int php_checkuid(char const   *filename , char const   *fopen_mode ,
                        int mode ) ;

extern int php_checkuid_ex(char const   *filename , char const   *fopen_mode ,
                           int mode , int flags ) ;

extern char *php_get_current_user(void) ;

extern void setpwent(void) ;

extern void endpwent(void) ;

extern struct passwd *getpwent(void) ;

extern struct passwd *fgetpwent(FILE *__stream ) ;

extern int putpwent(struct passwd  const  * __restrict  __p ,
                    FILE * __restrict  __f ) ;

extern struct passwd *getpwuid(__uid_t __uid ) ;

extern struct passwd *getpwnam(char const   *__name ) ;

extern int getpwent_r(struct passwd * __restrict  __resultbuf ,
                      char * __restrict  __buffer , size_t __buflen ,
                      struct passwd ** __restrict  __result ) ;

extern int getpwuid_r(__uid_t __uid , struct passwd * __restrict  __resultbuf ,
                      char * __restrict  __buffer , size_t __buflen ,
                      struct passwd ** __restrict  __result ) ;

extern int getpwnam_r(char const   * __restrict  __name ,
                      struct passwd * __restrict  __resultbuf ,
                      char * __restrict  __buffer , size_t __buflen ,
                      struct passwd ** __restrict  __result ) ;

extern int fgetpwent_r(FILE * __restrict  __stream ,
                       struct passwd * __restrict  __resultbuf ,
                       char * __restrict  __buffer , size_t __buflen ,
                       struct passwd ** __restrict  __result ) ;

extern int ap_php_snprintf(char * , size_t  , char const   *  , ...) ;

extern int ap_php_vsnprintf(char * , size_t  , char const   * , va_list ap ) ;

extern int php_sprintf(char *s , char const   *format  , ...) ;

extern char *php_gcvt(double value , int ndigit , char dec_point ,
                      char exponent , char *buf ) ;

extern char *php_conv_fp(char format , double num , boolean_e add_dp ,
                         int precision , char dec_point ,
                         bool_int *is_negative , char *buf , int *len ) ;

extern char *ap_php_conv_10(wide_int num , bool_int is_unsigned ,
                            bool_int *is_negative , char *buf_end , int *len ) ;

extern char *ap_php_conv_p2(u_wide_int num , int nbits , char format ,
                            char *buf_end , int *len ) ;

extern int spprintf(char **pbuf , size_t max_len , char const   *format  , ...) ;

extern int vspprintf(char **pbuf , size_t max_len , char const   *format ,
                     va_list ap ) ;

extern char **environ ;

extern void phperror(char *error ) ;

extern int php_write(void *buf , uint size ) ;

extern int php_printf(char const   *format  , ...) ;

extern void php_log_err(char *log_message ) ;

extern int Debug(char *format  , ...) ;

extern int cfgparse(void) ;

extern void php_set_error_handling(error_handling_t error_handling ,
                                   zend_class_entry *exception_class ) ;

extern void php_verror(char const   *docref , char const   *params , int type ,
                       char const   *format , va_list args ) ;

extern void php_error_docref0(char const   *docref , int type ,
                              char const   *format  , ...) ;

extern void php_error_docref1(char const   *docref , char const   *param1 ,
                              int type , char const   *format  , ...) ;

extern void php_error_docref2(char const   *docref , char const   *param1 ,
                              char const   *param2 , int type ,
                              char const   *format  , ...) ;

extern int php_register_internal_extensions(void) ;

extern int php_mergesort(void *base , size_t nmemb , size_t size ,
                         int (*cmp)(void const   * , void const   * ) ) ;

extern void php_register_pre_request_shutdown(void (*func)(void * ) ,
                                              void *userdata ) ;

extern int cfg_get_long(char *varname , long *result ) ;

extern int cfg_get_double(char *varname , double *result ) ;

extern int cfg_get_string(char *varname , char **result ) ;

extern void php_com_initialize(void) ;

extern void php_output_startup(void) ;

extern void php_output_activate(void) ;

extern void php_output_set_status(zend_bool status ) ;

extern void php_output_register_constants(void) ;

extern int php_default_output_func(char const   *str , uint str_len ) ;

extern int php_ub_body_write(char const   *str , uint str_length ) ;

extern int php_ub_body_write_no_header(char const   *str , uint str_length ) ;

extern int php_body_write(char const   *str , uint str_length ) ;

extern int php_header_write(char const   *str , uint str_length ) ;

extern int php_start_ob_buffer(zval *output_handler , uint chunk_size ,
                               zend_bool erase ) ;

extern int php_start_ob_buffer_named(char const   *output_handler_name ,
                                     uint chunk_size , zend_bool erase ) ;

extern void php_end_ob_buffer(zend_bool send_buffer , zend_bool just_flush ) ;

extern void php_end_ob_buffers(zend_bool send_buffer ) ;

extern int php_ob_get_buffer(zval *p ) ;

extern int php_ob_get_length(zval *p ) ;

extern void php_start_implicit_flush(void) ;

extern void php_end_implicit_flush(void) ;

extern char *php_get_output_start_filename(void) ;

extern int php_get_output_start_lineno(void) ;

extern void php_ob_set_internal_handler(void (*internal_output_handler)(char *output ,
                                                                        uint output_len ,
                                                                        char **handled_output ,
                                                                        uint *handled_output_len ,
                                                                        int mode ) ,
                                        uint buffer_size , char *handler_name ,
                                        zend_bool erase ) ;

extern int php_ob_handler_used(char *handler_name ) ;

extern int php_ob_init_conflict(char *handler_new , char *handler_set ) ;

extern void zif_ob_start(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;

extern void zif_ob_flush(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;

extern void zif_ob_clean(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;

extern void zif_ob_end_flush(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) ;

extern void zif_ob_end_clean(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) ;

extern void zif_ob_get_flush(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) ;

extern void zif_ob_get_clean(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) ;

extern void zif_ob_get_contents(int ht , zval *return_value ,
                                zval **return_value_ptr , zval *this_ptr ,
                                int return_value_used ) ;

extern void zif_ob_get_length(int ht , zval *return_value ,
                              zval **return_value_ptr , zval *this_ptr ,
                              int return_value_used ) ;

extern void zif_ob_get_level(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) ;

extern void zif_ob_get_status(int ht , zval *return_value ,
                              zval **return_value_ptr , zval *this_ptr ,
                              int return_value_used ) ;

extern void zif_ob_implicit_flush(int ht , zval *return_value ,
                                  zval **return_value_ptr , zval *this_ptr ,
                                  int return_value_used ) ;

extern void zif_ob_list_handlers(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;

extern php_output_globals output_globals ;

extern void zif_output_add_rewrite_var(int ht , zval *return_value ,
                                       zval **return_value_ptr ,
                                       zval *this_ptr , int return_value_used ) ;

extern void zif_output_reset_rewrite_vars(int ht , zval *return_value ,
                                          zval **return_value_ptr ,
                                          zval *this_ptr ,
                                          int return_value_used ) ;

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

extern  __attribute__((__nothrow__)) int stat(char const   * __restrict  __file ,
                                              struct stat * __restrict  __buf )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int fstat(int __fd , struct stat *__buf )  __attribute__((__nonnull__(2))) ;

extern  __attribute__((__nothrow__)) int lstat(char const   * __restrict  __file ,
                                               struct stat * __restrict  __buf )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int chmod(char const   *__file ,
                                               __mode_t __mode )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int lchmod(char const   *__file ,
                                                __mode_t __mode )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int fchmod(int __fd , __mode_t __mode ) ;

extern  __attribute__((__nothrow__)) __mode_t umask(__mode_t __mask ) ;

extern  __attribute__((__nothrow__)) int mkdir(char const   *__path ,
                                               __mode_t __mode )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int mknod(char const   *__path ,
                                               __mode_t __mode , __dev_t __dev )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int mkfifo(char const   *__path ,
                                                __mode_t __mode )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int __fxstat(int __ver , int __fildes ,
                                                  struct stat *__stat_buf )  __attribute__((__nonnull__(3))) ;

extern  __attribute__((__nothrow__)) int __xstat(int __ver ,
                                                 char const   *__filename ,
                                                 struct stat *__stat_buf )  __attribute__((__nonnull__(2,3))) ;

extern  __attribute__((__nothrow__)) int __lxstat(int __ver ,
                                                  char const   *__filename ,
                                                  struct stat *__stat_buf )  __attribute__((__nonnull__(2,3))) ;

extern  __attribute__((__nothrow__)) int __fxstatat(int __ver , int __fildes ,
                                                    char const   *__filename ,
                                                    struct stat *__stat_buf ,
                                                    int __flag )  __attribute__((__nonnull__(3,4))) ;

extern  __attribute__((__nothrow__)) int __xmknod(int __ver ,
                                                  char const   *__path ,
                                                  __mode_t __mode ,
                                                  __dev_t *__dev )  __attribute__((__nonnull__(2,4))) ;

extern  __attribute__((__nothrow__)) int __xmknodat(int __ver , int __fd ,
                                                    char const   *__path ,
                                                    __mode_t __mode ,
                                                    __dev_t *__dev )  __attribute__((__nonnull__(3,5))) ;

extern int php_file_le_stream(void) ;

extern int php_file_le_pstream(void) ;

extern int php_file_le_stream_filter(void) ;

extern void php_stream_context_free(php_stream_context *context ) ;

extern php_stream_context *php_stream_context_alloc(void) ;

extern int php_stream_context_get_option(php_stream_context *context ,
                                         char const   *wrappername ,
                                         char const   *optionname ,
                                         zval ***optionvalue ) ;

extern int php_stream_context_set_option(php_stream_context *context ,
                                         char const   *wrappername ,
                                         char const   *optionname ,
                                         zval *optionvalue ) ;

extern int php_stream_context_get_link(php_stream_context *context ,
                                       char const   *hostent ,
                                       php_stream **stream ) ;

extern int php_stream_context_set_link(php_stream_context *context ,
                                       char const   *hostent ,
                                       php_stream *stream ) ;

extern int php_stream_context_del_link(php_stream_context *context ,
                                       php_stream *stream ) ;

extern php_stream_notifier *php_stream_notification_alloc(void) ;

extern void php_stream_notification_free(php_stream_notifier *notifier ) ;

extern void php_stream_notification_notify(php_stream_context *context ,
                                           int notifycode , int severity ,
                                           char *xmsg , int xcode ,
                                           size_t bytes_sofar ,
                                           size_t bytes_max , void *ptr ) ;

extern php_stream_context *php_stream_context_set(php_stream *stream ,
                                                  php_stream_context *context ) ;

extern php_stream_bucket *php_stream_bucket_new(php_stream *stream , char *buf ,
                                                size_t buflen , int own_buf ,
                                                int buf_persistent ) ;

extern int php_stream_bucket_split(php_stream_bucket *in ,
                                   php_stream_bucket **left ,
                                   php_stream_bucket **right , size_t length ) ;

extern void php_stream_bucket_delref(php_stream_bucket *bucket ) ;

extern void php_stream_bucket_prepend(php_stream_bucket_brigade *brigade ,
                                      php_stream_bucket *bucket ) ;

extern void php_stream_bucket_append(php_stream_bucket_brigade *brigade ,
                                     php_stream_bucket *bucket ) ;

extern void php_stream_bucket_unlink(php_stream_bucket *bucket ) ;

extern php_stream_bucket *php_stream_bucket_make_writeable(php_stream_bucket *bucket ) ;

extern void _php_stream_filter_prepend(php_stream_filter_chain *chain ,
                                       php_stream_filter *filter ) ;

extern void _php_stream_filter_append(php_stream_filter_chain *chain ,
                                      php_stream_filter *filter ) ;

extern int _php_stream_filter_flush(php_stream_filter *filter , int finish ) ;

extern php_stream_filter *php_stream_filter_remove(php_stream_filter *filter ,
                                                   int call_dtor ) ;

extern void php_stream_filter_free(php_stream_filter *filter ) ;

extern php_stream_filter *_php_stream_filter_alloc(php_stream_filter_ops *fops ,
                                                   void *abstract ,
                                                   int persistent ) ;

extern int php_stream_filter_register_factory(char const   *filterpattern ,
                                              php_stream_filter_factory *factory ) ;

extern int php_stream_filter_unregister_factory(char const   *filterpattern ) ;

extern int php_stream_filter_register_factory_volatile(char const   *filterpattern ,
                                                       php_stream_filter_factory *factory ) ;

extern php_stream_filter *php_stream_filter_create(char const   *filtername ,
                                                   zval *filterparams ,
                                                   int persistent ) ;

extern php_stream *_php_stream_alloc(php_stream_ops *ops , void *abstract ,
                                     char const   *persistent_id ,
                                     char const   *mode ) ;

extern int php_stream_from_persistent_id(char const   *persistent_id ,
                                         php_stream **stream ) ;

extern int _php_stream_free(php_stream *stream , int close_options ) ;

extern int _php_stream_seek(php_stream *stream , off_t offset , int whence ) ;

extern off_t _php_stream_tell(php_stream *stream ) ;

extern size_t _php_stream_read(php_stream *stream , char *buf , size_t count ) ;

extern size_t _php_stream_write(php_stream *stream , char const   *buf ,
                                size_t count ) ;

extern size_t _php_stream_printf(php_stream *stream , char const   *fmt  , ...) ;

extern int _php_stream_eof(php_stream *stream ) ;

extern int _php_stream_getc(php_stream *stream ) ;

extern int _php_stream_putc(php_stream *stream , int c ) ;

extern int _php_stream_flush(php_stream *stream , int closing ) ;

extern char *_php_stream_get_line(php_stream *stream , char *buf ,
                                  size_t maxlen , size_t *returned_len ) ;

extern char *php_stream_get_record(php_stream *stream , size_t maxlen ,
                                   size_t *returned_len , char *delim ,
                                   size_t delim_len ) ;

extern int _php_stream_puts(php_stream *stream , char *buf ) ;

extern int _php_stream_stat(php_stream *stream , php_stream_statbuf *ssb ) ;

extern int _php_stream_stat_path(char *path , int flags ,
                                 php_stream_statbuf *ssb ,
                                 php_stream_context *context ) ;

extern int _php_stream_mkdir(char *path , int mode , int options ,
                             php_stream_context *context ) ;

extern int _php_stream_rmdir(char *path , int options ,
                             php_stream_context *context ) ;

extern php_stream *_php_stream_opendir(char *path , int options ,
                                       php_stream_context *context ) ;

extern php_stream_dirent *_php_stream_readdir(php_stream *dirstream ,
                                              php_stream_dirent *ent ) ;

extern int php_stream_dirent_alphasort(char const   **a , char const   **b ) ;

extern int php_stream_dirent_alphasortr(char const   **a , char const   **b ) ;

extern int _php_stream_scandir(char *dirname , char ***namelist , int flags ,
                               php_stream_context *context ,
                               int (*compare)(char const   **a ,
                                              char const   **b ) ) ;

extern int _php_stream_set_option(php_stream *stream , int option , int value ,
                                  void *ptrparam ) ;

extern int _php_stream_truncate_set_size(php_stream *stream , size_t newsize ) ;

extern size_t _php_stream_copy_to_stream(php_stream *src , php_stream *dest ,
                                         size_t maxlen ) ;

extern size_t _php_stream_copy_to_mem(php_stream *src , char **buf ,
                                      size_t maxlen , int persistent ) ;

extern size_t _php_stream_passthru(php_stream *src ) ;

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

extern int php_stream_xport_register(char *protocol ,
                                     php_stream_transport_factory factory ) ;

extern int php_stream_xport_unregister(char *protocol ) ;

extern php_stream *_php_stream_xport_create(char const   *name , long namelen ,
                                            int options , int flags ,
                                            char const   *persistent_id ,
                                            struct timeval *timeout ,
                                            php_stream_context *context ,
                                            char **error_string ,
                                            int *error_code ) ;

extern int php_stream_xport_bind(php_stream *stream , char const   *name ,
                                 long namelen , char **error_text ) ;

extern int php_stream_xport_connect(php_stream *stream , char const   *name ,
                                    long namelen , int asynchronous ,
                                    struct timeval *timeout ,
                                    char **error_text , int *error_code ) ;

extern int php_stream_xport_listen(php_stream *stream , int backlog ,
                                   char **error_text ) ;

extern int php_stream_xport_accept(php_stream *stream , php_stream **client ,
                                   char **textaddr , int *textaddrlen ,
                                   void **addr , socklen_t *addrlen ,
                                   struct timeval *timeout , char **error_text ) ;

extern int php_stream_xport_get_name(php_stream *stream , int want_peer ,
                                     char **textaddr , int *textaddrlen ,
                                     void **addr , socklen_t *addrlen ) ;

extern int php_stream_xport_recvfrom(php_stream *stream , char *buf ,
                                     size_t buflen , long flags , void **addr ,
                                     socklen_t *addrlen , char **textaddr ,
                                     int *textaddrlen ) ;

extern int php_stream_xport_sendto(php_stream *stream , char const   *buf ,
                                   size_t buflen , long flags , void *addr ,
                                   socklen_t addrlen ) ;

extern int php_stream_xport_shutdown(php_stream *stream , stream_shutdown_t how ) ;

extern int php_stream_xport_crypto_setup(php_stream *stream ,
                                         php_stream_xport_crypt_method_t crypto_method ,
                                         php_stream *session_stream ) ;

extern int php_stream_xport_crypto_enable(php_stream *stream , int activate ) ;

extern HashTable *php_stream_xport_get_hash(void) ;

extern php_stream_transport_factory_func php_stream_generic_socket_factory ;

extern php_stream_ops php_stream_stdio_ops ;

extern php_stream_wrapper php_plain_files_wrapper ;

extern php_stream *_php_stream_fopen(char const   *filename ,
                                     char const   *mode , char **opened_path ,
                                     int options ) ;

extern php_stream *_php_stream_fopen_with_path(char *filename , char *mode ,
                                               char *path , char **opened_path ,
                                               int options ) ;

extern php_stream *_php_stream_fopen_from_file(FILE *file , char const   *mode ) ;

extern php_stream *_php_stream_fopen_from_fd(int fd , char const   *mode ,
                                             char const   *persistent_id ) ;

extern php_stream *_php_stream_fopen_from_pipe(FILE *file , char const   *mode ) ;

extern php_stream *_php_stream_fopen_tmpfile(int dummy ) ;

extern php_stream *_php_stream_fopen_temporary_file(char const   *dir ,
                                                    char const   *pfx ,
                                                    char **opened_path ) ;

extern FILE *_php_stream_open_wrapper_as_file(char *path , char *mode ,
                                              int options , char **opened_path ) ;

extern php_stream_ops php_stream_userspace_ops ;

extern php_stream_ops php_stream_userspace_dir_ops ;

extern char *_php_stream_mmap_range(php_stream *stream , size_t offset ,
                                    size_t length ,
                                    php_stream_mmap_operation_t mode ,
                                    size_t *mapped_len ) ;

extern int _php_stream_mmap_unmap(php_stream *stream ) ;

extern int _php_stream_cast(php_stream *stream , int castas , void **ret ,
                            int show_err ) ;

extern int php_init_stream_wrappers(int module_number ) ;

extern int php_shutdown_stream_wrappers(int module_number ) ;

extern void php_shutdown_stream_hashes(void) ;

extern int zm_deactivate_streams(int type , int module_number ) ;

extern int php_register_url_stream_wrapper(char *protocol ,
                                           php_stream_wrapper *wrapper ) ;

extern int php_unregister_url_stream_wrapper(char *protocol ) ;

extern int php_register_url_stream_wrapper_volatile(char *protocol ,
                                                    php_stream_wrapper *wrapper ) ;

extern int php_unregister_url_stream_wrapper_volatile(char *protocol ) ;

extern php_stream *_php_stream_open_wrapper_ex(char *path , char *mode ,
                                               int options ,
                                               char **opened_path ,
                                               php_stream_context *context ) ;

extern php_stream_wrapper *php_stream_locate_url_wrapper(char const   *path ,
                                                         char **path_for_open ,
                                                         int options ) ;

extern char *php_stream_locate_eol(php_stream *stream , char *buf ,
                                   size_t buf_len ) ;

extern void php_stream_wrapper_log_error(php_stream_wrapper *wrapper ,
                                         int options , char const   *fmt  , ...) ;

extern int _php_stream_make_seekable(php_stream *origstream ,
                                     php_stream **newstream , int flags ) ;

extern HashTable *_php_stream_get_url_stream_wrappers_hash(void) ;

extern HashTable *php_stream_get_url_stream_wrappers_hash_global(void) ;

extern HashTable *_php_get_stream_filters_hash(void) ;

extern HashTable *php_get_stream_filters_hash_global() ;

extern php_stream *_php_stream_memory_create(int mode ) ;

extern php_stream *_php_stream_memory_open(int mode , char *buf , size_t length ) ;

extern char *_php_stream_memory_get_buffer(php_stream *stream , size_t *length ) ;

extern php_stream *_php_stream_temp_create(int mode , size_t max_memory_usage ) ;

extern php_stream *_php_stream_temp_open(int mode , size_t max_memory_usage ,
                                         char *buf , size_t length ) ;

extern php_stream_ops php_stream_memory_ops ;

extern php_stream_ops php_stream_temp_ops ;

extern php_stream_ops php_stream_rfc2397_ops ;

extern php_stream_wrapper php_stream_rfc2397_wrapper ;

extern struct _php_core_globals core_globals ;

extern int php_fopen_primary_script(zend_file_handle *file_handle ) ;

extern char *expand_filepath(char const   *filepath , char *real_path ) ;

extern int php_check_open_basedir(char const   *path ) ;

extern int php_check_open_basedir_ex(char const   *path , int warn ) ;

extern int php_check_specific_open_basedir(char const   *basedir ,
                                           char const   *path ) ;

extern int php_check_safe_mode_include_dir(char const   *path ) ;

extern FILE *php_fopen_with_path(char const   *filename , char const   *mode ,
                                 char const   *path , char **opened_path ) ;

extern int php_is_url(char *path ) ;

extern char *php_strip_url_passwd(char *path ) ;

extern  __attribute__((__nothrow__)) int utime(char const   *__file ,
                                               struct utimbuf  const  *__file_times )  __attribute__((__nonnull__(1))) ;

extern DIR *opendir(char const   *__name )  __attribute__((__nonnull__(1))) ;

extern int closedir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;

extern struct dirent *readdir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;

extern int readdir_r(DIR * __restrict  __dirp ,
                     struct dirent * __restrict  __entry ,
                     struct dirent ** __restrict  __result )  __attribute__((__nonnull__(1,2,3))) ;

extern  __attribute__((__nothrow__)) void rewinddir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) void seekdir(DIR *__dirp , long __pos )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) long telldir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int dirfd(DIR *__dirp )  __attribute__((__nonnull__(1))) ;

extern int scandir(char const   * __restrict  __dir ,
                   struct dirent *** __restrict  __namelist ,
                   int (*__selector)(struct dirent  const  * ) ,
                   int (*__cmp)(void const   * , void const   * ) )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int alphasort(void const   *__e1 ,
                                                   void const   *__e2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) __ssize_t getdirentries(int __fd ,
                                                             char * __restrict  __buf ,
                                                             size_t __nbytes ,
                                                             __off_t * __restrict  __basep )  __attribute__((__nonnull__(2,4))) ;

extern void virtual_cwd_startup(void) ;

extern void virtual_cwd_shutdown(void) ;

extern char *virtual_getcwd_ex(size_t *length ) ;

extern char *virtual_getcwd(char *buf , size_t size ) ;

extern int virtual_chdir(char const   *path ) ;

extern int virtual_chdir_file(char const   *path ,
                              int (*p_chdir)(char const   *path ) ) ;

extern int virtual_filepath(char const   *path , char **filepath ) ;

extern int virtual_filepath_ex(char const   *path , char **filepath ,
                               int (*verify_path)(cwd_state const   * ) ) ;

extern char *virtual_realpath(char const   *path , char *real_path ) ;

extern FILE *virtual_fopen(char const   *path , char const   *mode ) ;

extern int virtual_open(char const   *path , int flags  , ...) ;

extern int virtual_creat(char const   *path , mode_t mode ) ;

extern int virtual_rename(char *oldname , char *newname ) ;

extern int virtual_stat(char const   *path , struct stat *buf ) ;

extern int virtual_lstat(char const   *path , struct stat *buf ) ;

extern int virtual_unlink(char const   *path ) ;

extern int virtual_mkdir(char const   *pathname , mode_t mode ) ;

extern int virtual_rmdir(char const   *pathname ) ;

extern DIR *virtual_opendir(char const   *pathname ) ;

extern FILE *virtual_popen(char const   *command , char const   *type ) ;

extern int virtual_access(char const   *pathname , int mode ) ;

extern int virtual_utime(char const   *filename , struct utimbuf *buf ) ;

extern int virtual_chmod(char const   *filename , mode_t mode ) ;

extern int virtual_chown(char const   *filename , uid_t owner , gid_t group ,
                         int link ) ;

extern int virtual_file_ex(cwd_state *state , char const   *path ,
                           int (*verify_path)(cwd_state const   * ) ,
                           int use_realpath ) ;

extern char *tsrm_realpath(char const   *path , char *real_path ) ;

extern virtual_cwd_globals cwd_globals ;

extern void realpath_cache_clean(void) ;

extern void realpath_cache_del(char const   *path , int path_len ) ;

extern void clean_module_constants(int module_number ) ;

extern void free_zend_constant(zend_constant *c ) ;

extern int zend_startup_constants(void) ;

extern int zend_shutdown_constants(void) ;

extern void zend_register_standard_constants(void) ;

extern void clean_non_persistent_constants(void) ;

extern int zend_get_constant(char *name , uint name_len , zval *result ) ;

extern int zend_get_constant_ex(char *name , uint name_len , zval *result ,
                                zend_class_entry *scope ) ;

extern void zend_register_long_constant(char *name , uint name_len , long lval ,
                                        int flags , int module_number ) ;

extern void zend_register_double_constant(char *name , uint name_len ,
                                          double dval , int flags ,
                                          int module_number ) ;

extern void zend_register_string_constant(char *name , uint name_len ,
                                          char *strval , int flags ,
                                          int module_number ) ;

extern void zend_register_stringl_constant(char *name , uint name_len ,
                                           char *strval , uint strlen ,
                                           int flags , int module_number ) ;

extern int zend_register_constant(zend_constant *c ) ;

extern void zend_copy_constants(HashTable *target , HashTable *sourc ) ;

extern void copy_zend_constant(zend_constant *c ) ;

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

extern char *php_reg_replace(char const   *pattern , char const   *replace ,
                             char const   *string , int icase , int extended ) ;

extern void zif_ereg(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) ;

extern void zif_eregi(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;

extern void zif_eregi_replace(int ht , zval *return_value ,
                              zval **return_value_ptr , zval *this_ptr ,
                              int return_value_used ) ;

extern void zif_ereg_replace(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) ;

extern void zif_split(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;

extern void zif_spliti(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;

extern void zif_sql_regcase(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;

extern int zm_startup_regex(int type , int module_number ) ;

extern int zm_shutdown_regex(int type , int module_number ) ;

extern void zm_info_regex(zend_module_entry *zend_module ) ;

extern  __attribute__((__nothrow__)) wchar_t *wcscpy(wchar_t * __restrict  __dest ,
                                                     wchar_t const   * __restrict  __src ) ;

extern  __attribute__((__nothrow__)) wchar_t *wcsncpy(wchar_t * __restrict  __dest ,
                                                      wchar_t const   * __restrict  __src ,
                                                      size_t __n ) ;

extern  __attribute__((__nothrow__)) wchar_t *wcscat(wchar_t * __restrict  __dest ,
                                                     wchar_t const   * __restrict  __src ) ;

extern  __attribute__((__nothrow__)) wchar_t *wcsncat(wchar_t * __restrict  __dest ,
                                                      wchar_t const   * __restrict  __src ,
                                                      size_t __n ) ;

extern  __attribute__((__nothrow__)) int wcscmp(wchar_t const   *__s1 ,
                                                wchar_t const   *__s2 )  __attribute__((__pure__)) ;

extern  __attribute__((__nothrow__)) int wcsncmp(wchar_t const   *__s1 ,
                                                 wchar_t const   *__s2 ,
                                                 size_t __n )  __attribute__((__pure__)) ;

extern  __attribute__((__nothrow__)) int wcscoll(wchar_t const   *__s1 ,
                                                 wchar_t const   *__s2 ) ;

extern  __attribute__((__nothrow__)) size_t wcsxfrm(wchar_t * __restrict  __s1 ,
                                                    wchar_t const   * __restrict  __s2 ,
                                                    size_t __n ) ;

extern  __attribute__((__nothrow__)) wchar_t *wcschr(wchar_t const   *__wcs ,
                                                     wchar_t __wc )  __attribute__((__pure__)) ;

extern  __attribute__((__nothrow__)) wchar_t *wcsrchr(wchar_t const   *__wcs ,
                                                      wchar_t __wc )  __attribute__((__pure__)) ;

extern  __attribute__((__nothrow__)) size_t wcscspn(wchar_t const   *__wcs ,
                                                    wchar_t const   *__reject )  __attribute__((__pure__)) ;

extern  __attribute__((__nothrow__)) size_t wcsspn(wchar_t const   *__wcs ,
                                                   wchar_t const   *__accept )  __attribute__((__pure__)) ;

extern  __attribute__((__nothrow__)) wchar_t *wcspbrk(wchar_t const   *__wcs ,
                                                      wchar_t const   *__accept )  __attribute__((__pure__)) ;

extern  __attribute__((__nothrow__)) wchar_t *wcsstr(wchar_t const   *__haystack ,
                                                     wchar_t const   *__needle )  __attribute__((__pure__)) ;

extern  __attribute__((__nothrow__)) wchar_t *wcstok(wchar_t * __restrict  __s ,
                                                     wchar_t const   * __restrict  __delim ,
                                                     wchar_t ** __restrict  __ptr ) ;

extern  __attribute__((__nothrow__)) size_t wcslen(wchar_t const   *__s )  __attribute__((__pure__)) ;

extern  __attribute__((__nothrow__)) wchar_t *wmemchr(wchar_t const   *__s ,
                                                      wchar_t __c , size_t __n )  __attribute__((__pure__)) ;

extern  __attribute__((__nothrow__)) int wmemcmp(wchar_t const   * __restrict  __s1 ,
                                                 wchar_t const   * __restrict  __s2 ,
                                                 size_t __n )  __attribute__((__pure__)) ;

extern  __attribute__((__nothrow__)) wchar_t *wmemcpy(wchar_t * __restrict  __s1 ,
                                                      wchar_t const   * __restrict  __s2 ,
                                                      size_t __n ) ;

extern  __attribute__((__nothrow__)) wchar_t *wmemmove(wchar_t *__s1 ,
                                                       wchar_t const   *__s2 ,
                                                       size_t __n ) ;

extern  __attribute__((__nothrow__)) wchar_t *wmemset(wchar_t *__s ,
                                                      wchar_t __c , size_t __n ) ;

extern  __attribute__((__nothrow__)) wint_t btowc(int __c ) ;

extern  __attribute__((__nothrow__)) int wctob(wint_t __c ) ;

extern  __attribute__((__nothrow__)) int mbsinit(mbstate_t const   *__ps )  __attribute__((__pure__)) ;

extern  __attribute__((__nothrow__)) size_t mbrtowc(wchar_t * __restrict  __pwc ,
                                                    char const   * __restrict  __s ,
                                                    size_t __n , mbstate_t *__p ) ;

extern  __attribute__((__nothrow__)) size_t wcrtomb(char * __restrict  __s ,
                                                    wchar_t __wc ,
                                                    mbstate_t * __restrict  __ps ) ;

extern  __attribute__((__nothrow__)) size_t __mbrlen(char const   * __restrict  __s ,
                                                     size_t __n ,
                                                     mbstate_t * __restrict  __ps ) ;

extern  __attribute__((__nothrow__)) size_t mbrlen(char const   * __restrict  __s ,
                                                   size_t __n ,
                                                   mbstate_t * __restrict  __ps ) ;

extern  __attribute__((__nothrow__)) size_t mbsrtowcs(wchar_t * __restrict  __dst ,
                                                      char const   ** __restrict  __src ,
                                                      size_t __len ,
                                                      mbstate_t * __restrict  __ps ) ;

extern  __attribute__((__nothrow__)) size_t wcsrtombs(char * __restrict  __dst ,
                                                      wchar_t const   ** __restrict  __src ,
                                                      size_t __len ,
                                                      mbstate_t * __restrict  __ps ) ;

extern  __attribute__((__nothrow__)) double wcstod(wchar_t const   * __restrict  __nptr ,
                                                   wchar_t ** __restrict  __endptr ) ;

extern  __attribute__((__nothrow__)) long wcstol(wchar_t const   * __restrict  __nptr ,
                                                 wchar_t ** __restrict  __endptr ,
                                                 int __base ) ;

extern  __attribute__((__nothrow__)) unsigned long wcstoul(wchar_t const   * __restrict  __nptr ,
                                                           wchar_t ** __restrict  __endptr ,
                                                           int __base ) ;

extern wint_t fgetwc(__FILE *__stream ) ;

extern wint_t getwc(__FILE *__stream ) ;

extern wint_t getwchar(void) ;

extern wint_t fputwc(wchar_t __wc , __FILE *__stream ) ;

extern wint_t putwc(wchar_t __wc , __FILE *__stream ) ;

extern wint_t putwchar(wchar_t __wc ) ;

extern wchar_t *fgetws(wchar_t * __restrict  __ws , int __n ,
                       __FILE * __restrict  __stream ) ;

extern int fputws(wchar_t const   * __restrict  __ws ,
                  __FILE * __restrict  __stream ) ;

extern wint_t ungetwc(wint_t __wc , __FILE *__stream ) ;

extern  __attribute__((__nothrow__)) size_t wcsftime(wchar_t * __restrict  __s ,
                                                     size_t __maxsize ,
                                                     wchar_t const   * __restrict  __format ,
                                                     struct tm  const  * __restrict  __tp ) ;

extern int zm_activate_filestat(int type , int module_number ) ;

extern int zm_deactivate_filestat(int type , int module_number ) ;

extern void zif_clearstatcache(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;

extern void zif_fileatime(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;

extern void zif_filectime(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;

extern void zif_filegroup(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;

extern void zif_fileinode(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;

extern void zif_filemtime(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;

extern void zif_fileowner(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;

extern void zif_fileperms(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;

extern void zif_filesize(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;

extern void zif_filetype(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;

extern void zif_is_writable(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;

extern void zif_is_readable(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;

extern void zif_is_executable(int ht , zval *return_value ,
                              zval **return_value_ptr , zval *this_ptr ,
                              int return_value_used ) ;

extern void zif_is_file(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;

extern void zif_is_dir(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;

extern void zif_is_link(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;

extern void zif_file_exists(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;

extern void php_if_stat(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;

extern void php_if_lstat(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;

extern void zif_disk_total_space(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;

extern void zif_disk_free_space(int ht , zval *return_value ,
                                zval **return_value_ptr , zval *this_ptr ,
                                int return_value_used ) ;

extern void zif_chown(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;

extern void zif_chgrp(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;

extern void zif_lchown(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;

extern void zif_lchgrp(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;

extern void zif_chmod(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;

extern void zif_touch(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;

extern void php_stat(char const   *filename , php_stat_len filename_length ,
                     int type , zval *return_value ) ;

extern void zend_highlight(zend_syntax_highlighter_ini *syntax_highlighter_ini ) ;

extern void zend_strip(void) ;

extern int highlight_file(char *filename ,
                          zend_syntax_highlighter_ini *syntax_highlighter_ini ) ;

extern int highlight_string(zval *str ,
                            zend_syntax_highlighter_ini *syntax_highlighter_ini ,
                            char *str_name ) ;

extern void zend_html_putc(char c ) ;

extern void zend_html_puts(char const   *s , uint len ) ;

extern zend_syntax_highlighter_ini syntax_highlighter_ini ;

extern int php_url_scanner_activate(void) ;

extern int php_url_scanner_deactivate(void) ;

extern char *url_adapt(char const   *src , size_t srclen , char const   *data ,
                       size_t *newlen ) ;

extern int zm_startup_url_scanner_ex(int type , int module_number ) ;

extern int zm_shutdown_url_scanner_ex(int type , int module_number ) ;

extern int zm_activate_url_scanner_ex(int type , int module_number ) ;

extern int zm_deactivate_url_scanner_ex(int type , int module_number ) ;

extern char *php_url_scanner_adapt_single_url(char const   *url ,
                                              size_t urllen ,
                                              char const   *name ,
                                              char const   *value ,
                                              size_t *newlen ) ;

extern int php_url_scanner_add_var(char *name , int name_len , char *value ,
                                   int value_len , int urlencode ) ;

extern int php_url_scanner_reset_vars(void) ;

extern int php_url_scanner_ex_activate(void) ;

extern int php_url_scanner_ex_deactivate(void) ;

extern zend_module_entry basic_functions_module ;

extern int zm_startup_basic(int type , int module_number ) ;

extern int zm_shutdown_basic(int type , int module_number ) ;

extern int zm_activate_basic(int type , int module_number ) ;

extern int zm_deactivate_basic(int type , int module_number ) ;

extern void zm_info_basic(zend_module_entry *zend_module ) ;

extern void zif_constant(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;

extern void zif_toggle_short_open_tag(int ht , zval *return_value ,
                                      zval **return_value_ptr , zval *this_ptr ,
                                      int return_value_used ) ;

extern void zif_sleep(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;

extern void zif_usleep(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;

extern void zif_time_nanosleep(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;

extern void zif_time_sleep_until(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;

extern void zif_flush(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;

extern void php_inet_ntop(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;

extern void php_inet_pton(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;

extern void zif_ip2long(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;

extern void zif_long2ip(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;

extern void zif_getenv(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;

extern void zif_putenv(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;

extern void zif_getopt(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;

extern void zif_get_current_user(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;

extern void zif_set_time_limit(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;

extern void zif_get_cfg_var(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;

extern void zif_set_magic_quotes_runtime(int ht , zval *return_value ,
                                         zval **return_value_ptr ,
                                         zval *this_ptr , int return_value_used ) ;

extern void zif_get_magic_quotes_runtime(int ht , zval *return_value ,
                                         zval **return_value_ptr ,
                                         zval *this_ptr , int return_value_used ) ;

extern void zif_get_magic_quotes_gpc(int ht , zval *return_value ,
                                     zval **return_value_ptr , zval *this_ptr ,
                                     int return_value_used ) ;

extern void zif_import_request_variables(int ht , zval *return_value ,
                                         zval **return_value_ptr ,
                                         zval *this_ptr , int return_value_used ) ;

extern void zif_error_log(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used ) ;

extern void zif_error_get_last(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;

extern void zif_call_user_func(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;

extern void zif_call_user_func_array(int ht , zval *return_value ,
                                     zval **return_value_ptr , zval *this_ptr ,
                                     int return_value_used ) ;

extern void zif_call_user_method(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;

extern void zif_call_user_method_array(int ht , zval *return_value ,
                                       zval **return_value_ptr ,
                                       zval *this_ptr , int return_value_used ) ;

extern void zif_register_shutdown_function(int ht , zval *return_value ,
                                           zval **return_value_ptr ,
                                           zval *this_ptr ,
                                           int return_value_used ) ;

extern void zif_highlight_file(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;

extern void zif_highlight_string(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;

extern void zif_php_strip_whitespace(int ht , zval *return_value ,
                                     zval **return_value_ptr , zval *this_ptr ,
                                     int return_value_used ) ;

extern void php_get_highlight_struct(zend_syntax_highlighter_ini *syntax_highlighter_ini ) ;

extern void zif_ini_get(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;

extern void zif_ini_get_all(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;

extern void zif_ini_set(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;

extern void zif_ini_restore(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;

extern void zif_get_include_path(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;

extern void zif_set_include_path(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;

extern void zif_restore_include_path(int ht , zval *return_value ,
                                     zval **return_value_ptr , zval *this_ptr ,
                                     int return_value_used ) ;

extern void zif_print_r(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;

extern void zif_fprintf(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;

extern void zif_vfprintf(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;

extern void zif_connection_aborted(int ht , zval *return_value ,
                                   zval **return_value_ptr , zval *this_ptr ,
                                   int return_value_used ) ;

extern void zif_connection_status(int ht , zval *return_value ,
                                  zval **return_value_ptr , zval *this_ptr ,
                                  int return_value_used ) ;

extern void zif_ignore_user_abort(int ht , zval *return_value ,
                                  zval **return_value_ptr , zval *this_ptr ,
                                  int return_value_used ) ;

extern void zif_getservbyname(int ht , zval *return_value ,
                              zval **return_value_ptr , zval *this_ptr ,
                              int return_value_used ) ;

extern void zif_getservbyport(int ht , zval *return_value ,
                              zval **return_value_ptr , zval *this_ptr ,
                              int return_value_used ) ;

extern void zif_getprotobyname(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;

extern void zif_getprotobynumber(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;

extern void php_if_crc32(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;

extern void zif_register_tick_function(int ht , zval *return_value ,
                                       zval **return_value_ptr ,
                                       zval *this_ptr , int return_value_used ) ;

extern void zif_unregister_tick_function(int ht , zval *return_value ,
                                         zval **return_value_ptr ,
                                         zval *this_ptr , int return_value_used ) ;

extern void zif_sys_getloadavg(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;

extern void zif_is_uploaded_file(int ht , zval *return_value ,
                                 zval **return_value_ptr , zval *this_ptr ,
                                 int return_value_used ) ;

extern void zif_move_uploaded_file(int ht , zval *return_value ,
                                   zval **return_value_ptr , zval *this_ptr ,
                                   int return_value_used ) ;

extern void zif_parse_ini_file(int ht , zval *return_value ,
                               zval **return_value_ptr , zval *this_ptr ,
                               int return_value_used ) ;

void zif_str_rot13(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) ;

extern void zif_stream_get_filters(int ht , zval *return_value ,
                                   zval **return_value_ptr , zval *this_ptr ,
                                   int return_value_used ) ;

extern void zif_stream_filter_register(int ht , zval *return_value ,
                                       zval **return_value_ptr ,
                                       zval *this_ptr , int return_value_used ) ;

extern void zif_stream_bucket_make_writeable(int ht , zval *return_value ,
                                             zval **return_value_ptr ,
                                             zval *this_ptr ,
                                             int return_value_used ) ;

extern void zif_stream_bucket_prepend(int ht , zval *return_value ,
                                      zval **return_value_ptr , zval *this_ptr ,
                                      int return_value_used ) ;

extern void zif_stream_bucket_append(int ht , zval *return_value ,
                                     zval **return_value_ptr , zval *this_ptr ,
                                     int return_value_used ) ;

extern void zif_stream_bucket_new(int ht , zval *return_value ,
                                  zval **return_value_ptr , zval *this_ptr ,
                                  int return_value_used ) ;

extern int zm_startup_user_filters(int type , int module_number ) ;

extern int zm_deactivate_user_filters(int type , int module_number ) ;

extern int _php_error_log(int opt_err , char *message , char *opt ,
                          char *headers ) ;

extern php_basic_globals basic_globals ;

extern double php_get_nan() ;

extern double php_get_inf() ;

extern void php_srand(long seed ) ;

extern long php_rand(void) ;

extern void php_mt_srand(php_uint32 seed ) ;

extern php_uint32 php_mt_rand(void) ;

void zif_strspn(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) ;

void zif_strcspn(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;

void zif_str_replace(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) ;

void zif_str_ireplace(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;

void zif_rtrim(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) ;

void zif_trim(int ht , zval *return_value , zval **return_value_ptr ,
              zval *this_ptr , int return_value_used ) ;

void zif_ltrim(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) ;

extern void zif_soundex(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;

extern void zif_levenshtein(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;

void zif_count_chars(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) ;

void zif_wordwrap(int ht , zval *return_value , zval **return_value_ptr ,
                  zval *this_ptr , int return_value_used ) ;

void zif_explode(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;

void zif_implode(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;

void zif_strtok(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) ;

void zif_strtoupper(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) ;

void zif_strtolower(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) ;

void zif_basename(int ht , zval *return_value , zval **return_value_ptr ,
                  zval *this_ptr , int return_value_used ) ;

void zif_dirname(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;

void zif_pathinfo(int ht , zval *return_value , zval **return_value_ptr ,
                  zval *this_ptr , int return_value_used ) ;

void zif_strstr(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) ;

void zif_strpos(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) ;

void zif_stripos(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;

void zif_strrpos(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;

void zif_strripos(int ht , zval *return_value , zval **return_value_ptr ,
                  zval *this_ptr , int return_value_used ) ;

void zif_strrchr(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;

void zif_substr(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) ;

void zif_quotemeta(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) ;

void zif_ucfirst(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;

void zif_ucwords(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;

void zif_strtr(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) ;

void zif_strrev(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) ;

void zif_hebrev(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) ;

void zif_hebrevc(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;

extern void zif_user_sprintf(int ht , zval *return_value ,
                             zval **return_value_ptr , zval *this_ptr ,
                             int return_value_used ) ;

extern void zif_user_printf(int ht , zval *return_value ,
                            zval **return_value_ptr , zval *this_ptr ,
                            int return_value_used ) ;

extern void zif_vprintf(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;

extern void zif_vsprintf(int ht , zval *return_value , zval **return_value_ptr ,
                         zval *this_ptr , int return_value_used ) ;

void zif_addcslashes(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) ;

void zif_addslashes(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) ;

void zif_stripcslashes(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;

void zif_stripslashes(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;

void zif_chr(int ht , zval *return_value , zval **return_value_ptr ,
             zval *this_ptr , int return_value_used ) ;

void zif_ord(int ht , zval *return_value , zval **return_value_ptr ,
             zval *this_ptr , int return_value_used ) ;

void zif_nl2br(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) ;

void zif_setlocale(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) ;

void zif_localeconv(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) ;

void zif_nl_langinfo(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) ;

void zif_stristr(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;

void zif_chunk_split(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) ;

void zif_parse_str(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) ;

void zif_bin2hex(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;

void zif_similar_text(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;

void zif_strip_tags(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) ;

void zif_str_repeat(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) ;

void zif_substr_replace(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;

void zif_strnatcmp(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) ;

void zif_strnatcasecmp(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) ;

void zif_substr_count(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;

void zif_str_pad(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;

void zif_sscanf(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) ;

void zif_str_shuffle(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) ;

void zif_str_word_count(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;

void zif_str_split(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) ;

void zif_strpbrk(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;

void zif_substr_compare(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) ;

void zif_strcoll(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) ;

void zif_money_format(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) ;

int zm_startup_nl_langinfo(int type , int module_number ) ;

extern int strnatcmp_ex(char const   *a , size_t a_len , char const   *b ,
                        size_t b_len , int fold_case ) ;

struct lconv *localeconv_r(struct lconv *out ) ;

char *php_strtoupper(char *s , size_t len ) ;

char *php_strtolower(char *s , size_t len ) ;

char *php_strtr(char *str , int len , char *str_from , char *str_to , int trlen ) ;

char *php_addslashes(char *str , int length , int *new_length , int should_free ) ;

char *php_addslashes_ex(char *str , int length , int *new_length ,
                        int should_free , int ignore_sybase ) ;

char *php_addcslashes(char *str , int length , int *new_length ,
                      int should_free , char *what , int wlength ) ;

void php_stripslashes(char *str , int *len ) ;

void php_stripcslashes(char *str , int *len ) ;

void php_basename(char *s , size_t len , char *suffix , size_t sufflen ,
                  char **p_ret , size_t *p_len ) ;

size_t php_dirname(char *path , size_t len ) ;

char *php_stristr(unsigned char *s , unsigned char *t , size_t s_len ,
                  size_t t_len ) ;

char *php_str_to_str_ex(char *haystack , int length , char *needle ,
                        int needle_len , char *str , int str_len ,
                        int *_new_length , int case_sensitivity ,
                        int *replace_count ) ;

char *php_str_to_str(char *haystack , int length , char *needle ,
                     int needle_len , char *str , int str_len ,
                     int *_new_length ) ;

char *php_trim(char *c , int len , char *what , int what_len ,
               zval *return_value , int mode ) ;

size_t php_strip_tags(char *rbuf , int len , int *stateptr , char *allow ,
                      int allow_len ) ;

size_t php_strip_tags_ex(char *rbuf , int len , int *stateptr , char *allow ,
                         int allow_len , zend_bool allow_tag_spaces ) ;

int php_char_to_str_ex(char *str , uint len , char from , char *to ,
                       int to_len , zval *result , int case_sensitivity ,
                       int *replace_count ) ;

int php_char_to_str(char *str , uint len , char from , char *to , int to_len ,
                    zval *result ) ;

void php_implode(zval *delim , zval *arr , zval *return_value ) ;

void php_explode(zval *delim , zval *str , zval *return_value , int limit ) ;

size_t php_strspn(char *s1 , char *s2 , char *s1_end , char *s2_end ) ;

size_t php_strcspn(char *s1 , char *s2 , char *s1_end , char *s2_end ) ;

void register_string_constants(int type , int module_number ) ;

extern sapi_module_struct sapi_module ;

extern sapi_globals_struct sapi_globals ;

extern void sapi_startup(sapi_module_struct *sf ) ;

extern void sapi_shutdown(void) ;

extern void sapi_activate(void) ;

extern void sapi_deactivate(void) ;

extern void sapi_initialize_empty_request(void) ;

extern int sapi_header_op(sapi_header_op_enum op , void *arg ) ;

extern int sapi_add_header_ex(char *header_line , uint header_line_len ,
                              zend_bool duplicate , zend_bool replace ) ;

extern int sapi_send_headers(void) ;

extern void sapi_free_header(sapi_header_struct *sapi_header ) ;

extern void sapi_handle_post(void *arg ) ;

extern int sapi_register_post_entries(sapi_post_entry *post_entry ) ;

extern int sapi_register_post_entry(sapi_post_entry *post_entry ) ;

extern void sapi_unregister_post_entry(sapi_post_entry *post_entry ) ;

extern int sapi_register_default_post_reader(void (*default_post_reader)(void) ) ;

extern int sapi_register_treat_data(void (*treat_data)(int arg , char *str ,
                                                       zval *destArray ) ) ;

extern int sapi_register_input_filter(unsigned int (*input_filter)(int arg ,
                                                                   char *var ,
                                                                   char **val ,
                                                                   unsigned int val_len ,
                                                                   unsigned int *new_val_len ) ) ;

extern int sapi_flush(void) ;

extern struct stat *sapi_get_stat(void) ;

extern char *sapi_getenv(char *name , size_t name_len ) ;

extern char *sapi_get_default_content_type(void) ;

extern void sapi_get_default_content_type_header(sapi_header_struct *default_header ) ;

extern size_t sapi_apply_default_charset(char **mimetype , size_t len ) ;

extern void sapi_activate_headers_only(void) ;

extern int sapi_get_fd(int *fd ) ;

extern int sapi_force_http_10(void) ;

extern int sapi_get_target_uid(uid_t * ) ;

extern int sapi_get_target_gid(gid_t * ) ;

extern time_t sapi_get_request_time(void) ;

extern void sapi_read_standard_form_data(void) ;

extern void php_default_post_reader(void) ;

extern void php_default_treat_data(int arg , char *str , zval *destArray ) ;

extern unsigned int php_default_input_filter(int arg , char *var , char **val ,
                                             unsigned int val_len ,
                                             unsigned int *new_val_len ) ;

extern void php_startup_auto_globals(void) ;

extern void (*php_import_environment_variables)(zval *array_ptr ) ;

extern void php_register_variable(char *var , char *val ,
                                  zval *track_vars_array ) ;

extern void php_register_variable_safe(char *var , char *val , int val_len ,
                                       zval *track_vars_array ) ;

extern void php_register_variable_ex(char *var , zval *val ,
                                     zval *track_vars_array ) ;

extern int php_hash_environment(void) ;

extern  __attribute__((__nothrow__)) char *setlocale(int __category ,
                                                     char const   *__locale ) ;

extern  __attribute__((__nothrow__)) struct lconv *localeconv(void) ;

extern nl_catd catopen(char const   *__cat_name , int __flag )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) char *catgets(nl_catd __catalog ,
                                                   int __set , int __number ,
                                                   char const   *__string )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int catclose(nl_catd __catalog )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) char *nl_langinfo(nl_item __item ) ;

extern  __attribute__((__nothrow__)) ssize_t strfmon(char * __restrict  __s ,
                                                     size_t __maxsize ,
                                                     char const   * __restrict  __format 
                                                     , ...) ;

extern int ValidateFormat(char *format , int numVars , int *totalVars ) ;

extern int php_sscanf_internal(char *string , char *format , int argCount ,
                               zval ***args , int varStart ,
                               zval **return_value ) ;

__inline static char *smart_str_print_long(char *buf , long num ) 
{ char *r ;
  char *__p ;
  unsigned long __num ;
  char *__p___0 ;
  unsigned long __num___0 ;

  {
  while (1) {
    if (num < 0L) {
      while (1) {
        __p = buf;
        __num = (unsigned long )(- num);
        *__p = (char )'\000';
        while (1) {
          __p --;
          *__p = (char )((int )((char )(__num % 10UL)) + 48);
          __num /= 10UL;
          if (! (__num > 0UL)) {
            break;
          }
        }
        r = __p;
        break;
      }
      r --;
      *r = (char )'-';
    } else {
      while (1) {
        __p___0 = buf;
        __num___0 = (unsigned long )num;
        *__p___0 = (char )'\000';
        while (1) {
          __p___0 --;
          *__p___0 = (char )((int )((char )(__num___0 % 10UL)) + 48);
          __num___0 /= 10UL;
          if (! (__num___0 > 0UL)) {
            break;
          }
        }
        r = __p___0;
        break;
      }
    }
    break;
  }
  return (r);
}
}

__inline static char *smart_str_print_unsigned(char *buf , long num ) 
{ char *r ;
  char *__p ;
  unsigned long __num ;

  {
  while (1) {
    __p = buf;
    __num = (unsigned long )num;
    *__p = (char )'\000';
    while (1) {
      __p --;
      *__p = (char )((int )((char )(__num % 10UL)) + 48);
      __num /= 10UL;
      if (! (__num > 0UL)) {
        break;
      }
    }
    r = __p;
    break;
  }
  return (r);
}
}

void register_string_constants(int type , int module_number ) 
{ 

  {
  zend_register_long_constant((char *)"STR_PAD_LEFT",
                              (unsigned int )sizeof("STR_PAD_LEFT"), 0L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"STR_PAD_RIGHT",
                              (unsigned int )sizeof("STR_PAD_RIGHT"), 1L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"STR_PAD_BOTH",
                              (unsigned int )sizeof("STR_PAD_BOTH"), 2L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"PATHINFO_DIRNAME",
                              (unsigned int )sizeof("PATHINFO_DIRNAME"), 1L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"PATHINFO_BASENAME",
                              (unsigned int )sizeof("PATHINFO_BASENAME"), 2L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"PATHINFO_EXTENSION",
                              (unsigned int )sizeof("PATHINFO_EXTENSION"), 4L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"PATHINFO_FILENAME",
                              (unsigned int )sizeof("PATHINFO_FILENAME"), 8L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"CHAR_MAX",
                              (unsigned int )sizeof("CHAR_MAX"), 127L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"LC_CTYPE",
                              (unsigned int )sizeof("LC_CTYPE"), 0L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"LC_NUMERIC",
                              (unsigned int )sizeof("LC_NUMERIC"), 1L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"LC_TIME",
                              (unsigned int )sizeof("LC_TIME"), 2L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"LC_COLLATE",
                              (unsigned int )sizeof("LC_COLLATE"), 3L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"LC_MONETARY",
                              (unsigned int )sizeof("LC_MONETARY"), 4L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"LC_ALL", (unsigned int )sizeof("LC_ALL"),
                              6L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"LC_MESSAGES",
                              (unsigned int )sizeof("LC_MESSAGES"), 5L,
                              1 | (1 << 1), module_number);
  return;
}
}

int php_tag_find(char *tag , int len , char *set ) ;

static char hexconvtab[17]   = 
  {(char )'0', (char )'1', (char )'2', (char )'3', (char )'4', (char )'5',
   (char )'6', (char )'7', (char )'8', (char )'9', (char )'a', (char )'b',
   (char )'c', (char )'d', (char )'e', (char )'f', (char )'\000'};

static char *php_bin2hex(unsigned char const   *old , size_t oldlen ,
                         size_t *newlen ) 
{ register unsigned char *result ;
  size_t i ;
  size_t j ;
  void *tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;

  {
  result = (unsigned char *)((void *)0);
  tmp = _safe_emalloc(oldlen * 2U, (unsigned int )sizeof(char ), 1U);
  result = (unsigned char *)((char *)tmp);
  j = 0U;
  i = j;
  while (i < oldlen) {
    tmp___0 = j;
    j ++;
    *(result + tmp___0) = (unsigned char )hexconvtab[(int const   )*(old + i) >> 4];
    tmp___1 = j;
    j ++;
    *(result + tmp___1) = (unsigned char )hexconvtab[(int const   )*(old + i) & 15];
    i ++;
  }
  *(result + j) = (unsigned char )'\000';
  if (newlen) {
    *newlen = (unsigned int )((unsigned long )(oldlen * 2U) * sizeof(char ));
  }
  return ((char *)result);
}
}

struct lconv *localeconv_r(struct lconv *out ) 
{ struct lconv *res ;

  {
  res = localeconv();
  *out = *res;
  return (out);
}
}

void zif_bin2hex(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ zval **data ;
  char *result ;
  size_t newlen ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  char *__s ;
  int __l ;
  char *tmp___1 ;

  {
  if (ht != 1) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(1, & data);
    if (tmp == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*data)->type != 6) {
    if (! (*data)->is_ref) {
      orig_ptr = *data;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *data = (zval *)tmp___0;
        *(*data) = *orig_ptr;
        _zval_copy_ctor(*data);
        (*data)->refcount = 1U;
        (*data)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*data)->type != 6) {
      _convert_to_string(*data);
    }
  }
  result = php_bin2hex((unsigned char const   *)(*data)->value.str.val,
                       (unsigned int )(*data)->value.str.len, & newlen);
  if (! result) {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  __s = result;
  __l = (int )newlen;
  return_value->value.str.len = __l;
  return_value->value.str.val = __s;
  return_value->type = (unsigned char)6;
  return;
}
}

static void php_spn_common_handler(int ht , zval *return_value ,
                                   zval **return_value_ptr , zval *this_ptr ,
                                   int return_value_used , int behavior ) 
{ char *s11 ;
  char *s22 ;
  int len1 ;
  int len2 ;
  long start ;
  long len ;
  int tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;

  {
  start = 0L;
  len = 0L;
  tmp = zend_parse_parameters(ht, (char *)"ss|ll", & s11, & len1, & s22, & len2,
                              & start, & len);
  if (tmp == -1) {
    return;
  }
  if (ht < 4) {
    len = (long )len1;
  }
  if (start < 0L) {
    start += (long )len1;
    if (start < 0L) {
      start = 0L;
    }
  } else {
    if (start > (long )len1) {
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    }
  }
  if (len < 0L) {
    len += (long )len1 - start;
    if (len < 0L) {
      len = 0L;
    }
  }
  if (start + len > (long )len1) {
    len = (long )len1 - start;
  }
  if (behavior == 0) {
    return_value->type = (unsigned char)1;
    tmp___0 = php_strspn(s11 + start, s22, (s11 + start) + len, s22 + len2);
    return_value->value.lval = (long )tmp___0;
    return;
  } else {
    if (behavior == 1) {
      return_value->type = (unsigned char)1;
      tmp___1 = php_strcspn(s11 + start, s22, (s11 + start) + len, s22 + len2);
      return_value->value.lval = (long )tmp___1;
      return;
    }
  }
  return;
}
}

void zif_strspn(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) 
{ 

  {
  php_spn_common_handler(ht, return_value, return_value_ptr, this_ptr,
                         return_value_used, 0);
  return;
}
}

void zif_strcspn(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ 

  {
  php_spn_common_handler(ht, return_value, return_value_ptr, this_ptr,
                         return_value_used, 1);
  return;
}
}

int zm_startup_nl_langinfo(int type , int module_number ) 
{ 

  {
  zend_register_long_constant((char *)"ABDAY_1",
                              (unsigned int )sizeof("ABDAY_1"), 131072L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ABDAY_2",
                              (unsigned int )sizeof("ABDAY_2"), 131073L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ABDAY_3",
                              (unsigned int )sizeof("ABDAY_3"), 131074L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ABDAY_4",
                              (unsigned int )sizeof("ABDAY_4"), 131075L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ABDAY_5",
                              (unsigned int )sizeof("ABDAY_5"), 131076L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ABDAY_6",
                              (unsigned int )sizeof("ABDAY_6"), 131077L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ABDAY_7",
                              (unsigned int )sizeof("ABDAY_7"), 131078L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"DAY_1", (unsigned int )sizeof("DAY_1"),
                              131079L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"DAY_2", (unsigned int )sizeof("DAY_2"),
                              131080L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"DAY_3", (unsigned int )sizeof("DAY_3"),
                              131081L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"DAY_4", (unsigned int )sizeof("DAY_4"),
                              131082L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"DAY_5", (unsigned int )sizeof("DAY_5"),
                              131083L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"DAY_6", (unsigned int )sizeof("DAY_6"),
                              131084L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"DAY_7", (unsigned int )sizeof("DAY_7"),
                              131085L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ABMON_1",
                              (unsigned int )sizeof("ABMON_1"), 131086L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ABMON_2",
                              (unsigned int )sizeof("ABMON_2"), 131087L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ABMON_3",
                              (unsigned int )sizeof("ABMON_3"), 131088L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ABMON_4",
                              (unsigned int )sizeof("ABMON_4"), 131089L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ABMON_5",
                              (unsigned int )sizeof("ABMON_5"), 131090L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ABMON_6",
                              (unsigned int )sizeof("ABMON_6"), 131091L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ABMON_7",
                              (unsigned int )sizeof("ABMON_7"), 131092L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ABMON_8",
                              (unsigned int )sizeof("ABMON_8"), 131093L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ABMON_9",
                              (unsigned int )sizeof("ABMON_9"), 131094L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ABMON_10",
                              (unsigned int )sizeof("ABMON_10"), 131095L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ABMON_11",
                              (unsigned int )sizeof("ABMON_11"), 131096L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ABMON_12",
                              (unsigned int )sizeof("ABMON_12"), 131097L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"MON_1", (unsigned int )sizeof("MON_1"),
                              131098L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"MON_2", (unsigned int )sizeof("MON_2"),
                              131099L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"MON_3", (unsigned int )sizeof("MON_3"),
                              131100L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"MON_4", (unsigned int )sizeof("MON_4"),
                              131101L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"MON_5", (unsigned int )sizeof("MON_5"),
                              131102L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"MON_6", (unsigned int )sizeof("MON_6"),
                              131103L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"MON_7", (unsigned int )sizeof("MON_7"),
                              131104L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"MON_8", (unsigned int )sizeof("MON_8"),
                              131105L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"MON_9", (unsigned int )sizeof("MON_9"),
                              131106L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"MON_10", (unsigned int )sizeof("MON_10"),
                              131107L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"MON_11", (unsigned int )sizeof("MON_11"),
                              131108L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"MON_12", (unsigned int )sizeof("MON_12"),
                              131109L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"AM_STR", (unsigned int )sizeof("AM_STR"),
                              131110L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"PM_STR", (unsigned int )sizeof("PM_STR"),
                              131111L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"D_T_FMT",
                              (unsigned int )sizeof("D_T_FMT"), 131112L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"D_FMT", (unsigned int )sizeof("D_FMT"),
                              131113L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"T_FMT", (unsigned int )sizeof("T_FMT"),
                              131114L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"T_FMT_AMPM",
                              (unsigned int )sizeof("T_FMT_AMPM"), 131115L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ERA", (unsigned int )sizeof("ERA"),
                              131116L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ERA_D_T_FMT",
                              (unsigned int )sizeof("ERA_D_T_FMT"), 131120L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ERA_D_FMT",
                              (unsigned int )sizeof("ERA_D_FMT"), 131118L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ERA_T_FMT",
                              (unsigned int )sizeof("ERA_T_FMT"), 131121L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"ALT_DIGITS",
                              (unsigned int )sizeof("ALT_DIGITS"), 131119L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"CRNCYSTR",
                              (unsigned int )sizeof("CRNCYSTR"), 262159L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"RADIXCHAR",
                              (unsigned int )sizeof("RADIXCHAR"), 65536L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"THOUSEP",
                              (unsigned int )sizeof("THOUSEP"), 65537L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"YESEXPR",
                              (unsigned int )sizeof("YESEXPR"), 327680L,
                              1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"NOEXPR", (unsigned int )sizeof("NOEXPR"),
                              327681L, 1 | (1 << 1), module_number);
  zend_register_long_constant((char *)"CODESET",
                              (unsigned int )sizeof("CODESET"), 14L,
                              1 | (1 << 1), module_number);
  return (0);
}
}

void zif_nl_langinfo(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) 
{ zval **item ;
  char *value ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  char *__s ;
  size_t tmp___1 ;
  char *tmp___2 ;

  {
  if (ht != 1) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(1, & item);
    if (tmp == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*item)->type != 1) {
    if (! (*item)->is_ref) {
      orig_ptr = *item;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *item = (zval *)tmp___0;
        *(*item) = *orig_ptr;
        _zval_copy_ctor(*item);
        (*item)->refcount = 1U;
        (*item)->is_ref = (unsigned char)0;
      }
    }
    convert_to_long(*item);
  }
  value = nl_langinfo((int )(*item)->value.lval);
  if ((unsigned int )value == (unsigned int )((void *)0)) {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  } else {
    __s = value;
    tmp___1 = strlen((char const   *)__s);
    return_value->value.str.len = (int )tmp___1;
    tmp___2 = _estrndup((char const   *)__s,
                        (unsigned int )return_value->value.str.len);
    return_value->value.str.val = tmp___2;
    return_value->type = (unsigned char)6;
    return;
  }
}
}

void zif_strcoll(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ zval **s1 ;
  zval **s2 ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  zval *orig_ptr___0 ;
  void *tmp___1 ;
  int tmp___2 ;

  {
  if (ht != 2) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(2, & s1, & s2);
    if (tmp == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*s1)->type != 6) {
    if (! (*s1)->is_ref) {
      orig_ptr = *s1;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *s1 = (zval *)tmp___0;
        *(*s1) = *orig_ptr;
        _zval_copy_ctor(*s1);
        (*s1)->refcount = 1U;
        (*s1)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*s1)->type != 6) {
      _convert_to_string(*s1);
    }
  }
  if ((int )(*s2)->type != 6) {
    if (! (*s2)->is_ref) {
      orig_ptr___0 = *s2;
      if (orig_ptr___0->refcount > 1U) {
        (orig_ptr___0->refcount) --;
        tmp___1 = _emalloc((unsigned int )sizeof(zval ));
        *s2 = (zval *)tmp___1;
        *(*s2) = *orig_ptr___0;
        _zval_copy_ctor(*s2);
        (*s2)->refcount = 1U;
        (*s2)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*s2)->type != 6) {
      _convert_to_string(*s2);
    }
  }
  return_value->type = (unsigned char)1;
  tmp___2 = strcoll((char const   *)(*s1)->value.str.val,
                    (char const   *)(*s2)->value.str.val);
  return_value->value.lval = (long )tmp___2;
  return;
}
}

__inline static int php_charmask(unsigned char *input , int len , char *mask ) 
{ unsigned char *end ;
  unsigned char c ;
  int result ;

  {
  result = 0;
  memset((void *)mask, 0, 256U);
  end = input + len;
  while ((unsigned int )input < (unsigned int )end) {
    c = *input;
    if ((unsigned int )(input + 3) < (unsigned int )end) {
      if ((int )*(input + 1) == 46) {
        if ((int )*(input + 2) == 46) {
          if ((int )*(input + 3) >= (int )c) {
            memset((void *)(mask + (int )c), 1,
                   (unsigned int )(((int )*(input + 3) - (int )c) + 1));
            input += 3;
          } else {
            goto _L___1;
          }
        } else {
          goto _L___1;
        }
      } else {
        goto _L___1;
      }
    } else {
      _L___1: 
      _L___0: 
      _L: 
      if ((unsigned int )(input + 1) < (unsigned int )end) {
        if ((int )*(input + 0) == 46) {
          if ((int )*(input + 1) == 46) {
            if ((unsigned int )(end - len) >= (unsigned int )input) {
              php_error_docref0((char const   *)((void *)0), 1 << 1L,
                                "Invalid \'..\'-range, no character to the left of \'..\'.");
              result = -1;
              goto __Cont;
            }
            if ((unsigned int )(input + 2) >= (unsigned int )end) {
              php_error_docref0((char const   *)((void *)0), 1 << 1L,
                                "Invalid \'..\'-range, no character to the right of \'..\'.");
              result = -1;
              goto __Cont;
            }
            if ((int )*(input + -1) > (int )*(input + 2)) {
              php_error_docref0((char const   *)((void *)0), 1 << 1L,
                                "Invalid \'..\'-range, \'..\'-range needs to be incrementing.");
              result = -1;
              goto __Cont;
            }
            php_error_docref0((char const   *)((void *)0), 1 << 1L,
                              "Invalid \'..\'-range.");
            result = -1;
            goto __Cont;
          } else {
            *(mask + (int )c) = (char)1;
          }
        } else {
          *(mask + (int )c) = (char)1;
        }
      } else {
        *(mask + (int )c) = (char)1;
      }
    }
    __Cont: 
    input ++;
  }
  return (result);
}
}

char *php_trim(char *c , int len , char *what , int what_len ,
               zval *return_value , int mode ) 
{ register int i ;
  int trimmed ;
  char mask[256] ;
  char *__s ;
  int __l ;
  char *tmp ;
  char *tmp___0 ;

  {
  trimmed = 0;
  if (what) {
    php_charmask((unsigned char *)what, what_len, mask);
  } else {
    php_charmask((unsigned char *)" \n\r\t\v\000", 6, mask);
  }
  if (mode & 1) {
    i = 0;
    while (i < len) {
      if (mask[(unsigned char )*(c + i)]) {
        trimmed ++;
      } else {
        break;
      }
      i ++;
    }
    len -= trimmed;
    c += trimmed;
  }
  if (mode & 2) {
    i = len - 1;
    while (i >= 0) {
      if (mask[(unsigned char )*(c + i)]) {
        len --;
      } else {
        break;
      }
      i --;
    }
  }
  if (return_value) {
    __s = c;
    __l = len;
    return_value->value.str.len = __l;
    tmp = _estrndup((char const   *)__s, (unsigned int )__l);
    return_value->value.str.val = tmp;
    return_value->type = (unsigned char)6;
  } else {
    tmp___0 = _estrndup((char const   *)c, (unsigned int )len);
    return (tmp___0);
  }
  return ((char *)"");
}
}

static void php_do_trim(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used , int mode ) 
{ zval **str ;
  zval **what ;
  int argc ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  zval *orig_ptr___0 ;
  void *tmp___1 ;

  {
  what = (zval **)((void *)0);
  argc = ht;
  if (argc < 1) {
    zend_wrong_param_count();
    return;
  } else {
    if (argc > 2) {
      zend_wrong_param_count();
      return;
    } else {
      tmp = zend_get_parameters_ex(argc, & str, & what);
      if (tmp == -1) {
        zend_wrong_param_count();
        return;
      }
    }
  }
  if ((int )(*str)->type != 6) {
    if (! (*str)->is_ref) {
      orig_ptr = *str;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *str = (zval *)tmp___0;
        *(*str) = *orig_ptr;
        _zval_copy_ctor(*str);
        (*str)->refcount = 1U;
        (*str)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*str)->type != 6) {
      _convert_to_string(*str);
    }
  }
  if (argc > 1) {
    if ((int )(*what)->type != 6) {
      if (! (*what)->is_ref) {
        orig_ptr___0 = *what;
        if (orig_ptr___0->refcount > 1U) {
          (orig_ptr___0->refcount) --;
          tmp___1 = _emalloc((unsigned int )sizeof(zval ));
          *what = (zval *)tmp___1;
          *(*what) = *orig_ptr___0;
          _zval_copy_ctor(*what);
          (*what)->refcount = 1U;
          (*what)->is_ref = (unsigned char)0;
        }
      }
      if ((int )(*what)->type != 6) {
        _convert_to_string(*what);
      }
    }
    php_trim((*str)->value.str.val, (*str)->value.str.len,
             (*what)->value.str.val, (*what)->value.str.len, return_value, mode);
  } else {
    php_trim((*str)->value.str.val, (*str)->value.str.len, (char *)((void *)0),
             0, return_value, mode);
  }
  return;
}
}

void zif_trim(int ht , zval *return_value , zval **return_value_ptr ,
              zval *this_ptr , int return_value_used ) 
{ 

  {
  php_do_trim(ht, return_value, return_value_ptr, this_ptr, return_value_used, 3);
  return;
}
}

void zif_rtrim(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) 
{ 

  {
  php_do_trim(ht, return_value, return_value_ptr, this_ptr, return_value_used, 2);
  return;
}
}

void zif_ltrim(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) 
{ 

  {
  php_do_trim(ht, return_value, return_value_ptr, this_ptr, return_value_used, 1);
  return;
}
}

void zif_wordwrap(int ht , zval *return_value , zval **return_value_ptr ,
                  zval *this_ptr , int return_value_used ) 
{ char const   *text ;
  char const   *breakchar ;
  char *newtext ;
  int textlen ;
  int breakcharlen ;
  int newtextlen ;
  int chk ;
  size_t alloced ;
  long current ;
  long laststart ;
  long lastspace ;
  long linelength ;
  zend_bool docut ;
  int tmp ;
  char *__s ;
  int __l ;
  char *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  int tmp___4 ;
  void *tmp___5 ;
  char *__s___0 ;
  int __l___0 ;
  char *tmp___6 ;

  {
  breakchar = "\n";
  breakcharlen = 1;
  current = 0L;
  laststart = 0L;
  lastspace = 0L;
  linelength = 75L;
  docut = (unsigned char)0;
  tmp = zend_parse_parameters(ht, (char *)"s|lsb", & text, & textlen,
                              & linelength, & breakchar, & breakcharlen, & docut);
  if (tmp == -1) {
    return;
  }
  if (textlen == 0) {
    return_value->value.str.len = 0;
    return_value->value.str.val = _estrndup("",
                                            (unsigned int )(sizeof("") - 1UL));
    return_value->type = (unsigned char)6;
    return;
  }
  if (linelength == 0L) {
    if (docut) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Can\'t force cut when width is zero.");
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    }
  }
  if (breakcharlen == 1) {
    if (! docut) {
      newtext = _estrndup(text, (unsigned int )textlen);
      lastspace = 0L;
      laststart = lastspace;
      current = 0L;
      while (current < (long )textlen) {
        if ((int const   )*(text + current) == (int const   )*(breakchar + 0)) {
          lastspace = current;
          laststart = lastspace;
        } else {
          if ((int const   )*(text + current) == 32) {
            if (current - laststart >= linelength) {
              *(newtext + current) = (char )*(breakchar + 0);
              laststart = current + 1L;
            }
            lastspace = current;
          } else {
            if (current - laststart >= linelength) {
              if (laststart != lastspace) {
                *(newtext + lastspace) = (char )*(breakchar + 0);
                laststart = lastspace + 1L;
              }
            }
          }
        }
        current ++;
      }
      __s = newtext;
      __l = textlen;
      return_value->value.str.len = __l;
      return_value->value.str.val = __s;
      return_value->type = (unsigned char)6;
      return;
    } else {
      goto _L___3;
    }
  } else {
    _L___3: 
    if (linelength > 0L) {
      chk = (int )((long )textlen / linelength + 1L);
      tmp___1 = _safe_emalloc((unsigned int )chk, (unsigned int )breakcharlen,
                              (unsigned int )(textlen + 1));
      newtext = (char *)tmp___1;
      alloced = (unsigned int )((textlen + chk * breakcharlen) + 1);
    } else {
      chk = textlen;
      alloced = (unsigned int )(textlen * (breakcharlen + 1) + 1);
      tmp___2 = _safe_emalloc((unsigned int )textlen,
                              (unsigned int )(breakcharlen + 1), 1U);
      newtext = (char *)tmp___2;
    }
    newtextlen = 0;
    lastspace = 0L;
    laststart = lastspace;
    current = 0L;
    while (current < (long )textlen) {
      if (chk <= 0) {
        alloced += (unsigned int )((int )(((((long )textlen - current) + 1L) / linelength + 1L) * (long )breakcharlen) + 1);
        tmp___3 = _erealloc((void *)newtext, alloced, 0);
        newtext = (char *)tmp___3;
        chk = (int )(((long )textlen - current) / linelength) + 1;
      }
      if ((int const   )*(text + current) == (int const   )*(breakchar + 0)) {
        if (current + (long )breakcharlen < (long )textlen) {
          tmp___4 = strncmp(text + current, breakchar,
                            (unsigned int )breakcharlen);
          if (tmp___4) {
            goto _L___2;
          } else {
            memcpy((void */* __restrict  */)((void *)(newtext + newtextlen)),
                   (void const   */* __restrict  */)((void const   *)(text + laststart)),
                   (unsigned int )((current - laststart) + (long )breakcharlen));
            newtextlen = (int )((long )newtextlen + ((current - laststart) + (long )breakcharlen));
            current += (long )(breakcharlen - 1);
            lastspace = current + 1L;
            laststart = lastspace;
            chk --;
          }
        } else {
          goto _L___2;
        }
      } else {
        _L___2: 
        _L___1: 
        if ((int const   )*(text + current) == 32) {
          if (current - laststart >= linelength) {
            memcpy((void */* __restrict  */)((void *)(newtext + newtextlen)),
                   (void const   */* __restrict  */)((void const   *)(text + laststart)),
                   (unsigned int )(current - laststart));
            newtextlen = (int )((long )newtextlen + (current - laststart));
            memcpy((void */* __restrict  */)((void *)(newtext + newtextlen)),
                   (void const   */* __restrict  */)((void const   *)breakchar),
                   (unsigned int )breakcharlen);
            newtextlen += breakcharlen;
            laststart = current + 1L;
            chk --;
          }
          lastspace = current;
        } else {
          if (current - laststart >= linelength) {
            if (docut) {
              if (laststart >= lastspace) {
                memcpy((void */* __restrict  */)((void *)(newtext + newtextlen)),
                       (void const   */* __restrict  */)((void const   *)(text + laststart)),
                       (unsigned int )(current - laststart));
                newtextlen = (int )((long )newtextlen + (current - laststart));
                memcpy((void */* __restrict  */)((void *)(newtext + newtextlen)),
                       (void const   */* __restrict  */)((void const   *)breakchar),
                       (unsigned int )breakcharlen);
                newtextlen += breakcharlen;
                lastspace = current;
                laststart = lastspace;
                chk --;
              } else {
                goto _L___0;
              }
            } else {
              goto _L___0;
            }
          } else {
            _L___0: 
            _L: 
            if (current - laststart >= linelength) {
              if (laststart < lastspace) {
                memcpy((void */* __restrict  */)((void *)(newtext + newtextlen)),
                       (void const   */* __restrict  */)((void const   *)(text + laststart)),
                       (unsigned int )(lastspace - laststart));
                newtextlen = (int )((long )newtextlen + (lastspace - laststart));
                memcpy((void */* __restrict  */)((void *)(newtext + newtextlen)),
                       (void const   */* __restrict  */)((void const   *)breakchar),
                       (unsigned int )breakcharlen);
                newtextlen += breakcharlen;
                lastspace ++;
                laststart = lastspace;
                chk --;
              }
            }
          }
        }
      }
      current ++;
    }
    if (laststart != current) {
      memcpy((void */* __restrict  */)((void *)(newtext + newtextlen)),
             (void const   */* __restrict  */)((void const   *)(text + laststart)),
             (unsigned int )(current - laststart));
      newtextlen = (int )((long )newtextlen + (current - laststart));
    }
    *(newtext + newtextlen) = (char )'\000';
    tmp___5 = _erealloc((void *)newtext, (unsigned int )(newtextlen + 1), 0);
    newtext = (char *)tmp___5;
    __s___0 = newtext;
    __l___0 = newtextlen;
    return_value->value.str.len = __l___0;
    return_value->value.str.val = __s___0;
    return_value->type = (unsigned char)6;
    return;
  }
}
}

void php_explode(zval *delim , zval *str , zval *return_value , int limit ) 
{ char *p1 ;
  char *p2 ;
  char *endp ;

  {
  endp = str->value.str.val + str->value.str.len;
  p1 = str->value.str.val;
  p2 = zend_memnstr(str->value.str.val, delim->value.str.val,
                    delim->value.str.len, endp);
  if ((unsigned int )p2 == (unsigned int )((void *)0)) {
    add_next_index_stringl(return_value, p1, (unsigned int )str->value.str.len,
                           1);
  } else {
    while (1) {
      add_next_index_stringl(return_value, p1, (unsigned int )(p2 - p1), 1);
      p1 = p2 + delim->value.str.len;
      p2 = zend_memnstr(p1, delim->value.str.val, delim->value.str.len, endp);
      if ((unsigned int )p2 != (unsigned int )((void *)0)) {
        if (! (limit == -1)) {
          limit --;
          if (! (limit > 1)) {
            break;
          }
        }
      } else {
        break;
      }
    }
    if ((unsigned int )p1 <= (unsigned int )endp) {
      add_next_index_stringl(return_value, p1, (unsigned int )(endp - p1), 1);
    }
  }
  return;
}
}

void php_explode_negative_limit(zval *delim , zval *str , zval *return_value ,
                                int limit ) 
{ char *p1 ;
  char *p2 ;
  char *endp ;
  int allocated ;
  int found ;
  int i ;
  int to_return ;
  char **positions ;
  void *tmp ;
  int tmp___0 ;
  void *tmp___1 ;
  int tmp___2 ;

  {
  allocated = 50;
  found = 0;
  i = 0;
  to_return = 0;
  tmp = _safe_emalloc((unsigned int )allocated, (unsigned int )sizeof(char *),
                      0U);
  positions = (char **)tmp;
  endp = str->value.str.val + str->value.str.len;
  p1 = str->value.str.val;
  p2 = zend_memnstr(str->value.str.val, delim->value.str.val,
                    delim->value.str.len, endp);
  if (! ((unsigned int )p2 == (unsigned int )((void *)0))) {
    tmp___0 = found;
    found ++;
    *(positions + tmp___0) = p1;
    while (1) {
      if (found >= allocated) {
        allocated = found + 50;
        tmp___1 = _erealloc((void *)positions,
                            (unsigned int )((unsigned long )((unsigned int )allocated) * sizeof(char *)),
                            0);
        positions = (char **)tmp___1;
      }
      tmp___2 = found;
      found ++;
      p1 = p2 + delim->value.str.len;
      *(positions + tmp___2) = p1;
      p2 = zend_memnstr(p1, delim->value.str.val, delim->value.str.len, endp);
      if (! ((unsigned int )p2 != (unsigned int )((void *)0))) {
        break;
      }
    }
    to_return = limit + found;
    i = 0;
    while (i < to_return) {
      add_next_index_stringl(return_value, *(positions + i),
                             (unsigned int )((*(positions + (i + 1)) - delim->value.str.len) - *(positions + i)),
                             1);
      i ++;
    }
  }
  _efree((void *)positions);
  return;
}
}

void zif_explode(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ zval **str ;
  zval **delim ;
  zval **zlimit ;
  int limit ;
  int argc ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  zval *orig_ptr___0 ;
  void *tmp___1 ;
  zval *orig_ptr___1 ;
  void *tmp___2 ;

  {
  zlimit = (zval **)((void *)0);
  limit = -1;
  argc = ht;
  if (argc < 2) {
    zend_wrong_param_count();
    return;
  } else {
    if (argc > 3) {
      zend_wrong_param_count();
      return;
    } else {
      tmp = zend_get_parameters_ex(argc, & delim, & str, & zlimit);
      if (tmp == -1) {
        zend_wrong_param_count();
        return;
      }
    }
  }
  if ((int )(*str)->type != 6) {
    if (! (*str)->is_ref) {
      orig_ptr = *str;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *str = (zval *)tmp___0;
        *(*str) = *orig_ptr;
        _zval_copy_ctor(*str);
        (*str)->refcount = 1U;
        (*str)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*str)->type != 6) {
      _convert_to_string(*str);
    }
  }
  if ((int )(*delim)->type != 6) {
    if (! (*delim)->is_ref) {
      orig_ptr___0 = *delim;
      if (orig_ptr___0->refcount > 1U) {
        (orig_ptr___0->refcount) --;
        tmp___1 = _emalloc((unsigned int )sizeof(zval ));
        *delim = (zval *)tmp___1;
        *(*delim) = *orig_ptr___0;
        _zval_copy_ctor(*delim);
        (*delim)->refcount = 1U;
        (*delim)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*delim)->type != 6) {
      _convert_to_string(*delim);
    }
  }
  if (argc > 2) {
    if ((int )(*zlimit)->type != 1) {
      if (! (*zlimit)->is_ref) {
        orig_ptr___1 = *zlimit;
        if (orig_ptr___1->refcount > 1U) {
          (orig_ptr___1->refcount) --;
          tmp___2 = _emalloc((unsigned int )sizeof(zval ));
          *zlimit = (zval *)tmp___2;
          *(*zlimit) = *orig_ptr___1;
          _zval_copy_ctor(*zlimit);
          (*zlimit)->refcount = 1U;
          (*zlimit)->is_ref = (unsigned char)0;
        }
      }
      convert_to_long(*zlimit);
    }
    limit = (int )(*zlimit)->value.lval;
  }
  if (! (*delim)->value.str.len) {
    php_error_docref0((char const   *)((void *)0), 1 << 1L, "Empty delimiter.");
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  _array_init(return_value);
  if (! (*str)->value.str.len) {
    add_next_index_stringl(return_value, (char *)"",
                           (unsigned int )(sizeof("") - 1UL), 1);
    return;
  }
  if (limit == 0) {
    add_index_stringl(return_value, 0UL, (*str)->value.str.val,
                      (unsigned int )(*str)->value.str.len, 1);
  } else {
    if (limit == 1) {
      add_index_stringl(return_value, 0UL, (*str)->value.str.val,
                        (unsigned int )(*str)->value.str.len, 1);
    } else {
      if (limit < 0) {
        if (argc == 3) {
          php_explode_negative_limit(*delim, *str, return_value, limit);
        } else {
          php_explode(*delim, *str, return_value, limit);
        }
      } else {
        php_explode(*delim, *str, return_value, limit);
      }
    }
  }
  return;
}
}

void php_implode(zval *delim , zval *arr , zval *return_value ) 
{ zval **tmp ;
  HashPosition pos ;
  smart_str implstr ;
  int numelems ;
  int i ;
  zval tmp_val ;
  int str_len ;
  register size_t __nl ;
  smart_str *__dest ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  char stmp[12] ;
  register size_t __nl___0 ;
  smart_str *__dest___0 ;
  void *tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  void *tmp___7 ;
  register size_t __nl___1 ;
  smart_str *__dest___1 ;
  void *tmp___8 ;
  void *tmp___9 ;
  void *tmp___10 ;
  void *tmp___11 ;
  char *stmp___0 ;
  register size_t __nl___2 ;
  smart_str *__dest___2 ;
  void *tmp___12 ;
  void *tmp___13 ;
  void *tmp___14 ;
  void *tmp___15 ;
  int copy ;
  zval expr ;
  register size_t __nl___3 ;
  smart_str *__dest___3 ;
  void *tmp___16 ;
  void *tmp___17 ;
  void *tmp___18 ;
  void *tmp___19 ;
  register size_t __nl___4 ;
  smart_str *__dest___4 ;
  void *tmp___20 ;
  void *tmp___21 ;
  void *tmp___22 ;
  void *tmp___23 ;
  register size_t __nl___5 ;
  smart_str *__dest___5 ;
  void *tmp___24 ;
  void *tmp___25 ;
  void *tmp___26 ;
  void *tmp___27 ;
  int tmp___28 ;
  char *__s ;
  int __l ;
  char *tmp___29 ;
  smart_str *__s___0 ;

  {
  implstr.c = (char *)0;
  implstr.len = 0U;
  implstr.a = 0U;
  i = 0;
  numelems = zend_hash_num_elements(arr->value.ht);
  if (numelems == 0) {
    return_value->value.str.len = 0;
    return_value->value.str.val = _estrndup("",
                                            (unsigned int )(sizeof("") - 1UL));
    return_value->type = (unsigned char)6;
    return;
  }
  zend_hash_internal_pointer_reset_ex(arr->value.ht, & pos);
  while (1) {
    tmp___28 = zend_hash_get_current_data_ex(arr->value.ht, (void **)(& tmp),
                                             & pos);
    if (! (tmp___28 == 0)) {
      break;
    }
    switch ((int )(*tmp)->type) {
    case 6: 
    while (1) {
      __dest = & implstr;
      while (1) {
        if (! __dest->c) {
          __dest->len = 0U;
          __nl = (unsigned int )(*tmp)->value.str.len;
          if (__nl < 78U) {
            __dest->a = 78U;
          } else {
            __dest->a = __nl + 128U;
          }
          tmp___1 = _erealloc((void *)__dest->c, __dest->a + 1U, 0);
          __dest->c = (char *)tmp___1;
        } else {
          __nl = __dest->len + (unsigned int )(*tmp)->value.str.len;
          if (__nl >= __dest->a) {
            __dest->a = __nl + 128U;
            tmp___3 = _erealloc((void *)__dest->c, __dest->a + 1U, 0);
            __dest->c = (char *)tmp___3;
          }
        }
        break;
      }
      memcpy((void */* __restrict  */)((void *)(__dest->c + __dest->len)),
             (void const   */* __restrict  */)((void const   *)(*tmp)->value.str.val),
             (unsigned int )(*tmp)->value.str.len);
      __dest->len = __nl;
      break;
    }
    break;
    case 1: 
    str_len = php_sprintf(stmp, "%ld", (*tmp)->value.lval);
    while (1) {
      __dest___0 = & implstr;
      while (1) {
        if (! __dest___0->c) {
          __dest___0->len = 0U;
          __nl___0 = (unsigned int )str_len;
          if (__nl___0 < 78U) {
            __dest___0->a = 78U;
          } else {
            __dest___0->a = __nl___0 + 128U;
          }
          tmp___5 = _erealloc((void *)__dest___0->c, __dest___0->a + 1U, 0);
          __dest___0->c = (char *)tmp___5;
        } else {
          __nl___0 = __dest___0->len + (unsigned int )str_len;
          if (__nl___0 >= __dest___0->a) {
            __dest___0->a = __nl___0 + 128U;
            tmp___7 = _erealloc((void *)__dest___0->c, __dest___0->a + 1U, 0);
            __dest___0->c = (char *)tmp___7;
          }
        }
        break;
      }
      memcpy((void */* __restrict  */)((void *)(__dest___0->c + __dest___0->len)),
             (void const   */* __restrict  */)((void const   *)(stmp)),
             (unsigned int )str_len);
      __dest___0->len = __nl___0;
      break;
    }
    break;
    case 3: 
    if ((*tmp)->value.lval == 1L) {
      while (1) {
        __dest___1 = & implstr;
        while (1) {
          if (! __dest___1->c) {
            __dest___1->len = 0U;
            __nl___1 = (unsigned int )(sizeof("1") - 1UL);
            if (__nl___1 < 78U) {
              __dest___1->a = 78U;
            } else {
              __dest___1->a = __nl___1 + 128U;
            }
            tmp___9 = _erealloc((void *)__dest___1->c, __dest___1->a + 1U, 0);
            __dest___1->c = (char *)tmp___9;
          } else {
            __nl___1 = (unsigned int )((unsigned long )__dest___1->len + (sizeof("1") - 1UL));
            if (__nl___1 >= __dest___1->a) {
              __dest___1->a = __nl___1 + 128U;
              tmp___11 = _erealloc((void *)__dest___1->c, __dest___1->a + 1U, 0);
              __dest___1->c = (char *)tmp___11;
            }
          }
          break;
        }
        memcpy((void */* __restrict  */)((void *)(__dest___1->c + __dest___1->len)),
               (void const   */* __restrict  */)((void const   *)"1"),
               (unsigned int )(sizeof("1") - 1UL));
        __dest___1->len = __nl___1;
        break;
      }
    }
    break;
    case 0: 
    break;
    case 2: 
    str_len = spprintf(& stmp___0, 0U, "%.*G", (int )executor_globals.precision,
                       (*tmp)->value.dval);
    while (1) {
      __dest___2 = & implstr;
      while (1) {
        if (! __dest___2->c) {
          __dest___2->len = 0U;
          __nl___2 = (unsigned int )str_len;
          if (__nl___2 < 78U) {
            __dest___2->a = 78U;
          } else {
            __dest___2->a = __nl___2 + 128U;
          }
          tmp___13 = _erealloc((void *)__dest___2->c, __dest___2->a + 1U, 0);
          __dest___2->c = (char *)tmp___13;
        } else {
          __nl___2 = __dest___2->len + (unsigned int )str_len;
          if (__nl___2 >= __dest___2->a) {
            __dest___2->a = __nl___2 + 128U;
            tmp___15 = _erealloc((void *)__dest___2->c, __dest___2->a + 1U, 0);
            __dest___2->c = (char *)tmp___15;
          }
        }
        break;
      }
      memcpy((void */* __restrict  */)((void *)(__dest___2->c + __dest___2->len)),
             (void const   */* __restrict  */)((void const   *)stmp___0),
             (unsigned int )str_len);
      __dest___2->len = __nl___2;
      break;
    }
    _efree((void *)stmp___0);
    break;
    case 5: 
    zend_make_printable_zval(*tmp, & expr, & copy);
    while (1) {
      __dest___3 = & implstr;
      while (1) {
        if (! __dest___3->c) {
          __dest___3->len = 0U;
          __nl___3 = (unsigned int )expr.value.str.len;
          if (__nl___3 < 78U) {
            __dest___3->a = 78U;
          } else {
            __dest___3->a = __nl___3 + 128U;
          }
          tmp___17 = _erealloc((void *)__dest___3->c, __dest___3->a + 1U, 0);
          __dest___3->c = (char *)tmp___17;
        } else {
          __nl___3 = __dest___3->len + (unsigned int )expr.value.str.len;
          if (__nl___3 >= __dest___3->a) {
            __dest___3->a = __nl___3 + 128U;
            tmp___19 = _erealloc((void *)__dest___3->c, __dest___3->a + 1U, 0);
            __dest___3->c = (char *)tmp___19;
          }
        }
        break;
      }
      memcpy((void */* __restrict  */)((void *)(__dest___3->c + __dest___3->len)),
             (void const   */* __restrict  */)((void const   *)expr.value.str.val),
             (unsigned int )expr.value.str.len);
      __dest___3->len = __nl___3;
      break;
    }
    if (copy) {
      _zval_dtor(& expr);
    }
    break;
    default: 
    tmp_val = *(*tmp);
    _zval_copy_ctor(& tmp_val);
    if ((int )tmp_val.type != 6) {
      _convert_to_string(& tmp_val);
    }
    while (1) {
      __dest___4 = & implstr;
      while (1) {
        if (! __dest___4->c) {
          __dest___4->len = 0U;
          __nl___4 = (unsigned int )tmp_val.value.str.len;
          if (__nl___4 < 78U) {
            __dest___4->a = 78U;
          } else {
            __dest___4->a = __nl___4 + 128U;
          }
          tmp___21 = _erealloc((void *)__dest___4->c, __dest___4->a + 1U, 0);
          __dest___4->c = (char *)tmp___21;
        } else {
          __nl___4 = __dest___4->len + (unsigned int )tmp_val.value.str.len;
          if (__nl___4 >= __dest___4->a) {
            __dest___4->a = __nl___4 + 128U;
            tmp___23 = _erealloc((void *)__dest___4->c, __dest___4->a + 1U, 0);
            __dest___4->c = (char *)tmp___23;
          }
        }
        break;
      }
      memcpy((void */* __restrict  */)((void *)(__dest___4->c + __dest___4->len)),
             (void const   */* __restrict  */)((void const   *)tmp_val.value.str.val),
             (unsigned int )tmp_val.value.str.len);
      __dest___4->len = __nl___4;
      break;
    }
    _zval_dtor(& tmp_val);
    break;
    }
    i ++;
    if (i != numelems) {
      while (1) {
        __dest___5 = & implstr;
        while (1) {
          if (! __dest___5->c) {
            __dest___5->len = 0U;
            __nl___5 = (unsigned int )delim->value.str.len;
            if (__nl___5 < 78U) {
              __dest___5->a = 78U;
            } else {
              __dest___5->a = __nl___5 + 128U;
            }
            tmp___25 = _erealloc((void *)__dest___5->c, __dest___5->a + 1U, 0);
            __dest___5->c = (char *)tmp___25;
          } else {
            __nl___5 = __dest___5->len + (unsigned int )delim->value.str.len;
            if (__nl___5 >= __dest___5->a) {
              __dest___5->a = __nl___5 + 128U;
              tmp___27 = _erealloc((void *)__dest___5->c, __dest___5->a + 1U, 0);
              __dest___5->c = (char *)tmp___27;
            }
          }
          break;
        }
        memcpy((void */* __restrict  */)((void *)(__dest___5->c + __dest___5->len)),
               (void const   */* __restrict  */)((void const   *)delim->value.str.val),
               (unsigned int )delim->value.str.len);
        __dest___5->len = __nl___5;
        break;
      }
    }
    zend_hash_move_forward_ex(arr->value.ht, & pos);
  }
  while (1) {
    if (implstr.c) {
      *(implstr.c + implstr.len) = (char )'\000';
    }
    break;
  }
  if (implstr.len) {
    __s = implstr.c;
    __l = (int )implstr.len;
    return_value->value.str.len = __l;
    return_value->value.str.val = __s;
    return_value->type = (unsigned char)6;
    return;
  } else {
    while (1) {
      __s___0 = & implstr;
      if (__s___0->c) {
        _efree((void *)__s___0->c);
        __s___0->c = (char *)((void *)0);
      }
      __s___0->len = 0U;
      __s___0->a = __s___0->len;
      break;
    }
    return_value->value.str.len = 0;
    return_value->value.str.val = _estrndup("",
                                            (unsigned int )(sizeof("") - 1UL));
    return_value->type = (unsigned char)6;
    return;
  }
}
}

void zif_implode(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ zval **arg1 ;
  zval **arg2 ;
  zval *delim ;
  zval *arr ;
  int argc ;
  HashPosition pos ;
  int tmp ;
  void *tmp___0 ;
  char *__s ;
  int __l ;
  char *tmp___1 ;
  zval *orig_ptr ;
  void *tmp___2 ;
  zval *orig_ptr___0 ;
  void *tmp___3 ;
  zval *orig_ptr___1 ;
  void *tmp___4 ;

  {
  arg1 = (zval **)((void *)0);
  arg2 = (zval **)((void *)0);
  argc = ht;
  if (argc < 1) {
    zend_wrong_param_count();
    return;
  } else {
    if (argc > 2) {
      zend_wrong_param_count();
      return;
    } else {
      tmp = zend_get_parameters_ex(argc, & arg1, & arg2);
      if (tmp == -1) {
        zend_wrong_param_count();
        return;
      }
    }
  }
  if (argc == 1) {
    if ((int )(*arg1)->type != 4) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Argument to implode must be an array.");
      return;
    }
    tmp___0 = _emalloc((unsigned int )sizeof(zval ));
    delim = (zval *)tmp___0;
    delim->refcount = 1U;
    delim->is_ref = (unsigned char)0;
    __s = (char *)"";
    __l = (int )(sizeof("") - 1UL);
    delim->value.str.len = __l;
    delim->value.str.val = __s;
    delim->type = (unsigned char)6;
    orig_ptr = *arg1;
    if (orig_ptr->refcount > 1U) {
      (orig_ptr->refcount) --;
      tmp___2 = _emalloc((unsigned int )sizeof(zval ));
      *arg1 = (zval *)tmp___2;
      *(*arg1) = *orig_ptr;
      _zval_copy_ctor(*arg1);
      (*arg1)->refcount = 1U;
      (*arg1)->is_ref = (unsigned char)0;
    }
    arr = *arg1;
  } else {
    if ((int )(*arg1)->type == 4) {
      arr = *arg1;
      if ((int )(*arg2)->type != 6) {
        if (! (*arg2)->is_ref) {
          orig_ptr___0 = *arg2;
          if (orig_ptr___0->refcount > 1U) {
            (orig_ptr___0->refcount) --;
            tmp___3 = _emalloc((unsigned int )sizeof(zval ));
            *arg2 = (zval *)tmp___3;
            *(*arg2) = *orig_ptr___0;
            _zval_copy_ctor(*arg2);
            (*arg2)->refcount = 1U;
            (*arg2)->is_ref = (unsigned char)0;
          }
        }
        if ((int )(*arg2)->type != 6) {
          _convert_to_string(*arg2);
        }
      }
      delim = *arg2;
    } else {
      if ((int )(*arg2)->type == 4) {
        arr = *arg2;
        if ((int )(*arg1)->type != 6) {
          if (! (*arg1)->is_ref) {
            orig_ptr___1 = *arg1;
            if (orig_ptr___1->refcount > 1U) {
              (orig_ptr___1->refcount) --;
              tmp___4 = _emalloc((unsigned int )sizeof(zval ));
              *arg1 = (zval *)tmp___4;
              *(*arg1) = *orig_ptr___1;
              _zval_copy_ctor(*arg1);
              (*arg1)->refcount = 1U;
              (*arg1)->is_ref = (unsigned char)0;
            }
          }
          if ((int )(*arg1)->type != 6) {
            _convert_to_string(*arg1);
          }
        }
        delim = *arg1;
      } else {
        php_error_docref0((char const   *)((void *)0), 1 << 1L, "Bad arguments.");
        return;
      }
    }
  }
  pos = (arr->value.ht)->pInternalPointer;
  php_implode(delim, arr, return_value);
  (arr->value.ht)->pInternalPointer = pos;
  if (argc == 1) {
    _efree((void *)delim);
  }
  return;
}
}

void zif_strtok(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) 
{ zval **args[2] ;
  zval **tok ;
  zval **str ;
  char *token ;
  char *token_end ;
  char *p ;
  char *pe ;
  int skipped ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  zval *orig_ptr___0 ;
  void *tmp___1 ;
  char *tmp___2 ;
  char *__s ;
  int __l ;
  char *tmp___3 ;
  char *tmp___4 ;

  {
  skipped = 0;
  if (ht < 1) {
    zend_wrong_param_count();
    return;
  } else {
    if (ht > 2) {
      zend_wrong_param_count();
      return;
    } else {
      tmp = _zend_get_parameters_array_ex(ht, args);
      if (tmp == -1) {
        zend_wrong_param_count();
        return;
      }
    }
  }
  switch (ht) {
  case 1: 
  tok = args[0];
  break;
  default: ;
  case 2: 
  str = args[0];
  tok = args[1];
  if ((int )(*str)->type != 6) {
    if (! (*str)->is_ref) {
      orig_ptr = *str;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *str = (zval *)tmp___0;
        *(*str) = *orig_ptr;
        _zval_copy_ctor(*str);
        (*str)->refcount = 1U;
        (*str)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*str)->type != 6) {
      _convert_to_string(*str);
    }
  }
  zval_add_ref(str);
  if (basic_globals.strtok_zval) {
    _zval_ptr_dtor(& basic_globals.strtok_zval);
  }
  basic_globals.strtok_zval = *str;
  basic_globals.strtok_string = (*str)->value.str.val;
  basic_globals.strtok_last = basic_globals.strtok_string;
  basic_globals.strtok_len = (unsigned long )(*str)->value.str.len;
  break;
  }
  p = basic_globals.strtok_last;
  pe = basic_globals.strtok_string + basic_globals.strtok_len;
  if (! p) {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  } else {
    if ((unsigned int )p >= (unsigned int )pe) {
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    }
  }
  if ((int )(*tok)->type != 6) {
    if (! (*tok)->is_ref) {
      orig_ptr___0 = *tok;
      if (orig_ptr___0->refcount > 1U) {
        (orig_ptr___0->refcount) --;
        tmp___1 = _emalloc((unsigned int )sizeof(zval ));
        *tok = (zval *)tmp___1;
        *(*tok) = *orig_ptr___0;
        _zval_copy_ctor(*tok);
        (*tok)->refcount = 1U;
        (*tok)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*tok)->type != 6) {
      _convert_to_string(*tok);
    }
  }
  token = (*tok)->value.str.val;
  token_end = token + (*tok)->value.str.len;
  while ((unsigned int )token < (unsigned int )token_end) {
    tmp___2 = token;
    token ++;
    basic_globals.strtok_table[(unsigned char )*tmp___2] = (char)1;
  }
  while (basic_globals.strtok_table[(unsigned char )*p]) {
    p ++;
    if ((unsigned int )p >= (unsigned int )pe) {
      basic_globals.strtok_last = (char *)((void *)0);
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      goto restore;
    }
    skipped ++;
  }
  while (1) {
    p ++;
    if (! ((unsigned int )p < (unsigned int )pe)) {
      break;
    }
    if (basic_globals.strtok_table[(unsigned char )*p]) {
      goto return_token;
    }
  }
  if (p - basic_globals.strtok_last) {
    return_token: 
    __s = basic_globals.strtok_last + skipped;
    __l = (p - basic_globals.strtok_last) - skipped;
    return_value->value.str.len = __l;
    tmp___3 = _estrndup((char const   *)__s, (unsigned int )__l);
    return_value->value.str.val = tmp___3;
    return_value->type = (unsigned char)6;
    basic_globals.strtok_last = p + 1;
  } else {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    basic_globals.strtok_last = (char *)((void *)0);
  }
  restore: 
  token = (*tok)->value.str.val;
  while ((unsigned int )token < (unsigned int )token_end) {
    tmp___4 = token;
    token ++;
    basic_globals.strtok_table[(unsigned char )*tmp___4] = (char)0;
  }
  return;
}
}

char *php_strtoupper(char *s , size_t len ) 
{ unsigned char *c ;
  unsigned char *e ;
  int tmp ;

  {
  c = (unsigned char *)s;
  e = c + len;
  while ((unsigned int )c < (unsigned int )e) {
    tmp = toupper((int )*c);
    *c = (unsigned char )tmp;
    c ++;
  }
  return (s);
}
}

void zif_strtoupper(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) 
{ zval **arg ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  int is_ref ;
  int refcount ;

  {
  if (ht != 1) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(1, & arg);
    if (tmp) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*arg)->type != 6) {
    if (! (*arg)->is_ref) {
      orig_ptr = *arg;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *arg = (zval *)tmp___0;
        *(*arg) = *orig_ptr;
        _zval_copy_ctor(*arg);
        (*arg)->refcount = 1U;
        (*arg)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*arg)->type != 6) {
      _convert_to_string(*arg);
    }
  }
  is_ref = (int )return_value->is_ref;
  refcount = (int )return_value->refcount;
  *return_value = *(*arg);
  _zval_copy_ctor(return_value);
  return_value->is_ref = (unsigned char )is_ref;
  return_value->refcount = (unsigned int )refcount;
  php_strtoupper(return_value->value.str.val,
                 (unsigned int )return_value->value.str.len);
  return;
}
}

char *php_strtolower(char *s , size_t len ) 
{ unsigned char *c ;
  unsigned char *e ;
  int tmp ;

  {
  c = (unsigned char *)s;
  e = c + len;
  while ((unsigned int )c < (unsigned int )e) {
    tmp = tolower((int )*c);
    *c = (unsigned char )tmp;
    c ++;
  }
  return (s);
}
}

void zif_strtolower(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) 
{ zval **str ;
  char *ret ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  int is_ref ;
  int refcount ;

  {
  if (ht != 1) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(1, & str);
    if (tmp) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*str)->type != 6) {
    if (! (*str)->is_ref) {
      orig_ptr = *str;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *str = (zval *)tmp___0;
        *(*str) = *orig_ptr;
        _zval_copy_ctor(*str);
        (*str)->refcount = 1U;
        (*str)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*str)->type != 6) {
      _convert_to_string(*str);
    }
  }
  is_ref = (int )return_value->is_ref;
  refcount = (int )return_value->refcount;
  *return_value = *(*str);
  _zval_copy_ctor(return_value);
  return_value->is_ref = (unsigned char )is_ref;
  return_value->refcount = (unsigned int )refcount;
  ret = php_strtolower(return_value->value.str.val,
                       (unsigned int )return_value->value.str.len);
  return;
}
}

void php_basename(char *s , size_t len , char *suffix , size_t sufflen ,
                  char **p_ret , size_t *p_len ) 
{ char *ret ;
  char *c ;
  char *comp ;
  char *cend ;
  size_t inc_len ;
  size_t cnt ;
  int state ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  void *tmp___2 ;

  {
  ret = (char *)((void *)0);
  cend = s;
  comp = cend;
  c = comp;
  cnt = len;
  state = 0;
  while (cnt > 0U) {
    if ((int )*c == 0) {
      inc_len = 1U;
    } else {
      tmp___0 = mblen((char const   *)c, cnt);
      inc_len = (unsigned int )tmp___0;
    }
    switch ((int )inc_len) {
    case -2: 
    case -1: 
    inc_len = 1U;
    mblen((char const   *)((void *)0), 0U);
    break;
    case 0: 
    goto quit_loop;
    case 1: 
    if ((int )*c == 47) {
      if (state == 1) {
        state = 0;
        cend = c;
      }
    } else {
      if (state == 0) {
        comp = c;
        state = 1;
      }
    }
    break;
    default: ;
    if (state == 0) {
      comp = c;
      state = 1;
    }
    break;
    }
    c += inc_len;
    cnt -= inc_len;
  }
  quit_loop: 
  if (state == 1) {
    cend = c;
  }
  if ((unsigned int )suffix != (unsigned int )((void *)0)) {
    if (sufflen < (unsigned int )(cend - comp)) {
      tmp___1 = memcmp((void const   *)(cend - sufflen), (void const   *)suffix,
                       sufflen);
      if (tmp___1 == 0) {
        cend -= sufflen;
      }
    }
  }
  len = (unsigned int )(cend - comp);
  if (p_ret) {
    tmp___2 = _emalloc(len + 1U);
    ret = (char *)tmp___2;
    memcpy((void */* __restrict  */)((void *)ret),
           (void const   */* __restrict  */)((void const   *)comp), len);
    *(ret + len) = (char )'\000';
    *p_ret = ret;
  }
  if (p_len) {
    *p_len = len;
  }
  return;
}
}

void zif_basename(int ht , zval *return_value , zval **return_value_ptr ,
                  zval *this_ptr , int return_value_used ) 
{ char *string ;
  char *suffix ;
  char *ret ;
  int string_len ;
  int suffix_len ;
  size_t ret_len ;
  int tmp ;
  char *__s ;
  int __l ;
  char *tmp___0 ;

  {
  suffix = (char *)((void *)0);
  suffix_len = 0;
  tmp = zend_parse_parameters(ht, (char *)"s|s", & string, & string_len,
                              & suffix, & suffix_len);
  if (tmp == -1) {
    return;
  }
  php_basename(string, (unsigned int )string_len, suffix,
               (unsigned int )suffix_len, & ret, & ret_len);
  __s = ret;
  __l = (int )ret_len;
  return_value->value.str.len = __l;
  return_value->value.str.val = __s;
  return_value->type = (unsigned char)6;
  return;
}
}

size_t php_dirname(char *path , size_t len ) 
{ register char *end ;
  unsigned int len_adjust ;

  {
  end = (path + len) - 1;
  len_adjust = 0U;
  if (len == 0U) {
    return (0U);
  }
  while (1) {
    if ((unsigned int )end >= (unsigned int )path) {
      if (! ((int )*end == 47)) {
        break;
      }
    } else {
      break;
    }
    end --;
  }
  if ((unsigned int )end < (unsigned int )path) {
    *(path + 0) = (char )'/';
    *(path + 1) = (char )'\000';
    return (1U + len_adjust);
  }
  while (1) {
    if ((unsigned int )end >= (unsigned int )path) {
      if (! (! ((int )*end == 47))) {
        break;
      }
    } else {
      break;
    }
    end --;
  }
  if ((unsigned int )end < (unsigned int )path) {
    *(path + 0) = (char )'.';
    *(path + 1) = (char )'\000';
    return (1U + len_adjust);
  }
  while (1) {
    if ((unsigned int )end >= (unsigned int )path) {
      if (! ((int )*end == 47)) {
        break;
      }
    } else {
      break;
    }
    end --;
  }
  if ((unsigned int )end < (unsigned int )path) {
    *(path + 0) = (char )'/';
    *(path + 1) = (char )'\000';
    return (1U + len_adjust);
  }
  *(end + 1) = (char )'\000';
  return ((unsigned int )((end + 1) - path) + len_adjust);
}
}

void zif_dirname(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ zval **str ;
  char *ret ;
  size_t ret_len ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  char *__s ;
  int __l ;
  char *tmp___1 ;

  {
  if (ht != 1) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(1, & str);
    if (tmp == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*str)->type != 6) {
    if (! (*str)->is_ref) {
      orig_ptr = *str;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *str = (zval *)tmp___0;
        *(*str) = *orig_ptr;
        _zval_copy_ctor(*str);
        (*str)->refcount = 1U;
        (*str)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*str)->type != 6) {
      _convert_to_string(*str);
    }
  }
  ret = _estrndup((char const   *)(*str)->value.str.val,
                  (unsigned int )(*str)->value.str.len);
  ret_len = php_dirname(ret, (unsigned int )(*str)->value.str.len);
  __s = ret;
  __l = (int )ret_len;
  return_value->value.str.len = __l;
  return_value->value.str.val = __s;
  return_value->type = (unsigned char)6;
  return;
}
}

void zif_pathinfo(int ht , zval *return_value , zval **return_value_ptr ,
                  zval *this_ptr , int return_value_used ) 
{ zval *tmp ;
  char *path ;
  char *ret ;
  int path_len ;
  int have_basename ;
  size_t ret_len ;
  long opt ;
  int tmp___0 ;
  void *tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  char *p ;
  int idx ;
  void *tmp___4 ;
  size_t tmp___5 ;
  char *p___0 ;
  int idx___0 ;
  void *tmp___6 ;
  size_t tmp___7 ;
  int is_ref ;
  int refcount ;
  zval **element ;
  int is_ref___0 ;
  int refcount___0 ;
  int tmp___8 ;

  {
  ret = (char *)((void *)0);
  opt = 15L;
  tmp___0 = zend_parse_parameters(ht, (char *)"s|l", & path, & path_len, & opt);
  if (tmp___0 == -1) {
    return;
  }
  have_basename = (opt & 2L) == 2L;
  tmp___1 = _emalloc((unsigned int )sizeof(zval ));
  tmp = (zval *)tmp___1;
  tmp->refcount = 1U;
  tmp->is_ref = (unsigned char)0;
  _array_init(tmp);
  if ((opt & 1L) == 1L) {
    ret = _estrndup((char const   *)path, (unsigned int )path_len);
    php_dirname(ret, (unsigned int )path_len);
    if (*ret) {
      tmp___2 = strlen("dirname");
      add_assoc_string_ex(tmp, (char *)"dirname", tmp___2 + 1U, ret, 1);
    }
    _efree((void *)ret);
    ret = (char *)((void *)0);
  }
  if (have_basename) {
    php_basename(path, (unsigned int )path_len, (char *)((void *)0), 0U, & ret,
                 & ret_len);
    tmp___3 = strlen("basename");
    add_assoc_stringl_ex(tmp, (char *)"basename", tmp___3 + 1U, ret, ret_len, 0);
  }
  if ((opt & 4L) == 4L) {
    if (! have_basename) {
      php_basename(path, (unsigned int )path_len, (char *)((void *)0), 0U,
                   & ret, & ret_len);
    }
    tmp___4 = zend_memrchr((void const   *)ret, '.', ret_len);
    p = (char *)tmp___4;
    if (p) {
      idx = p - ret;
      tmp___5 = strlen("extension");
      add_assoc_stringl_ex(tmp, (char *)"extension", tmp___5 + 1U,
                           (ret + idx) + 1, (ret_len - (unsigned int )idx) - 1U,
                           1);
    }
  }
  if ((opt & 8L) == 8L) {
    if (! have_basename) {
      if (! ret) {
        php_basename(path, (unsigned int )path_len, (char *)((void *)0), 0U,
                     & ret, & ret_len);
      }
    }
    tmp___6 = zend_memrchr((void const   *)ret, '.', ret_len);
    p___0 = (char *)tmp___6;
    if (p___0) {
      idx___0 = p___0 - ret;
    } else {
      idx___0 = (int )ret_len;
    }
    tmp___7 = strlen("filename");
    add_assoc_stringl_ex(tmp, (char *)"filename", tmp___7 + 1U, ret,
                         (unsigned int )idx___0, 1);
  }
  if (! have_basename) {
    if (ret) {
      _efree((void *)ret);
    }
  }
  if (opt == 15L) {
    is_ref = (int )return_value->is_ref;
    refcount = (int )return_value->refcount;
    *return_value = *tmp;
    tmp->type = (unsigned char)0;
    _zval_ptr_dtor(& tmp);
    return_value->is_ref = (unsigned char )is_ref;
    return_value->refcount = (unsigned int )refcount;
    return;
  } else {
    tmp___8 = zend_hash_get_current_data_ex(tmp->value.ht, (void **)(& element),
                                            (HashPosition *)((void *)0));
    if (tmp___8 == 0) {
      is_ref___0 = (int )return_value->is_ref;
      refcount___0 = (int )return_value->refcount;
      *return_value = *(*element);
      _zval_copy_ctor(return_value);
      return_value->is_ref = (unsigned char )is_ref___0;
      return_value->refcount = (unsigned int )refcount___0;
    } else {
      return_value->value.str.len = 0;
      return_value->value.str.val = _estrndup("",
                                              (unsigned int )(sizeof("") - 1UL));
      return_value->type = (unsigned char)6;
    }
  }
  _zval_ptr_dtor(& tmp);
  return;
}
}

char *php_stristr(unsigned char *s , unsigned char *t , size_t s_len ,
                  size_t t_len ) 
{ char *tmp ;

  {
  php_strtolower((char *)s, s_len);
  php_strtolower((char *)t, t_len);
  tmp = zend_memnstr((char *)s, (char *)t, (int )t_len, (char *)(s + s_len));
  return (tmp);
}
}

size_t php_strspn(char *s1 , char *s2 , char *s1_end , char *s2_end ) 
{ register char const   *p ;
  register char const   *spanp ;
  register char c ;
  char const   *tmp ;

  {
  p = (char const   *)s1;
  c = (char )*p;
  cont: 
  spanp = (char const   *)s2;
  while (1) {
    if ((unsigned int )p != (unsigned int )s1_end) {
      if (! ((unsigned int )spanp != (unsigned int )s2_end)) {
        break;
      }
    } else {
      break;
    }
    tmp = spanp;
    spanp ++;
    if ((int const   )*tmp == (int const   )c) {
      p ++;
      c = (char )*p;
      goto cont;
    }
  }
  return ((unsigned int )(p - (char const   *)s1));
}
}

size_t php_strcspn(char *s1 , char *s2 , char *s1_end , char *s2_end ) 
{ register char const   *p ;
  register char const   *spanp ;
  register char c ;
  char const   *tmp ;

  {
  c = *s1;
  p = (char const   *)s1;
  while (1) {
    spanp = (char const   *)s2;
    while (1) {
      if ((int const   )*spanp == (int const   )c) {
        return ((unsigned int )(p - (char const   *)s1));
      } else {
        if ((unsigned int )p == (unsigned int )s1_end) {
          return ((unsigned int )(p - (char const   *)s1));
        }
      }
      tmp = spanp;
      spanp ++;
      if (! ((unsigned int )tmp < (unsigned int )(s2_end - 1))) {
        break;
      }
    }
    p ++;
    c = (char )*p;
  }
}
}

void zif_stristr(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ zval **haystack ;
  zval **needle ;
  char *found ;
  int found_offset ;
  char *haystack_orig ;
  char needle_char[2] ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  zval *orig_ptr___0 ;
  void *tmp___1 ;
  zval *orig_ptr___1 ;
  void *tmp___2 ;
  zval *orig_ptr___2 ;
  void *tmp___3 ;
  char *__s ;
  int __l ;
  char *tmp___4 ;

  {
  found = (char *)((void *)0);
  if (ht != 2) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(2, & haystack, & needle);
    if (tmp == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  orig_ptr = *haystack;
  if (orig_ptr->refcount > 1U) {
    (orig_ptr->refcount) --;
    tmp___0 = _emalloc((unsigned int )sizeof(zval ));
    *haystack = (zval *)tmp___0;
    *(*haystack) = *orig_ptr;
    _zval_copy_ctor(*haystack);
    (*haystack)->refcount = 1U;
    (*haystack)->is_ref = (unsigned char)0;
  }
  orig_ptr___0 = *needle;
  if (orig_ptr___0->refcount > 1U) {
    (orig_ptr___0->refcount) --;
    tmp___1 = _emalloc((unsigned int )sizeof(zval ));
    *needle = (zval *)tmp___1;
    *(*needle) = *orig_ptr___0;
    _zval_copy_ctor(*needle);
    (*needle)->refcount = 1U;
    (*needle)->is_ref = (unsigned char)0;
  }
  if ((int )(*haystack)->type != 6) {
    if (! (*haystack)->is_ref) {
      orig_ptr___1 = *haystack;
      if (orig_ptr___1->refcount > 1U) {
        (orig_ptr___1->refcount) --;
        tmp___2 = _emalloc((unsigned int )sizeof(zval ));
        *haystack = (zval *)tmp___2;
        *(*haystack) = *orig_ptr___1;
        _zval_copy_ctor(*haystack);
        (*haystack)->refcount = 1U;
        (*haystack)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*haystack)->type != 6) {
      _convert_to_string(*haystack);
    }
  }
  haystack_orig = _estrndup((char const   *)(*haystack)->value.str.val,
                            (unsigned int )(*haystack)->value.str.len);
  if ((int )(*needle)->type == 6) {
    if (! (*needle)->value.str.len) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L, "Empty delimiter.");
      _efree((void *)haystack_orig);
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    }
    found = php_stristr((unsigned char *)(*haystack)->value.str.val,
                        (unsigned char *)(*needle)->value.str.val,
                        (unsigned int )(*haystack)->value.str.len,
                        (unsigned int )(*needle)->value.str.len);
  } else {
    if ((int )(*needle)->type != 1) {
      if (! (*needle)->is_ref) {
        orig_ptr___2 = *needle;
        if (orig_ptr___2->refcount > 1U) {
          (orig_ptr___2->refcount) --;
          tmp___3 = _emalloc((unsigned int )sizeof(zval ));
          *needle = (zval *)tmp___3;
          *(*needle) = *orig_ptr___2;
          _zval_copy_ctor(*needle);
          (*needle)->refcount = 1U;
          (*needle)->is_ref = (unsigned char)0;
        }
      }
      convert_to_long(*needle);
    }
    needle_char[0] = (char )(*needle)->value.lval;
    needle_char[1] = (char)0;
    found = php_stristr((unsigned char *)(*haystack)->value.str.val,
                        (unsigned char *)(needle_char),
                        (unsigned int )(*haystack)->value.str.len, 1U);
  }
  if (found) {
    found_offset = found - (*haystack)->value.str.val;
    __s = haystack_orig + found_offset;
    __l = (*haystack)->value.str.len - found_offset;
    return_value->value.str.len = __l;
    tmp___4 = _estrndup((char const   *)__s, (unsigned int )__l);
    return_value->value.str.val = tmp___4;
    return_value->type = (unsigned char)6;
  } else {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
  }
  _efree((void *)haystack_orig);
  return;
}
}

void zif_strstr(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) 
{ zval **haystack ;
  zval **needle ;
  char *found ;
  char needle_char[2] ;
  long found_offset ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  zval *orig_ptr___0 ;
  void *tmp___1 ;
  char *__s ;
  int __l ;
  char *tmp___2 ;

  {
  found = (char *)((void *)0);
  if (ht != 2) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(2, & haystack, & needle);
    if (tmp == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*haystack)->type != 6) {
    if (! (*haystack)->is_ref) {
      orig_ptr = *haystack;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *haystack = (zval *)tmp___0;
        *(*haystack) = *orig_ptr;
        _zval_copy_ctor(*haystack);
        (*haystack)->refcount = 1U;
        (*haystack)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*haystack)->type != 6) {
      _convert_to_string(*haystack);
    }
  }
  if ((int )(*needle)->type == 6) {
    if (! (*needle)->value.str.len) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L, "Empty delimiter.");
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    }
    found = zend_memnstr((*haystack)->value.str.val, (*needle)->value.str.val,
                         (*needle)->value.str.len,
                         (*haystack)->value.str.val + (*haystack)->value.str.len);
  } else {
    if ((int )(*needle)->type != 1) {
      if (! (*needle)->is_ref) {
        orig_ptr___0 = *needle;
        if (orig_ptr___0->refcount > 1U) {
          (orig_ptr___0->refcount) --;
          tmp___1 = _emalloc((unsigned int )sizeof(zval ));
          *needle = (zval *)tmp___1;
          *(*needle) = *orig_ptr___0;
          _zval_copy_ctor(*needle);
          (*needle)->refcount = 1U;
          (*needle)->is_ref = (unsigned char)0;
        }
      }
      convert_to_long(*needle);
    }
    needle_char[0] = (char )(*needle)->value.lval;
    needle_char[1] = (char)0;
    found = zend_memnstr((*haystack)->value.str.val, needle_char, 1,
                         (*haystack)->value.str.val + (*haystack)->value.str.len);
  }
  if (found) {
    found_offset = (long )(found - (*haystack)->value.str.val);
    __s = found;
    __l = (int )((long )(*haystack)->value.str.len - found_offset);
    return_value->value.str.len = __l;
    tmp___2 = _estrndup((char const   *)__s, (unsigned int )__l);
    return_value->value.str.val = tmp___2;
    return_value->type = (unsigned char)6;
    return;
  } else {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
}
}

void zif_strpos(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) 
{ zval **haystack ;
  zval **needle ;
  zval **z_offset ;
  char *found ;
  char needle_char[2] ;
  int offset ;
  int argc ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  zval *orig_ptr___0 ;
  void *tmp___1 ;
  zval *orig_ptr___1 ;
  void *tmp___2 ;

  {
  found = (char *)((void *)0);
  offset = 0;
  argc = ht;
  if (argc < 2) {
    zend_wrong_param_count();
    return;
  } else {
    if (argc > 3) {
      zend_wrong_param_count();
      return;
    } else {
      tmp = zend_get_parameters_ex(argc, & haystack, & needle, & z_offset);
      if (tmp == -1) {
        zend_wrong_param_count();
        return;
      }
    }
  }
  if ((int )(*haystack)->type != 6) {
    if (! (*haystack)->is_ref) {
      orig_ptr = *haystack;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *haystack = (zval *)tmp___0;
        *(*haystack) = *orig_ptr;
        _zval_copy_ctor(*haystack);
        (*haystack)->refcount = 1U;
        (*haystack)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*haystack)->type != 6) {
      _convert_to_string(*haystack);
    }
  }
  if (argc > 2) {
    if ((int )(*z_offset)->type != 1) {
      if (! (*z_offset)->is_ref) {
        orig_ptr___0 = *z_offset;
        if (orig_ptr___0->refcount > 1U) {
          (orig_ptr___0->refcount) --;
          tmp___1 = _emalloc((unsigned int )sizeof(zval ));
          *z_offset = (zval *)tmp___1;
          *(*z_offset) = *orig_ptr___0;
          _zval_copy_ctor(*z_offset);
          (*z_offset)->refcount = 1U;
          (*z_offset)->is_ref = (unsigned char)0;
        }
      }
      convert_to_long(*z_offset);
    }
    offset = (int )(*z_offset)->value.lval;
  }
  if (offset < 0) {
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "Offset not contained in string.");
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  } else {
    if (offset > (*haystack)->value.str.len) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Offset not contained in string.");
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    }
  }
  if ((int )(*needle)->type == 6) {
    if (! (*needle)->value.str.len) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L, "Empty delimiter.");
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    }
    found = zend_memnstr((*haystack)->value.str.val + offset,
                         (*needle)->value.str.val, (*needle)->value.str.len,
                         (*haystack)->value.str.val + (*haystack)->value.str.len);
  } else {
    if ((int )(*needle)->type != 1) {
      if (! (*needle)->is_ref) {
        orig_ptr___1 = *needle;
        if (orig_ptr___1->refcount > 1U) {
          (orig_ptr___1->refcount) --;
          tmp___2 = _emalloc((unsigned int )sizeof(zval ));
          *needle = (zval *)tmp___2;
          *(*needle) = *orig_ptr___1;
          _zval_copy_ctor(*needle);
          (*needle)->refcount = 1U;
          (*needle)->is_ref = (unsigned char)0;
        }
      }
      convert_to_long(*needle);
    }
    needle_char[0] = (char )(*needle)->value.lval;
    needle_char[1] = (char)0;
    found = zend_memnstr((*haystack)->value.str.val + offset, needle_char, 1,
                         (*haystack)->value.str.val + (*haystack)->value.str.len);
  }
  if (found) {
    return_value->type = (unsigned char)1;
    return_value->value.lval = (long )(found - (*haystack)->value.str.val);
    return;
  } else {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
}
}

void zif_stripos(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ char *found ;
  char *haystack ;
  int haystack_len ;
  long offset ;
  char *needle_dup ;
  char *haystack_dup ;
  char needle_char[2] ;
  zval *needle ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  found = (char *)((void *)0);
  offset = 0L;
  needle_dup = (char *)((void *)0);
  tmp = zend_parse_parameters(ht, (char *)"sz|l", & haystack, & haystack_len,
                              & needle, & offset);
  if (tmp == -1) {
    return;
  }
  if (offset < 0L) {
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "Offset not contained in string.");
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  } else {
    if (offset > (long )haystack_len) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Offset not contained in string.");
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    }
  }
  if (haystack_len == 0) {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  haystack_dup = _estrndup((char const   *)haystack, (unsigned int )haystack_len);
  php_strtolower(haystack_dup, (unsigned int )haystack_len);
  if ((int )needle->type == 6) {
    if (needle->value.str.len == 0) {
      _efree((void *)haystack_dup);
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    } else {
      if (needle->value.str.len > haystack_len) {
        _efree((void *)haystack_dup);
        return_value->type = (unsigned char)3;
        return_value->value.lval = 0L;
        return;
      }
    }
    needle_dup = _estrndup((char const   *)needle->value.str.val,
                           (unsigned int )needle->value.str.len);
    php_strtolower(needle_dup, (unsigned int )needle->value.str.len);
    found = zend_memnstr(haystack_dup + offset, needle_dup,
                         needle->value.str.len, haystack_dup + haystack_len);
  } else {
    switch ((int )needle->type) {
    case 1: 
    case 3: 
    tmp___0 = tolower((int )((char )needle->value.lval));
    needle_char[0] = (char )tmp___0;
    break;
    case 2: 
    tmp___1 = tolower((int )((char )needle->value.dval));
    needle_char[0] = (char )tmp___1;
    break;
    default: 
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "needle is not a string or an integer.");
    _efree((void *)haystack_dup);
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
    break;
    }
    needle_char[1] = (char )'\000';
    found = zend_memnstr(haystack_dup + offset, needle_char,
                         (int )(sizeof(needle_char) - 1UL),
                         haystack_dup + haystack_len);
  }
  _efree((void *)haystack_dup);
  if (needle_dup) {
    _efree((void *)needle_dup);
  }
  if (found) {
    return_value->type = (unsigned char)1;
    return_value->value.lval = (long )(found - haystack_dup);
    return;
  } else {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
}
}

void zif_strrpos(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ zval **zneedle ;
  char *needle ;
  char *haystack ;
  int needle_len ;
  int haystack_len ;
  long offset ;
  char *p ;
  char *e ;
  char ord_needle[2] ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  int tmp___3 ;

  {
  offset = 0L;
  tmp = zend_parse_parameters(ht, (char *)"sZ|l", & haystack, & haystack_len,
                              & zneedle, & offset);
  if (tmp == -1) {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  if ((int )(*zneedle)->type == 6) {
    needle = (*zneedle)->value.str.val;
    needle_len = (*zneedle)->value.str.len;
  } else {
    if ((int )(*zneedle)->type != 1) {
      if (! (*zneedle)->is_ref) {
        orig_ptr = *zneedle;
        if (orig_ptr->refcount > 1U) {
          (orig_ptr->refcount) --;
          tmp___0 = _emalloc((unsigned int )sizeof(zval ));
          *zneedle = (zval *)tmp___0;
          *(*zneedle) = *orig_ptr;
          _zval_copy_ctor(*zneedle);
          (*zneedle)->refcount = 1U;
          (*zneedle)->is_ref = (unsigned char)0;
        }
      }
      convert_to_long(*zneedle);
    }
    ord_needle[0] = (char )((*zneedle)->value.lval & 255L);
    ord_needle[1] = (char )'\000';
    needle = ord_needle;
    needle_len = 1;
  }
  if (haystack_len == 0) {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  } else {
    if (needle_len == 0) {
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    }
  }
  if (offset >= 0L) {
    if (offset > (long )haystack_len) {
      php_error_docref0((char const   *)((void *)0), 1 << 3L,
                        "Offset is greater than the length of haystack string");
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    }
    p = haystack + offset;
    e = (haystack + haystack_len) - needle_len;
  } else {
    if (- offset > (long )haystack_len) {
      php_error_docref0((char const   *)((void *)0), 1 << 3L,
                        "Offset is greater than the length of haystack string");
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    }
    p = haystack;
    if ((long )needle_len > - offset) {
      e = (haystack + haystack_len) - needle_len;
    } else {
      e = (haystack + haystack_len) + offset;
    }
  }
  if (needle_len == 1) {
    while ((unsigned int )e >= (unsigned int )p) {
      if ((int )*e == (int )*needle) {
        return_value->type = (unsigned char)1;
        if (offset > 0L) {
          tmp___1 = offset;
        } else {
          tmp___1 = 0L;
        }
        return_value->value.lval = (long )(e - p) + tmp___1;
        return;
      }
      e --;
    }
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  while ((unsigned int )e >= (unsigned int )p) {
    tmp___3 = memcmp((void const   *)e, (void const   *)needle,
                     (unsigned int )needle_len);
    if (tmp___3 == 0) {
      return_value->type = (unsigned char)1;
      if (offset > 0L) {
        tmp___2 = offset;
      } else {
        tmp___2 = 0L;
      }
      return_value->value.lval = (long )(e - p) + tmp___2;
      return;
    }
    e --;
  }
  return_value->type = (unsigned char)3;
  return_value->value.lval = 0L;
  return;
}
}

void zif_strripos(int ht , zval *return_value , zval **return_value_ptr ,
                  zval *this_ptr , int return_value_used ) 
{ zval **zneedle ;
  char *needle ;
  char *haystack ;
  int needle_len ;
  int haystack_len ;
  long offset ;
  char *p ;
  char *e ;
  char ord_needle[2] ;
  char *needle_dup ;
  char *haystack_dup ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  int tmp___1 ;
  long tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;
  int tmp___5 ;

  {
  offset = 0L;
  tmp = zend_parse_parameters(ht, (char *)"sZ|l", & haystack, & haystack_len,
                              & zneedle, & offset);
  if (tmp == -1) {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  if ((int )(*zneedle)->type == 6) {
    needle = (*zneedle)->value.str.val;
    needle_len = (*zneedle)->value.str.len;
  } else {
    if ((int )(*zneedle)->type != 1) {
      if (! (*zneedle)->is_ref) {
        orig_ptr = *zneedle;
        if (orig_ptr->refcount > 1U) {
          (orig_ptr->refcount) --;
          tmp___0 = _emalloc((unsigned int )sizeof(zval ));
          *zneedle = (zval *)tmp___0;
          *(*zneedle) = *orig_ptr;
          _zval_copy_ctor(*zneedle);
          (*zneedle)->refcount = 1U;
          (*zneedle)->is_ref = (unsigned char)0;
        }
      }
      convert_to_long(*zneedle);
    }
    ord_needle[0] = (char )((*zneedle)->value.lval & 255L);
    ord_needle[1] = (char )'\000';
    needle = ord_needle;
    needle_len = 1;
  }
  if (haystack_len == 0) {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  } else {
    if (needle_len == 0) {
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    }
  }
  if (needle_len == 1) {
    if (offset >= 0L) {
      if (offset > (long )haystack_len) {
        php_error_docref0((char const   *)((void *)0), 1 << 3L,
                          "Offset is greater than the length of haystack string");
        return_value->type = (unsigned char)3;
        return_value->value.lval = 0L;
        return;
      }
      p = haystack + offset;
      e = (haystack + haystack_len) - 1;
    } else {
      p = haystack;
      if (- offset > (long )haystack_len) {
        php_error_docref0((char const   *)((void *)0), 1 << 3L,
                          "Offset is greater than the length of haystack string");
        return_value->type = (unsigned char)3;
        return_value->value.lval = 0L;
        return;
      } else {
        e = (haystack + haystack_len) + offset;
      }
    }
    tmp___1 = tolower((int )*needle);
    ord_needle[0] = (char )tmp___1;
    while ((unsigned int )e >= (unsigned int )p) {
      tmp___3 = tolower((int )*e);
      if (tmp___3 == (int )ord_needle[0]) {
        return_value->type = (unsigned char)1;
        if (offset > 0L) {
          tmp___2 = offset;
        } else {
          tmp___2 = 0L;
        }
        return_value->value.lval = (long )(e - p) + tmp___2;
        return;
      }
      e --;
    }
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  needle_dup = _estrndup((char const   *)needle, (unsigned int )needle_len);
  php_strtolower(needle_dup, (unsigned int )needle_len);
  haystack_dup = _estrndup((char const   *)haystack, (unsigned int )haystack_len);
  php_strtolower(haystack_dup, (unsigned int )haystack_len);
  if (offset >= 0L) {
    if (offset > (long )haystack_len) {
      _efree((void *)needle_dup);
      _efree((void *)haystack_dup);
      php_error_docref0((char const   *)((void *)0), 1 << 3L,
                        "Offset is greater than the length of haystack string");
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    }
    p = haystack_dup + offset;
    e = (haystack_dup + haystack_len) - needle_len;
  } else {
    if (- offset > (long )haystack_len) {
      _efree((void *)needle_dup);
      _efree((void *)haystack_dup);
      php_error_docref0((char const   *)((void *)0), 1 << 3L,
                        "Offset is greater than the length of haystack string");
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    }
    p = haystack_dup;
    if ((long )needle_len > - offset) {
      e = (haystack_dup + haystack_len) - needle_len;
    } else {
      e = (haystack_dup + haystack_len) + offset;
    }
  }
  while ((unsigned int )e >= (unsigned int )p) {
    tmp___5 = memcmp((void const   *)e, (void const   *)needle_dup,
                     (unsigned int )needle_len);
    if (tmp___5 == 0) {
      _efree((void *)haystack_dup);
      _efree((void *)needle_dup);
      return_value->type = (unsigned char)1;
      if (offset > 0L) {
        tmp___4 = offset;
      } else {
        tmp___4 = 0L;
      }
      return_value->value.lval = (long )(e - p) + tmp___4;
      return;
    }
    e --;
  }
  _efree((void *)haystack_dup);
  _efree((void *)needle_dup);
  return_value->type = (unsigned char)3;
  return_value->value.lval = 0L;
  return;
}
}

void zif_strrchr(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ zval **haystack ;
  zval **needle ;
  char *found ;
  long found_offset ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  void *tmp___1 ;
  zval *orig_ptr___0 ;
  void *tmp___2 ;
  void *tmp___3 ;
  char *__s ;
  int __l ;
  char *tmp___4 ;

  {
  found = (char *)((void *)0);
  if (ht != 2) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(2, & haystack, & needle);
    if (tmp == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*haystack)->type != 6) {
    if (! (*haystack)->is_ref) {
      orig_ptr = *haystack;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *haystack = (zval *)tmp___0;
        *(*haystack) = *orig_ptr;
        _zval_copy_ctor(*haystack);
        (*haystack)->refcount = 1U;
        (*haystack)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*haystack)->type != 6) {
      _convert_to_string(*haystack);
    }
  }
  if ((int )(*needle)->type == 6) {
    tmp___1 = zend_memrchr((void const   *)(*haystack)->value.str.val,
                           (int )*((*needle)->value.str.val),
                           (unsigned int )(*haystack)->value.str.len);
    found = (char *)tmp___1;
  } else {
    if ((int )(*needle)->type != 1) {
      if (! (*needle)->is_ref) {
        orig_ptr___0 = *needle;
        if (orig_ptr___0->refcount > 1U) {
          (orig_ptr___0->refcount) --;
          tmp___2 = _emalloc((unsigned int )sizeof(zval ));
          *needle = (zval *)tmp___2;
          *(*needle) = *orig_ptr___0;
          _zval_copy_ctor(*needle);
          (*needle)->refcount = 1U;
          (*needle)->is_ref = (unsigned char)0;
        }
      }
      convert_to_long(*needle);
    }
    tmp___3 = zend_memrchr((void const   *)(*haystack)->value.str.val,
                           (int )((char )(*needle)->value.lval),
                           (unsigned int )(*haystack)->value.str.len);
    found = (char *)tmp___3;
  }
  if (found) {
    found_offset = (long )(found - (*haystack)->value.str.val);
    __s = found;
    __l = (int )((long )(*haystack)->value.str.len - found_offset);
    return_value->value.str.len = __l;
    tmp___4 = _estrndup((char const   *)__s, (unsigned int )__l);
    return_value->value.str.val = tmp___4;
    return_value->type = (unsigned char)6;
    return;
  } else {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
}
}

static char *php_chunk_split(char *src , int srclen , char *end , int endlen ,
                             int chunklen , int *destlen ) 
{ char *dest ;
  char *p ;
  char *q ;
  int chunks ;
  int restlen ;
  void *tmp ;

  {
  chunks = srclen / chunklen;
  restlen = srclen - chunks * chunklen;
  tmp = _safe_emalloc((unsigned int )((srclen + (chunks + 1) * endlen) + 1),
                      (unsigned int )sizeof(char ), 0U);
  dest = (char *)tmp;
  p = src;
  q = dest;
  while ((unsigned int )p < (unsigned int )(((src + srclen) - chunklen) + 1)) {
    memcpy((void */* __restrict  */)((void *)q),
           (void const   */* __restrict  */)((void const   *)p),
           (unsigned int )chunklen);
    q += chunklen;
    memcpy((void */* __restrict  */)((void *)q),
           (void const   */* __restrict  */)((void const   *)end),
           (unsigned int )endlen);
    q += endlen;
    p += chunklen;
  }
  if (restlen) {
    memcpy((void */* __restrict  */)((void *)q),
           (void const   */* __restrict  */)((void const   *)p),
           (unsigned int )restlen);
    q += restlen;
    memcpy((void */* __restrict  */)((void *)q),
           (void const   */* __restrict  */)((void const   *)end),
           (unsigned int )endlen);
    q += endlen;
  }
  *q = (char )'\000';
  if (destlen) {
    *destlen = q - dest;
  }
  return (dest);
}
}

void zif_chunk_split(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) 
{ zval **p_str ;
  zval **p_chunklen ;
  zval **p_ending ;
  char *result ;
  char *end ;
  int endlen ;
  int chunklen ;
  int result_len ;
  int argc ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  zval *orig_ptr___0 ;
  void *tmp___1 ;
  zval *orig_ptr___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  char *__s ;
  int __l ;
  char *tmp___4 ;
  char *__s___0 ;
  int __l___0 ;
  char *tmp___5 ;

  {
  end = (char *)"\r\n";
  endlen = 2;
  chunklen = 76;
  argc = ht;
  if (argc < 1) {
    zend_wrong_param_count();
    return;
  } else {
    if (argc > 3) {
      zend_wrong_param_count();
      return;
    } else {
      tmp = zend_get_parameters_ex(argc, & p_str, & p_chunklen, & p_ending);
      if (tmp == -1) {
        zend_wrong_param_count();
        return;
      }
    }
  }
  if ((int )(*p_str)->type != 6) {
    if (! (*p_str)->is_ref) {
      orig_ptr = *p_str;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *p_str = (zval *)tmp___0;
        *(*p_str) = *orig_ptr;
        _zval_copy_ctor(*p_str);
        (*p_str)->refcount = 1U;
        (*p_str)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*p_str)->type != 6) {
      _convert_to_string(*p_str);
    }
  }
  if (argc > 1) {
    if ((int )(*p_chunklen)->type != 1) {
      if (! (*p_chunklen)->is_ref) {
        orig_ptr___0 = *p_chunklen;
        if (orig_ptr___0->refcount > 1U) {
          (orig_ptr___0->refcount) --;
          tmp___1 = _emalloc((unsigned int )sizeof(zval ));
          *p_chunklen = (zval *)tmp___1;
          *(*p_chunklen) = *orig_ptr___0;
          _zval_copy_ctor(*p_chunklen);
          (*p_chunklen)->refcount = 1U;
          (*p_chunklen)->is_ref = (unsigned char)0;
        }
      }
      convert_to_long(*p_chunklen);
    }
    chunklen = (int )(*p_chunklen)->value.lval;
  }
  if (argc > 2) {
    if ((int )(*p_ending)->type != 6) {
      if (! (*p_ending)->is_ref) {
        orig_ptr___1 = *p_ending;
        if (orig_ptr___1->refcount > 1U) {
          (orig_ptr___1->refcount) --;
          tmp___2 = _emalloc((unsigned int )sizeof(zval ));
          *p_ending = (zval *)tmp___2;
          *(*p_ending) = *orig_ptr___1;
          _zval_copy_ctor(*p_ending);
          (*p_ending)->refcount = 1U;
          (*p_ending)->is_ref = (unsigned char)0;
        }
      }
      if ((int )(*p_ending)->type != 6) {
        _convert_to_string(*p_ending);
      }
    }
    end = (*p_ending)->value.str.val;
    endlen = (*p_ending)->value.str.len;
  }
  if (chunklen <= 0) {
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "Chunk length should be greater than zero.");
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  if (chunklen > (*p_str)->value.str.len) {
    result_len = endlen + (*p_str)->value.str.len;
    tmp___3 = _emalloc((unsigned int )(result_len + 1));
    result = (char *)tmp___3;
    memcpy((void */* __restrict  */)((void *)result),
           (void const   */* __restrict  */)((void const   *)(*p_str)->value.str.val),
           (unsigned int )(*p_str)->value.str.len);
    memcpy((void */* __restrict  */)((void *)(result + (*p_str)->value.str.len)),
           (void const   */* __restrict  */)((void const   *)end),
           (unsigned int )endlen);
    *(result + result_len) = (char )'\000';
    __s = result;
    __l = result_len;
    return_value->value.str.len = __l;
    return_value->value.str.val = __s;
    return_value->type = (unsigned char)6;
    return;
  }
  if (! (*p_str)->value.str.len) {
    return_value->value.str.len = 0;
    return_value->value.str.val = _estrndup("",
                                            (unsigned int )(sizeof("") - 1UL));
    return_value->type = (unsigned char)6;
    return;
  }
  result = php_chunk_split((*p_str)->value.str.val, (*p_str)->value.str.len,
                           end, endlen, chunklen, & result_len);
  if (result) {
    __s___0 = result;
    __l___0 = result_len;
    return_value->value.str.len = __l___0;
    return_value->value.str.val = __s___0;
    return_value->type = (unsigned char)6;
    return;
  } else {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
}
}

void zif_substr(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) 
{ zval **str ;
  zval **from ;
  zval **len ;
  int l ;
  int f ;
  int argc ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  zval *orig_ptr___0 ;
  void *tmp___1 ;
  zval *orig_ptr___1 ;
  void *tmp___2 ;
  char *__s ;
  int __l ;
  char *tmp___3 ;

  {
  argc = ht;
  if (argc < 2) {
    zend_wrong_param_count();
    return;
  } else {
    if (argc > 3) {
      zend_wrong_param_count();
      return;
    } else {
      tmp = zend_get_parameters_ex(argc, & str, & from, & len);
      if (tmp == -1) {
        zend_wrong_param_count();
        return;
      }
    }
  }
  if ((int )(*str)->type != 6) {
    if (! (*str)->is_ref) {
      orig_ptr = *str;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *str = (zval *)tmp___0;
        *(*str) = *orig_ptr;
        _zval_copy_ctor(*str);
        (*str)->refcount = 1U;
        (*str)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*str)->type != 6) {
      _convert_to_string(*str);
    }
  }
  if ((int )(*from)->type != 1) {
    if (! (*from)->is_ref) {
      orig_ptr___0 = *from;
      if (orig_ptr___0->refcount > 1U) {
        (orig_ptr___0->refcount) --;
        tmp___1 = _emalloc((unsigned int )sizeof(zval ));
        *from = (zval *)tmp___1;
        *(*from) = *orig_ptr___0;
        _zval_copy_ctor(*from);
        (*from)->refcount = 1U;
        (*from)->is_ref = (unsigned char)0;
      }
    }
    convert_to_long(*from);
  }
  if (argc > 2) {
    if ((int )(*len)->type != 1) {
      if (! (*len)->is_ref) {
        orig_ptr___1 = *len;
        if (orig_ptr___1->refcount > 1U) {
          (orig_ptr___1->refcount) --;
          tmp___2 = _emalloc((unsigned int )sizeof(zval ));
          *len = (zval *)tmp___2;
          *(*len) = *orig_ptr___1;
          _zval_copy_ctor(*len);
          (*len)->refcount = 1U;
          (*len)->is_ref = (unsigned char)0;
        }
      }
      convert_to_long(*len);
    }
    l = (int )(*len)->value.lval;
  } else {
    l = (*str)->value.str.len;
  }
  f = (int )(*from)->value.lval;
  if (f < 0) {
    f = (*str)->value.str.len + f;
    if (f < 0) {
      f = 0;
    }
  }
  if (l < 0) {
    l = ((*str)->value.str.len - f) + l;
    if (l < 0) {
      l = 0;
    }
  }
  if (f >= (*str)->value.str.len) {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  if (f + l > (*str)->value.str.len) {
    l = (*str)->value.str.len - f;
  }
  __s = (*str)->value.str.val + f;
  __l = l;
  return_value->value.str.len = __l;
  tmp___3 = _estrndup((char const   *)__s, (unsigned int )__l);
  return_value->value.str.val = tmp___3;
  return_value->type = (unsigned char)6;
  return;
}
}

void zif_substr_replace(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) 
{ zval **str ;
  zval **from ;
  zval **len ;
  zval **repl ;
  char *result ;
  int result_len ;
  int l ;
  int f ;
  int argc ;
  HashPosition pos_str ;
  HashPosition pos_from ;
  HashPosition pos_repl ;
  HashPosition pos_len ;
  zval **tmp_str ;
  zval **tmp_from ;
  zval **tmp_repl ;
  zval **tmp_len ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  zval *orig_ptr___0 ;
  void *tmp___1 ;
  zval *orig_ptr___1 ;
  void *tmp___2 ;
  zval *orig_ptr___2 ;
  void *tmp___3 ;
  char *__s ;
  int __l ;
  char *tmp___4 ;
  char *__s___0 ;
  int __l___0 ;
  char *tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int repl_len ;
  zval *orig_ptr___3 ;
  void *tmp___8 ;
  int tmp___9 ;
  void *tmp___10 ;
  char *tmp___11 ;
  char *__s___1 ;
  int __l___1 ;
  char *tmp___12 ;
  char *__s___2 ;
  int __l___2 ;
  char *tmp___13 ;
  zval *orig_ptr___4 ;
  void *tmp___14 ;
  zval *orig_ptr___5 ;
  void *tmp___15 ;
  int tmp___16 ;
  zval *orig_ptr___6 ;
  void *tmp___17 ;
  int tmp___18 ;
  zval *orig_ptr___7 ;
  void *tmp___19 ;
  void *tmp___20 ;
  void *tmp___21 ;
  int tmp___22 ;
  void *tmp___23 ;
  int tmp___24 ;

  {
  len = (zval **)((void *)0);
  l = 0;
  argc = ht;
  tmp_str = (zval **)((void *)0);
  tmp_from = (zval **)((void *)0);
  tmp_repl = (zval **)((void *)0);
  tmp_len = (zval **)((void *)0);
  if (argc < 3) {
    zend_wrong_param_count();
    return;
  } else {
    if (argc > 4) {
      zend_wrong_param_count();
      return;
    } else {
      tmp = zend_get_parameters_ex(argc, & str, & repl, & from, & len);
      if (tmp == -1) {
        zend_wrong_param_count();
        return;
      }
    }
  }
  if ((int )(*str)->type != 4) {
    if ((int )(*str)->type != 6) {
      if (! (*str)->is_ref) {
        orig_ptr = *str;
        if (orig_ptr->refcount > 1U) {
          (orig_ptr->refcount) --;
          tmp___0 = _emalloc((unsigned int )sizeof(zval ));
          *str = (zval *)tmp___0;
          *(*str) = *orig_ptr;
          _zval_copy_ctor(*str);
          (*str)->refcount = 1U;
          (*str)->is_ref = (unsigned char)0;
        }
      }
      if ((int )(*str)->type != 6) {
        _convert_to_string(*str);
      }
    }
  }
  if ((int )(*repl)->type != 4) {
    if ((int )(*repl)->type != 6) {
      if (! (*repl)->is_ref) {
        orig_ptr___0 = *repl;
        if (orig_ptr___0->refcount > 1U) {
          (orig_ptr___0->refcount) --;
          tmp___1 = _emalloc((unsigned int )sizeof(zval ));
          *repl = (zval *)tmp___1;
          *(*repl) = *orig_ptr___0;
          _zval_copy_ctor(*repl);
          (*repl)->refcount = 1U;
          (*repl)->is_ref = (unsigned char)0;
        }
      }
      if ((int )(*repl)->type != 6) {
        _convert_to_string(*repl);
      }
    }
  }
  if ((int )(*from)->type != 4) {
    if ((int )(*from)->type != 1) {
      if (! (*from)->is_ref) {
        orig_ptr___1 = *from;
        if (orig_ptr___1->refcount > 1U) {
          (orig_ptr___1->refcount) --;
          tmp___2 = _emalloc((unsigned int )sizeof(zval ));
          *from = (zval *)tmp___2;
          *(*from) = *orig_ptr___1;
          _zval_copy_ctor(*from);
          (*from)->refcount = 1U;
          (*from)->is_ref = (unsigned char)0;
        }
      }
      convert_to_long(*from);
    }
  }
  if (argc > 3) {
    if ((int )(*len)->type != 4) {
      if ((int )(*len)->type != 1) {
        if (! (*len)->is_ref) {
          orig_ptr___2 = *len;
          if (orig_ptr___2->refcount > 1U) {
            (orig_ptr___2->refcount) --;
            tmp___3 = _emalloc((unsigned int )sizeof(zval ));
            *len = (zval *)tmp___3;
            *(*len) = *orig_ptr___2;
            _zval_copy_ctor(*len);
            (*len)->refcount = 1U;
            (*len)->is_ref = (unsigned char)0;
          }
        }
        convert_to_long(*len);
      }
      l = (int )(*len)->value.lval;
    }
  } else {
    if ((int )(*str)->type != 4) {
      l = (*str)->value.str.len;
    }
  }
  if ((int )(*str)->type == 6) {
    if (argc == 3) {
      if ((int )(*from)->type == 4) {
        goto _L;
      } else {
        goto _L___0;
      }
    } else {
      _L___0: 
      if (argc == 4) {
        if ((int )(*from)->type != (int )(*len)->type) {
          _L: 
          php_error_docref0((char const   *)((void *)0), 1 << 1L,
                            "\'from\' and \'len\' should be of same type - numerical or array ");
          __s = (*str)->value.str.val;
          __l = (*str)->value.str.len;
          return_value->value.str.len = __l;
          tmp___4 = _estrndup((char const   *)__s, (unsigned int )__l);
          return_value->value.str.val = tmp___4;
          return_value->type = (unsigned char)6;
          return;
        }
      }
    }
    if (argc == 4) {
      if ((int )(*from)->type == 4) {
        tmp___6 = zend_hash_num_elements((*from)->value.ht);
        tmp___7 = zend_hash_num_elements((*len)->value.ht);
        if (tmp___6 != tmp___7) {
          php_error_docref0((char const   *)((void *)0), 1 << 1L,
                            "\'from\' and \'len\' should have the same number of elements");
          __s___0 = (*str)->value.str.val;
          __l___0 = (*str)->value.str.len;
          return_value->value.str.len = __l___0;
          tmp___5 = _estrndup((char const   *)__s___0, (unsigned int )__l___0);
          return_value->value.str.val = tmp___5;
          return_value->type = (unsigned char)6;
          return;
        }
      }
    }
  }
  if ((int )(*str)->type != 4) {
    if ((int )(*from)->type != 4) {
      repl_len = 0;
      f = (int )(*from)->value.lval;
      if (f < 0) {
        f = (*str)->value.str.len + f;
        if (f < 0) {
          f = 0;
        }
      } else {
        if (f > (*str)->value.str.len) {
          f = (*str)->value.str.len;
        }
      }
      if (l < 0) {
        l = ((*str)->value.str.len - f) + l;
        if (l < 0) {
          l = 0;
        }
      }
      if (f + l > (*str)->value.str.len) {
        l = (*str)->value.str.len - f;
      }
      if ((int )(*repl)->type == 4) {
        zend_hash_internal_pointer_reset_ex((*repl)->value.ht, & pos_repl);
        tmp___9 = zend_hash_get_current_data_ex((*repl)->value.ht,
                                                (void **)(& tmp_repl),
                                                & pos_repl);
        if (0 == tmp___9) {
          if ((int )(*tmp_repl)->type != 6) {
            if (! (*tmp_repl)->is_ref) {
              orig_ptr___3 = *tmp_repl;
              if (orig_ptr___3->refcount > 1U) {
                (orig_ptr___3->refcount) --;
                tmp___8 = _emalloc((unsigned int )sizeof(zval ));
                *tmp_repl = (zval *)tmp___8;
                *(*tmp_repl) = *orig_ptr___3;
                _zval_copy_ctor(*tmp_repl);
                (*tmp_repl)->refcount = 1U;
                (*tmp_repl)->is_ref = (unsigned char)0;
              }
            }
            if ((int )(*tmp_repl)->type != 6) {
              _convert_to_string(*tmp_repl);
            }
          }
          repl_len = (*tmp_repl)->value.str.len;
        }
      } else {
        repl_len = (*repl)->value.str.len;
      }
      result_len = ((*str)->value.str.len - l) + repl_len;
      tmp___10 = _emalloc((unsigned int )(result_len + 1));
      result = (char *)tmp___10;
      memcpy((void */* __restrict  */)((void *)result),
             (void const   */* __restrict  */)((void const   *)(*str)->value.str.val),
             (unsigned int )f);
      if (repl_len) {
        if ((int )(*repl)->type == 4) {
          tmp___11 = (*tmp_repl)->value.str.val;
        } else {
          tmp___11 = (*repl)->value.str.val;
        }
        memcpy((void */* __restrict  */)((void *)(result + f)),
               (void const   */* __restrict  */)((void const   *)tmp___11),
               (unsigned int )repl_len);
      }
      memcpy((void */* __restrict  */)((void *)((result + f) + repl_len)),
             (void const   */* __restrict  */)((void const   *)(((*str)->value.str.val + f) + l)),
             (unsigned int )(((*str)->value.str.len - f) - l));
      *(result + result_len) = (char )'\000';
      __s___1 = result;
      __l___1 = result_len;
      return_value->value.str.len = __l___1;
      return_value->value.str.val = __s___1;
      return_value->type = (unsigned char)6;
      return;
    } else {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Functionality of \'from\' and \'len\' as arrays is not implemented.");
      __s___2 = (*str)->value.str.val;
      __l___2 = (*str)->value.str.len;
      return_value->value.str.len = __l___2;
      tmp___13 = _estrndup((char const   *)__s___2, (unsigned int )__l___2);
      return_value->value.str.val = tmp___13;
      return_value->type = (unsigned char)6;
      return;
    }
  } else {
    _array_init(return_value);
    if ((int )(*from)->type == 4) {
      zend_hash_internal_pointer_reset_ex((*from)->value.ht, & pos_from);
    }
    if (argc > 3) {
      if ((int )(*len)->type == 4) {
        zend_hash_internal_pointer_reset_ex((*len)->value.ht, & pos_len);
      }
    }
    if ((int )(*repl)->type == 4) {
      zend_hash_internal_pointer_reset_ex((*repl)->value.ht, & pos_repl);
    }
    zend_hash_internal_pointer_reset_ex((*str)->value.ht, & pos_str);
    while (1) {
      tmp___24 = zend_hash_get_current_data_ex((*str)->value.ht,
                                               (void **)(& tmp_str), & pos_str);
      if (! (tmp___24 == 0)) {
        break;
      }
      if ((int )(*tmp_str)->type != 6) {
        if (! (*tmp_str)->is_ref) {
          orig_ptr___4 = *tmp_str;
          if (orig_ptr___4->refcount > 1U) {
            (orig_ptr___4->refcount) --;
            tmp___14 = _emalloc((unsigned int )sizeof(zval ));
            *tmp_str = (zval *)tmp___14;
            *(*tmp_str) = *orig_ptr___4;
            _zval_copy_ctor(*tmp_str);
            (*tmp_str)->refcount = 1U;
            (*tmp_str)->is_ref = (unsigned char)0;
          }
        }
        if ((int )(*tmp_str)->type != 6) {
          _convert_to_string(*tmp_str);
        }
      }
      if ((int )(*from)->type == 4) {
        tmp___16 = zend_hash_get_current_data_ex((*from)->value.ht,
                                                 (void **)(& tmp_from),
                                                 & pos_from);
        if (0 == tmp___16) {
          if ((int )(*tmp_from)->type != 1) {
            if (! (*tmp_from)->is_ref) {
              orig_ptr___5 = *tmp_from;
              if (orig_ptr___5->refcount > 1U) {
                (orig_ptr___5->refcount) --;
                tmp___15 = _emalloc((unsigned int )sizeof(zval ));
                *tmp_from = (zval *)tmp___15;
                *(*tmp_from) = *orig_ptr___5;
                _zval_copy_ctor(*tmp_from);
                (*tmp_from)->refcount = 1U;
                (*tmp_from)->is_ref = (unsigned char)0;
              }
            }
            convert_to_long(*tmp_from);
          }
          f = (int )(*tmp_from)->value.lval;
          if (f < 0) {
            f = (*tmp_str)->value.str.len + f;
            if (f < 0) {
              f = 0;
            }
          } else {
            if (f > (*tmp_str)->value.str.len) {
              f = (*tmp_str)->value.str.len;
            }
          }
          zend_hash_move_forward_ex((*from)->value.ht, & pos_from);
        } else {
          f = 0;
        }
      } else {
        f = (int )(*from)->value.lval;
        if (f < 0) {
          f = (*tmp_str)->value.str.len + f;
          if (f < 0) {
            f = 0;
          }
        } else {
          if (f > (*tmp_str)->value.str.len) {
            f = (*tmp_str)->value.str.len;
          }
        }
      }
      if (argc > 3) {
        if ((int )(*len)->type == 4) {
          tmp___18 = zend_hash_get_current_data_ex((*len)->value.ht,
                                                   (void **)(& tmp_len),
                                                   & pos_len);
          if (0 == tmp___18) {
            if ((int )(*tmp_len)->type != 1) {
              if (! (*tmp_len)->is_ref) {
                orig_ptr___6 = *tmp_len;
                if (orig_ptr___6->refcount > 1U) {
                  (orig_ptr___6->refcount) --;
                  tmp___17 = _emalloc((unsigned int )sizeof(zval ));
                  *tmp_len = (zval *)tmp___17;
                  *(*tmp_len) = *orig_ptr___6;
                  _zval_copy_ctor(*tmp_len);
                  (*tmp_len)->refcount = 1U;
                  (*tmp_len)->is_ref = (unsigned char)0;
                }
              }
              convert_to_long(*tmp_len);
            }
            l = (int )(*tmp_len)->value.lval;
            zend_hash_move_forward_ex((*len)->value.ht, & pos_len);
          } else {
            l = (*tmp_str)->value.str.len;
          }
        } else {
          goto _L___1;
        }
      } else {
        _L___1: 
        if (argc > 3) {
          l = (int )(*len)->value.lval;
        } else {
          l = (*tmp_str)->value.str.len;
        }
      }
      if (l < 0) {
        l = ((*tmp_str)->value.str.len - f) + l;
        if (l < 0) {
          l = 0;
        }
      }
      if (f + l > (*tmp_str)->value.str.len) {
        l = (*tmp_str)->value.str.len - f;
      }
      result_len = (*tmp_str)->value.str.len - l;
      if ((int )(*repl)->type == 4) {
        tmp___22 = zend_hash_get_current_data_ex((*repl)->value.ht,
                                                 (void **)(& tmp_repl),
                                                 & pos_repl);
        if (0 == tmp___22) {
          if ((int )(*tmp_repl)->type != 6) {
            if (! (*tmp_repl)->is_ref) {
              orig_ptr___7 = *tmp_repl;
              if (orig_ptr___7->refcount > 1U) {
                (orig_ptr___7->refcount) --;
                tmp___19 = _emalloc((unsigned int )sizeof(zval ));
                *tmp_repl = (zval *)tmp___19;
                *(*tmp_repl) = *orig_ptr___7;
                _zval_copy_ctor(*tmp_repl);
                (*tmp_repl)->refcount = 1U;
                (*tmp_repl)->is_ref = (unsigned char)0;
              }
            }
            if ((int )(*tmp_repl)->type != 6) {
              _convert_to_string(*tmp_repl);
            }
          }
          result_len += (*tmp_repl)->value.str.len;
          zend_hash_move_forward_ex((*repl)->value.ht, & pos_repl);
          tmp___20 = _emalloc((unsigned int )(result_len + 1));
          result = (char *)tmp___20;
          memcpy((void */* __restrict  */)((void *)result),
                 (void const   */* __restrict  */)((void const   *)(*tmp_str)->value.str.val),
                 (unsigned int )f);
          memcpy((void */* __restrict  */)((void *)(result + f)),
                 (void const   */* __restrict  */)((void const   *)(*tmp_repl)->value.str.val),
                 (unsigned int )(*tmp_repl)->value.str.len);
          memcpy((void */* __restrict  */)((void *)((result + f) + (*tmp_repl)->value.str.len)),
                 (void const   */* __restrict  */)((void const   *)(((*tmp_str)->value.str.val + f) + l)),
                 (unsigned int )(((*tmp_str)->value.str.len - f) - l));
        } else {
          tmp___21 = _emalloc((unsigned int )(result_len + 1));
          result = (char *)tmp___21;
          memcpy((void */* __restrict  */)((void *)result),
                 (void const   */* __restrict  */)((void const   *)(*tmp_str)->value.str.val),
                 (unsigned int )f);
          memcpy((void */* __restrict  */)((void *)(result + f)),
                 (void const   */* __restrict  */)((void const   *)(((*tmp_str)->value.str.val + f) + l)),
                 (unsigned int )(((*tmp_str)->value.str.len - f) - l));
        }
      } else {
        result_len += (*repl)->value.str.len;
        tmp___23 = _emalloc((unsigned int )(result_len + 1));
        result = (char *)tmp___23;
        memcpy((void */* __restrict  */)((void *)result),
               (void const   */* __restrict  */)((void const   *)(*tmp_str)->value.str.val),
               (unsigned int )f);
        memcpy((void */* __restrict  */)((void *)(result + f)),
               (void const   */* __restrict  */)((void const   *)(*repl)->value.str.val),
               (unsigned int )(*repl)->value.str.len);
        memcpy((void */* __restrict  */)((void *)((result + f) + (*repl)->value.str.len)),
               (void const   */* __restrict  */)((void const   *)(((*tmp_str)->value.str.val + f) + l)),
               (unsigned int )(((*tmp_str)->value.str.len - f) - l));
      }
      *(result + result_len) = (char )'\000';
      add_next_index_stringl(return_value, result, (unsigned int )result_len, 0);
      zend_hash_move_forward_ex((*str)->value.ht, & pos_str);
    }
  }
  return;
}
}

void zif_quotemeta(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) 
{ zval **arg ;
  char *str ;
  char *old ;
  char *old_end ;
  char *p ;
  char *q ;
  char c ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  void *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *__s ;
  void *tmp___4 ;
  int __l ;
  char *tmp___5 ;

  {
  if (ht != 1) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(1, & arg);
    if (tmp == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*arg)->type != 6) {
    if (! (*arg)->is_ref) {
      orig_ptr = *arg;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *arg = (zval *)tmp___0;
        *(*arg) = *orig_ptr;
        _zval_copy_ctor(*arg);
        (*arg)->refcount = 1U;
        (*arg)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*arg)->type != 6) {
      _convert_to_string(*arg);
    }
  }
  old = (*arg)->value.str.val;
  old_end = (*arg)->value.str.val + (*arg)->value.str.len;
  if ((unsigned int )old == (unsigned int )old_end) {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  tmp___1 = _safe_emalloc(2U, (unsigned int )(*arg)->value.str.len, 1U);
  str = (char *)tmp___1;
  p = old;
  q = str;
  while ((unsigned int )p != (unsigned int )old_end) {
    c = *p;
    switch ((int )c) {
    case 46: 
    case 92: 
    case 43: 
    case 42: 
    case 63: 
    case 91: 
    case 94: 
    case 93: 
    case 36: 
    case 40: 
    case 41: 
    tmp___2 = q;
    q ++;
    *tmp___2 = (char )'\\';
    default: 
    tmp___3 = q;
    q ++;
    *tmp___3 = c;
    }
    p ++;
  }
  *q = (char)0;
  tmp___4 = _erealloc((void *)str, (unsigned int )((q - str) + 1), 0);
  __s = (char *)tmp___4;
  __l = q - str;
  return_value->value.str.len = __l;
  return_value->value.str.val = __s;
  return_value->type = (unsigned char)6;
  return;
}
}

void zif_ord(int ht , zval *return_value , zval **return_value_ptr ,
             zval *this_ptr , int return_value_used ) 
{ zval **str ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;

  {
  if (ht != 1) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(1, & str);
    if (tmp == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*str)->type != 6) {
    if (! (*str)->is_ref) {
      orig_ptr = *str;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *str = (zval *)tmp___0;
        *(*str) = *orig_ptr;
        _zval_copy_ctor(*str);
        (*str)->refcount = 1U;
        (*str)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*str)->type != 6) {
      _convert_to_string(*str);
    }
  }
  return_value->type = (unsigned char)1;
  return_value->value.lval = (long )((unsigned char )*((*str)->value.str.val + 0));
  return;
}
}

void zif_chr(int ht , zval *return_value , zval **return_value_ptr ,
             zval *this_ptr , int return_value_used ) 
{ zval **num ;
  char temp[2] ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  char *__s ;
  int __l ;
  char *tmp___1 ;

  {
  if (ht != 1) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(1, & num);
    if (tmp == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*num)->type != 1) {
    if (! (*num)->is_ref) {
      orig_ptr = *num;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *num = (zval *)tmp___0;
        *(*num) = *orig_ptr;
        _zval_copy_ctor(*num);
        (*num)->refcount = 1U;
        (*num)->is_ref = (unsigned char)0;
      }
    }
    convert_to_long(*num);
  }
  temp[0] = (char )(*num)->value.lval;
  temp[1] = (char)0;
  __s = temp;
  __l = 1;
  return_value->value.str.len = __l;
  tmp___1 = _estrndup((char const   *)__s, (unsigned int )__l);
  return_value->value.str.val = tmp___1;
  return_value->type = (unsigned char)6;
  return;
}
}

void zif_ucfirst(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ zval **str ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  char *__s ;
  int __l ;
  char *tmp___1 ;
  int tmp___2 ;

  {
  if (ht != 1) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(1, & str);
    if (tmp == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*str)->type != 6) {
    if (! (*str)->is_ref) {
      orig_ptr = *str;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *str = (zval *)tmp___0;
        *(*str) = *orig_ptr;
        _zval_copy_ctor(*str);
        (*str)->refcount = 1U;
        (*str)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*str)->type != 6) {
      _convert_to_string(*str);
    }
  }
  if (! (*str)->value.str.len) {
    return_value->value.str.len = 0;
    return_value->value.str.val = _estrndup("",
                                            (unsigned int )(sizeof("") - 1UL));
    return_value->type = (unsigned char)6;
    return;
  }
  __s = (*str)->value.str.val;
  __l = (*str)->value.str.len;
  return_value->value.str.len = __l;
  tmp___1 = _estrndup((char const   *)__s, (unsigned int )__l);
  return_value->value.str.val = tmp___1;
  return_value->type = (unsigned char)6;
  tmp___2 = toupper((int )((unsigned char )*(return_value->value.str.val)));
  *(return_value->value.str.val) = (char )tmp___2;
  return;
}
}

void zif_ucwords(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ zval **str ;
  register char *r ;
  register char *r_end ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  char *__s ;
  int __l ;
  char *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned short const   **tmp___4 ;
  char *tmp___5 ;

  {
  if (ht != 1) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(1, & str);
    if (tmp == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*str)->type != 6) {
    if (! (*str)->is_ref) {
      orig_ptr = *str;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *str = (zval *)tmp___0;
        *(*str) = *orig_ptr;
        _zval_copy_ctor(*str);
        (*str)->refcount = 1U;
        (*str)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*str)->type != 6) {
      _convert_to_string(*str);
    }
  }
  if (! (*str)->value.str.len) {
    return_value->value.str.len = 0;
    return_value->value.str.val = _estrndup("",
                                            (unsigned int )(sizeof("") - 1UL));
    return_value->type = (unsigned char)6;
    return;
  }
  __s = (*str)->value.str.val;
  __l = (*str)->value.str.len;
  return_value->value.str.len = __l;
  tmp___1 = _estrndup((char const   *)__s, (unsigned int )__l);
  return_value->value.str.val = tmp___1;
  return_value->type = (unsigned char)6;
  r = return_value->value.str.val;
  tmp___2 = toupper((int )((unsigned char )*r));
  *r = (char )tmp___2;
  r_end = (r + return_value->value.str.len) - 1;
  while ((unsigned int )r < (unsigned int )r_end) {
    tmp___4 = __ctype_b_loc();
    tmp___5 = r;
    r ++;
    if ((int const   )*(*tmp___4 + (int )*((unsigned char *)tmp___5)) & 8192) {
      tmp___3 = toupper((int )((unsigned char )*r));
      *r = (char )tmp___3;
    }
  }
  return;
}
}

char *php_strtr(char *str , int len , char *str_from , char *str_to , int trlen ) 
{ int i ;
  unsigned char xlat[256] ;

  {
  if (trlen < 1) {
    return (str);
  } else {
    if (len < 1) {
      return (str);
    }
  }
  i = 0;
  while (i < 256) {
    xlat[i] = (unsigned char )i;
    i ++;
  }
  i = 0;
  while (i < trlen) {
    xlat[(unsigned char )*(str_from + i)] = (unsigned char )*(str_to + i);
    i ++;
  }
  i = 0;
  while (i < len) {
    *(str + i) = (char )xlat[(unsigned char )*(str + i)];
    i ++;
  }
  return (str);
}
}

static void php_strtr_array(zval *return_value , char *str , int slen ,
                            HashTable *hash ) 
{ zval **entry ;
  char *string_key ;
  uint string_key_len ;
  zval **trans ;
  zval ctmp ;
  ulong num_key ;
  int minlen ;
  int maxlen ;
  int pos ;
  int len ;
  int found ;
  char *key ;
  HashPosition hpos ;
  smart_str result ;
  HashTable tmp_hash ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  void *tmp___2 ;
  char *tval ;
  int tlen ;
  zval tmp___3 ;
  register size_t __nl ;
  smart_str *__dest ;
  void *tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  void *tmp___7 ;
  int tmp___8 ;
  register size_t __nl___0 ;
  void *tmp___9 ;
  void *tmp___10 ;
  void *tmp___11 ;
  void *tmp___12 ;
  int tmp___13 ;
  char *__s ;
  int __l ;
  char *tmp___14 ;

  {
  minlen = 131072;
  maxlen = 0;
  result.c = (char *)0;
  result.len = 0U;
  result.a = 0U;
  tmp = zend_hash_num_elements(hash);
  _zend_hash_init(& tmp_hash, (unsigned int )tmp,
                  (ulong (*)(char *arKey , uint nKeyLength ))((void *)0),
                  (void (*)(void *pDest ))((void *)0), (unsigned char)0);
  zend_hash_internal_pointer_reset_ex(hash, & hpos);
  while (1) {
    tmp___1 = zend_hash_get_current_data_ex(hash, (void **)(& entry), & hpos);
    if (! (tmp___1 == 0)) {
      break;
    }
    tmp___0 = zend_hash_get_current_key_ex(hash, & string_key, & string_key_len,
                                           & num_key, (unsigned char)0, & hpos);
    switch (tmp___0) {
    case 1: 
    len = (int )(string_key_len - 1U);
    if (len < 1) {
      zend_hash_destroy(& tmp_hash);
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    }
    _zend_hash_add_or_update(& tmp_hash, string_key, string_key_len,
                             (void *)entry, (unsigned int )sizeof(zval *),
                             (void **)((void *)0), 1 << 1);
    if (len > maxlen) {
      maxlen = len;
    }
    if (len < minlen) {
      minlen = len;
    }
    break;
    case 2: 
    ctmp.type = (unsigned char)1;
    ctmp.value.lval = (long )num_key;
    if ((int )ctmp.type != 6) {
      _convert_to_string(& ctmp);
    }
    len = ctmp.value.str.len;
    _zend_hash_add_or_update(& tmp_hash, ctmp.value.str.val,
                             (unsigned int )(len + 1), (void *)entry,
                             (unsigned int )sizeof(zval *),
                             (void **)((void *)0), 1 << 1);
    _zval_dtor(& ctmp);
    if (len > maxlen) {
      maxlen = len;
    }
    if (len < minlen) {
      minlen = len;
    }
    break;
    }
    zend_hash_move_forward_ex(hash, & hpos);
  }
  tmp___2 = _emalloc((unsigned int )(maxlen + 1));
  key = (char *)tmp___2;
  pos = 0;
  while (pos < slen) {
    if (pos + maxlen > slen) {
      maxlen = slen - pos;
    }
    found = 0;
    memcpy((void */* __restrict  */)((void *)key),
           (void const   */* __restrict  */)((void const   *)(str + pos)),
           (unsigned int )maxlen);
    len = maxlen;
    while (len >= minlen) {
      *(key + len) = (char)0;
      tmp___8 = zend_hash_find(& tmp_hash, key, (unsigned int )(len + 1),
                               (void **)(& trans));
      if (tmp___8 == 0) {
        if ((int )(*trans)->type != 6) {
          tmp___3 = *(*trans);
          _zval_copy_ctor(& tmp___3);
          if ((int )tmp___3.type != 6) {
            _convert_to_string(& tmp___3);
          }
          tval = tmp___3.value.str.val;
          tlen = tmp___3.value.str.len;
        } else {
          tval = (*trans)->value.str.val;
          tlen = (*trans)->value.str.len;
        }
        while (1) {
          __dest = & result;
          while (1) {
            if (! __dest->c) {
              __dest->len = 0U;
              __nl = (unsigned int )tlen;
              if (__nl < 78U) {
                __dest->a = 78U;
              } else {
                __dest->a = __nl + 128U;
              }
              tmp___5 = _erealloc((void *)__dest->c, __dest->a + 1U, 0);
              __dest->c = (char *)tmp___5;
            } else {
              __nl = __dest->len + (unsigned int )tlen;
              if (__nl >= __dest->a) {
                __dest->a = __nl + 128U;
                tmp___7 = _erealloc((void *)__dest->c, __dest->a + 1U, 0);
                __dest->c = (char *)tmp___7;
              }
            }
            break;
          }
          memcpy((void */* __restrict  */)((void *)(__dest->c + __dest->len)),
                 (void const   */* __restrict  */)((void const   *)tval),
                 (unsigned int )tlen);
          __dest->len = __nl;
          break;
        }
        pos += len;
        found = 1;
        if ((int )(*trans)->type != 6) {
          _zval_dtor(& tmp___3);
        }
        break;
      }
      len --;
    }
    if (! found) {
      while (1) {
        while (1) {
          if (! result.c) {
            result.len = 0U;
            __nl___0 = 1U;
            if (__nl___0 < 78U) {
              result.a = 78U;
            } else {
              result.a = __nl___0 + 128U;
            }
            tmp___10 = _erealloc((void *)result.c, result.a + 1U, 0);
            result.c = (char *)tmp___10;
          } else {
            __nl___0 = result.len + 1U;
            if (__nl___0 >= result.a) {
              result.a = __nl___0 + 128U;
              tmp___12 = _erealloc((void *)result.c, result.a + 1U, 0);
              result.c = (char *)tmp___12;
            }
          }
          break;
        }
        result.len = __nl___0;
        tmp___13 = pos;
        pos ++;
        *((unsigned char *)result.c + (result.len - 1U)) = (unsigned char )*(str + tmp___13);
        break;
      }
    }
  }
  _efree((void *)key);
  zend_hash_destroy(& tmp_hash);
  while (1) {
    if (result.c) {
      *(result.c + result.len) = (char )'\000';
    }
    break;
  }
  __s = result.c;
  __l = (int )result.len;
  return_value->value.str.len = __l;
  return_value->value.str.val = __s;
  return_value->type = (unsigned char)6;
  return;
}
}

void zif_strtr(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) 
{ zval **str ;
  zval **from ;
  zval **to ;
  int ac ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  HashTable *tmp___1 ;
  HashTable *tmp___2 ;
  HashTable *tmp___3 ;
  HashTable *tmp___4 ;
  zval *orig_ptr___0 ;
  void *tmp___5 ;
  zval *orig_ptr___1 ;
  void *tmp___6 ;
  char *__s ;
  int __l ;
  char *tmp___7 ;
  int tmp___8 ;

  {
  ac = ht;
  if (ac < 2) {
    zend_wrong_param_count();
    return;
  } else {
    if (ac > 3) {
      zend_wrong_param_count();
      return;
    } else {
      tmp = zend_get_parameters_ex(ac, & str, & from, & to);
      if (tmp == -1) {
        zend_wrong_param_count();
        return;
      }
    }
  }
  if (ac == 2) {
    if ((int )(*from)->type != 4) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "The second argument is not an array.");
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    }
  }
  if ((int )(*str)->type != 6) {
    if (! (*str)->is_ref) {
      orig_ptr = *str;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *str = (zval *)tmp___0;
        *(*str) = *orig_ptr;
        _zval_copy_ctor(*str);
        (*str)->refcount = 1U;
        (*str)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*str)->type != 6) {
      _convert_to_string(*str);
    }
  }
  if ((*str)->value.str.len == 0) {
    return_value->value.str.len = 0;
    return_value->value.str.val = _estrndup("",
                                            (unsigned int )(sizeof("") - 1UL));
    return_value->type = (unsigned char)6;
    return;
  }
  if (ac == 2) {
    if ((int )(*from)->type == 4) {
      tmp___3 = (*from)->value.ht;
    } else {
      if ((int )(*from)->type == 5) {
        tmp___3 = (*(((*from)->value.obj.handlers)->get_properties))(*from);
      } else {
        tmp___3 = (HashTable *)((void *)0);
      }
    }
    php_strtr_array(return_value, (*str)->value.str.val, (*str)->value.str.len,
                    tmp___3);
  } else {
    if ((int )(*from)->type != 6) {
      if (! (*from)->is_ref) {
        orig_ptr___0 = *from;
        if (orig_ptr___0->refcount > 1U) {
          (orig_ptr___0->refcount) --;
          tmp___5 = _emalloc((unsigned int )sizeof(zval ));
          *from = (zval *)tmp___5;
          *(*from) = *orig_ptr___0;
          _zval_copy_ctor(*from);
          (*from)->refcount = 1U;
          (*from)->is_ref = (unsigned char)0;
        }
      }
      if ((int )(*from)->type != 6) {
        _convert_to_string(*from);
      }
    }
    if ((int )(*to)->type != 6) {
      if (! (*to)->is_ref) {
        orig_ptr___1 = *to;
        if (orig_ptr___1->refcount > 1U) {
          (orig_ptr___1->refcount) --;
          tmp___6 = _emalloc((unsigned int )sizeof(zval ));
          *to = (zval *)tmp___6;
          *(*to) = *orig_ptr___1;
          _zval_copy_ctor(*to);
          (*to)->refcount = 1U;
          (*to)->is_ref = (unsigned char)0;
        }
      }
      if ((int )(*to)->type != 6) {
        _convert_to_string(*to);
      }
    }
    __s = (*str)->value.str.val;
    __l = (*str)->value.str.len;
    return_value->value.str.len = __l;
    tmp___7 = _estrndup((char const   *)__s, (unsigned int )__l);
    return_value->value.str.val = tmp___7;
    return_value->type = (unsigned char)6;
    if ((*from)->value.str.len < (*to)->value.str.len) {
      tmp___8 = (*from)->value.str.len;
    } else {
      tmp___8 = (*to)->value.str.len;
    }
    php_strtr(return_value->value.str.val, return_value->value.str.len,
              (*from)->value.str.val, (*to)->value.str.val, tmp___8);
  }
  return;
}
}

void zif_strrev(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) 
{ zval **str ;
  char *s ;
  char *e ;
  char *n ;
  char *p ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  void *tmp___1 ;
  char *tmp___2 ;
  char *__s ;
  int __l ;
  char *tmp___3 ;

  {
  if (ht != 1) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(1, & str);
    if (tmp == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*str)->type != 6) {
    if (! (*str)->is_ref) {
      orig_ptr = *str;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *str = (zval *)tmp___0;
        *(*str) = *orig_ptr;
        _zval_copy_ctor(*str);
        (*str)->refcount = 1U;
        (*str)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*str)->type != 6) {
      _convert_to_string(*str);
    }
  }
  tmp___1 = _emalloc((unsigned int )((*str)->value.str.len + 1));
  n = (char *)tmp___1;
  p = n;
  s = (*str)->value.str.val;
  e = s + (*str)->value.str.len;
  while (1) {
    e --;
    if (! ((unsigned int )e >= (unsigned int )s)) {
      break;
    }
    tmp___2 = p;
    p ++;
    *tmp___2 = *e;
  }
  *p = (char )'\000';
  __s = n;
  __l = (*str)->value.str.len;
  return_value->value.str.len = __l;
  return_value->value.str.val = __s;
  return_value->type = (unsigned char)6;
  return;
}
}

static void php_similar_str(char const   *txt1 , int len1 , char const   *txt2 ,
                            int len2 , int *pos1 , int *pos2 , int *max ) 
{ char *p ;
  char *q ;
  char *end1 ;
  char *end2 ;
  int l ;

  {
  end1 = (char *)txt1 + len1;
  end2 = (char *)txt2 + len2;
  *max = 0;
  p = (char *)txt1;
  while ((unsigned int )p < (unsigned int )end1) {
    q = (char *)txt2;
    while ((unsigned int )q < (unsigned int )end2) {
      l = 0;
      while (1) {
        if ((unsigned int )(p + l) < (unsigned int )end1) {
          if ((unsigned int )(q + l) < (unsigned int )end2) {
            if (! ((int )*(p + l) == (int )*(q + l))) {
              break;
            }
          } else {
            break;
          }
        } else {
          break;
        }
        l ++;
      }
      if (l > *max) {
        *max = l;
        *pos1 = p - (char *)txt1;
        *pos2 = q - (char *)txt2;
      }
      q ++;
    }
    p ++;
  }
  return;
}
}

static int php_similar_char(char const   *txt1 , int len1 , char const   *txt2 ,
                            int len2 ) 
{ int sum ;
  int pos1 ;
  int pos2 ;
  int max ;
  int tmp ;
  int tmp___0 ;

  {
  php_similar_str(txt1, len1, txt2, len2, & pos1, & pos2, & max);
  sum = max;
  if (sum) {
    if (pos1) {
      if (pos2) {
        tmp = php_similar_char(txt1, pos1, txt2, pos2);
        sum += tmp;
      }
    }
    if (pos1 + max < len1) {
      if (pos2 + max < len2) {
        tmp___0 = php_similar_char((txt1 + pos1) + max, (len1 - pos1) - max,
                                   (txt2 + pos2) + max, (len2 - pos2) - max);
        sum += tmp___0;
      }
    }
  }
  return (sum);
}
}

void zif_similar_text(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) 
{ zval **t1 ;
  zval **t2 ;
  zval **percent ;
  int ac ;
  int sim ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  zval *orig_ptr___0 ;
  void *tmp___1 ;
  zval *orig_ptr___1 ;
  void *tmp___2 ;

  {
  ac = ht;
  if (ac < 2) {
    zend_wrong_param_count();
    return;
  } else {
    if (ac > 3) {
      zend_wrong_param_count();
      return;
    } else {
      tmp = zend_get_parameters_ex(ac, & t1, & t2, & percent);
      if (tmp == -1) {
        zend_wrong_param_count();
        return;
      }
    }
  }
  if ((int )(*t1)->type != 6) {
    if (! (*t1)->is_ref) {
      orig_ptr = *t1;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *t1 = (zval *)tmp___0;
        *(*t1) = *orig_ptr;
        _zval_copy_ctor(*t1);
        (*t1)->refcount = 1U;
        (*t1)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*t1)->type != 6) {
      _convert_to_string(*t1);
    }
  }
  if ((int )(*t2)->type != 6) {
    if (! (*t2)->is_ref) {
      orig_ptr___0 = *t2;
      if (orig_ptr___0->refcount > 1U) {
        (orig_ptr___0->refcount) --;
        tmp___1 = _emalloc((unsigned int )sizeof(zval ));
        *t2 = (zval *)tmp___1;
        *(*t2) = *orig_ptr___0;
        _zval_copy_ctor(*t2);
        (*t2)->refcount = 1U;
        (*t2)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*t2)->type != 6) {
      _convert_to_string(*t2);
    }
  }
  if (ac > 2) {
    if ((int )(*percent)->type != 2) {
      if (! (*percent)->is_ref) {
        orig_ptr___1 = *percent;
        if (orig_ptr___1->refcount > 1U) {
          (orig_ptr___1->refcount) --;
          tmp___2 = _emalloc((unsigned int )sizeof(zval ));
          *percent = (zval *)tmp___2;
          *(*percent) = *orig_ptr___1;
          _zval_copy_ctor(*percent);
          (*percent)->refcount = 1U;
          (*percent)->is_ref = (unsigned char)0;
        }
      }
      convert_to_double(*percent);
    }
  }
  if ((*t1)->value.str.len + (*t2)->value.str.len == 0) {
    if (ac > 2) {
      (*percent)->value.dval = (double )0;
    }
    return_value->type = (unsigned char)1;
    return_value->value.lval = 0L;
    return;
  }
  sim = php_similar_char((char const   *)(*t1)->value.str.val,
                         (*t1)->value.str.len,
                         (char const   *)(*t2)->value.str.val,
                         (*t2)->value.str.len);
  if (ac > 2) {
    (*percent)->value.dval = ((double )sim * 200.0) / (double )((*t1)->value.str.len + (*t2)->value.str.len);
  }
  return_value->type = (unsigned char)1;
  return_value->value.lval = (long )sim;
  return;
}
}

void php_stripslashes(char *str , int *len ) 
{ char *s ;
  char *t ;
  int l ;
  size_t tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;

  {
  if ((unsigned int )len != (unsigned int )((void *)0)) {
    l = *len;
  } else {
    tmp = strlen((char const   *)str);
    l = (int )tmp;
  }
  s = str;
  t = str;
  if (core_globals.magic_quotes_sybase) {
    while (l > 0) {
      if ((int )*t == 39) {
        if (l > 0) {
          if ((int )*(t + 1) == 39) {
            t ++;
            if ((unsigned int )len != (unsigned int )((void *)0)) {
              (*len) --;
            }
            l --;
          }
        }
        tmp___0 = s;
        s ++;
        tmp___1 = t;
        t ++;
        *tmp___0 = *tmp___1;
      } else {
        if ((int )*t == 92) {
          if ((int )*(t + 1) == 48) {
            if (l > 0) {
              tmp___2 = s;
              s ++;
              *tmp___2 = (char )'\000';
              t += 2;
              if ((unsigned int )len != (unsigned int )((void *)0)) {
                (*len) --;
              }
              l --;
            } else {
              tmp___3 = s;
              s ++;
              tmp___4 = t;
              t ++;
              *tmp___3 = *tmp___4;
            }
          } else {
            tmp___3 = s;
            s ++;
            tmp___4 = t;
            t ++;
            *tmp___3 = *tmp___4;
          }
        } else {
          tmp___3 = s;
          s ++;
          tmp___4 = t;
          t ++;
          *tmp___3 = *tmp___4;
        }
      }
      l --;
    }
    *s = (char )'\000';
    return;
  }
  while (l > 0) {
    if ((int )*t == 92) {
      t ++;
      if ((unsigned int )len != (unsigned int )((void *)0)) {
        (*len) --;
      }
      l --;
      if (l > 0) {
        if ((int )*t == 48) {
          tmp___5 = s;
          s ++;
          *tmp___5 = (char )'\000';
          t ++;
        } else {
          tmp___6 = s;
          s ++;
          tmp___7 = t;
          t ++;
          *tmp___6 = *tmp___7;
        }
        l --;
      }
    } else {
      tmp___8 = s;
      s ++;
      tmp___9 = t;
      t ++;
      *tmp___8 = *tmp___9;
      l --;
    }
  }
  if ((unsigned int )s != (unsigned int )t) {
    *s = (char )'\000';
  }
  return;
}
}

void zif_addcslashes(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) 
{ zval **str ;
  zval **what ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  zval *orig_ptr___0 ;
  void *tmp___1 ;
  char *__s ;
  int __l ;
  char *tmp___2 ;
  char *__s___0 ;
  char *tmp___3 ;
  size_t tmp___4 ;
  char *tmp___5 ;

  {
  if (ht != 2) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(2, & str, & what);
    if (tmp == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*str)->type != 6) {
    if (! (*str)->is_ref) {
      orig_ptr = *str;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *str = (zval *)tmp___0;
        *(*str) = *orig_ptr;
        _zval_copy_ctor(*str);
        (*str)->refcount = 1U;
        (*str)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*str)->type != 6) {
      _convert_to_string(*str);
    }
  }
  if ((int )(*what)->type != 6) {
    if (! (*what)->is_ref) {
      orig_ptr___0 = *what;
      if (orig_ptr___0->refcount > 1U) {
        (orig_ptr___0->refcount) --;
        tmp___1 = _emalloc((unsigned int )sizeof(zval ));
        *what = (zval *)tmp___1;
        *(*what) = *orig_ptr___0;
        _zval_copy_ctor(*what);
        (*what)->refcount = 1U;
        (*what)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*what)->type != 6) {
      _convert_to_string(*what);
    }
  }
  if ((*str)->value.str.len == 0) {
    return_value->value.str.len = 0;
    return_value->value.str.val = _estrndup("",
                                            (unsigned int )(sizeof("") - 1UL));
    return_value->type = (unsigned char)6;
    return;
  }
  if ((*what)->value.str.len == 0) {
    __s = (*str)->value.str.val;
    __l = (*str)->value.str.len;
    return_value->value.str.len = __l;
    tmp___2 = _estrndup((char const   *)__s, (unsigned int )__l);
    return_value->value.str.val = tmp___2;
    return_value->type = (unsigned char)6;
    return;
  }
  tmp___3 = php_addcslashes((*str)->value.str.val, (*str)->value.str.len,
                            & return_value->value.str.len, 0,
                            (*what)->value.str.val, (*what)->value.str.len);
  __s___0 = tmp___3;
  tmp___4 = strlen((char const   *)__s___0);
  return_value->value.str.len = (int )tmp___4;
  return_value->value.str.val = __s___0;
  return_value->type = (unsigned char)6;
  return;
}
}

void zif_addslashes(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) 
{ zval **str ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  char *__s ;
  char *tmp___1 ;
  size_t tmp___2 ;
  char *tmp___3 ;

  {
  if (ht != 1) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(1, & str);
    if (tmp == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*str)->type != 6) {
    if (! (*str)->is_ref) {
      orig_ptr = *str;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *str = (zval *)tmp___0;
        *(*str) = *orig_ptr;
        _zval_copy_ctor(*str);
        (*str)->refcount = 1U;
        (*str)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*str)->type != 6) {
      _convert_to_string(*str);
    }
  }
  if ((*str)->value.str.len == 0) {
    return_value->value.str.len = 0;
    return_value->value.str.val = _estrndup("",
                                            (unsigned int )(sizeof("") - 1UL));
    return_value->type = (unsigned char)6;
    return;
  }
  tmp___1 = php_addslashes((*str)->value.str.val, (*str)->value.str.len,
                           & return_value->value.str.len, 0);
  __s = tmp___1;
  tmp___2 = strlen((char const   *)__s);
  return_value->value.str.len = (int )tmp___2;
  return_value->value.str.val = __s;
  return_value->type = (unsigned char)6;
  return;
}
}

void zif_stripcslashes(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) 
{ zval **str ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  char *__s ;
  int __l ;
  char *tmp___1 ;

  {
  if (ht != 1) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(1, & str);
    if (tmp == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*str)->type != 6) {
    if (! (*str)->is_ref) {
      orig_ptr = *str;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *str = (zval *)tmp___0;
        *(*str) = *orig_ptr;
        _zval_copy_ctor(*str);
        (*str)->refcount = 1U;
        (*str)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*str)->type != 6) {
      _convert_to_string(*str);
    }
  }
  __s = (*str)->value.str.val;
  __l = (*str)->value.str.len;
  return_value->value.str.len = __l;
  tmp___1 = _estrndup((char const   *)__s, (unsigned int )__l);
  return_value->value.str.val = tmp___1;
  return_value->type = (unsigned char)6;
  php_stripcslashes(return_value->value.str.val, & return_value->value.str.len);
  return;
}
}

void zif_stripslashes(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) 
{ zval **str ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  char *__s ;
  int __l ;
  char *tmp___1 ;

  {
  if (ht != 1) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(1, & str);
    if (tmp == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*str)->type != 6) {
    if (! (*str)->is_ref) {
      orig_ptr = *str;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *str = (zval *)tmp___0;
        *(*str) = *orig_ptr;
        _zval_copy_ctor(*str);
        (*str)->refcount = 1U;
        (*str)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*str)->type != 6) {
      _convert_to_string(*str);
    }
  }
  __s = (*str)->value.str.val;
  __l = (*str)->value.str.len;
  return_value->value.str.len = __l;
  tmp___1 = _estrndup((char const   *)__s, (unsigned int )__l);
  return_value->value.str.val = tmp___1;
  return_value->type = (unsigned char)6;
  php_stripslashes(return_value->value.str.val, & return_value->value.str.len);
  return;
}
}

void php_stripcslashes(char *str , int *len ) 
{ char *source ;
  char *target ;
  char *end ;
  int nlen ;
  int i ;
  char numtmp[4] ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  unsigned short const   **tmp___7 ;
  char *tmp___8 ;
  long tmp___9 ;
  unsigned short const   **tmp___10 ;
  int tmp___11 ;
  char *tmp___12 ;
  char *tmp___13 ;
  long tmp___14 ;
  char *tmp___15 ;
  char *tmp___16 ;

  {
  nlen = *len;
  source = str;
  end = str + nlen;
  target = str;
  while ((unsigned int )source < (unsigned int )end) {
    if ((int )*source == 92) {
      if ((unsigned int )(source + 1) < (unsigned int )end) {
        source ++;
        switch ((int )*source) {
        case 110: 
        tmp = target;
        target ++;
        *tmp = (char )'\n';
        nlen --;
        break;
        case 114: 
        tmp___0 = target;
        target ++;
        *tmp___0 = (char )'\r';
        nlen --;
        break;
        case 97: 
        tmp___1 = target;
        target ++;
        *tmp___1 = (char )'\a';
        nlen --;
        break;
        case 116: 
        tmp___2 = target;
        target ++;
        *tmp___2 = (char )'\t';
        nlen --;
        break;
        case 118: 
        tmp___3 = target;
        target ++;
        *tmp___3 = (char )'\v';
        nlen --;
        break;
        case 98: 
        tmp___4 = target;
        target ++;
        *tmp___4 = (char )'\b';
        nlen --;
        break;
        case 102: 
        tmp___5 = target;
        target ++;
        *tmp___5 = (char )'\f';
        nlen --;
        break;
        case 92: 
        tmp___6 = target;
        target ++;
        *tmp___6 = (char )'\\';
        nlen --;
        break;
        case 120: 
        if ((unsigned int )(source + 1) < (unsigned int )end) {
          tmp___10 = __ctype_b_loc();
          if ((int const   )*(*tmp___10 + (int )*(source + 1)) & 4096) {
            source ++;
            numtmp[0] = *source;
            if ((unsigned int )(source + 1) < (unsigned int )end) {
              tmp___7 = __ctype_b_loc();
              if ((int const   )*(*tmp___7 + (int )*(source + 1)) & 4096) {
                source ++;
                numtmp[1] = *source;
                numtmp[2] = (char )'\000';
                nlen -= 3;
              } else {
                numtmp[1] = (char )'\000';
                nlen -= 2;
              }
            } else {
              numtmp[1] = (char )'\000';
              nlen -= 2;
            }
            tmp___8 = target;
            target ++;
            tmp___9 = strtol((char const   */* __restrict  */)((char const   *)(numtmp)),
                             (char **/* __restrict  */)((char **)((void *)0)),
                             16);
            *tmp___8 = (char )tmp___9;
            break;
          }
        }
        default: 
        i = 0;
        while (1) {
          if ((unsigned int )source < (unsigned int )end) {
            if ((int )*source >= 48) {
              if ((int )*source <= 55) {
                if (! (i < 3)) {
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
          tmp___11 = i;
          i ++;
          tmp___12 = source;
          source ++;
          numtmp[tmp___11] = *tmp___12;
        }
        if (i) {
          numtmp[i] = (char )'\000';
          tmp___13 = target;
          target ++;
          tmp___14 = strtol((char const   */* __restrict  */)((char const   *)(numtmp)),
                            (char **/* __restrict  */)((char **)((void *)0)), 8);
          *tmp___13 = (char )tmp___14;
          nlen -= i;
          source --;
        } else {
          tmp___15 = target;
          target ++;
          *tmp___15 = *source;
          nlen --;
        }
        }
      } else {
        tmp___16 = target;
        target ++;
        *tmp___16 = *source;
      }
    } else {
      tmp___16 = target;
      target ++;
      *tmp___16 = *source;
    }
    source ++;
  }
  if (nlen != 0) {
    *target = (char )'\000';
  }
  *len = nlen;
  return;
}
}

char *php_addcslashes(char *str , int length , int *new_length ,
                      int should_free , char *what , int wlength ) 
{ char flags[256] ;
  char *new_str ;
  size_t tmp ;
  int tmp___0 ;
  size_t tmp___1 ;
  void *tmp___2 ;
  char *source ;
  char *target ;
  char *end ;
  char c ;
  int newlen ;
  size_t tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;
  int tmp___12 ;
  char *tmp___13 ;
  char *tmp___14 ;
  void *tmp___15 ;

  {
  if (length) {
    tmp___0 = length;
  } else {
    tmp___1 = strlen((char const   *)str);
    length = (int )tmp___1;
    tmp___0 = length;
  }
  tmp___2 = _safe_emalloc(4U, (unsigned int )tmp___0, 1U);
  new_str = (char *)tmp___2;
  if (! wlength) {
    tmp___3 = strlen((char const   *)what);
    wlength = (int )tmp___3;
  }
  php_charmask((unsigned char *)what, wlength, flags);
  source = str;
  end = source + length;
  target = new_str;
  while (1) {
    c = *source;
    if (! c) {
      if (! ((unsigned int )source < (unsigned int )end)) {
        break;
      }
    }
    if (flags[(unsigned char )c]) {
      if ((int )((unsigned char )c) < 32) {
        goto _L;
      } else {
        if ((int )((unsigned char )c) > 126) {
          _L: 
          tmp___4 = target;
          target ++;
          *tmp___4 = (char )'\\';
          switch ((int )c) {
          case 10: 
          tmp___5 = target;
          target ++;
          *tmp___5 = (char )'n';
          break;
          case 9: 
          tmp___6 = target;
          target ++;
          *tmp___6 = (char )'t';
          break;
          case 13: 
          tmp___7 = target;
          target ++;
          *tmp___7 = (char )'r';
          break;
          case 7: 
          tmp___8 = target;
          target ++;
          *tmp___8 = (char )'a';
          break;
          case 11: 
          tmp___9 = target;
          target ++;
          *tmp___9 = (char )'v';
          break;
          case 8: 
          tmp___10 = target;
          target ++;
          *tmp___10 = (char )'b';
          break;
          case 12: 
          tmp___11 = target;
          target ++;
          *tmp___11 = (char )'f';
          break;
          default: 
          tmp___12 = php_sprintf(target, "%03o", (unsigned char )c);
          target += tmp___12;
          }
          goto __Cont;
        }
      }
      tmp___13 = target;
      target ++;
      *tmp___13 = (char )'\\';
    }
    tmp___14 = target;
    target ++;
    *tmp___14 = c;
    __Cont: 
    source ++;
  }
  *target = (char)0;
  newlen = target - new_str;
  if (target - new_str < length * 4) {
    tmp___15 = _erealloc((void *)new_str, (unsigned int )(newlen + 1), 0);
    new_str = (char *)tmp___15;
  }
  if (new_length) {
    *new_length = newlen;
  }
  if (should_free) {
    if (str) {
      _efree((void *)str);
    }
  }
  return (new_str);
}
}

char *php_addslashes(char *str , int length , int *new_length , int should_free ) 
{ char *tmp ;

  {
  tmp = php_addslashes_ex(str, length, new_length, should_free, 0);
  return (tmp);
}
}

char *php_addslashes_ex(char *str , int length , int *new_length ,
                        int should_free , int ignore_sybase ) 
{ char *new_str ;
  char *source ;
  char *target ;
  char *end ;
  int local_new_length ;
  size_t tmp ;
  int tmp___0 ;
  size_t tmp___1 ;
  void *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;
  void *tmp___12 ;

  {
  if (! new_length) {
    new_length = & local_new_length;
  }
  if (! str) {
    *new_length = 0;
    return (str);
  }
  if (length) {
    tmp___0 = length;
  } else {
    tmp___1 = strlen((char const   *)str);
    length = (int )tmp___1;
    tmp___0 = length;
  }
  tmp___2 = _safe_emalloc(2U, (unsigned int )tmp___0, 1U);
  new_str = (char *)tmp___2;
  source = str;
  end = source + length;
  target = new_str;
  if (! ignore_sybase) {
    if (core_globals.magic_quotes_sybase) {
      while ((unsigned int )source < (unsigned int )end) {
        switch ((int )*source) {
        case 0: 
        tmp___3 = target;
        target ++;
        *tmp___3 = (char )'\\';
        tmp___4 = target;
        target ++;
        *tmp___4 = (char )'0';
        break;
        case 39: 
        tmp___5 = target;
        target ++;
        *tmp___5 = (char )'\'';
        tmp___6 = target;
        target ++;
        *tmp___6 = (char )'\'';
        break;
        default: 
        tmp___7 = target;
        target ++;
        *tmp___7 = *source;
        break;
        }
        source ++;
      }
    } else {
      goto _L;
    }
  } else {
    _L: 
    while ((unsigned int )source < (unsigned int )end) {
      switch ((int )*source) {
      case 0: 
      tmp___8 = target;
      target ++;
      *tmp___8 = (char )'\\';
      tmp___9 = target;
      target ++;
      *tmp___9 = (char )'0';
      break;
      case 39: 
      case 34: 
      case 92: 
      tmp___10 = target;
      target ++;
      *tmp___10 = (char )'\\';
      default: 
      tmp___11 = target;
      target ++;
      *tmp___11 = *source;
      break;
      }
      source ++;
    }
  }
  *target = (char)0;
  *new_length = target - new_str;
  if (should_free) {
    if (str) {
      _efree((void *)str);
    }
  }
  tmp___12 = _erealloc((void *)new_str, (unsigned int )(*new_length + 1), 0);
  new_str = (char *)tmp___12;
  return (new_str);
}
}

int php_char_to_str_ex(char *str , uint len , char from , char *to ,
                       int to_len , zval *result , int case_sensitivity ,
                       int *replace_count ) 
{ int char_count ;
  int replaced ;
  char *source ;
  char *target ;
  char *tmp ;
  char *source_end ;
  char *tmp_end ;
  char *p ;
  char *e ;
  void *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  char *__s ;
  int __l ;
  char *tmp___3 ;
  void *tmp___4 ;
  char *p___0 ;
  char *e___0 ;
  char *s ;
  void *tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;

  {
  char_count = 0;
  replaced = 0;
  source_end = str + len;
  tmp_end = (char *)((void *)0);
  if (case_sensitivity) {
    p = str;
    e = p + len;
    while (1) {
      tmp___0 = memchr((void const   *)p, (int )from, (unsigned int )(e - p));
      p = (char *)tmp___0;
      if (! p) {
        break;
      }
      char_count ++;
      p ++;
    }
  } else {
    source = str;
    while ((unsigned int )source < (unsigned int )source_end) {
      tmp___1 = tolower((int )*source);
      tmp___2 = tolower((int )from);
      if (tmp___1 == tmp___2) {
        char_count ++;
      }
      source ++;
    }
  }
  if (char_count == 0) {
    if (case_sensitivity) {
      __s = str;
      __l = (int )len;
      result->value.str.len = __l;
      tmp___3 = _estrndup((char const   *)__s, (unsigned int )__l);
      result->value.str.val = tmp___3;
      result->type = (unsigned char)6;
      return (0);
    }
  }
  result->value.str.len = (int )(len + (unsigned int )(char_count * (to_len - 1)));
  tmp___4 = _safe_emalloc((unsigned int )char_count, (unsigned int )to_len, len);
  target = (char *)tmp___4;
  result->value.str.val = target;
  result->type = (unsigned char)6;
  if (case_sensitivity) {
    p___0 = str;
    e___0 = p___0 + len;
    s = str;
    while (1) {
      tmp___5 = memchr((void const   *)p___0, (int )from,
                       (unsigned int )(e___0 - p___0));
      p___0 = (char *)tmp___5;
      if (! p___0) {
        break;
      }
      memcpy((void */* __restrict  */)((void *)target),
             (void const   */* __restrict  */)((void const   *)s),
             (unsigned int )(p___0 - s));
      target += p___0 - s;
      memcpy((void */* __restrict  */)((void *)target),
             (void const   */* __restrict  */)((void const   *)to),
             (unsigned int )to_len);
      target += to_len;
      p___0 ++;
      s = p___0;
      if (replace_count) {
        (*replace_count) ++;
      }
    }
    if ((unsigned int )s < (unsigned int )e___0) {
      memcpy((void */* __restrict  */)((void *)target),
             (void const   */* __restrict  */)((void const   *)s),
             (unsigned int )(e___0 - s));
      target += e___0 - s;
    }
  } else {
    source = str;
    while ((unsigned int )source < (unsigned int )source_end) {
      tmp___6 = tolower((int )*source);
      tmp___7 = tolower((int )from);
      if (tmp___6 == tmp___7) {
        replaced = 1;
        if (replace_count) {
          (*replace_count) ++;
        }
        tmp = to;
        tmp_end = tmp + to_len;
        while ((unsigned int )tmp < (unsigned int )tmp_end) {
          *target = *tmp;
          target ++;
          tmp ++;
        }
      } else {
        *target = *source;
        target ++;
      }
      source ++;
    }
  }
  *target = (char)0;
  return (replaced);
}
}

int php_char_to_str(char *str , uint len , char from , char *to , int to_len ,
                    zval *result ) 
{ int tmp ;

  {
  tmp = php_char_to_str_ex(str, len, from, to, to_len, result, 1,
                           (int *)((void *)0));
  return (tmp);
}
}

char *php_str_to_str_ex(char *haystack , int length , char *needle ,
                        int needle_len , char *str , int str_len ,
                        int *_new_length , int case_sensitivity ,
                        int *replace_count ) 
{ char *new_str ;
  char *end ;
  char *haystack_dup ;
  char *needle_dup ;
  char *e ;
  char *s ;
  char *p ;
  char *r ;
  void *tmp ;
  int count ;
  char *o ;
  char *n ;
  char *endp ;
  void *tmp___0 ;
  void *tmp___1 ;
  char *l_haystack ;
  char *l_needle ;
  int tmp___2 ;
  int tmp___3 ;

  {
  if (needle_len < length) {
    haystack_dup = (char *)((void *)0);
    needle_dup = (char *)((void *)0);
    if (needle_len == str_len) {
      new_str = _estrndup((char const   *)haystack, (unsigned int )length);
      *_new_length = length;
      if (case_sensitivity) {
        end = new_str + length;
        p = new_str;
        while (1) {
          r = zend_memnstr(p, needle, needle_len, end);
          if (! r) {
            break;
          }
          memcpy((void */* __restrict  */)((void *)r),
                 (void const   */* __restrict  */)((void const   *)str),
                 (unsigned int )str_len);
          if (replace_count) {
            (*replace_count) ++;
          }
          p = r + needle_len;
        }
      } else {
        haystack_dup = _estrndup((char const   *)haystack, (unsigned int )length);
        needle_dup = _estrndup((char const   *)needle, (unsigned int )needle_len);
        php_strtolower(haystack_dup, (unsigned int )length);
        php_strtolower(needle_dup, (unsigned int )needle_len);
        end = haystack_dup + length;
        p = haystack_dup;
        while (1) {
          r = zend_memnstr(p, needle_dup, needle_len, end);
          if (! r) {
            break;
          }
          memcpy((void */* __restrict  */)((void *)(new_str + (r - haystack_dup))),
                 (void const   */* __restrict  */)((void const   *)str),
                 (unsigned int )str_len);
          if (replace_count) {
            (*replace_count) ++;
          }
          p = r + needle_len;
        }
        _efree((void *)haystack_dup);
        _efree((void *)needle_dup);
      }
      return (new_str);
    } else {
      if (! case_sensitivity) {
        haystack_dup = _estrndup((char const   *)haystack, (unsigned int )length);
        needle_dup = _estrndup((char const   *)needle, (unsigned int )needle_len);
        php_strtolower(haystack_dup, (unsigned int )length);
        php_strtolower(needle_dup, (unsigned int )needle_len);
      }
      if (str_len < needle_len) {
        tmp = _emalloc((unsigned int )(length + 1));
        new_str = (char *)tmp;
      } else {
        count = 0;
        if (case_sensitivity) {
          o = haystack;
          n = needle;
        } else {
          o = haystack_dup;
          n = needle_dup;
        }
        endp = o + length;
        while (1) {
          o = zend_memnstr(o, n, needle_len, endp);
          if (! o) {
            break;
          }
          o += needle_len;
          count ++;
        }
        if (count == 0) {
          if (haystack_dup) {
            _efree((void *)haystack_dup);
          }
          if (needle_dup) {
            _efree((void *)needle_dup);
          }
          new_str = _estrndup((char const   *)haystack, (unsigned int )length);
          if (_new_length) {
            *_new_length = length;
          }
          return (new_str);
        } else {
          tmp___0 = _safe_emalloc((unsigned int )count,
                                  (unsigned int )(str_len - needle_len),
                                  (unsigned int )(length + 1));
          new_str = (char *)tmp___0;
        }
      }
      s = new_str;
      e = s;
      if (case_sensitivity) {
        end = haystack + length;
        p = haystack;
        while (1) {
          r = zend_memnstr(p, needle, needle_len, end);
          if (! r) {
            break;
          }
          memcpy((void */* __restrict  */)((void *)e),
                 (void const   */* __restrict  */)((void const   *)p),
                 (unsigned int )(r - p));
          e += r - p;
          memcpy((void */* __restrict  */)((void *)e),
                 (void const   */* __restrict  */)((void const   *)str),
                 (unsigned int )str_len);
          e += str_len;
          if (replace_count) {
            (*replace_count) ++;
          }
          p = r + needle_len;
        }
        if ((unsigned int )p < (unsigned int )end) {
          memcpy((void */* __restrict  */)((void *)e),
                 (void const   */* __restrict  */)((void const   *)p),
                 (unsigned int )(end - p));
          e += end - p;
        }
      } else {
        end = haystack_dup + length;
        p = haystack_dup;
        while (1) {
          r = zend_memnstr(p, needle_dup, needle_len, end);
          if (! r) {
            break;
          }
          memcpy((void */* __restrict  */)((void *)e),
                 (void const   */* __restrict  */)((void const   *)(haystack + (p - haystack_dup))),
                 (unsigned int )(r - p));
          e += r - p;
          memcpy((void */* __restrict  */)((void *)e),
                 (void const   */* __restrict  */)((void const   *)str),
                 (unsigned int )str_len);
          e += str_len;
          if (replace_count) {
            (*replace_count) ++;
          }
          p = r + needle_len;
        }
        if ((unsigned int )p < (unsigned int )end) {
          memcpy((void */* __restrict  */)((void *)e),
                 (void const   */* __restrict  */)((void const   *)(haystack + (p - haystack_dup))),
                 (unsigned int )(end - p));
          e += end - p;
        }
      }
      if (haystack_dup) {
        _efree((void *)haystack_dup);
      }
      if (needle_dup) {
        _efree((void *)needle_dup);
      }
      *e = (char )'\000';
      *_new_length = e - s;
      tmp___1 = _erealloc((void *)new_str, (unsigned int )(*_new_length + 1), 0);
      new_str = (char *)tmp___1;
      return (new_str);
    }
  } else {
    if (needle_len > length) {
      nothing_todo: 
      *_new_length = length;
      new_str = _estrndup((char const   *)haystack, (unsigned int )length);
      return (new_str);
    } else {
      if (case_sensitivity) {
        tmp___3 = memcmp((void const   *)haystack, (void const   *)needle,
                         (unsigned int )length);
        if (tmp___3) {
          goto nothing_todo;
        } else {
          goto _L;
        }
      } else {
        _L: 
        if (! case_sensitivity) {
          l_haystack = _estrndup((char const   *)haystack, (unsigned int )length);
          l_needle = _estrndup((char const   *)needle, (unsigned int )length);
          php_strtolower(l_haystack, (unsigned int )length);
          php_strtolower(l_needle, (unsigned int )length);
          tmp___2 = memcmp((void const   *)l_haystack, (void const   *)l_needle,
                           (unsigned int )length);
          if (tmp___2) {
            _efree((void *)l_haystack);
            _efree((void *)l_needle);
            goto nothing_todo;
          }
          _efree((void *)l_haystack);
          _efree((void *)l_needle);
        }
      }
      *_new_length = str_len;
      new_str = _estrndup((char const   *)str, (unsigned int )str_len);
      if (replace_count) {
        (*replace_count) ++;
      }
      return (new_str);
    }
  }
}
}

char *php_str_to_str(char *haystack , int length , char *needle ,
                     int needle_len , char *str , int str_len ,
                     int *_new_length ) 
{ char *tmp ;

  {
  tmp = php_str_to_str_ex(haystack, length, needle, needle_len, str, str_len,
                          _new_length, 1, (int *)((void *)0));
  return (tmp);
}
}

static void php_str_replace_in_subject(zval *search , zval *replace ,
                                       zval **subject , zval *result ,
                                       int case_sensitivity ,
                                       int *replace_count ) 
{ zval **search_entry ;
  zval **replace_entry ;
  zval temp_result ;
  char *replace_value ;
  int replace_len ;
  zval *orig_ptr ;
  void *tmp ;
  char *__s ;
  int __l ;
  char *tmp___0 ;
  zval *orig_ptr___0 ;
  void *tmp___1 ;
  zval *orig_ptr___1 ;
  void *tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;

  {
  replace_entry = (zval **)((void *)0);
  replace_value = (char *)((void *)0);
  replace_len = 0;
  if ((int )(*subject)->type != 6) {
    if (! (*subject)->is_ref) {
      orig_ptr = *subject;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp = _emalloc((unsigned int )sizeof(zval ));
        *subject = (zval *)tmp;
        *(*subject) = *orig_ptr;
        _zval_copy_ctor(*subject);
        (*subject)->refcount = 1U;
        (*subject)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*subject)->type != 6) {
      _convert_to_string(*subject);
    }
  }
  result->type = (unsigned char)6;
  if ((*subject)->value.str.len == 0) {
    __s = (char *)"";
    __l = 0;
    result->value.str.len = __l;
    tmp___0 = _estrndup((char const   *)__s, (unsigned int )__l);
    result->value.str.val = tmp___0;
    result->type = (unsigned char)6;
    return;
  }
  if ((int )search->type == 4) {
    *result = *(*subject);
    _zval_copy_ctor(result);
    result->refcount = 1U;
    result->is_ref = (unsigned char)0;
    zend_hash_internal_pointer_reset_ex(search->value.ht,
                                        (HashPosition *)((void *)0));
    if ((int )replace->type == 4) {
      zend_hash_internal_pointer_reset_ex(replace->value.ht,
                                          (HashPosition *)((void *)0));
    } else {
      replace_value = replace->value.str.val;
      replace_len = replace->value.str.len;
    }
    while (1) {
      tmp___4 = zend_hash_get_current_data_ex(search->value.ht,
                                              (void **)(& search_entry),
                                              (HashPosition *)((void *)0));
      if (! (tmp___4 == 0)) {
        break;
      }
      orig_ptr___0 = *search_entry;
      if (orig_ptr___0->refcount > 1U) {
        (orig_ptr___0->refcount) --;
        tmp___1 = _emalloc((unsigned int )sizeof(zval ));
        *search_entry = (zval *)tmp___1;
        *(*search_entry) = *orig_ptr___0;
        _zval_copy_ctor(*search_entry);
        (*search_entry)->refcount = 1U;
        (*search_entry)->is_ref = (unsigned char)0;
      }
      if ((int )(*search_entry)->type != 6) {
        _convert_to_string(*search_entry);
      }
      if ((*search_entry)->value.str.len == 0) {
        zend_hash_move_forward_ex(search->value.ht, (HashPosition *)((void *)0));
        if ((int )replace->type == 4) {
          zend_hash_move_forward_ex(replace->value.ht,
                                    (HashPosition *)((void *)0));
        }
        continue;
      }
      if ((int )replace->type == 4) {
        tmp___3 = zend_hash_get_current_data_ex(replace->value.ht,
                                                (void **)(& replace_entry),
                                                (HashPosition *)((void *)0));
        if (tmp___3 == 0) {
          if ((int )(*replace_entry)->type != 6) {
            if (! (*replace_entry)->is_ref) {
              orig_ptr___1 = *replace_entry;
              if (orig_ptr___1->refcount > 1U) {
                (orig_ptr___1->refcount) --;
                tmp___2 = _emalloc((unsigned int )sizeof(zval ));
                *replace_entry = (zval *)tmp___2;
                *(*replace_entry) = *orig_ptr___1;
                _zval_copy_ctor(*replace_entry);
                (*replace_entry)->refcount = 1U;
                (*replace_entry)->is_ref = (unsigned char)0;
              }
            }
            if ((int )(*replace_entry)->type != 6) {
              _convert_to_string(*replace_entry);
            }
          }
          replace_value = (*replace_entry)->value.str.val;
          replace_len = (*replace_entry)->value.str.len;
          zend_hash_move_forward_ex(replace->value.ht,
                                    (HashPosition *)((void *)0));
        } else {
          replace_value = (char *)"";
          replace_len = 0;
        }
      }
      if ((*search_entry)->value.str.len == 1) {
        php_char_to_str_ex(result->value.str.val,
                           (unsigned int )result->value.str.len,
                           *((*search_entry)->value.str.val + 0), replace_value,
                           replace_len, & temp_result, case_sensitivity,
                           replace_count);
      } else {
        if ((*search_entry)->value.str.len > 1) {
          temp_result.value.str.val = php_str_to_str_ex(result->value.str.val,
                                                        result->value.str.len,
                                                        (*search_entry)->value.str.val,
                                                        (*search_entry)->value.str.len,
                                                        replace_value,
                                                        replace_len,
                                                        & temp_result.value.str.len,
                                                        case_sensitivity,
                                                        replace_count);
        }
      }
      _efree((void *)result->value.str.val);
      result->value.str.val = temp_result.value.str.val;
      result->value.str.len = temp_result.value.str.len;
      if (result->value.str.len == 0) {
        return;
      }
      zend_hash_move_forward_ex(search->value.ht, (HashPosition *)((void *)0));
    }
  } else {
    if (! (search->value.str.len == 1)) {
      if (search->value.str.len > 1) {
        result->value.str.val = php_str_to_str_ex((*subject)->value.str.val,
                                                  (*subject)->value.str.len,
                                                  search->value.str.val,
                                                  search->value.str.len,
                                                  replace->value.str.val,
                                                  replace->value.str.len,
                                                  & result->value.str.len,
                                                  case_sensitivity,
                                                  replace_count);
      } else {
        *result = *(*subject);
        _zval_copy_ctor(result);
        result->refcount = 1U;
        result->is_ref = (unsigned char)0;
      }
    }
  }
  return;
}
}

static void php_str_replace_common(int ht , zval *return_value ,
                                   zval **return_value_ptr , zval *this_ptr ,
                                   int return_value_used , int case_sensitivity ) 
{ zval **subject ;
  zval **search ;
  zval **replace ;
  zval **subject_entry ;
  zval **zcount ;
  zval *result ;
  char *string_key ;
  uint string_key_len ;
  ulong num_key ;
  int count ;
  int argc ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  zval *orig_ptr___0 ;
  void *tmp___1 ;
  zval *orig_ptr___1 ;
  void *tmp___2 ;
  zval *orig_ptr___2 ;
  void *tmp___3 ;
  zval *orig_ptr___3 ;
  void *tmp___4 ;
  zval *orig_ptr___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  zval *orig_ptr___5 ;
  void *tmp___7 ;
  int *tmp___8 ;
  void *tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int *tmp___12 ;

  {
  count = 0;
  argc = ht;
  if (argc < 3) {
    zend_wrong_param_count();
    return;
  } else {
    if (argc > 4) {
      zend_wrong_param_count();
      return;
    } else {
      tmp = zend_get_parameters_ex(argc, & search, & replace, & subject,
                                   & zcount);
      if (tmp == -1) {
        zend_wrong_param_count();
        return;
      }
    }
  }
  orig_ptr = *search;
  if (orig_ptr->refcount > 1U) {
    (orig_ptr->refcount) --;
    tmp___0 = _emalloc((unsigned int )sizeof(zval ));
    *search = (zval *)tmp___0;
    *(*search) = *orig_ptr;
    _zval_copy_ctor(*search);
    (*search)->refcount = 1U;
    (*search)->is_ref = (unsigned char)0;
  }
  orig_ptr___0 = *replace;
  if (orig_ptr___0->refcount > 1U) {
    (orig_ptr___0->refcount) --;
    tmp___1 = _emalloc((unsigned int )sizeof(zval ));
    *replace = (zval *)tmp___1;
    *(*replace) = *orig_ptr___0;
    _zval_copy_ctor(*replace);
    (*replace)->refcount = 1U;
    (*replace)->is_ref = (unsigned char)0;
  }
  orig_ptr___1 = *subject;
  if (orig_ptr___1->refcount > 1U) {
    (orig_ptr___1->refcount) --;
    tmp___2 = _emalloc((unsigned int )sizeof(zval ));
    *subject = (zval *)tmp___2;
    *(*subject) = *orig_ptr___1;
    _zval_copy_ctor(*subject);
    (*subject)->refcount = 1U;
    (*subject)->is_ref = (unsigned char)0;
  }
  if ((int )(*search)->type != 4) {
    if ((int )(*search)->type != 6) {
      if (! (*search)->is_ref) {
        orig_ptr___2 = *search;
        if (orig_ptr___2->refcount > 1U) {
          (orig_ptr___2->refcount) --;
          tmp___3 = _emalloc((unsigned int )sizeof(zval ));
          *search = (zval *)tmp___3;
          *(*search) = *orig_ptr___2;
          _zval_copy_ctor(*search);
          (*search)->refcount = 1U;
          (*search)->is_ref = (unsigned char)0;
        }
      }
      if ((int )(*search)->type != 6) {
        _convert_to_string(*search);
      }
    }
    if ((int )(*replace)->type != 6) {
      if (! (*replace)->is_ref) {
        orig_ptr___3 = *replace;
        if (orig_ptr___3->refcount > 1U) {
          (orig_ptr___3->refcount) --;
          tmp___4 = _emalloc((unsigned int )sizeof(zval ));
          *replace = (zval *)tmp___4;
          *(*replace) = *orig_ptr___3;
          _zval_copy_ctor(*replace);
          (*replace)->refcount = 1U;
          (*replace)->is_ref = (unsigned char)0;
        }
      }
      if ((int )(*replace)->type != 6) {
        _convert_to_string(*replace);
      }
    }
  } else {
    if ((int )(*replace)->type != 4) {
      if ((int )(*replace)->type != 6) {
        if (! (*replace)->is_ref) {
          orig_ptr___4 = *replace;
          if (orig_ptr___4->refcount > 1U) {
            (orig_ptr___4->refcount) --;
            tmp___5 = _emalloc((unsigned int )sizeof(zval ));
            *replace = (zval *)tmp___5;
            *(*replace) = *orig_ptr___4;
            _zval_copy_ctor(*replace);
            (*replace)->refcount = 1U;
            (*replace)->is_ref = (unsigned char)0;
          }
        }
        if ((int )(*replace)->type != 6) {
          _convert_to_string(*replace);
        }
      }
    }
  }
  if ((int )(*subject)->type == 4) {
    _array_init(return_value);
    zend_hash_internal_pointer_reset_ex((*subject)->value.ht,
                                        (HashPosition *)((void *)0));
    while (1) {
      tmp___11 = zend_hash_get_current_data_ex((*subject)->value.ht,
                                               (void **)(& subject_entry),
                                               (HashPosition *)((void *)0));
      if (! (tmp___11 == 0)) {
        break;
      }
      if ((int )(*subject_entry)->type != 4) {
        if ((int )(*subject_entry)->type != 5) {
          tmp___6 = _emalloc((unsigned int )sizeof(zval ));
          result = (zval *)tmp___6;
          result->refcount = 1U;
          result->is_ref = (unsigned char)0;
          orig_ptr___5 = *subject_entry;
          if (orig_ptr___5->refcount > 1U) {
            (orig_ptr___5->refcount) --;
            tmp___7 = _emalloc((unsigned int )sizeof(zval ));
            *subject_entry = (zval *)tmp___7;
            *(*subject_entry) = *orig_ptr___5;
            _zval_copy_ctor(*subject_entry);
            (*subject_entry)->refcount = 1U;
            (*subject_entry)->is_ref = (unsigned char)0;
          }
          if (argc > 3) {
            tmp___8 = & count;
          } else {
            tmp___8 = (int *)((void *)0);
          }
          php_str_replace_in_subject(*search, *replace, subject_entry, result,
                                     case_sensitivity, tmp___8);
        } else {
          goto _L;
        }
      } else {
        _L: 
        tmp___9 = _emalloc((unsigned int )sizeof(zval ));
        result = (zval *)tmp___9;
        ((*subject_entry)->refcount) ++;
        *result = *(*subject_entry);
        if ((*subject_entry)->refcount > 1U) {
          _zval_copy_ctor(result);
          ((*subject_entry)->refcount) --;
        } else {
          _efree((void *)*subject_entry);
        }
        result->refcount = 1U;
        result->is_ref = (unsigned char)0;
      }
      tmp___10 = zend_hash_get_current_key_ex((*subject)->value.ht,
                                              & string_key, & string_key_len,
                                              & num_key, (unsigned char)0,
                                              (HashPosition *)((void *)0));
      switch (tmp___10) {
      case 1: 
      add_assoc_zval_ex(return_value, string_key, string_key_len, result);
      break;
      case 2: 
      add_index_zval(return_value, num_key, result);
      break;
      }
      zend_hash_move_forward_ex((*subject)->value.ht,
                                (HashPosition *)((void *)0));
    }
  } else {
    if (argc > 3) {
      tmp___12 = & count;
    } else {
      tmp___12 = (int *)((void *)0);
    }
    php_str_replace_in_subject(*search, *replace, subject, return_value,
                               case_sensitivity, tmp___12);
  }
  if (argc > 3) {
    _zval_dtor(*zcount);
    (*zcount)->type = (unsigned char)1;
    (*zcount)->value.lval = (long )count;
  }
  return;
}
}

void zif_str_replace(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) 
{ 

  {
  php_str_replace_common(ht, return_value, return_value_ptr, this_ptr,
                         return_value_used, 1);
  return;
}
}

void zif_str_ireplace(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) 
{ 

  {
  php_str_replace_common(ht, return_value, return_value_ptr, this_ptr,
                         return_value_used, 0);
  return;
}
}

static void php_hebrev(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ,
                       int convert_newlines ) 
{ zval **str ;
  zval **max_chars_per_line ;
  char *heb_str ;
  char *tmp ;
  char *target ;
  char *broken_str ;
  int block_start ;
  int block_end ;
  int block_type ;
  int block_length ;
  int i ;
  long max_chars ;
  int begin ;
  int end ;
  int char_count ;
  int orig_begin ;
  int tmp___0 ;
  int tmp___1 ;
  zval *orig_ptr ;
  void *tmp___2 ;
  zval *orig_ptr___0 ;
  void *tmp___3 ;
  void *tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  unsigned short const   **tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  unsigned short const   **tmp___11 ;
  void *tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int new_char_count ;
  int new_begin ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;

  {
  max_chars = 0L;
  switch (ht) {
  case 1: 
  tmp___0 = zend_get_parameters_ex(1, & str);
  if (tmp___0 == -1) {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  break;
  case 2: 
  tmp___1 = zend_get_parameters_ex(2, & str, & max_chars_per_line);
  if (tmp___1 == -1) {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  if ((int )(*max_chars_per_line)->type != 1) {
    if (! (*max_chars_per_line)->is_ref) {
      orig_ptr = *max_chars_per_line;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___2 = _emalloc((unsigned int )sizeof(zval ));
        *max_chars_per_line = (zval *)tmp___2;
        *(*max_chars_per_line) = *orig_ptr;
        _zval_copy_ctor(*max_chars_per_line);
        (*max_chars_per_line)->refcount = 1U;
        (*max_chars_per_line)->is_ref = (unsigned char)0;
      }
    }
    convert_to_long(*max_chars_per_line);
  }
  max_chars = (*max_chars_per_line)->value.lval;
  break;
  default: 
  zend_wrong_param_count();
  return;
  break;
  }
  if ((int )(*str)->type != 6) {
    if (! (*str)->is_ref) {
      orig_ptr___0 = *str;
      if (orig_ptr___0->refcount > 1U) {
        (orig_ptr___0->refcount) --;
        tmp___3 = _emalloc((unsigned int )sizeof(zval ));
        *str = (zval *)tmp___3;
        *(*str) = *orig_ptr___0;
        _zval_copy_ctor(*str);
        (*str)->refcount = 1U;
        (*str)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*str)->type != 6) {
      _convert_to_string(*str);
    }
  }
  if ((*str)->value.str.len == 0) {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  tmp = (*str)->value.str.val;
  block_end = 0;
  block_start = block_end;
  tmp___4 = _emalloc((unsigned int )((*str)->value.str.len + 1));
  heb_str = (char *)tmp___4;
  target = heb_str + (*str)->value.str.len;
  *target = (char)0;
  target --;
  block_length = 0;
  if ((int )((unsigned char )*tmp) >= 224) {
    if ((int )((unsigned char )*tmp) <= 250) {
      tmp___5 = 1;
    } else {
      tmp___5 = 0;
    }
  } else {
    tmp___5 = 0;
  }
  if (tmp___5) {
    block_type = 2;
  } else {
    block_type = 1;
  }
  while (1) {
    if (block_type == 2) {
      while (1) {
        if ((int )((unsigned char )((int )*(tmp + 1))) >= 224) {
          if ((int )((unsigned char )((int )*(tmp + 1))) <= 250) {
            tmp___6 = 1;
          } else {
            tmp___6 = 0;
          }
        } else {
          tmp___6 = 0;
        }
        if (tmp___6) {
          goto _L;
        } else {
          if ((int )((unsigned char )((int )*(tmp + 1))) == 32) {
            tmp___7 = 1;
          } else {
            if ((int )((unsigned char )((int )*(tmp + 1))) == 9) {
              tmp___7 = 1;
            } else {
              tmp___7 = 0;
            }
          }
          if (tmp___7) {
            goto _L;
          } else {
            tmp___8 = __ctype_b_loc();
            if ((int const   )*(*tmp___8 + (int )*(tmp + 1)) & 4) {
              goto _L;
            } else {
              if ((int )*(tmp + 1) == 10) {
                _L: 
                if (! (block_end < (*str)->value.str.len - 1)) {
                  break;
                }
              } else {
                break;
              }
            }
          }
        }
        tmp ++;
        block_end ++;
        block_length ++;
      }
      i = block_start;
      while (i <= block_end) {
        *target = *((*str)->value.str.val + i);
        switch ((int )*target) {
        case 40: 
        *target = (char )')';
        break;
        case 41: 
        *target = (char )'(';
        break;
        case 91: 
        *target = (char )']';
        break;
        case 93: 
        *target = (char )'[';
        break;
        case 123: 
        *target = (char )'}';
        break;
        case 125: 
        *target = (char )'{';
        break;
        case 60: 
        *target = (char )'>';
        break;
        case 62: 
        *target = (char )'<';
        break;
        case 92: 
        *target = (char )'/';
        break;
        case 47: 
        *target = (char )'\\';
        break;
        default: ;
        break;
        }
        target --;
        i ++;
      }
      block_type = 1;
    } else {
      while (1) {
        if ((int )((unsigned char )*(tmp + 1)) >= 224) {
          if ((int )((unsigned char )*(tmp + 1)) <= 250) {
            tmp___9 = 1;
          } else {
            tmp___9 = 0;
          }
        } else {
          tmp___9 = 0;
        }
        if (tmp___9) {
          break;
        } else {
          if ((int )*(tmp + 1) != 10) {
            if (! (block_end < (*str)->value.str.len - 1)) {
              break;
            }
          } else {
            break;
          }
        }
        tmp ++;
        block_end ++;
        block_length ++;
      }
      while (1) {
        if ((int )((unsigned char )((int )*tmp)) == 32) {
          tmp___10 = 1;
        } else {
          if ((int )((unsigned char )((int )*tmp)) == 9) {
            tmp___10 = 1;
          } else {
            tmp___10 = 0;
          }
        }
        if (tmp___10) {
          goto _L___0;
        } else {
          tmp___11 = __ctype_b_loc();
          if ((int const   )*(*tmp___11 + (int )*tmp) & 4) {
            _L___0: 
            if ((int )*tmp != 47) {
              if ((int )*tmp != 45) {
                if (! (block_end > block_start)) {
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
        }
        tmp --;
        block_end --;
      }
      i = block_end;
      while (i >= block_start) {
        *target = *((*str)->value.str.val + i);
        target --;
        i --;
      }
      block_type = 2;
    }
    block_start = block_end + 1;
    if (! (block_end < (*str)->value.str.len - 1)) {
      break;
    }
  }
  tmp___12 = _emalloc((unsigned int )((*str)->value.str.len + 1));
  broken_str = (char *)tmp___12;
  end = (*str)->value.str.len - 1;
  begin = end;
  target = broken_str;
  while (1) {
    char_count = 0;
    while (1) {
      if (! max_chars) {
        goto _L___2;
      } else {
        if ((long )char_count < max_chars) {
          _L___2: 
          if (! (begin > 0)) {
            break;
          }
        } else {
          break;
        }
      }
      char_count ++;
      begin --;
      if (begin <= 0) {
        goto _L___1;
      } else {
        if ((int )((unsigned char )*(heb_str + begin)) == 10) {
          tmp___14 = 1;
        } else {
          if ((int )((unsigned char )*(heb_str + begin)) == 13) {
            tmp___14 = 1;
          } else {
            tmp___14 = 0;
          }
        }
        if (tmp___14) {
          _L___1: 
          while (1) {
            if (begin > 0) {
              if ((int )((unsigned char )*(heb_str + (begin - 1))) == 10) {
                tmp___13 = 1;
              } else {
                if ((int )((unsigned char )*(heb_str + (begin - 1))) == 13) {
                  tmp___13 = 1;
                } else {
                  tmp___13 = 0;
                }
              }
              if (! tmp___13) {
                break;
              }
            } else {
              break;
            }
            begin --;
            char_count ++;
          }
          break;
        }
      }
    }
    if ((long )char_count == max_chars) {
      new_char_count = char_count;
      new_begin = begin;
      while (new_char_count > 0) {
        if ((int )((unsigned char )*(heb_str + new_begin)) == 32) {
          tmp___15 = 1;
        } else {
          if ((int )((unsigned char )*(heb_str + new_begin)) == 9) {
            tmp___15 = 1;
          } else {
            tmp___15 = 0;
          }
        }
        if (tmp___15) {
          break;
        } else {
          if ((int )((unsigned char )*(heb_str + new_begin)) == 10) {
            tmp___16 = 1;
          } else {
            if ((int )((unsigned char )*(heb_str + new_begin)) == 13) {
              tmp___16 = 1;
            } else {
              tmp___16 = 0;
            }
          }
          if (tmp___16) {
            break;
          }
        }
        new_begin ++;
        new_char_count --;
      }
      if (new_char_count > 0) {
        char_count = new_char_count;
        begin = new_begin;
      }
    }
    orig_begin = begin;
    if ((int )((unsigned char )*(heb_str + begin)) == 32) {
      tmp___17 = 1;
    } else {
      if ((int )((unsigned char )*(heb_str + begin)) == 9) {
        tmp___17 = 1;
      } else {
        tmp___17 = 0;
      }
    }
    if (tmp___17) {
      *(heb_str + begin) = (char )'\n';
    }
    while (1) {
      if (begin <= end) {
        if ((int )((unsigned char )*(heb_str + begin)) == 10) {
          tmp___18 = 1;
        } else {
          if ((int )((unsigned char )*(heb_str + begin)) == 13) {
            tmp___18 = 1;
          } else {
            tmp___18 = 0;
          }
        }
        if (! tmp___18) {
          break;
        }
      } else {
        break;
      }
      begin ++;
    }
    i = begin;
    while (i <= end) {
      *target = *(heb_str + i);
      target ++;
      i ++;
    }
    i = orig_begin;
    while (1) {
      if (i <= end) {
        if ((int )((unsigned char )*(heb_str + i)) == 10) {
          tmp___19 = 1;
        } else {
          if ((int )((unsigned char )*(heb_str + i)) == 13) {
            tmp___19 = 1;
          } else {
            tmp___19 = 0;
          }
        }
        if (! tmp___19) {
          break;
        }
      } else {
        break;
      }
      *target = *(heb_str + i);
      target ++;
      i ++;
    }
    begin = orig_begin;
    if (begin <= 0) {
      *target = (char)0;
      break;
    }
    begin --;
    end = begin;
  }
  _efree((void *)heb_str);
  if (convert_newlines) {
    php_char_to_str(broken_str, (unsigned int )(*str)->value.str.len,
                    (char )'\n', (char *)"<br />\n", 7, return_value);
    _efree((void *)broken_str);
  } else {
    return_value->value.str.val = broken_str;
    return_value->value.str.len = (*str)->value.str.len;
    return_value->type = (unsigned char)6;
  }
  return;
}
}

void zif_hebrev(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) 
{ 

  {
  php_hebrev(ht, return_value, return_value_ptr, this_ptr, return_value_used, 0);
  return;
}
}

void zif_hebrevc(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ 

  {
  php_hebrev(ht, return_value, return_value_ptr, this_ptr, return_value_used, 1);
  return;
}
}

void zif_nl2br(int ht , zval *return_value , zval **return_value_ptr ,
               zval *this_ptr , int return_value_used ) 
{ zval **zstr ;
  char *tmp ;
  char *str ;
  int new_length ;
  char *end ;
  char *target ;
  int repl_cnt ;
  int tmp___0 ;
  zval *orig_ptr ;
  void *tmp___1 ;
  char *__s ;
  int __l ;
  char *tmp___2 ;
  void *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;
  char *tmp___12 ;
  char *__s___0 ;
  int __l___0 ;
  char *tmp___13 ;

  {
  repl_cnt = 0;
  if (ht != 1) {
    zend_wrong_param_count();
    return;
  } else {
    tmp___0 = zend_get_parameters_ex(1, & zstr);
    if (tmp___0 == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*zstr)->type != 6) {
    if (! (*zstr)->is_ref) {
      orig_ptr = *zstr;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___1 = _emalloc((unsigned int )sizeof(zval ));
        *zstr = (zval *)tmp___1;
        *(*zstr) = *orig_ptr;
        _zval_copy_ctor(*zstr);
        (*zstr)->refcount = 1U;
        (*zstr)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*zstr)->type != 6) {
      _convert_to_string(*zstr);
    }
  }
  str = (*zstr)->value.str.val;
  end = str + (*zstr)->value.str.len;
  while ((unsigned int )str < (unsigned int )end) {
    if ((int )*str == 13) {
      if ((int )*(str + 1) == 10) {
        str ++;
      }
      repl_cnt ++;
    } else {
      if ((int )*str == 10) {
        if ((int )*(str + 1) == 13) {
          str ++;
        }
        repl_cnt ++;
      }
    }
    str ++;
  }
  if (repl_cnt == 0) {
    __s = (*zstr)->value.str.val;
    __l = (*zstr)->value.str.len;
    return_value->value.str.len = __l;
    tmp___2 = _estrndup((char const   *)__s, (unsigned int )__l);
    return_value->value.str.val = tmp___2;
    return_value->type = (unsigned char)6;
    return;
  }
  new_length = (int )((unsigned long )((unsigned int )(*zstr)->value.str.len) + (unsigned long )((unsigned int )repl_cnt) * (sizeof("<br />") - 1UL));
  tmp___3 = _emalloc((unsigned int )(new_length + 1));
  target = (char *)tmp___3;
  tmp = target;
  str = (*zstr)->value.str.val;
  while ((unsigned int )str < (unsigned int )end) {
    switch ((int )*str) {
    case 13: 
    case 10: 
    tmp___4 = target;
    target ++;
    *tmp___4 = (char )'<';
    tmp___5 = target;
    target ++;
    *tmp___5 = (char )'b';
    tmp___6 = target;
    target ++;
    *tmp___6 = (char )'r';
    tmp___7 = target;
    target ++;
    *tmp___7 = (char )' ';
    tmp___8 = target;
    target ++;
    *tmp___8 = (char )'/';
    tmp___9 = target;
    target ++;
    *tmp___9 = (char )'>';
    if ((int )*str == 13) {
      if ((int )*(str + 1) == 10) {
        tmp___10 = target;
        target ++;
        tmp___11 = str;
        str ++;
        *tmp___10 = *tmp___11;
      } else {
        goto _L;
      }
    } else {
      _L: 
      if ((int )*str == 10) {
        if ((int )*(str + 1) == 13) {
          tmp___10 = target;
          target ++;
          tmp___11 = str;
          str ++;
          *tmp___10 = *tmp___11;
        }
      }
    }
    default: 
    tmp___12 = target;
    target ++;
    *tmp___12 = *str;
    }
    str ++;
  }
  *target = (char )'\000';
  __s___0 = tmp;
  __l___0 = new_length;
  return_value->value.str.len = __l___0;
  return_value->value.str.val = __s___0;
  return_value->type = (unsigned char)6;
  return;
}
}

void zif_strip_tags(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) 
{ char *buf ;
  zval **str ;
  zval **allow ;
  char *allowed_tags ;
  int allowed_tags_len ;
  size_t retval_len ;
  int tmp ;
  int tmp___0 ;
  zval *orig_ptr ;
  void *tmp___1 ;
  zval *orig_ptr___0 ;
  void *tmp___2 ;
  char *__s ;
  int __l ;
  char *tmp___3 ;

  {
  allow = (zval **)((void *)0);
  allowed_tags = (char *)((void *)0);
  allowed_tags_len = 0;
  switch (ht) {
  case 1: 
  tmp = zend_get_parameters_ex(1, & str);
  if (tmp == -1) {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  break;
  case 2: 
  tmp___0 = zend_get_parameters_ex(2, & str, & allow);
  if (tmp___0 == -1) {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  if ((int )(*allow)->type != 6) {
    if (! (*allow)->is_ref) {
      orig_ptr = *allow;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___1 = _emalloc((unsigned int )sizeof(zval ));
        *allow = (zval *)tmp___1;
        *(*allow) = *orig_ptr;
        _zval_copy_ctor(*allow);
        (*allow)->refcount = 1U;
        (*allow)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*allow)->type != 6) {
      _convert_to_string(*allow);
    }
  }
  allowed_tags = (*allow)->value.str.val;
  allowed_tags_len = (*allow)->value.str.len;
  break;
  default: 
  zend_wrong_param_count();
  return;
  break;
  }
  if ((int )(*str)->type != 6) {
    if (! (*str)->is_ref) {
      orig_ptr___0 = *str;
      if (orig_ptr___0->refcount > 1U) {
        (orig_ptr___0->refcount) --;
        tmp___2 = _emalloc((unsigned int )sizeof(zval ));
        *str = (zval *)tmp___2;
        *(*str) = *orig_ptr___0;
        _zval_copy_ctor(*str);
        (*str)->refcount = 1U;
        (*str)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*str)->type != 6) {
      _convert_to_string(*str);
    }
  }
  buf = _estrndup((char const   *)(*str)->value.str.val,
                  (unsigned int )(*str)->value.str.len);
  retval_len = php_strip_tags_ex(buf, (*str)->value.str.len, (int *)((void *)0),
                                 allowed_tags, allowed_tags_len,
                                 (unsigned char)0);
  __s = buf;
  __l = (int )retval_len;
  return_value->value.str.len = __l;
  return_value->value.str.val = __s;
  return_value->type = (unsigned char)6;
  return;
}
}

void zif_setlocale(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) 
{ zval ***args ;
  void *tmp ;
  zval **pcategory ;
  zval **plocale ;
  int i ;
  int cat ;
  int n_args ;
  char *loc ;
  char *retval ;
  int tmp___0 ;
  zval *orig_ptr ;
  void *tmp___1 ;
  char *category ;
  zval *orig_ptr___0 ;
  void *tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  zval *orig_ptr___1 ;
  void *tmp___11 ;
  int tmp___12 ;
  char *__s ;
  size_t tmp___13 ;
  char *tmp___14 ;
  int tmp___15 ;

  {
  tmp = _safe_emalloc((unsigned int )sizeof(zval **), (unsigned int )ht, 0U);
  args = (zval ***)tmp;
  n_args = ht;
  tmp___0 = _zend_get_parameters_array_ex(n_args, args);
  if (tmp___0 == -1) {
    _efree((void *)args);
    zend_wrong_param_count();
    return;
  } else {
    if (n_args < 2) {
      _efree((void *)args);
      zend_wrong_param_count();
      return;
    }
  }
  pcategory = *(args + 0);
  if ((int )(*pcategory)->type == 1) {
    if ((int )(*pcategory)->type != 1) {
      if (! (*pcategory)->is_ref) {
        orig_ptr = *pcategory;
        if (orig_ptr->refcount > 1U) {
          (orig_ptr->refcount) --;
          tmp___1 = _emalloc((unsigned int )sizeof(zval ));
          *pcategory = (zval *)tmp___1;
          *(*pcategory) = *orig_ptr;
          _zval_copy_ctor(*pcategory);
          (*pcategory)->refcount = 1U;
          (*pcategory)->is_ref = (unsigned char)0;
        }
      }
      convert_to_long(*pcategory);
    }
    cat = (int )(*pcategory)->value.lval;
  } else {
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "Passing locale category name as string is deprecated. Use the LC_* -constants instead.");
    if ((int )(*pcategory)->type != 6) {
      if (! (*pcategory)->is_ref) {
        orig_ptr___0 = *pcategory;
        if (orig_ptr___0->refcount > 1U) {
          (orig_ptr___0->refcount) --;
          tmp___2 = _emalloc((unsigned int )sizeof(zval ));
          *pcategory = (zval *)tmp___2;
          *(*pcategory) = *orig_ptr___0;
          _zval_copy_ctor(*pcategory);
          (*pcategory)->refcount = 1U;
          (*pcategory)->is_ref = (unsigned char)0;
        }
      }
      if ((int )(*pcategory)->type != 6) {
        _convert_to_string(*pcategory);
      }
    }
    category = (*pcategory)->value.str.val;
    tmp___9 = strcasecmp("LC_ALL", (char const   *)category);
    if (tmp___9) {
      tmp___8 = strcasecmp("LC_COLLATE", (char const   *)category);
      if (tmp___8) {
        tmp___7 = strcasecmp("LC_CTYPE", (char const   *)category);
        if (tmp___7) {
          tmp___6 = strcasecmp("LC_MESSAGES", (char const   *)category);
          if (tmp___6) {
            tmp___5 = strcasecmp("LC_MONETARY", (char const   *)category);
            if (tmp___5) {
              tmp___4 = strcasecmp("LC_NUMERIC", (char const   *)category);
              if (tmp___4) {
                tmp___3 = strcasecmp("LC_TIME", (char const   *)category);
                if (tmp___3) {
                  php_error_docref0((char const   *)((void *)0), 1 << 1L,
                                    "Invalid locale category name %s, must be one of LC_ALL, LC_COLLATE, LC_CTYPE, LC_MONETARY, LC_NUMERIC, or LC_TIME.",
                                    category);
                  _efree((void *)args);
                  return_value->type = (unsigned char)3;
                  return_value->value.lval = 0L;
                  return;
                } else {
                  cat = 2;
                }
              } else {
                cat = 1;
              }
            } else {
              cat = 4;
            }
          } else {
            cat = 5;
          }
        } else {
          cat = 0;
        }
      } else {
        cat = 3;
      }
    } else {
      cat = 6;
    }
  }
  if ((int )(*(*(args + 1)))->type == 4) {
    zend_hash_internal_pointer_reset_ex((*(*(args + 1)))->value.ht,
                                        (HashPosition *)((void *)0));
    i = 0;
  } else {
    i = 1;
  }
  while (1) {
    if ((int )(*(*(args + 1)))->type == 4) {
      tmp___10 = zend_hash_num_elements((*(*(args + 1)))->value.ht);
      if (! tmp___10) {
        break;
      }
      zend_hash_get_current_data_ex((*(*(args + 1)))->value.ht,
                                    (void **)(& plocale),
                                    (HashPosition *)((void *)0));
    } else {
      plocale = *(args + i);
    }
    if ((int )(*plocale)->type != 6) {
      if (! (*plocale)->is_ref) {
        orig_ptr___1 = *plocale;
        if (orig_ptr___1->refcount > 1U) {
          (orig_ptr___1->refcount) --;
          tmp___11 = _emalloc((unsigned int )sizeof(zval ));
          *plocale = (zval *)tmp___11;
          *(*plocale) = *orig_ptr___1;
          _zval_copy_ctor(*plocale);
          (*plocale)->refcount = 1U;
          (*plocale)->is_ref = (unsigned char)0;
        }
      }
      if ((int )(*plocale)->type != 6) {
        _convert_to_string(*plocale);
      }
    }
    tmp___12 = strcmp("0", (char const   *)(*plocale)->value.str.val);
    if (tmp___12) {
      loc = (*plocale)->value.str.val;
    } else {
      loc = (char *)((void *)0);
    }
    retval = setlocale(cat, (char const   *)loc);
    if (retval) {
      if (loc) {
        if (basic_globals.locale_string) {
          _efree((void *)basic_globals.locale_string);
        }
        basic_globals.locale_string = _estrdup((char const   *)retval);
      }
      _efree((void *)args);
      __s = retval;
      tmp___13 = strlen((char const   *)__s);
      return_value->value.str.len = (int )tmp___13;
      tmp___14 = _estrndup((char const   *)__s,
                           (unsigned int )return_value->value.str.len);
      return_value->value.str.val = tmp___14;
      return_value->type = (unsigned char)6;
      return;
    }
    if ((int )(*(*(args + 1)))->type == 4) {
      tmp___15 = zend_hash_move_forward_ex((*(*(args + 1)))->value.ht,
                                           (HashPosition *)((void *)0));
      if (tmp___15 == -1) {
        break;
      }
    } else {
      i ++;
      if (i >= n_args) {
        break;
      }
    }
  }
  _efree((void *)args);
  return_value->type = (unsigned char)3;
  return_value->value.lval = 0L;
  return;
}
}

void zif_parse_str(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) 
{ zval **arg ;
  zval **arrayArg ;
  zval *sarg ;
  char *res ;
  int argCount ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  zval tmp___1 ;

  {
  res = (char *)((void *)0);
  argCount = ht;
  if (argCount < 1) {
    zend_wrong_param_count();
    return;
  } else {
    if (argCount > 2) {
      zend_wrong_param_count();
      return;
    } else {
      tmp = zend_get_parameters_ex(argCount, & arg, & arrayArg);
      if (tmp == -1) {
        zend_wrong_param_count();
        return;
      }
    }
  }
  if ((int )(*arg)->type != 6) {
    if (! (*arg)->is_ref) {
      orig_ptr = *arg;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *arg = (zval *)tmp___0;
        *(*arg) = *orig_ptr;
        _zval_copy_ctor(*arg);
        (*arg)->refcount = 1U;
        (*arg)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*arg)->type != 6) {
      _convert_to_string(*arg);
    }
  }
  sarg = *arg;
  if (sarg->value.str.val) {
    if (*(sarg->value.str.val)) {
      res = _estrndup((char const   *)sarg->value.str.val,
                      (unsigned int )sarg->value.str.len);
    }
  }
  if (argCount == 1) {
    tmp___1.value.ht = executor_globals.active_symbol_table;
    (*(sapi_module.treat_data))(3, res, & tmp___1);
  } else {
    _zval_dtor(*arrayArg);
    _array_init(*arrayArg);
    (*(sapi_module.treat_data))(3, res, *arrayArg);
  }
  return;
}
}

int php_tag_find(char *tag , int len , char *set ) 
{ char c ;
  char *n ;
  char *t ;
  int state ;
  int done ;
  char *norm ;
  void *tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  unsigned short const   **tmp___4 ;
  int tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;

  {
  state = 0;
  done = 0;
  if (len <= 0) {
    return (0);
  }
  tmp = _emalloc((unsigned int )(len + 1));
  norm = (char *)tmp;
  n = norm;
  t = tag;
  tmp___0 = tolower((int )*t);
  c = (char )tmp___0;
  while (! done) {
    switch ((int )c) {
    case 60: 
    tmp___1 = n;
    n ++;
    *tmp___1 = c;
    break;
    case 62: 
    done = 1;
    break;
    default: 
    tmp___4 = __ctype_b_loc();
    if ((int const   )*(*tmp___4 + (int )c) & 8192) {
      if (state == 1) {
        done = 1;
      }
    } else {
      if (state == 0) {
        state = 1;
        if ((int )c != 47) {
          tmp___2 = n;
          n ++;
          *tmp___2 = c;
        }
      } else {
        tmp___3 = n;
        n ++;
        *tmp___3 = c;
      }
    }
    break;
    }
    t ++;
    tmp___5 = tolower((int )*t);
    c = (char )tmp___5;
  }
  tmp___6 = n;
  n ++;
  *tmp___6 = (char )'>';
  *n = (char )'\000';
  tmp___7 = strstr((char const   *)set, (char const   *)norm);
  if (tmp___7) {
    done = 1;
  } else {
    done = 0;
  }
  _efree((void *)norm);
  return (done);
}
}

size_t php_strip_tags(char *rbuf , int len , int *stateptr , char *allow ,
                      int allow_len ) 
{ size_t tmp ;

  {
  tmp = php_strip_tags_ex(rbuf, len, stateptr, allow, allow_len,
                          (unsigned char)0);
  return (tmp);
}
}

size_t php_strip_tags_ex(char *rbuf , int len , int *stateptr , char *allow ,
                         int allow_len , zend_bool allow_tag_spaces ) 
{ char *tbuf ;
  char *buf ;
  char *p ;
  char *tp ;
  char *rp ;
  char c ;
  char lc ;
  int br ;
  int i ;
  int depth ;
  int state ;
  void *tmp ;
  unsigned short const   **tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  int tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;
  char *tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  char *tmp___19 ;
  char *tmp___20 ;

  {
  i = 0;
  depth = 0;
  state = 0;
  if (stateptr) {
    state = *stateptr;
  }
  buf = _estrndup((char const   *)rbuf, (unsigned int )len);
  c = *buf;
  lc = (char )'\000';
  p = buf;
  rp = rbuf;
  br = 0;
  if (allow) {
    php_strtolower(allow, (unsigned int )allow_len);
    tmp = _emalloc(1024U);
    tbuf = (char *)tmp;
    tp = tbuf;
  } else {
    tp = (char *)((void *)0);
    tbuf = tp;
  }
  while (i < len) {
    switch ((int )c) {
    case 0: 
    break;
    case 60: 
    tmp___0 = __ctype_b_loc();
    if ((int const   )*(*tmp___0 + (int )*(p + 1)) & 8192) {
      if (! allow_tag_spaces) {
        goto reg_char;
      }
    }
    if (state == 0) {
      lc = (char )'<';
      state = 1;
      if (allow) {
        if (tp - tbuf >= 1023) {
          tp = tbuf;
        } else {
          tp = tp;
        }
        tmp___1 = tp;
        tp ++;
        *tmp___1 = (char )'<';
      }
    } else {
      if (state == 1) {
        depth ++;
      }
    }
    break;
    case 40: 
    if (state == 2) {
      if ((int )lc != 34) {
        if ((int )lc != 39) {
          lc = (char )'(';
          br ++;
        }
      }
    } else {
      if (allow) {
        if (state == 1) {
          if (tp - tbuf >= 1023) {
            tp = tbuf;
          } else {
            tp = tp;
          }
          tmp___2 = tp;
          tp ++;
          *tmp___2 = c;
        } else {
          goto _L;
        }
      } else {
        _L: 
        if (state == 0) {
          tmp___3 = rp;
          rp ++;
          *tmp___3 = c;
        }
      }
    }
    break;
    case 41: 
    if (state == 2) {
      if ((int )lc != 34) {
        if ((int )lc != 39) {
          lc = (char )')';
          br --;
        }
      }
    } else {
      if (allow) {
        if (state == 1) {
          if (tp - tbuf >= 1023) {
            tp = tbuf;
          } else {
            tp = tp;
          }
          tmp___4 = tp;
          tp ++;
          *tmp___4 = c;
        } else {
          goto _L___0;
        }
      } else {
        _L___0: 
        if (state == 0) {
          tmp___5 = rp;
          rp ++;
          *tmp___5 = c;
        }
      }
    }
    break;
    case 62: 
    if (depth) {
      depth --;
      break;
    }
    switch (state) {
    case 1: 
    lc = (char )'>';
    state = 0;
    if (allow) {
      if (tp - tbuf >= 1023) {
        tp = tbuf;
      } else {
        tp = tp;
      }
      tmp___6 = tp;
      tp ++;
      *tmp___6 = (char )'>';
      *tp = (char )'\000';
      tmp___7 = php_tag_find(tbuf, tp - tbuf, allow);
      if (tmp___7) {
        memcpy((void */* __restrict  */)((void *)rp),
               (void const   */* __restrict  */)((void const   *)tbuf),
               (unsigned int )(tp - tbuf));
        rp += tp - tbuf;
      }
      tp = tbuf;
    }
    break;
    case 2: 
    if (! br) {
      if ((int )lc != 34) {
        if ((int )*(p - 1) == 63) {
          state = 0;
          tp = tbuf;
        }
      }
    }
    break;
    case 3: 
    state = 0;
    tp = tbuf;
    break;
    case 4: 
    if ((unsigned int )p >= (unsigned int )(buf + 2)) {
      if ((int )*(p - 1) == 45) {
        if ((int )*(p - 2) == 45) {
          state = 0;
          tp = tbuf;
        }
      }
    }
    break;
    default: 
    tmp___8 = rp;
    rp ++;
    *tmp___8 = c;
    break;
    }
    break;
    case 34: 
    case 39: 
    if (state == 2) {
      if ((int )*(p - 1) != 92) {
        if ((int )lc == (int )c) {
          lc = (char )'\000';
        } else {
          if ((int )lc != 92) {
            lc = c;
          }
        }
      } else {
        goto _L___1;
      }
    } else {
      _L___1: 
      if (state == 0) {
        tmp___9 = rp;
        rp ++;
        *tmp___9 = c;
      } else {
        if (allow) {
          if (state == 1) {
            if (tp - tbuf >= 1023) {
              tp = tbuf;
            } else {
              tp = tp;
            }
            tmp___10 = tp;
            tp ++;
            *tmp___10 = c;
          }
        }
      }
    }
    break;
    case 33: 
    if (state == 1) {
      if ((int )*(p - 1) == 60) {
        state = 3;
        lc = c;
      } else {
        goto _L___2;
      }
    } else {
      _L___2: 
      if (state == 0) {
        tmp___11 = rp;
        rp ++;
        *tmp___11 = c;
      } else {
        if (allow) {
          if (state == 1) {
            if (tp - tbuf >= 1023) {
              tp = tbuf;
            } else {
              tp = tp;
            }
            tmp___12 = tp;
            tp ++;
            *tmp___12 = c;
          }
        }
      }
    }
    break;
    case 45: 
    if (state == 3) {
      if ((unsigned int )p >= (unsigned int )(buf + 2)) {
        if ((int )*(p - 1) == 45) {
          if ((int )*(p - 2) == 33) {
            state = 4;
          } else {
            goto reg_char;
          }
        } else {
          goto reg_char;
        }
      } else {
        goto reg_char;
      }
    } else {
      goto reg_char;
    }
    break;
    case 63: 
    if (state == 1) {
      if ((int )*(p - 1) == 60) {
        br = 0;
        state = 2;
        break;
      }
    }
    case 69: 
    case 101: 
    if (state == 3) {
      if ((unsigned int )p > (unsigned int )(buf + 6)) {
        tmp___13 = tolower((int )*(p - 1));
        if (tmp___13 == 112) {
          tmp___14 = tolower((int )*(p - 2));
          if (tmp___14 == 121) {
            tmp___15 = tolower((int )*(p - 3));
            if (tmp___15 == 116) {
              tmp___16 = tolower((int )*(p - 4));
              if (tmp___16 == 99) {
                tmp___17 = tolower((int )*(p - 5));
                if (tmp___17 == 111) {
                  tmp___18 = tolower((int )*(p - 6));
                  if (tmp___18 == 100) {
                    state = 1;
                    break;
                  }
                }
              }
            }
          }
        }
      }
    }
    case 108: 
    if (state == 2) {
      if ((unsigned int )p > (unsigned int )(buf + 2)) {
        if ((int )*(p - 1) == 109) {
          if ((int )*(p - 2) == 120) {
            state = 1;
            break;
          }
        }
      }
    }
    default: ;
    reg_char: 
    if (state == 0) {
      tmp___19 = rp;
      rp ++;
      *tmp___19 = c;
    } else {
      if (allow) {
        if (state == 1) {
          if (tp - tbuf >= 1023) {
            tp = tbuf;
          } else {
            tp = tp;
          }
          tmp___20 = tp;
          tp ++;
          *tmp___20 = c;
        }
      }
    }
    break;
    }
    p ++;
    c = *p;
    i ++;
  }
  if ((unsigned int )rp < (unsigned int )(rbuf + len)) {
    *rp = (char )'\000';
  }
  _efree((void *)buf);
  if (allow) {
    _efree((void *)tbuf);
  }
  if (stateptr) {
    *stateptr = state;
  }
  return ((unsigned int )(rp - rbuf));
}
}

void zif_str_repeat(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) 
{ zval **input_str ;
  zval **mult ;
  char *result ;
  size_t result_len ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  zval *orig_ptr___0 ;
  void *tmp___1 ;
  char *__s ;
  int __l ;
  char *tmp___2 ;
  char *__s___0 ;
  int __l___0 ;
  char *tmp___3 ;
  void *tmp___4 ;
  char *s ;
  char *e ;
  char *ee ;
  int l ;
  char *__s___1 ;
  int __l___1 ;
  char *tmp___5 ;

  {
  if (ht != 2) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(2, & input_str, & mult);
    if (tmp == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*input_str)->type != 6) {
    if (! (*input_str)->is_ref) {
      orig_ptr = *input_str;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *input_str = (zval *)tmp___0;
        *(*input_str) = *orig_ptr;
        _zval_copy_ctor(*input_str);
        (*input_str)->refcount = 1U;
        (*input_str)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*input_str)->type != 6) {
      _convert_to_string(*input_str);
    }
  }
  if ((int )(*mult)->type != 1) {
    if (! (*mult)->is_ref) {
      orig_ptr___0 = *mult;
      if (orig_ptr___0->refcount > 1U) {
        (orig_ptr___0->refcount) --;
        tmp___1 = _emalloc((unsigned int )sizeof(zval ));
        *mult = (zval *)tmp___1;
        *(*mult) = *orig_ptr___0;
        _zval_copy_ctor(*mult);
        (*mult)->refcount = 1U;
        (*mult)->is_ref = (unsigned char)0;
      }
    }
    convert_to_long(*mult);
  }
  if ((*mult)->value.lval < 0L) {
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "Second argument has to be greater than or equal to 0.");
    return;
  }
  if ((*input_str)->value.str.len == 0) {
    __s = (char *)"";
    __l = 0;
    return_value->value.str.len = __l;
    tmp___2 = _estrndup((char const   *)__s, (unsigned int )__l);
    return_value->value.str.val = tmp___2;
    return_value->type = (unsigned char)6;
    return;
  }
  if ((*mult)->value.lval == 0L) {
    __s___0 = (char *)"";
    __l___0 = 0;
    return_value->value.str.len = __l___0;
    tmp___3 = _estrndup((char const   *)__s___0, (unsigned int )__l___0);
    return_value->value.str.val = tmp___3;
    return_value->type = (unsigned char)6;
    return;
  }
  result_len = (unsigned int )((long )(*input_str)->value.str.len * (*mult)->value.lval);
  tmp___4 = _safe_emalloc((unsigned int )(*input_str)->value.str.len,
                          (unsigned int )(*mult)->value.lval, 1U);
  result = (char *)tmp___4;
  if ((*input_str)->value.str.len == 1) {
    memset((void *)result, (int )*((*input_str)->value.str.val),
           (unsigned int )(*mult)->value.lval);
  } else {
    l = 0;
    memcpy((void */* __restrict  */)((void *)result),
           (void const   */* __restrict  */)((void const   *)(*input_str)->value.str.val),
           (unsigned int )(*input_str)->value.str.len);
    s = result;
    e = result + (*input_str)->value.str.len;
    ee = result + result_len;
    while ((unsigned int )e < (unsigned int )ee) {
      if (e - s < ee - e) {
        l = e - s;
      } else {
        l = ee - e;
      }
      memmove((void *)e, (void const   *)s, (unsigned int )l);
      e += l;
    }
  }
  *(result + result_len) = (char )'\000';
  __s___1 = result;
  __l___1 = (int )result_len;
  return_value->value.str.len = __l___1;
  return_value->value.str.val = __s___1;
  return_value->type = (unsigned char)6;
  return;
}
}

void zif_count_chars(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) 
{ zval **input ;
  zval **mode ;
  int chars[256] ;
  int ac ;
  int mymode ;
  unsigned char *buf ;
  int len ;
  int inx ;
  char retstr[256] ;
  int retlen ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  zval *orig_ptr___0 ;
  void *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  char *__s ;
  int __l ;
  char *tmp___4 ;

  {
  ac = ht;
  mymode = 0;
  retlen = 0;
  if (ac < 1) {
    zend_wrong_param_count();
    return;
  } else {
    if (ac > 2) {
      zend_wrong_param_count();
      return;
    } else {
      tmp = zend_get_parameters_ex(ac, & input, & mode);
      if (tmp == -1) {
        zend_wrong_param_count();
        return;
      }
    }
  }
  if ((int )(*input)->type != 6) {
    if (! (*input)->is_ref) {
      orig_ptr = *input;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *input = (zval *)tmp___0;
        *(*input) = *orig_ptr;
        _zval_copy_ctor(*input);
        (*input)->refcount = 1U;
        (*input)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*input)->type != 6) {
      _convert_to_string(*input);
    }
  }
  if (ac == 2) {
    if ((int )(*mode)->type != 1) {
      if (! (*mode)->is_ref) {
        orig_ptr___0 = *mode;
        if (orig_ptr___0->refcount > 1U) {
          (orig_ptr___0->refcount) --;
          tmp___1 = _emalloc((unsigned int )sizeof(zval ));
          *mode = (zval *)tmp___1;
          *(*mode) = *orig_ptr___0;
          _zval_copy_ctor(*mode);
          (*mode)->refcount = 1U;
          (*mode)->is_ref = (unsigned char)0;
        }
      }
      convert_to_long(*mode);
    }
    mymode = (int )(*mode)->value.lval;
    if (mymode < 0) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L, "Unknown mode.");
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    } else {
      if (mymode > 4) {
        php_error_docref0((char const   *)((void *)0), 1 << 1L, "Unknown mode.");
        return_value->type = (unsigned char)3;
        return_value->value.lval = 0L;
        return;
      }
    }
  }
  len = (*input)->value.str.len;
  buf = (unsigned char *)(*input)->value.str.val;
  memset((void *)(chars), 0, (unsigned int )sizeof(chars));
  while (len > 0) {
    (chars[*buf]) ++;
    buf ++;
    len --;
  }
  if (mymode < 3) {
    _array_init(return_value);
  }
  inx = 0;
  while (inx < 256) {
    switch (mymode) {
    case 0: 
    add_index_long(return_value, (unsigned long )inx, (long )chars[inx]);
    break;
    case 1: 
    if (chars[inx] != 0) {
      add_index_long(return_value, (unsigned long )inx, (long )chars[inx]);
    }
    break;
    case 2: 
    if (chars[inx] == 0) {
      add_index_long(return_value, (unsigned long )inx, (long )chars[inx]);
    }
    break;
    case 3: 
    if (chars[inx] != 0) {
      tmp___2 = retlen;
      retlen ++;
      retstr[tmp___2] = (char )inx;
    }
    break;
    case 4: 
    if (chars[inx] == 0) {
      tmp___3 = retlen;
      retlen ++;
      retstr[tmp___3] = (char )inx;
    }
    break;
    }
    inx ++;
  }
  if (mymode >= 3) {
    if (mymode <= 4) {
      __s = retstr;
      __l = retlen;
      return_value->value.str.len = __l;
      tmp___4 = _estrndup((char const   *)__s, (unsigned int )__l);
      return_value->value.str.val = tmp___4;
      return_value->type = (unsigned char)6;
      return;
    }
  }
  return;
}
}

static void php_strnatcmp(int ht , zval *return_value ,
                          zval **return_value_ptr , zval *this_ptr ,
                          int return_value_used , int fold_case ) 
{ zval **s1 ;
  zval **s2 ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  zval *orig_ptr___0 ;
  void *tmp___1 ;
  int tmp___2 ;

  {
  if (ht != 2) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(2, & s1, & s2);
    if (tmp == -1) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*s1)->type != 6) {
    if (! (*s1)->is_ref) {
      orig_ptr = *s1;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *s1 = (zval *)tmp___0;
        *(*s1) = *orig_ptr;
        _zval_copy_ctor(*s1);
        (*s1)->refcount = 1U;
        (*s1)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*s1)->type != 6) {
      _convert_to_string(*s1);
    }
  }
  if ((int )(*s2)->type != 6) {
    if (! (*s2)->is_ref) {
      orig_ptr___0 = *s2;
      if (orig_ptr___0->refcount > 1U) {
        (orig_ptr___0->refcount) --;
        tmp___1 = _emalloc((unsigned int )sizeof(zval ));
        *s2 = (zval *)tmp___1;
        *(*s2) = *orig_ptr___0;
        _zval_copy_ctor(*s2);
        (*s2)->refcount = 1U;
        (*s2)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*s2)->type != 6) {
      _convert_to_string(*s2);
    }
  }
  return_value->type = (unsigned char)1;
  tmp___2 = strnatcmp_ex((char const   *)(*s1)->value.str.val,
                         (unsigned int )(*s1)->value.str.len,
                         (char const   *)(*s2)->value.str.val,
                         (unsigned int )(*s2)->value.str.len, fold_case);
  return_value->value.lval = (long )tmp___2;
  return;
}
}

void zif_strnatcmp(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) 
{ 

  {
  php_strnatcmp(ht, return_value, return_value_ptr, this_ptr, return_value_used,
                0);
  return;
}
}

void zif_localeconv(int ht , zval *return_value , zval **return_value_ptr ,
                    zval *this_ptr , int return_value_used ) 
{ zval *grouping ;
  zval *mon_grouping ;
  int len ;
  int i ;
  void *tmp ;
  void *tmp___0 ;
  struct lconv currlocdata ;
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
  size_t tmp___11 ;
  size_t tmp___12 ;
  size_t tmp___13 ;
  size_t tmp___14 ;
  size_t tmp___15 ;
  size_t tmp___16 ;
  size_t tmp___17 ;
  size_t tmp___18 ;

  {
  if (ht > 0) {
    zend_wrong_param_count();
    return;
  }
  tmp = _emalloc((unsigned int )sizeof(zval ));
  grouping = (zval *)tmp;
  grouping->refcount = 1U;
  grouping->is_ref = (unsigned char)0;
  tmp___0 = _emalloc((unsigned int )sizeof(zval ));
  mon_grouping = (zval *)tmp___0;
  mon_grouping->refcount = 1U;
  mon_grouping->is_ref = (unsigned char)0;
  _array_init(return_value);
  _array_init(grouping);
  _array_init(mon_grouping);
  localeconv_r(& currlocdata);
  tmp___1 = strlen((char const   *)currlocdata.grouping);
  len = (int )tmp___1;
  i = 0;
  while (i < len) {
    add_index_long(grouping, (unsigned long )i,
                   (long )*(currlocdata.grouping + i));
    i ++;
  }
  tmp___2 = strlen((char const   *)currlocdata.mon_grouping);
  len = (int )tmp___2;
  i = 0;
  while (i < len) {
    add_index_long(mon_grouping, (unsigned long )i,
                   (long )*(currlocdata.mon_grouping + i));
    i ++;
  }
  tmp___3 = strlen("decimal_point");
  add_assoc_string_ex(return_value, (char *)"decimal_point", tmp___3 + 1U,
                      currlocdata.decimal_point, 1);
  tmp___4 = strlen("thousands_sep");
  add_assoc_string_ex(return_value, (char *)"thousands_sep", tmp___4 + 1U,
                      currlocdata.thousands_sep, 1);
  tmp___5 = strlen("int_curr_symbol");
  add_assoc_string_ex(return_value, (char *)"int_curr_symbol", tmp___5 + 1U,
                      currlocdata.int_curr_symbol, 1);
  tmp___6 = strlen("currency_symbol");
  add_assoc_string_ex(return_value, (char *)"currency_symbol", tmp___6 + 1U,
                      currlocdata.currency_symbol, 1);
  tmp___7 = strlen("mon_decimal_point");
  add_assoc_string_ex(return_value, (char *)"mon_decimal_point", tmp___7 + 1U,
                      currlocdata.mon_decimal_point, 1);
  tmp___8 = strlen("mon_thousands_sep");
  add_assoc_string_ex(return_value, (char *)"mon_thousands_sep", tmp___8 + 1U,
                      currlocdata.mon_thousands_sep, 1);
  tmp___9 = strlen("positive_sign");
  add_assoc_string_ex(return_value, (char *)"positive_sign", tmp___9 + 1U,
                      currlocdata.positive_sign, 1);
  tmp___10 = strlen("negative_sign");
  add_assoc_string_ex(return_value, (char *)"negative_sign", tmp___10 + 1U,
                      currlocdata.negative_sign, 1);
  tmp___11 = strlen("int_frac_digits");
  add_assoc_long_ex(return_value, (char *)"int_frac_digits", tmp___11 + 1U,
                    (long )currlocdata.int_frac_digits);
  tmp___12 = strlen("frac_digits");
  add_assoc_long_ex(return_value, (char *)"frac_digits", tmp___12 + 1U,
                    (long )currlocdata.frac_digits);
  tmp___13 = strlen("p_cs_precedes");
  add_assoc_long_ex(return_value, (char *)"p_cs_precedes", tmp___13 + 1U,
                    (long )currlocdata.p_cs_precedes);
  tmp___14 = strlen("p_sep_by_space");
  add_assoc_long_ex(return_value, (char *)"p_sep_by_space", tmp___14 + 1U,
                    (long )currlocdata.p_sep_by_space);
  tmp___15 = strlen("n_cs_precedes");
  add_assoc_long_ex(return_value, (char *)"n_cs_precedes", tmp___15 + 1U,
                    (long )currlocdata.n_cs_precedes);
  tmp___16 = strlen("n_sep_by_space");
  add_assoc_long_ex(return_value, (char *)"n_sep_by_space", tmp___16 + 1U,
                    (long )currlocdata.n_sep_by_space);
  tmp___17 = strlen("p_sign_posn");
  add_assoc_long_ex(return_value, (char *)"p_sign_posn", tmp___17 + 1U,
                    (long )currlocdata.p_sign_posn);
  tmp___18 = strlen("n_sign_posn");
  add_assoc_long_ex(return_value, (char *)"n_sign_posn", tmp___18 + 1U,
                    (long )currlocdata.n_sign_posn);
  _zend_hash_add_or_update(return_value->value.ht, (char *)"grouping", 9U,
                           (void *)(& grouping), (unsigned int )sizeof(zval *),
                           (void **)((void *)0), 1);
  _zend_hash_add_or_update(return_value->value.ht, (char *)"mon_grouping", 13U,
                           (void *)(& mon_grouping),
                           (unsigned int )sizeof(zval *), (void **)((void *)0),
                           1);
  return;
}
}

void zif_strnatcasecmp(int ht , zval *return_value , zval **return_value_ptr ,
                       zval *this_ptr , int return_value_used ) 
{ 

  {
  php_strnatcmp(ht, return_value, return_value_ptr, this_ptr, return_value_used,
                1);
  return;
}
}

void zif_substr_count(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) 
{ zval **haystack ;
  zval **needle ;
  zval **offset ;
  zval **length ;
  int ac ;
  int count ;
  char *p ;
  char *endp ;
  char cmp ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  zval *orig_ptr___0 ;
  void *tmp___1 ;
  zval *orig_ptr___1 ;
  void *tmp___2 ;
  zval *orig_ptr___2 ;
  void *tmp___3 ;
  void *tmp___4 ;

  {
  ac = ht;
  count = 0;
  if (ac < 2) {
    zend_wrong_param_count();
    return;
  } else {
    if (ac > 4) {
      zend_wrong_param_count();
      return;
    } else {
      tmp = zend_get_parameters_ex(ac, & haystack, & needle, & offset, & length);
      if (tmp == -1) {
        zend_wrong_param_count();
        return;
      }
    }
  }
  if ((int )(*haystack)->type != 6) {
    if (! (*haystack)->is_ref) {
      orig_ptr = *haystack;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *haystack = (zval *)tmp___0;
        *(*haystack) = *orig_ptr;
        _zval_copy_ctor(*haystack);
        (*haystack)->refcount = 1U;
        (*haystack)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*haystack)->type != 6) {
      _convert_to_string(*haystack);
    }
  }
  if ((int )(*needle)->type != 6) {
    if (! (*needle)->is_ref) {
      orig_ptr___0 = *needle;
      if (orig_ptr___0->refcount > 1U) {
        (orig_ptr___0->refcount) --;
        tmp___1 = _emalloc((unsigned int )sizeof(zval ));
        *needle = (zval *)tmp___1;
        *(*needle) = *orig_ptr___0;
        _zval_copy_ctor(*needle);
        (*needle)->refcount = 1U;
        (*needle)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*needle)->type != 6) {
      _convert_to_string(*needle);
    }
  }
  if ((*needle)->value.str.len == 0) {
    php_error_docref0((char const   *)((void *)0), 1 << 1L, "Empty substring.");
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  p = (*haystack)->value.str.val;
  endp = p + (*haystack)->value.str.len;
  if (ac > 2) {
    if ((int )(*offset)->type != 1) {
      if (! (*offset)->is_ref) {
        orig_ptr___1 = *offset;
        if (orig_ptr___1->refcount > 1U) {
          (orig_ptr___1->refcount) --;
          tmp___2 = _emalloc((unsigned int )sizeof(zval ));
          *offset = (zval *)tmp___2;
          *(*offset) = *orig_ptr___1;
          _zval_copy_ctor(*offset);
          (*offset)->refcount = 1U;
          (*offset)->is_ref = (unsigned char)0;
        }
      }
      convert_to_long(*offset);
    }
    if ((*offset)->value.lval < 0L) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Offset should be greater than or equal to 0.");
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    }
    p += (*offset)->value.lval;
    if ((unsigned int )p > (unsigned int )endp) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Offset value %ld exceeds string length.",
                        (*offset)->value.lval);
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    }
    if (ac == 4) {
      if ((int )(*length)->type != 1) {
        if (! (*length)->is_ref) {
          orig_ptr___2 = *length;
          if (orig_ptr___2->refcount > 1U) {
            (orig_ptr___2->refcount) --;
            tmp___3 = _emalloc((unsigned int )sizeof(zval ));
            *length = (zval *)tmp___3;
            *(*length) = *orig_ptr___2;
            _zval_copy_ctor(*length);
            (*length)->refcount = 1U;
            (*length)->is_ref = (unsigned char)0;
          }
        }
        convert_to_long(*length);
      }
      if ((*length)->value.lval <= 0L) {
        php_error_docref0((char const   *)((void *)0), 1 << 1L,
                          "Length should be greater than 0.");
        return_value->type = (unsigned char)3;
        return_value->value.lval = 0L;
        return;
      }
      if ((unsigned int )(p + (*length)->value.lval) > (unsigned int )endp) {
        php_error_docref0((char const   *)((void *)0), 1 << 1L,
                          "Length value %ld exceeds string length.",
                          (*length)->value.lval);
        return_value->type = (unsigned char)3;
        return_value->value.lval = 0L;
        return;
      }
      endp = p + (*length)->value.lval;
    }
  }
  if ((*needle)->value.str.len == 1) {
    cmp = *((*needle)->value.str.val + 0);
    while (1) {
      tmp___4 = memchr((void const   *)p, (int )cmp, (unsigned int )(endp - p));
      p = (char *)tmp___4;
      if (! p) {
        break;
      }
      count ++;
      p ++;
    }
  } else {
    while (1) {
      p = zend_memnstr(p, (*needle)->value.str.val, (*needle)->value.str.len,
                       endp);
      if (! p) {
        break;
      }
      p += (*needle)->value.str.len;
      count ++;
    }
  }
  return_value->type = (unsigned char)1;
  return_value->value.lval = (long )count;
  return;
}
}

void zif_str_pad(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ zval **input ;
  zval **pad_length ;
  zval **pad_string ;
  zval **pad_type ;
  int num_pad_chars ;
  char *result ;
  int result_len ;
  char *pad_str_val ;
  int pad_str_len ;
  int pad_type_val ;
  int i ;
  int left_pad ;
  int right_pad ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  zval *orig_ptr___0 ;
  void *tmp___1 ;
  int is_ref ;
  int refcount ;
  zval *orig_ptr___1 ;
  void *tmp___2 ;
  zval *orig_ptr___2 ;
  void *tmp___3 ;
  void *tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  char *__s ;
  int __l ;
  char *tmp___7 ;

  {
  result = (char *)((void *)0);
  result_len = 0;
  pad_str_val = (char *)" ";
  pad_str_len = 1;
  pad_type_val = 1;
  left_pad = 0;
  right_pad = 0;
  if (ht < 2) {
    zend_wrong_param_count();
    return;
  } else {
    if (ht > 4) {
      zend_wrong_param_count();
      return;
    } else {
      tmp = zend_get_parameters_ex(ht, & input, & pad_length, & pad_string,
                                   & pad_type);
      if (tmp == -1) {
        zend_wrong_param_count();
        return;
      }
    }
  }
  if ((int )(*input)->type != 6) {
    if (! (*input)->is_ref) {
      orig_ptr = *input;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *input = (zval *)tmp___0;
        *(*input) = *orig_ptr;
        _zval_copy_ctor(*input);
        (*input)->refcount = 1U;
        (*input)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*input)->type != 6) {
      _convert_to_string(*input);
    }
  }
  if ((int )(*pad_length)->type != 1) {
    if (! (*pad_length)->is_ref) {
      orig_ptr___0 = *pad_length;
      if (orig_ptr___0->refcount > 1U) {
        (orig_ptr___0->refcount) --;
        tmp___1 = _emalloc((unsigned int )sizeof(zval ));
        *pad_length = (zval *)tmp___1;
        *(*pad_length) = *orig_ptr___0;
        _zval_copy_ctor(*pad_length);
        (*pad_length)->refcount = 1U;
        (*pad_length)->is_ref = (unsigned char)0;
      }
    }
    convert_to_long(*pad_length);
  }
  num_pad_chars = (int )((*pad_length)->value.lval - (long )(*input)->value.str.len);
  if (num_pad_chars < 0) {
    is_ref = (int )return_value->is_ref;
    refcount = (int )return_value->refcount;
    *return_value = *(*input);
    _zval_copy_ctor(return_value);
    return_value->is_ref = (unsigned char )is_ref;
    return_value->refcount = (unsigned int )refcount;
    return;
  }
  if (ht > 2) {
    if ((int )(*pad_string)->type != 6) {
      if (! (*pad_string)->is_ref) {
        orig_ptr___1 = *pad_string;
        if (orig_ptr___1->refcount > 1U) {
          (orig_ptr___1->refcount) --;
          tmp___2 = _emalloc((unsigned int )sizeof(zval ));
          *pad_string = (zval *)tmp___2;
          *(*pad_string) = *orig_ptr___1;
          _zval_copy_ctor(*pad_string);
          (*pad_string)->refcount = 1U;
          (*pad_string)->is_ref = (unsigned char)0;
        }
      }
      if ((int )(*pad_string)->type != 6) {
        _convert_to_string(*pad_string);
      }
    }
    if ((*pad_string)->value.str.len == 0) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "Padding string cannot be empty.");
      return;
    }
    pad_str_val = (*pad_string)->value.str.val;
    pad_str_len = (*pad_string)->value.str.len;
    if (ht > 3) {
      if ((int )(*pad_type)->type != 1) {
        if (! (*pad_type)->is_ref) {
          orig_ptr___2 = *pad_type;
          if (orig_ptr___2->refcount > 1U) {
            (orig_ptr___2->refcount) --;
            tmp___3 = _emalloc((unsigned int )sizeof(zval ));
            *pad_type = (zval *)tmp___3;
            *(*pad_type) = *orig_ptr___2;
            _zval_copy_ctor(*pad_type);
            (*pad_type)->refcount = 1U;
            (*pad_type)->is_ref = (unsigned char)0;
          }
        }
        convert_to_long(*pad_type);
      }
      pad_type_val = (int )(*pad_type)->value.lval;
      if (pad_type_val < 0) {
        php_error_docref0((char const   *)((void *)0), 1 << 1L,
                          "Padding type has to be STR_PAD_LEFT, STR_PAD_RIGHT, or STR_PAD_BOTH.");
        return;
      } else {
        if (pad_type_val > 2) {
          php_error_docref0((char const   *)((void *)0), 1 << 1L,
                            "Padding type has to be STR_PAD_LEFT, STR_PAD_RIGHT, or STR_PAD_BOTH.");
          return;
        }
      }
    }
  }
  tmp___4 = _emalloc((unsigned int )(((*input)->value.str.len + num_pad_chars) + 1));
  result = (char *)tmp___4;
  switch (pad_type_val) {
  case 1: 
  left_pad = 0;
  right_pad = num_pad_chars;
  break;
  case 0: 
  left_pad = num_pad_chars;
  right_pad = 0;
  break;
  case 2: 
  left_pad = num_pad_chars / 2;
  right_pad = num_pad_chars - left_pad;
  break;
  }
  i = 0;
  while (i < left_pad) {
    tmp___5 = result_len;
    result_len ++;
    *(result + tmp___5) = *(pad_str_val + i % pad_str_len);
    i ++;
  }
  memcpy((void */* __restrict  */)((void *)(result + result_len)),
         (void const   */* __restrict  */)((void const   *)(*input)->value.str.val),
         (unsigned int )(*input)->value.str.len);
  result_len += (*input)->value.str.len;
  i = 0;
  while (i < right_pad) {
    tmp___6 = result_len;
    result_len ++;
    *(result + tmp___6) = *(pad_str_val + i % pad_str_len);
    i ++;
  }
  *(result + result_len) = (char )'\000';
  __s = result;
  __l = result_len;
  return_value->value.str.len = __l;
  return_value->value.str.val = __s;
  return_value->type = (unsigned char)6;
  return;
}
}

void zif_sscanf(int ht , zval *return_value , zval **return_value_ptr ,
                zval *this_ptr , int return_value_used ) 
{ zval ***args ;
  int result ;
  int argc ;
  void *tmp ;
  int tmp___0 ;
  zval *orig_ptr ;
  void *tmp___1 ;
  zval *orig_ptr___0 ;
  void *tmp___2 ;

  {
  argc = ht;
  if (argc < 2) {
    zend_wrong_param_count();
    return;
  }
  tmp = _safe_emalloc((unsigned int )argc, (unsigned int )sizeof(zval **), 0U);
  args = (zval ***)tmp;
  tmp___0 = _zend_get_parameters_array_ex(argc, args);
  if (tmp___0 == -1) {
    _efree((void *)args);
    zend_wrong_param_count();
    return;
  }
  if ((int )(*(*(args + 0)))->type != 6) {
    if (! (*(*(args + 0)))->is_ref) {
      orig_ptr = *(*(args + 0));
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___1 = _emalloc((unsigned int )sizeof(zval ));
        *(*(args + 0)) = (zval *)tmp___1;
        *(*(*(args + 0))) = *orig_ptr;
        _zval_copy_ctor(*(*(args + 0)));
        (*(*(args + 0)))->refcount = 1U;
        (*(*(args + 0)))->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*(*(args + 0)))->type != 6) {
      _convert_to_string(*(*(args + 0)));
    }
  }
  if ((int )(*(*(args + 1)))->type != 6) {
    if (! (*(*(args + 1)))->is_ref) {
      orig_ptr___0 = *(*(args + 1));
      if (orig_ptr___0->refcount > 1U) {
        (orig_ptr___0->refcount) --;
        tmp___2 = _emalloc((unsigned int )sizeof(zval ));
        *(*(args + 1)) = (zval *)tmp___2;
        *(*(*(args + 1))) = *orig_ptr___0;
        _zval_copy_ctor(*(*(args + 1)));
        (*(*(args + 1)))->refcount = 1U;
        (*(*(args + 1)))->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*(*(args + 1)))->type != 6) {
      _convert_to_string(*(*(args + 1)));
    }
  }
  result = php_sscanf_internal((*(*(args + 0)))->value.str.val,
                               (*(*(args + 1)))->value.str.val, argc, args, 2,
                               & return_value);
  _efree((void *)args);
  if (-4 == result) {
    zend_wrong_param_count();
    return;
  }
  return;
}
}

static char rot13_from[53]   = 
  {(char )'a', (char )'b', (char )'c', (char )'d', (char )'e', (char )'f',
   (char )'g', (char )'h', (char )'i', (char )'j', (char )'k', (char )'l',
   (char )'m', (char )'n', (char )'o', (char )'p', (char )'q', (char )'r',
   (char )'s', (char )'t', (char )'u', (char )'v', (char )'w', (char )'x',
   (char )'y', (char )'z', (char )'A', (char )'B', (char )'C', (char )'D',
   (char )'E', (char )'F', (char )'G', (char )'H', (char )'I', (char )'J',
   (char )'K', (char )'L', (char )'M', (char )'N', (char )'O', (char )'P',
   (char )'Q', (char )'R', (char )'S', (char )'T', (char )'U', (char )'V',
   (char )'W', (char )'X', (char )'Y', (char )'Z', (char )'\000'};

static char rot13_to[53]   = 
  {(char )'n', (char )'o', (char )'p', (char )'q', (char )'r', (char )'s',
   (char )'t', (char )'u', (char )'v', (char )'w', (char )'x', (char )'y',
   (char )'z', (char )'a', (char )'b', (char )'c', (char )'d', (char )'e',
   (char )'f', (char )'g', (char )'h', (char )'i', (char )'j', (char )'k',
   (char )'l', (char )'m', (char )'N', (char )'O', (char )'P', (char )'Q',
   (char )'R', (char )'S', (char )'T', (char )'U', (char )'V', (char )'W',
   (char )'X', (char )'Y', (char )'Z', (char )'A', (char )'B', (char )'C',
   (char )'D', (char )'E', (char )'F', (char )'G', (char )'H', (char )'I',
   (char )'J', (char )'K', (char )'L', (char )'M', (char )'\000'};

void zif_str_rot13(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) 
{ zval **arg ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  int is_ref ;
  int refcount ;

  {
  if (ht != 1) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(1, & arg);
    if (tmp) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*arg)->type != 6) {
    if (! (*arg)->is_ref) {
      orig_ptr = *arg;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *arg = (zval *)tmp___0;
        *(*arg) = *orig_ptr;
        _zval_copy_ctor(*arg);
        (*arg)->refcount = 1U;
        (*arg)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*arg)->type != 6) {
      _convert_to_string(*arg);
    }
  }
  is_ref = (int )return_value->is_ref;
  refcount = (int )return_value->refcount;
  *return_value = *(*arg);
  _zval_copy_ctor(return_value);
  return_value->is_ref = (unsigned char )is_ref;
  return_value->refcount = (unsigned int )refcount;
  php_strtr(return_value->value.str.val, return_value->value.str.len,
            rot13_from, rot13_to, 52);
  return;
}
}

static void php_string_shuffle(char *str , long len ) 
{ long n_elems ;
  long rnd_idx ;
  long n_left ;
  char temp ;

  {
  n_elems = len;
  if (n_elems <= 1L) {
    return;
  }
  n_left = n_elems;
  while (1) {
    n_left --;
    if (! n_left) {
      break;
    }
    rnd_idx = php_rand();
    rnd_idx = (long )((((double )n_left - (double )0) + 1.0) * ((double )rnd_idx / ((double )2147483647 + 1.0)));
    if (rnd_idx != n_left) {
      temp = *(str + n_left);
      *(str + n_left) = *(str + rnd_idx);
      *(str + rnd_idx) = temp;
    }
  }
  return;
}
}

void zif_str_shuffle(int ht , zval *return_value , zval **return_value_ptr ,
                     zval *this_ptr , int return_value_used ) 
{ zval **arg ;
  int tmp ;
  zval *orig_ptr ;
  void *tmp___0 ;
  int is_ref ;
  int refcount ;

  {
  if (ht != 1) {
    zend_wrong_param_count();
    return;
  } else {
    tmp = zend_get_parameters_ex(1, & arg);
    if (tmp) {
      zend_wrong_param_count();
      return;
    }
  }
  if ((int )(*arg)->type != 6) {
    if (! (*arg)->is_ref) {
      orig_ptr = *arg;
      if (orig_ptr->refcount > 1U) {
        (orig_ptr->refcount) --;
        tmp___0 = _emalloc((unsigned int )sizeof(zval ));
        *arg = (zval *)tmp___0;
        *(*arg) = *orig_ptr;
        _zval_copy_ctor(*arg);
        (*arg)->refcount = 1U;
        (*arg)->is_ref = (unsigned char)0;
      }
    }
    if ((int )(*arg)->type != 6) {
      _convert_to_string(*arg);
    }
  }
  is_ref = (int )return_value->is_ref;
  refcount = (int )return_value->refcount;
  *return_value = *(*arg);
  _zval_copy_ctor(return_value);
  return_value->is_ref = (unsigned char )is_ref;
  return_value->refcount = (unsigned int )refcount;
  if (return_value->value.str.len > 1) {
    php_string_shuffle(return_value->value.str.val,
                       (long )return_value->value.str.len);
  }
  return;
}
}

void zif_str_word_count(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) 
{ char *buf ;
  char *str ;
  char *char_list ;
  char *p ;
  char *e ;
  char *s ;
  char ch[256] ;
  int str_len ;
  int char_list_len ;
  int word_count ;
  long type ;
  int tmp ;
  unsigned short const   **tmp___0 ;

  {
  char_list = (char *)((void *)0);
  word_count = 0;
  type = 0L;
  tmp = zend_parse_parameters(ht, (char *)"s|ls", & str, & str_len, & type,
                              & char_list, & char_list_len);
  if (tmp == -1) {
    return;
  }
  switch ((int )type) {
  case 1: 
  case 2: 
  _array_init(return_value);
  if (! str_len) {
    return;
  }
  break;
  case 0: 
  if (! str_len) {
    return_value->type = (unsigned char)1;
    return_value->value.lval = 0L;
    return;
  }
  break;
  default: 
  php_error_docref0((char const   *)((void *)0), 1 << 1L,
                    "Invalid format value %ld", type);
  return_value->type = (unsigned char)3;
  return_value->value.lval = 0L;
  return;
  }
  if (char_list) {
    php_charmask((unsigned char *)char_list, char_list_len, ch);
  }
  p = str;
  e = str + str_len;
  if ((int )*p == 39) {
    if (! char_list) {
      p ++;
    } else {
      if (! ch[39]) {
        p ++;
      } else {
        goto _L;
      }
    }
  } else {
    _L: 
    if ((int )*p == 45) {
      if (! char_list) {
        p ++;
      } else {
        if (! ch[45]) {
          p ++;
        }
      }
    }
  }
  if ((int )*(e - 1) == 45) {
    if (! char_list) {
      e --;
    } else {
      if (! ch[45]) {
        e --;
      }
    }
  }
  while ((unsigned int )p < (unsigned int )e) {
    s = p;
    while (1) {
      if ((unsigned int )p < (unsigned int )e) {
        tmp___0 = __ctype_b_loc();
        if (! ((int const   )*(*tmp___0 + (int )*p) & 1024)) {
          if (char_list) {
            if (! ch[(unsigned char )*p]) {
              goto _L___0;
            }
          } else {
            _L___0: 
            if (! ((int )*p == 39)) {
              if (! ((int )*p == 45)) {
                break;
              }
            }
          }
        }
      } else {
        break;
      }
      p ++;
    }
    if ((unsigned int )p > (unsigned int )s) {
      switch ((int )type) {
      case 1: 
      buf = _estrndup((char const   *)s, (unsigned int )(p - s));
      add_next_index_stringl(return_value, buf, (unsigned int )(p - s), 0);
      break;
      case 2: 
      buf = _estrndup((char const   *)s, (unsigned int )(p - s));
      add_index_stringl(return_value, (unsigned long )(s - str), buf,
                        (unsigned int )(p - s), 0);
      break;
      default: 
      word_count ++;
      break;
      }
    }
    p ++;
  }
  if (! type) {
    return_value->type = (unsigned char)1;
    return_value->value.lval = (long )word_count;
    return;
  }
  return;
}
}

void zif_money_format(int ht , zval *return_value , zval **return_value_ptr ,
                      zval *this_ptr , int return_value_used ) 
{ int format_len ;
  int str_len ;
  char *format ;
  char *str ;
  double value ;
  int tmp ;
  void *tmp___0 ;
  char *__s ;
  void *tmp___1 ;
  int __l ;
  char *tmp___2 ;

  {
  format_len = 0;
  tmp = zend_parse_parameters(ht, (char *)"sd", & format, & format_len, & value);
  if (tmp == -1) {
    return;
  }
  str_len = format_len + 1024;
  tmp___0 = _emalloc((unsigned int )str_len);
  str = (char *)tmp___0;
  str_len = strfmon((char */* __restrict  */)str, (unsigned int )str_len,
                    (char const   */* __restrict  */)((char const   *)format),
                    value);
  if (str_len < 0) {
    _efree((void *)str);
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  *(str + str_len) = (char)0;
  tmp___1 = _erealloc((void *)str, (unsigned int )(str_len + 1), 0);
  __s = (char *)tmp___1;
  __l = str_len;
  return_value->value.str.len = __l;
  return_value->value.str.val = __s;
  return_value->type = (unsigned char)6;
  return;
}
}

void zif_str_split(int ht , zval *return_value , zval **return_value_ptr ,
                   zval *this_ptr , int return_value_used ) 
{ char *str ;
  int str_len ;
  long split_length ;
  char *p ;
  int n_reg_segments ;
  int tmp ;
  double tmp___0 ;
  int tmp___1 ;

  {
  split_length = 1L;
  tmp = zend_parse_parameters(ht, (char *)"s|l", & str, & str_len,
                              & split_length);
  if (tmp == -1) {
    return;
  }
  if (split_length <= 0L) {
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "The length of each segment must be greater than zero.");
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  _array_init(return_value);
  if (split_length >= (long )str_len) {
    add_next_index_stringl(return_value, str, (unsigned int )str_len, 1);
    return;
  }
  tmp___0 = floor((double )((long )str_len / split_length));
  n_reg_segments = (int )tmp___0;
  p = str;
  while (1) {
    tmp___1 = n_reg_segments;
    n_reg_segments --;
    if (! (tmp___1 > 0)) {
      break;
    }
    add_next_index_stringl(return_value, p, (unsigned int )split_length, 1);
    p += split_length;
  }
  if ((unsigned int )p != (unsigned int )(str + str_len)) {
    add_next_index_stringl(return_value, p,
                           (unsigned int )((str + str_len) - p), 1);
  }
  return;
}
}

void zif_strpbrk(int ht , zval *return_value , zval **return_value_ptr ,
                 zval *this_ptr , int return_value_used ) 
{ char *haystack ;
  char *char_list ;
  int haystack_len ;
  int char_list_len ;
  char *p ;
  int tmp ;
  char *__s ;
  int __l ;
  char *tmp___0 ;

  {
  tmp = zend_parse_parameters(ht, (char *)"ss", & haystack, & haystack_len,
                              & char_list, & char_list_len);
  if (tmp == -1) {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  if (! char_list_len) {
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "The character list cannot be empty.");
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  p = strpbrk((char const   *)haystack, (char const   *)char_list);
  if (p) {
    __s = p;
    __l = (haystack + haystack_len) - p;
    return_value->value.str.len = __l;
    tmp___0 = _estrndup((char const   *)__s, (unsigned int )__l);
    return_value->value.str.val = tmp___0;
    return_value->type = (unsigned char)6;
    return;
  } else {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
}
}

void zif_substr_compare(int ht , zval *return_value , zval **return_value_ptr ,
                        zval *this_ptr , int return_value_used ) 
{ char *s1 ;
  char *s2 ;
  int s1_len ;
  int s2_len ;
  long offset ;
  long len ;
  zend_bool cs ;
  uint cmp_len ;
  int tmp ;
  long tmp___0 ;
  long tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  len = 0L;
  cs = (unsigned char)0;
  tmp = zend_parse_parameters(ht, (char *)"ssl|lb", & s1, & s1_len, & s2,
                              & s2_len, & offset, & len, & cs);
  if (tmp == -1) {
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  if (ht >= 4) {
    if (len <= 0L) {
      php_error_docref0((char const   *)((void *)0), 1 << 1L,
                        "The length must be greater than zero");
      return_value->type = (unsigned char)3;
      return_value->value.lval = 0L;
      return;
    }
  }
  if (offset < 0L) {
    offset = (long )s1_len + offset;
    if (offset < 0L) {
      offset = 0L;
    } else {
      offset = offset;
    }
  }
  if (offset + len > (long )s1_len) {
    php_error_docref0((char const   *)((void *)0), 1 << 1L,
                      "The start position cannot exceed initial string length");
    return_value->type = (unsigned char)3;
    return_value->value.lval = 0L;
    return;
  }
  if (len) {
    tmp___1 = len;
  } else {
    if ((long )s2_len > (long )s1_len - offset) {
      tmp___1 = (long )s2_len;
    } else {
      tmp___1 = (long )s1_len - offset;
    }
  }
  cmp_len = (unsigned int )tmp___1;
  if (! cs) {
    return_value->type = (unsigned char)1;
    tmp___2 = zend_binary_strncmp(s1 + offset,
                                  (unsigned int )((long )s1_len - offset), s2,
                                  (unsigned int )s2_len, cmp_len);
    return_value->value.lval = (long )tmp___2;
    return;
  } else {
    return_value->type = (unsigned char)1;
    tmp___3 = zend_binary_strncasecmp(s1 + offset,
                                      (unsigned int )((long )s1_len - offset),
                                      s2, (unsigned int )s2_len, cmp_len);
    return_value->value.lval = (long )tmp___3;
    return;
  }
}
}

