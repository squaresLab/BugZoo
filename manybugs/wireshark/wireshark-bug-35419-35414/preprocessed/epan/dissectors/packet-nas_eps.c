# 1 "packet-nas_eps.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/wireshark-bug-35419-35414/wireshark/epan/dissectors//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "packet-nas_eps.c"
# 30 "packet-nas_eps.c"
# 1 "../../config.h" 1
# 31 "packet-nas_eps.c" 2


# 1 "/usr/include/glib-2.0/glib.h" 1
# 32 "/usr/include/glib-2.0/glib.h"
# 1 "/usr/include/glib-2.0/glib/galloca.h" 1
# 34 "/usr/include/glib-2.0/glib/galloca.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 34 "/usr/include/glib-2.0/glib/gtypes.h"
# 1 "/usr/lib/glib-2.0/include/glibconfig.h" 1
# 9 "/usr/lib/glib-2.0/include/glibconfig.h"
# 1 "/usr/include/glib-2.0/glib/gmacros.h" 1
# 40 "/usr/include/glib-2.0/glib/gmacros.h"
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 149 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 211 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef unsigned int size_t;
# 323 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef long int wchar_t;
# 41 "/usr/include/glib-2.0/glib/gmacros.h" 2
# 10 "/usr/lib/glib-2.0/include/glibconfig.h" 2

# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 1 3 4
# 11 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 1 3 4
# 122 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 27 "/usr/include/limits.h" 3 4
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
# 28 "/usr/include/limits.h" 2 3 4
# 145 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 157 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 39 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 40 "/usr/include/bits/local_lim.h" 2 3 4
# 158 "/usr/include/bits/posix1_lim.h" 2 3 4
# 146 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 150 "/usr/include/limits.h" 2 3 4
# 123 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/syslimits.h" 2 3 4
# 12 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 2 3 4
# 12 "/usr/lib/glib-2.0/include/glibconfig.h" 2
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/float.h" 1 3 4
# 13 "/usr/lib/glib-2.0/include/glibconfig.h" 2
# 22 "/usr/lib/glib-2.0/include/glibconfig.h"

# 38 "/usr/lib/glib-2.0/include/glibconfig.h"
typedef signed char gint8;
typedef unsigned char guint8;
typedef signed short gint16;
typedef unsigned short guint16;



typedef signed int gint32;
typedef unsigned int guint32;





__extension__ typedef signed long long gint64;
__extension__ typedef unsigned long long guint64;
# 65 "/usr/lib/glib-2.0/include/glibconfig.h"
typedef signed int gssize;
typedef unsigned int gsize;
# 75 "/usr/lib/glib-2.0/include/glibconfig.h"
typedef gint64 goffset;
# 90 "/usr/lib/glib-2.0/include/glibconfig.h"
typedef signed int gintptr;
typedef unsigned int guintptr;
# 159 "/usr/lib/glib-2.0/include/glibconfig.h"
typedef struct _GStaticMutex GStaticMutex;
struct _GStaticMutex
{
  struct _GMutex *runtime_mutex;
  union {
    char pad[24];
    double dummy_double;
    void *dummy_pointer;
    long dummy_long;
  } static_mutex;
};
# 178 "/usr/lib/glib-2.0/include/glibconfig.h"
typedef union _GSystemThread GSystemThread;
union _GSystemThread
{
  char data[4];
  double dummy_double;
  void *dummy_pointer;
  long dummy_long;
};
# 231 "/usr/lib/glib-2.0/include/glibconfig.h"
typedef int GPid;
# 241 "/usr/lib/glib-2.0/include/glibconfig.h"

# 35 "/usr/include/glib-2.0/glib/gtypes.h" 2
# 1 "/usr/include/glib-2.0/glib/gmacros.h" 1
# 36 "/usr/include/glib-2.0/glib/gtypes.h" 2


# 46 "/usr/include/glib-2.0/glib/gtypes.h"
typedef char gchar;
typedef short gshort;
typedef long glong;
typedef int gint;
typedef gint gboolean;

typedef unsigned char guchar;
typedef unsigned short gushort;
typedef unsigned long gulong;
typedef unsigned int guint;

typedef float gfloat;
typedef double gdouble;
# 77 "/usr/include/glib-2.0/glib/gtypes.h"
typedef void* gpointer;
typedef const void *gconstpointer;

typedef gint (*GCompareFunc) (gconstpointer a,
                                                 gconstpointer b);
typedef gint (*GCompareDataFunc) (gconstpointer a,
                                                 gconstpointer b,
       gpointer user_data);
typedef gboolean (*GEqualFunc) (gconstpointer a,
                                                 gconstpointer b);
typedef void (*GDestroyNotify) (gpointer data);
typedef void (*GFunc) (gpointer data,
                                                 gpointer user_data);
typedef guint (*GHashFunc) (gconstpointer key);
typedef void (*GHFunc) (gpointer key,
                                                 gpointer value,
                                                 gpointer user_data);
typedef void (*GFreeFunc) (gpointer data);
# 108 "/usr/include/glib-2.0/glib/gtypes.h"
typedef const gchar * (*GTranslateFunc) (const gchar *str,
       gpointer data);
# 368 "/usr/include/glib-2.0/glib/gtypes.h"
typedef union _GDoubleIEEE754 GDoubleIEEE754;
typedef union _GFloatIEEE754 GFloatIEEE754;





union _GFloatIEEE754
{
  gfloat v_float;
  struct {
    guint mantissa : 23;
    guint biased_exponent : 8;
    guint sign : 1;
  } mpn;
};
union _GDoubleIEEE754
{
  gdouble v_double;
  struct {
    guint mantissa_low : 32;
    guint mantissa_high : 20;
    guint biased_exponent : 11;
    guint sign : 1;
  } mpn;
};
# 418 "/usr/include/glib-2.0/glib/gtypes.h"
typedef struct _GTimeVal GTimeVal;

struct _GTimeVal
{
  glong tv_sec;
  glong tv_usec;
};


# 35 "/usr/include/glib-2.0/glib/galloca.h" 2
# 33 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/garray.h" 1
# 34 "/usr/include/glib-2.0/glib/garray.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/garray.h" 2



typedef struct _GArray GArray;
typedef struct _GByteArray GByteArray;
typedef struct _GPtrArray GPtrArray;

struct _GArray
{
  gchar *data;
  guint len;
};

struct _GByteArray
{
  guint8 *data;
  guint len;
};

struct _GPtrArray
{
  gpointer *pdata;
  guint len;
};
# 70 "/usr/include/glib-2.0/glib/garray.h"
GArray* g_array_new (gboolean zero_terminated,
       gboolean clear_,
       guint element_size);
GArray* g_array_sized_new (gboolean zero_terminated,
       gboolean clear_,
       guint element_size,
       guint reserved_size);
gchar* g_array_free (GArray *array,
       gboolean free_segment);
GArray *g_array_ref (GArray *array);
void g_array_unref (GArray *array);
guint g_array_get_element_size (GArray *array);
GArray* g_array_append_vals (GArray *array,
       gconstpointer data,
       guint len);
GArray* g_array_prepend_vals (GArray *array,
       gconstpointer data,
       guint len);
GArray* g_array_insert_vals (GArray *array,
       guint index_,
       gconstpointer data,
       guint len);
GArray* g_array_set_size (GArray *array,
       guint length);
GArray* g_array_remove_index (GArray *array,
       guint index_);
GArray* g_array_remove_index_fast (GArray *array,
       guint index_);
GArray* g_array_remove_range (GArray *array,
       guint index_,
       guint length);
void g_array_sort (GArray *array,
       GCompareFunc compare_func);
void g_array_sort_with_data (GArray *array,
       GCompareDataFunc compare_func,
       gpointer user_data);






GPtrArray* g_ptr_array_new (void);
GPtrArray* g_ptr_array_new_with_free_func (GDestroyNotify element_free_func);
GPtrArray* g_ptr_array_sized_new (guint reserved_size);
gpointer* g_ptr_array_free (GPtrArray *array,
        gboolean free_seg);
GPtrArray* g_ptr_array_ref (GPtrArray *array);
void g_ptr_array_unref (GPtrArray *array);
void g_ptr_array_set_free_func (GPtrArray *array,
                                           GDestroyNotify element_free_func);
void g_ptr_array_set_size (GPtrArray *array,
        gint length);
gpointer g_ptr_array_remove_index (GPtrArray *array,
        guint index_);
gpointer g_ptr_array_remove_index_fast (GPtrArray *array,
        guint index_);
gboolean g_ptr_array_remove (GPtrArray *array,
        gpointer data);
gboolean g_ptr_array_remove_fast (GPtrArray *array,
        gpointer data);
void g_ptr_array_remove_range (GPtrArray *array,
        guint index_,
        guint length);
void g_ptr_array_add (GPtrArray *array,
        gpointer data);
void g_ptr_array_sort (GPtrArray *array,
        GCompareFunc compare_func);
void g_ptr_array_sort_with_data (GPtrArray *array,
        GCompareDataFunc compare_func,
        gpointer user_data);
void g_ptr_array_foreach (GPtrArray *array,
        GFunc func,
        gpointer user_data);






GByteArray* g_byte_array_new (void);
GByteArray* g_byte_array_sized_new (guint reserved_size);
guint8* g_byte_array_free (GByteArray *array,
         gboolean free_segment);
GByteArray *g_byte_array_ref (GByteArray *array);
void g_byte_array_unref (GByteArray *array);
GByteArray* g_byte_array_append (GByteArray *array,
         const guint8 *data,
         guint len);
GByteArray* g_byte_array_prepend (GByteArray *array,
         const guint8 *data,
         guint len);
GByteArray* g_byte_array_set_size (GByteArray *array,
         guint length);
GByteArray* g_byte_array_remove_index (GByteArray *array,
         guint index_);
GByteArray* g_byte_array_remove_index_fast (GByteArray *array,
         guint index_);
GByteArray* g_byte_array_remove_range (GByteArray *array,
         guint index_,
         guint length);
void g_byte_array_sort (GByteArray *array,
         GCompareFunc compare_func);
void g_byte_array_sort_with_data (GByteArray *array,
         GCompareDataFunc compare_func,
         gpointer user_data);


# 34 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gasyncqueue.h" 1
# 34 "/usr/include/glib-2.0/glib/gasyncqueue.h"
# 1 "/usr/include/glib-2.0/glib/gthread.h" 1
# 34 "/usr/include/glib-2.0/glib/gthread.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 28 "/usr/include/glib-2.0/glib/gerror.h"
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 102 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 29 "/usr/include/glib-2.0/glib/gerror.h" 2

# 1 "/usr/include/glib-2.0/glib/gquark.h" 1
# 34 "/usr/include/glib-2.0/glib/gquark.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/gquark.h" 2



typedef guint32 GQuark;



GQuark g_quark_try_string (const gchar *string);
GQuark g_quark_from_static_string (const gchar *string);
GQuark g_quark_from_string (const gchar *string);
const gchar* g_quark_to_string (GQuark quark) __attribute__((__const__));

const gchar* g_intern_string (const gchar *string);
const gchar* g_intern_static_string (const gchar *string);


# 31 "/usr/include/glib-2.0/glib/gerror.h" 2



typedef struct _GError GError;

struct _GError
{
  GQuark domain;
  gint code;
  gchar *message;
};

GError* g_error_new (GQuark domain,
                                gint code,
                                const gchar *format,
                                ...) __attribute__((__format__ (__printf__, 3, 4)));

GError* g_error_new_literal (GQuark domain,
                                gint code,
                                const gchar *message);
GError* g_error_new_valist (GQuark domain,
                                gint code,
                                const gchar *format,
                                va_list args);

void g_error_free (GError *error);
GError* g_error_copy (const GError *error);

gboolean g_error_matches (const GError *error,
                                GQuark domain,
                                gint code);




void g_set_error (GError **err,
                                GQuark domain,
                                gint code,
                                const gchar *format,
                                ...) __attribute__((__format__ (__printf__, 4, 5)));

void g_set_error_literal (GError **err,
                                GQuark domain,
                                gint code,
                                const gchar *message);



void g_propagate_error (GError **dest,
    GError *src);


void g_clear_error (GError **err);


void g_prefix_error (GError **err,
                                       const gchar *format,
                                       ...) __attribute__((__format__ (__printf__, 2, 3)));


void g_propagate_prefixed_error (GError **dest,
                                       GError *src,
                                       const gchar *format,
                                       ...) __attribute__((__format__ (__printf__, 3, 4)));


# 35 "/usr/include/glib-2.0/glib/gthread.h" 2
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 36 "/usr/include/glib-2.0/glib/gthread.h" 2
# 1 "/usr/include/glib-2.0/glib/gutils.h" 1
# 34 "/usr/include/glib-2.0/glib/gutils.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/gutils.h" 2



# 120 "/usr/include/glib-2.0/glib/gutils.h"
const gchar* g_get_user_name (void);
const gchar* g_get_real_name (void);
const gchar* g_get_home_dir (void);
const gchar* g_get_tmp_dir (void);
const gchar* g_get_host_name (void);
gchar* g_get_prgname (void);
void g_set_prgname (const gchar *prgname);
const gchar* g_get_application_name (void);
void g_set_application_name (const gchar *application_name);

void g_reload_user_special_dirs_cache (void);
const gchar* g_get_user_data_dir (void);
const gchar* g_get_user_config_dir (void);
const gchar* g_get_user_cache_dir (void);
const gchar* const * g_get_system_data_dirs (void);
# 154 "/usr/include/glib-2.0/glib/gutils.h"
const gchar* const * g_get_system_config_dirs (void);

const gchar* const * g_get_language_names (void);
# 180 "/usr/include/glib-2.0/glib/gutils.h"
typedef enum {
  G_USER_DIRECTORY_DESKTOP,
  G_USER_DIRECTORY_DOCUMENTS,
  G_USER_DIRECTORY_DOWNLOAD,
  G_USER_DIRECTORY_MUSIC,
  G_USER_DIRECTORY_PICTURES,
  G_USER_DIRECTORY_PUBLIC_SHARE,
  G_USER_DIRECTORY_TEMPLATES,
  G_USER_DIRECTORY_VIDEOS,

  G_USER_N_DIRECTORIES
} GUserDirectory;

const gchar* g_get_user_special_dir (GUserDirectory directory);

typedef struct _GDebugKey GDebugKey;
struct _GDebugKey
{
  const gchar *key;
  guint value;
};



guint g_parse_debug_string (const gchar *string,
         const GDebugKey *keys,
         guint nkeys);

gint g_snprintf (gchar *string,
         gulong n,
         gchar const *format,
         ...) __attribute__((__format__ (__printf__, 3, 4)));
gint g_vsnprintf (gchar *string,
         gulong n,
         gchar const *format,
         va_list args);


gboolean g_path_is_absolute (const gchar *file_name);


const gchar* g_path_skip_root (const gchar *file_name);







const gchar* g_basename (const gchar *file_name);
# 239 "/usr/include/glib-2.0/glib/gutils.h"
gchar* g_get_current_dir (void);
gchar* g_path_get_basename (const gchar *file_name) __attribute__((__malloc__));
gchar* g_path_get_dirname (const gchar *file_name) __attribute__((__malloc__));


void g_nullify_pointer (gpointer *nullify_location);
# 255 "/usr/include/glib-2.0/glib/gutils.h"
const gchar* g_getenv (const gchar *variable);
gboolean g_setenv (const gchar *variable,
         const gchar *value,
         gboolean overwrite);
void g_unsetenv (const gchar *variable);
gchar** g_listenv (void);


const gchar* _g_getenv_nomalloc (const gchar *variable,
         gchar buffer[1024]);





typedef void (*GVoidFunc) (void);
# 281 "/usr/include/glib-2.0/glib/gutils.h"
void g_atexit (GVoidFunc func);
# 297 "/usr/include/glib-2.0/glib/gutils.h"
gchar* g_find_program_in_path (const gchar *program);



static __inline __attribute__ ((unused)) gint g_bit_nth_lsf (gulong mask,
           gint nth_bit) __attribute__((__const__));
static __inline __attribute__ ((unused)) gint g_bit_nth_msf (gulong mask,
           gint nth_bit) __attribute__((__const__));
static __inline __attribute__ ((unused)) guint g_bit_storage (gulong number) __attribute__((__const__));




typedef struct _GTrashStack GTrashStack;
struct _GTrashStack
{
  GTrashStack *next;
};

static __inline __attribute__ ((unused)) void g_trash_stack_push (GTrashStack **stack_p,
       gpointer data_p);
static __inline __attribute__ ((unused)) gpointer g_trash_stack_pop (GTrashStack **stack_p);
static __inline __attribute__ ((unused)) gpointer g_trash_stack_peek (GTrashStack **stack_p);
static __inline __attribute__ ((unused)) guint g_trash_stack_height (GTrashStack **stack_p);




static __inline __attribute__ ((unused)) gint
g_bit_nth_lsf (gulong mask,
        gint nth_bit)
{
  if ((__builtin_expect (__extension__ ({ int _g_boolean_var_; if (nth_bit < -1) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 0)))
    nth_bit = -1;
  while (nth_bit < ((4 * 8) - 1))
    {
      nth_bit++;
      if (mask & (1UL << nth_bit))
 return nth_bit;
    }
  return -1;
}
static __inline __attribute__ ((unused)) gint
g_bit_nth_msf (gulong mask,
        gint nth_bit)
{
  if (nth_bit < 0 || (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (nth_bit > 4 * 8) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 0)))
    nth_bit = 4 * 8;
  while (nth_bit > 0)
    {
      nth_bit--;
      if (mask & (1UL << nth_bit))
 return nth_bit;
    }
  return -1;
}
static __inline __attribute__ ((unused)) guint
g_bit_storage (gulong number)
{

  return (__builtin_expect (__extension__ ({ int _g_boolean_var_; if (number) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1)) ?
    ((4 * 8 - 1) ^ __builtin_clzl(number)) + 1 : 1;
# 370 "/usr/include/glib-2.0/glib/gutils.h"
}
static __inline __attribute__ ((unused)) void
g_trash_stack_push (GTrashStack **stack_p,
      gpointer data_p)
{
  GTrashStack *data = (GTrashStack *) data_p;

  data->next = *stack_p;
  *stack_p = data;
}
static __inline __attribute__ ((unused)) gpointer
g_trash_stack_pop (GTrashStack **stack_p)
{
  GTrashStack *data;

  data = *stack_p;
  if (data)
    {
      *stack_p = data->next;



      data->next = ((void *)0);
    }

  return data;
}
static __inline __attribute__ ((unused)) gpointer
g_trash_stack_peek (GTrashStack **stack_p)
{
  GTrashStack *data;

  data = *stack_p;

  return data;
}
static __inline __attribute__ ((unused)) guint
g_trash_stack_height (GTrashStack **stack_p)
{
  GTrashStack *data;
  guint i = 0;

  for (data = *stack_p; data; data = data->next)
    i++;

  return i;
}






extern const guint glib_major_version;
extern const guint glib_minor_version;
extern const guint glib_micro_version;
extern const guint glib_interface_age;
extern const guint glib_binary_age;

const gchar * glib_check_version (guint required_major,
                                  guint required_minor,
                                  guint required_micro);








# 37 "/usr/include/glib-2.0/glib/gthread.h" 2
# 1 "/usr/include/glib-2.0/glib/gatomic.h" 1
# 37 "/usr/include/glib-2.0/glib/gatomic.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 38 "/usr/include/glib-2.0/glib/gatomic.h" 2



gint g_atomic_int_exchange_and_add (volatile gint __attribute__((may_alias)) *atomic,
      gint val);
void g_atomic_int_add (volatile gint __attribute__((may_alias)) *atomic,
      gint val);
gboolean g_atomic_int_compare_and_exchange (volatile gint __attribute__((may_alias)) *atomic,
      gint oldval,
      gint newval);
gboolean g_atomic_pointer_compare_and_exchange (volatile gpointer __attribute__((may_alias)) *atomic,
      gpointer oldval,
      gpointer newval);

gint g_atomic_int_get (volatile gint __attribute__((may_alias)) *atomic);
void g_atomic_int_set (volatile gint __attribute__((may_alias)) *atomic,
      gint newval);
gpointer g_atomic_pointer_get (volatile gpointer __attribute__((may_alias)) *atomic);
void g_atomic_pointer_set (volatile gpointer __attribute__((may_alias)) *atomic,
      gpointer newval);
# 83 "/usr/include/glib-2.0/glib/gatomic.h"

# 38 "/usr/include/glib-2.0/glib/gthread.h" 2






extern GQuark g_thread_error_quark (void);


typedef enum
{
  G_THREAD_ERROR_AGAIN
} GThreadError;

typedef gpointer (*GThreadFunc) (gpointer data);

typedef enum
{
  G_THREAD_PRIORITY_LOW,
  G_THREAD_PRIORITY_NORMAL,
  G_THREAD_PRIORITY_HIGH,
  G_THREAD_PRIORITY_URGENT
} GThreadPriority;

typedef struct _GThread GThread;
struct _GThread
{

  GThreadFunc func;
  gpointer data;
  gboolean joinable;
  GThreadPriority priority;
};

typedef struct _GMutex GMutex;
typedef struct _GCond GCond;
typedef struct _GPrivate GPrivate;
typedef struct _GStaticPrivate GStaticPrivate;

typedef struct _GThreadFunctions GThreadFunctions;
struct _GThreadFunctions
{
  GMutex* (*mutex_new) (void);
  void (*mutex_lock) (GMutex *mutex);
  gboolean (*mutex_trylock) (GMutex *mutex);
  void (*mutex_unlock) (GMutex *mutex);
  void (*mutex_free) (GMutex *mutex);
  GCond* (*cond_new) (void);
  void (*cond_signal) (GCond *cond);
  void (*cond_broadcast) (GCond *cond);
  void (*cond_wait) (GCond *cond,
                                   GMutex *mutex);
  gboolean (*cond_timed_wait) (GCond *cond,
                                   GMutex *mutex,
                                   GTimeVal *end_time);
  void (*cond_free) (GCond *cond);
  GPrivate* (*private_new) (GDestroyNotify destructor);
  gpointer (*private_get) (GPrivate *private_key);
  void (*private_set) (GPrivate *private_key,
                                   gpointer data);
  void (*thread_create) (GThreadFunc func,
                                   gpointer data,
                                   gulong stack_size,
                                   gboolean joinable,
                                   gboolean bound,
                                   GThreadPriority priority,
                                   gpointer thread,
                                   GError **error);
  void (*thread_yield) (void);
  void (*thread_join) (gpointer thread);
  void (*thread_exit) (void);
  void (*thread_set_priority)(gpointer thread,
                                   GThreadPriority priority);
  void (*thread_self) (gpointer thread);
  gboolean (*thread_equal) (gpointer thread1,
       gpointer thread2);
};

extern GThreadFunctions g_thread_functions_for_glib_use;
extern gboolean g_thread_use_default_impl;
extern gboolean g_threads_got_initialized;

extern guint64 (*g_thread_gettime) (void);





void g_thread_init (GThreadFunctions *vtable);
# 135 "/usr/include/glib-2.0/glib/gthread.h"
void g_thread_init_with_errorcheck_mutexes (GThreadFunctions* vtable);




gboolean g_thread_get_initialized (void);
# 150 "/usr/include/glib-2.0/glib/gthread.h"
GMutex* g_static_mutex_get_mutex_impl (GMutex **mutex);
# 225 "/usr/include/glib-2.0/glib/gthread.h"
GThread* g_thread_create_full (GThreadFunc func,
                                gpointer data,
                                gulong stack_size,
                                gboolean joinable,
                                gboolean bound,
                                GThreadPriority priority,
                                GError **error);
GThread* g_thread_self (void);
void g_thread_exit (gpointer retval);
gpointer g_thread_join (GThread *thread);

void g_thread_set_priority (GThread *thread,
                                GThreadPriority priority);
# 250 "/usr/include/glib-2.0/glib/gthread.h"
void g_static_mutex_init (GStaticMutex *mutex);
void g_static_mutex_free (GStaticMutex *mutex);

struct _GStaticPrivate
{

  guint index;
};

void g_static_private_init (GStaticPrivate *private_key);
gpointer g_static_private_get (GStaticPrivate *private_key);
void g_static_private_set (GStaticPrivate *private_key,
       gpointer data,
       GDestroyNotify notify);
void g_static_private_free (GStaticPrivate *private_key);

typedef struct _GStaticRecMutex GStaticRecMutex;
struct _GStaticRecMutex
{

  GStaticMutex mutex;
  guint depth;
  GSystemThread owner;
};


void g_static_rec_mutex_init (GStaticRecMutex *mutex);
void g_static_rec_mutex_lock (GStaticRecMutex *mutex);
gboolean g_static_rec_mutex_trylock (GStaticRecMutex *mutex);
void g_static_rec_mutex_unlock (GStaticRecMutex *mutex);
void g_static_rec_mutex_lock_full (GStaticRecMutex *mutex,
                                         guint depth);
guint g_static_rec_mutex_unlock_full (GStaticRecMutex *mutex);
void g_static_rec_mutex_free (GStaticRecMutex *mutex);

typedef struct _GStaticRWLock GStaticRWLock;
struct _GStaticRWLock
{

  GStaticMutex mutex;
  GCond *read_cond;
  GCond *write_cond;
  guint read_counter;
  gboolean have_writer;
  guint want_to_read;
  guint want_to_write;
};



void g_static_rw_lock_init (GStaticRWLock* lock);
void g_static_rw_lock_reader_lock (GStaticRWLock* lock);
gboolean g_static_rw_lock_reader_trylock (GStaticRWLock* lock);
void g_static_rw_lock_reader_unlock (GStaticRWLock* lock);
void g_static_rw_lock_writer_lock (GStaticRWLock* lock);
gboolean g_static_rw_lock_writer_trylock (GStaticRWLock* lock);
void g_static_rw_lock_writer_unlock (GStaticRWLock* lock);
void g_static_rw_lock_free (GStaticRWLock* lock);

void g_thread_foreach (GFunc thread_func,
        gpointer user_data);

typedef enum
{
  G_ONCE_STATUS_NOTCALLED,
  G_ONCE_STATUS_PROGRESS,
  G_ONCE_STATUS_READY
} GOnceStatus;

typedef struct _GOnce GOnce;
struct _GOnce
{
  volatile GOnceStatus status;
  volatile gpointer retval;
};



gpointer g_once_impl (GOnce *once, GThreadFunc func, gpointer arg);
# 340 "/usr/include/glib-2.0/glib/gthread.h"
static __inline __attribute__ ((unused)) gboolean g_once_init_enter (volatile gsize *value_location);
gboolean g_once_init_enter_impl (volatile gsize *value_location);
void g_once_init_leave (volatile gsize *value_location,
                                                 gsize initialization_value);

static __inline __attribute__ ((unused)) gboolean
g_once_init_enter (volatile gsize *value_location)
{
  if (__builtin_expect (__extension__ ({ int _g_boolean_var_; if ((gpointer) ((void) sizeof (gchar [sizeof (*(value_location)) == sizeof (gpointer) ? 1 : -1]), (g_atomic_pointer_get) ((volatile gpointer __attribute__((may_alias)) *) (void *) (value_location))) != ((void *)0)) _g_boolean_var_ = 1; else _g_boolean_var_ = 0; _g_boolean_var_; }), 1))
    return (0);
  else
    return g_once_init_enter_impl (value_location);
}
# 364 "/usr/include/glib-2.0/glib/gthread.h"
extern void glib_dummy_decl (void);
# 406 "/usr/include/glib-2.0/glib/gthread.h"

# 35 "/usr/include/glib-2.0/glib/gasyncqueue.h" 2



typedef struct _GAsyncQueue GAsyncQueue;




GAsyncQueue* g_async_queue_new (void);

GAsyncQueue* g_async_queue_new_full (GDestroyNotify item_free_func);





void g_async_queue_lock (GAsyncQueue *queue);
void g_async_queue_unlock (GAsyncQueue *queue);


GAsyncQueue* g_async_queue_ref (GAsyncQueue *queue);
void g_async_queue_unref (GAsyncQueue *queue);



void g_async_queue_ref_unlocked (GAsyncQueue *queue);
void g_async_queue_unref_and_unlock (GAsyncQueue *queue);



void g_async_queue_push (GAsyncQueue *queue,
       gpointer data);
void g_async_queue_push_unlocked (GAsyncQueue *queue,
       gpointer data);

void g_async_queue_push_sorted (GAsyncQueue *queue,
       gpointer data,
       GCompareDataFunc func,
       gpointer user_data);
void g_async_queue_push_sorted_unlocked (GAsyncQueue *queue,
       gpointer data,
       GCompareDataFunc func,
       gpointer user_data);




gpointer g_async_queue_pop (GAsyncQueue *queue);
gpointer g_async_queue_pop_unlocked (GAsyncQueue *queue);


gpointer g_async_queue_try_pop (GAsyncQueue *queue);
gpointer g_async_queue_try_pop_unlocked (GAsyncQueue *queue);






gpointer g_async_queue_timed_pop (GAsyncQueue *queue,
       GTimeVal *end_time);
gpointer g_async_queue_timed_pop_unlocked (GAsyncQueue *queue,
       GTimeVal *end_time);
# 106 "/usr/include/glib-2.0/glib/gasyncqueue.h"
gint g_async_queue_length (GAsyncQueue *queue);
gint g_async_queue_length_unlocked (GAsyncQueue *queue);
void g_async_queue_sort (GAsyncQueue *queue,
       GCompareDataFunc func,
       gpointer user_data);
void g_async_queue_sort_unlocked (GAsyncQueue *queue,
       GCompareDataFunc func,
       gpointer user_data);


GMutex* _g_async_queue_get_mutex (GAsyncQueue *queue);


# 35 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gatomic.h" 1
# 36 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gbacktrace.h" 1
# 34 "/usr/include/glib-2.0/glib/gbacktrace.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/gbacktrace.h" 2
# 1 "/usr/include/signal.h" 1 3 4
# 31 "/usr/include/signal.h" 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 24 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 104 "/usr/include/bits/sigset.h" 3 4
extern int __sigismember (__const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);
# 118 "/usr/include/bits/sigset.h" 3 4
extern __inline int __sigismember (__const __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return (__set->__val[__word] & __mask) ? 1 : 0; }
extern __inline int __sigaddset ( __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return ((__set->__val[__word] |= __mask), 0); }
extern __inline int __sigdelset ( __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return ((__set->__val[__word] &= ~__mask), 0); }
# 34 "/usr/include/signal.h" 2 3 4







typedef __sig_atomic_t sig_atomic_t;








typedef __sigset_t sigset_t;






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
# 58 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/bits/signum.h" 1 3 4
# 59 "/usr/include/signal.h" 2 3 4



typedef __pid_t pid_t;





typedef __uid_t uid_t;







# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 77 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/bits/siginfo.h" 1 3 4
# 25 "/usr/include/bits/siginfo.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 26 "/usr/include/bits/siginfo.h" 2 3 4







typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;
# 51 "/usr/include/bits/siginfo.h" 3 4
typedef struct siginfo
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
 int _pad[((128 / sizeof (int)) - 3)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __clock_t si_utime;
     __clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;
      } _sifields;
  } siginfo_t;
# 129 "/usr/include/bits/siginfo.h" 3 4
enum
{
  SI_ASYNCNL = -60,

  SI_TKILL = -6,

  SI_SIGIO,

  SI_ASYNCIO,

  SI_MESGQ,

  SI_TIMER,

  SI_QUEUE,

  SI_USER,

  SI_KERNEL = 0x80

};



enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR

};


enum
{
  TRAP_BRKPT = 1,

  TRAP_TRACE

};


enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
# 273 "/usr/include/bits/siginfo.h" 3 4
typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 3)];



 __pid_t _tid;

 struct
   {
     void (*_function) (sigval_t);
     void *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;






enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4

};
# 80 "/usr/include/signal.h" 2 3 4




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));
# 99 "/usr/include/signal.h" 3 4


extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));
# 113 "/usr/include/signal.h" 3 4

# 126 "/usr/include/signal.h" 3 4
extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__));




extern int raise (int __sig) __attribute__ ((__nothrow__));




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));
extern int gsignal (int __sig) __attribute__ ((__nothrow__));




extern void psignal (int __sig, __const char *__s);




extern void psiginfo (__const siginfo_t *__pinfo, __const char *__s);
# 168 "/usr/include/signal.h" 3 4
extern int __sigpause (int __sig_or_mask, int __is_sig);
# 196 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));
# 216 "/usr/include/signal.h" 3 4
typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (__const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 252 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/sigaction.h" 1 3 4
# 25 "/usr/include/bits/sigaction.h" 3 4
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };
# 253 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, __const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__));






extern int sigsuspend (__const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, __const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int sigwait (__const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));






extern int sigwaitinfo (__const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (__const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    __const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, __const union sigval __val)
     __attribute__ ((__nothrow__));
# 310 "/usr/include/signal.h" 3 4
extern __const char *__const _sys_siglist[65];
extern __const char *__const sys_siglist[65];


struct sigvec
  {
    __sighandler_t sv_handler;
    int sv_mask;

    int sv_flags;

  };
# 334 "/usr/include/signal.h" 3 4
extern int sigvec (int __sig, __const struct sigvec *__vec,
     struct sigvec *__ovec) __attribute__ ((__nothrow__));



# 1 "/usr/include/bits/sigcontext.h" 1 3 4
# 28 "/usr/include/bits/sigcontext.h" 3 4
# 1 "/usr/include/asm/sigcontext.h" 1 3 4




# 1 "/usr/include/linux/types.h" 1 3 4



# 1 "/usr/include/asm/types.h" 1 3 4





# 1 "/usr/include/asm-generic/types.h" 1 3 4






# 1 "/usr/include/asm-generic/int-ll64.h" 1 3 4
# 11 "/usr/include/asm-generic/int-ll64.h" 3 4
# 1 "/usr/include/asm/bitsperlong.h" 1 3 4
# 10 "/usr/include/asm/bitsperlong.h" 3 4
# 1 "/usr/include/asm-generic/bitsperlong.h" 1 3 4
# 11 "/usr/include/asm/bitsperlong.h" 2 3 4
# 12 "/usr/include/asm-generic/int-ll64.h" 2 3 4







typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
# 8 "/usr/include/asm-generic/types.h" 2 3 4



typedef unsigned short umode_t;
# 7 "/usr/include/asm/types.h" 2 3 4
# 5 "/usr/include/linux/types.h" 2 3 4



# 1 "/usr/include/linux/posix_types.h" 1 3 4



# 1 "/usr/include/linux/stddef.h" 1 3 4
# 5 "/usr/include/linux/posix_types.h" 2 3 4
# 36 "/usr/include/linux/posix_types.h" 3 4
typedef struct {
 unsigned long fds_bits [(1024/(8 * sizeof(unsigned long)))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "/usr/include/asm/posix_types.h" 1 3 4

# 1 "/usr/include/asm/posix_types_32.h" 1 3 4
# 10 "/usr/include/asm/posix_types_32.h" 3 4
typedef unsigned long __kernel_ino_t;
typedef unsigned short __kernel_mode_t;
typedef unsigned short __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef unsigned short __kernel_ipc_pid_t;
typedef unsigned short __kernel_uid_t;
typedef unsigned short __kernel_gid_t;
typedef unsigned int __kernel_size_t;
typedef int __kernel_ssize_t;
typedef int __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef int __kernel_daddr_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;

typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned short __kernel_old_dev_t;


typedef long long __kernel_loff_t;


typedef struct {
 int val[2];
} __kernel_fsid_t;
# 3 "/usr/include/asm/posix_types.h" 2 3 4
# 48 "/usr/include/linux/posix_types.h" 2 3 4
# 9 "/usr/include/linux/types.h" 2 3 4
# 27 "/usr/include/linux/types.h" 3 4
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;
# 6 "/usr/include/asm/sigcontext.h" 2 3 4
# 23 "/usr/include/asm/sigcontext.h" 3 4
struct _fpx_sw_bytes {
 __u32 magic1;
 __u32 extended_size;


 __u64 xstate_bv;




 __u32 xstate_size;




 __u32 padding[7];
};
# 56 "/usr/include/asm/sigcontext.h" 3 4
struct _fpreg {
 unsigned short significand[4];
 unsigned short exponent;
};

struct _fpxreg {
 unsigned short significand[4];
 unsigned short exponent;
 unsigned short padding[3];
};

struct _xmmreg {
 unsigned long element[4];
};

struct _fpstate {

 unsigned long cw;
 unsigned long sw;
 unsigned long tag;
 unsigned long ipoff;
 unsigned long cssel;
 unsigned long dataoff;
 unsigned long datasel;
 struct _fpreg _st[8];
 unsigned short status;
 unsigned short magic;


 unsigned long _fxsr_env[6];
 unsigned long mxcsr;
 unsigned long reserved;
 struct _fpxreg _fxsr_st[8];
 struct _xmmreg _xmm[8];
 unsigned long padding1[44];

 union {
  unsigned long padding2[12];
  struct _fpx_sw_bytes sw_reserved;

 };
};






struct sigcontext {
 unsigned short gs, __gsh;
 unsigned short fs, __fsh;
 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned long edi;
 unsigned long esi;
 unsigned long ebp;
 unsigned long esp;
 unsigned long ebx;
 unsigned long edx;
 unsigned long ecx;
 unsigned long eax;
 unsigned long trapno;
 unsigned long err;
 unsigned long eip;
 unsigned short cs, __csh;
 unsigned long eflags;
 unsigned long esp_at_signal;
 unsigned short ss, __ssh;
 struct _fpstate *fpstate;
 unsigned long oldmask;
 unsigned long cr2;
};
# 190 "/usr/include/asm/sigcontext.h" 3 4
struct _xsave_hdr {
 __u64 xstate_bv;
 __u64 reserved1[2];
 __u64 reserved2[5];
};

struct _ymmh_state {

 __u32 ymmh_space[64];
};







struct _xstate {
 struct _fpstate fpstate;
 struct _xsave_hdr xstate_hdr;
 struct _ymmh_state ymmh;

};
# 29 "/usr/include/bits/sigcontext.h" 2 3 4
# 340 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__));






# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 350 "/usr/include/signal.h" 2 3 4




extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__));

# 1 "/usr/include/bits/sigstack.h" 1 3 4
# 26 "/usr/include/bits/sigstack.h" 3 4
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };



enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 50 "/usr/include/bits/sigstack.h" 3 4
typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 357 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/sys/ucontext.h" 1 3 4
# 23 "/usr/include/sys/ucontext.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 24 "/usr/include/sys/ucontext.h" 2 3 4



# 1 "/usr/include/bits/sigcontext.h" 1 3 4
# 28 "/usr/include/sys/ucontext.h" 2 3 4



typedef int greg_t;





typedef greg_t gregset_t[19];
# 85 "/usr/include/sys/ucontext.h" 3 4
struct _libc_fpreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
};

struct _libc_fpstate
{
  unsigned long int cw;
  unsigned long int sw;
  unsigned long int tag;
  unsigned long int ipoff;
  unsigned long int cssel;
  unsigned long int dataoff;
  unsigned long int datasel;
  struct _libc_fpreg _st[8];
  unsigned long int status;
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;


    fpregset_t fpregs;
    unsigned long int oldmask;
    unsigned long int cr2;
  } mcontext_t;


typedef struct ucontext
  {
    unsigned long int uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    __sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;
# 360 "/usr/include/signal.h" 2 3 4





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));



extern int sigaltstack (__const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) __attribute__ ((__nothrow__));
# 394 "/usr/include/signal.h" 3 4
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
# 395 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/bits/sigthread.h" 1 3 4
# 31 "/usr/include/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       __const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__));
# 396 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__));




# 36 "/usr/include/glib-2.0/glib/gbacktrace.h" 2


# 48 "/usr/include/glib-2.0/glib/gbacktrace.h"
void g_on_error_query (const gchar *prg_name);
void g_on_error_stack_trace (const gchar *prg_name);
# 66 "/usr/include/glib-2.0/glib/gbacktrace.h"

# 37 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gbase64.h" 1
# 28 "/usr/include/glib-2.0/glib/gbase64.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 29 "/usr/include/glib-2.0/glib/gbase64.h" 2



gsize g_base64_encode_step (const guchar *in,
          gsize len,
          gboolean break_lines,
          gchar *out,
          gint *state,
          gint *save);
gsize g_base64_encode_close (gboolean break_lines,
          gchar *out,
          gint *state,
          gint *save);
gchar* g_base64_encode (const guchar *data,
          gsize len) __attribute__((__malloc__));
gsize g_base64_decode_step (const gchar *in,
          gsize len,
          guchar *out,
          gint *state,
          guint *save);
guchar *g_base64_decode (const gchar *text,
          gsize *out_len) __attribute__((__malloc__));
guchar *g_base64_decode_inplace (gchar *text,
                                 gsize *out_len);



# 38 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gbitlock.h" 1
# 26 "/usr/include/glib-2.0/glib/gbitlock.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 27 "/usr/include/glib-2.0/glib/gbitlock.h" 2







void g_bit_lock (volatile gint *address,
                                           gint lock_bit);
gboolean g_bit_trylock (volatile gint *address,
                                           gint lock_bit);
void g_bit_unlock (volatile gint *address,
                                           gint lock_bit);


# 39 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gbookmarkfile.h" 1
# 27 "/usr/include/glib-2.0/glib/gbookmarkfile.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 28 "/usr/include/glib-2.0/glib/gbookmarkfile.h" 2
# 1 "/usr/include/time.h" 1 3 4
# 30 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 39 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 43 "/usr/include/time.h" 2 3 4
# 58 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 74 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 92 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 131 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  __const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 180 "/usr/include/time.h" 3 4



extern clock_t clock (void) __attribute__ ((__nothrow__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   __const char *__restrict __format,
   __const struct tm *__restrict __tp) __attribute__ ((__nothrow__));

# 215 "/usr/include/time.h" 3 4
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
# 216 "/usr/include/time.h" 2 3 4

extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     __const char *__restrict __format,
     __const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__));
# 230 "/usr/include/time.h" 3 4



extern struct tm *gmtime (__const time_t *__timer) __attribute__ ((__nothrow__));



extern struct tm *localtime (__const time_t *__timer) __attribute__ ((__nothrow__));





extern struct tm *gmtime_r (__const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__));



extern struct tm *localtime_r (__const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__));





extern char *asctime (__const struct tm *__tp) __attribute__ ((__nothrow__));


extern char *ctime (__const time_t *__timer) __attribute__ ((__nothrow__));







extern char *asctime_r (__const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__));


extern char *ctime_r (__const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__));



extern int daylight;
extern long int timezone;





extern int stime (__const time_t *__when) __attribute__ ((__nothrow__));
# 313 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__));


extern int dysize (int __year) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 328 "/usr/include/time.h" 3 4
extern int nanosleep (__const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__));


extern int clock_settime (clockid_t __clock_id, __const struct timespec *__tp)
     __attribute__ ((__nothrow__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       __const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__));


extern int timer_settime (timer_t __timerid, int __flags,
     __const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__));
# 417 "/usr/include/time.h" 3 4

# 29 "/usr/include/glib-2.0/glib/gbookmarkfile.h" 2







typedef enum
{
  G_BOOKMARK_FILE_ERROR_INVALID_URI,
  G_BOOKMARK_FILE_ERROR_INVALID_VALUE,
  G_BOOKMARK_FILE_ERROR_APP_NOT_REGISTERED,
  G_BOOKMARK_FILE_ERROR_URI_NOT_FOUND,
  G_BOOKMARK_FILE_ERROR_READ,
  G_BOOKMARK_FILE_ERROR_UNKNOWN_ENCODING,
  G_BOOKMARK_FILE_ERROR_WRITE,
  G_BOOKMARK_FILE_ERROR_FILE_NOT_FOUND
} GBookmarkFileError;

GQuark g_bookmark_file_error_quark (void);




typedef struct _GBookmarkFile GBookmarkFile;

GBookmarkFile *g_bookmark_file_new (void);
void g_bookmark_file_free (GBookmarkFile *bookmark);

gboolean g_bookmark_file_load_from_file (GBookmarkFile *bookmark,
          const gchar *filename,
          GError **error);
gboolean g_bookmark_file_load_from_data (GBookmarkFile *bookmark,
          const gchar *data,
          gsize length,
          GError **error);
gboolean g_bookmark_file_load_from_data_dirs (GBookmarkFile *bookmark,
          const gchar *file,
          gchar **full_path,
          GError **error);
gchar * g_bookmark_file_to_data (GBookmarkFile *bookmark,
          gsize *length,
          GError **error) __attribute__((__malloc__));
gboolean g_bookmark_file_to_file (GBookmarkFile *bookmark,
          const gchar *filename,
          GError **error);

void g_bookmark_file_set_title (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *title);
gchar * g_bookmark_file_get_title (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error) __attribute__((__malloc__));
void g_bookmark_file_set_description (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *description);
gchar * g_bookmark_file_get_description (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error) __attribute__((__malloc__));
void g_bookmark_file_set_mime_type (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *mime_type);
gchar * g_bookmark_file_get_mime_type (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error) __attribute__((__malloc__));
void g_bookmark_file_set_groups (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar **groups,
          gsize length);
void g_bookmark_file_add_group (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *group);
gboolean g_bookmark_file_has_group (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *group,
          GError **error);
gchar ** g_bookmark_file_get_groups (GBookmarkFile *bookmark,
          const gchar *uri,
          gsize *length,
          GError **error) __attribute__((__malloc__));
void g_bookmark_file_add_application (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *name,
          const gchar *exec);
gboolean g_bookmark_file_has_application (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *name,
          GError **error);
gchar ** g_bookmark_file_get_applications (GBookmarkFile *bookmark,
          const gchar *uri,
          gsize *length,
          GError **error) __attribute__((__malloc__));
gboolean g_bookmark_file_set_app_info (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *name,
          const gchar *exec,
          gint count,
          time_t stamp,
          GError **error);
gboolean g_bookmark_file_get_app_info (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *name,
          gchar **exec,
          guint *count,
          time_t *stamp,
          GError **error);
void g_bookmark_file_set_is_private (GBookmarkFile *bookmark,
          const gchar *uri,
          gboolean is_private);
gboolean g_bookmark_file_get_is_private (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error);
void g_bookmark_file_set_icon (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *href,
          const gchar *mime_type);
gboolean g_bookmark_file_get_icon (GBookmarkFile *bookmark,
          const gchar *uri,
          gchar **href,
          gchar **mime_type,
          GError **error);
void g_bookmark_file_set_added (GBookmarkFile *bookmark,
          const gchar *uri,
          time_t added);
time_t g_bookmark_file_get_added (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error);
void g_bookmark_file_set_modified (GBookmarkFile *bookmark,
          const gchar *uri,
          time_t modified);
time_t g_bookmark_file_get_modified (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error);
void g_bookmark_file_set_visited (GBookmarkFile *bookmark,
          const gchar *uri,
          time_t visited);
time_t g_bookmark_file_get_visited (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error);
gboolean g_bookmark_file_has_item (GBookmarkFile *bookmark,
          const gchar *uri);
gint g_bookmark_file_get_size (GBookmarkFile *bookmark);
gchar ** g_bookmark_file_get_uris (GBookmarkFile *bookmark,
          gsize *length) __attribute__((__malloc__));
gboolean g_bookmark_file_remove_group (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *group,
          GError **error);
gboolean g_bookmark_file_remove_application (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *name,
          GError **error);
gboolean g_bookmark_file_remove_item (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error);
gboolean g_bookmark_file_move_item (GBookmarkFile *bookmark,
          const gchar *old_uri,
          const gchar *new_uri,
          GError **error);


# 40 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gcache.h" 1
# 34 "/usr/include/glib-2.0/glib/gcache.h"
# 1 "/usr/include/glib-2.0/glib/glist.h" 1
# 34 "/usr/include/glib-2.0/glib/glist.h"
# 1 "/usr/include/glib-2.0/glib/gmem.h" 1
# 34 "/usr/include/glib-2.0/glib/gmem.h"
# 1 "/usr/include/glib-2.0/glib/gslice.h" 1
# 27 "/usr/include/glib-2.0/glib/gslice.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 28 "/usr/include/glib-2.0/glib/gslice.h" 2





gpointer g_slice_alloc (gsize block_size) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
gpointer g_slice_alloc0 (gsize block_size) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
gpointer g_slice_copy (gsize block_size,
                                         gconstpointer mem_block) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
void g_slice_free1 (gsize block_size,
      gpointer mem_block);
void g_slice_free_chain_with_offset (gsize block_size,
      gpointer mem_chain,
      gsize next_offset);
# 72 "/usr/include/glib-2.0/glib/gslice.h"
typedef enum {
  G_SLICE_CONFIG_ALWAYS_MALLOC = 1,
  G_SLICE_CONFIG_BYPASS_MAGAZINES,
  G_SLICE_CONFIG_WORKING_SET_MSECS,
  G_SLICE_CONFIG_COLOR_INCREMENT,
  G_SLICE_CONFIG_CHUNK_SIZES,
  G_SLICE_CONFIG_CONTENTION_COUNTER
} GSliceConfig;
void g_slice_set_config (GSliceConfig ckey, gint64 value);
gint64 g_slice_get_config (GSliceConfig ckey);
gint64* g_slice_get_config_state (GSliceConfig ckey, gint64 address, guint *n_values);


# 35 "/usr/include/glib-2.0/glib/gmem.h" 2
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 36 "/usr/include/glib-2.0/glib/gmem.h" 2



typedef struct _GMemVTable GMemVTable;
# 52 "/usr/include/glib-2.0/glib/gmem.h"
void g_free (gpointer mem);

gpointer g_malloc (gsize n_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
gpointer g_malloc0 (gsize n_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
gpointer g_realloc (gpointer mem,
      gsize n_bytes) __attribute__((warn_unused_result));
gpointer g_try_malloc (gsize n_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
gpointer g_try_malloc0 (gsize n_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
gpointer g_try_realloc (gpointer mem,
      gsize n_bytes) __attribute__((warn_unused_result));

gpointer g_malloc_n (gsize n_blocks,
      gsize n_block_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1,2)));
gpointer g_malloc0_n (gsize n_blocks,
      gsize n_block_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1,2)));
gpointer g_realloc_n (gpointer mem,
      gsize n_blocks,
      gsize n_block_bytes) __attribute__((warn_unused_result));
gpointer g_try_malloc_n (gsize n_blocks,
      gsize n_block_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1,2)));
gpointer g_try_malloc0_n (gsize n_blocks,
      gsize n_block_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1,2)));
gpointer g_try_realloc_n (gpointer mem,
      gsize n_blocks,
      gsize n_block_bytes) __attribute__((warn_unused_result));
# 135 "/usr/include/glib-2.0/glib/gmem.h"
struct _GMemVTable {
  gpointer (*malloc) (gsize n_bytes);
  gpointer (*realloc) (gpointer mem,
      gsize n_bytes);
  void (*free) (gpointer mem);

  gpointer (*calloc) (gsize n_blocks,
      gsize n_block_bytes);
  gpointer (*try_malloc) (gsize n_bytes);
  gpointer (*try_realloc) (gpointer mem,
      gsize n_bytes);
};
void g_mem_set_vtable (GMemVTable *vtable);
gboolean g_mem_is_system_malloc (void);

extern gboolean g_mem_gc_friendly;



extern GMemVTable *glib_mem_profiler_table;
void g_mem_profile (void);




typedef struct _GAllocator GAllocator;
typedef struct _GMemChunk GMemChunk;
# 179 "/usr/include/glib-2.0/glib/gmem.h"
GMemChunk* g_mem_chunk_new (const gchar *name,
    gint atom_size,
    gsize area_size,
    gint type);
void g_mem_chunk_destroy (GMemChunk *mem_chunk);
gpointer g_mem_chunk_alloc (GMemChunk *mem_chunk);
gpointer g_mem_chunk_alloc0 (GMemChunk *mem_chunk);
void g_mem_chunk_free (GMemChunk *mem_chunk,
    gpointer mem);
void g_mem_chunk_clean (GMemChunk *mem_chunk);
void g_mem_chunk_reset (GMemChunk *mem_chunk);
void g_mem_chunk_print (GMemChunk *mem_chunk);
void g_mem_chunk_info (void);
void g_blow_chunks (void);
GAllocator*g_allocator_new (const gchar *name,
    guint n_preallocs);
void g_allocator_free (GAllocator *allocator);






# 35 "/usr/include/glib-2.0/glib/glist.h" 2



typedef struct _GList GList;

struct _GList
{
  gpointer data;
  GList *next;
  GList *prev;
};



GList* g_list_alloc (void) __attribute__((warn_unused_result));
void g_list_free (GList *list);
void g_list_free_1 (GList *list);

GList* g_list_append (GList *list,
      gpointer data) __attribute__((warn_unused_result));
GList* g_list_prepend (GList *list,
      gpointer data) __attribute__((warn_unused_result));
GList* g_list_insert (GList *list,
      gpointer data,
      gint position) __attribute__((warn_unused_result));
GList* g_list_insert_sorted (GList *list,
      gpointer data,
      GCompareFunc func) __attribute__((warn_unused_result));
GList* g_list_insert_sorted_with_data (GList *list,
      gpointer data,
      GCompareDataFunc func,
      gpointer user_data) __attribute__((warn_unused_result));
GList* g_list_insert_before (GList *list,
      GList *sibling,
      gpointer data) __attribute__((warn_unused_result));
GList* g_list_concat (GList *list1,
      GList *list2) __attribute__((warn_unused_result));
GList* g_list_remove (GList *list,
      gconstpointer data) __attribute__((warn_unused_result));
GList* g_list_remove_all (GList *list,
      gconstpointer data) __attribute__((warn_unused_result));
GList* g_list_remove_link (GList *list,
      GList *llink) __attribute__((warn_unused_result));
GList* g_list_delete_link (GList *list,
      GList *link_) __attribute__((warn_unused_result));
GList* g_list_reverse (GList *list) __attribute__((warn_unused_result));
GList* g_list_copy (GList *list) __attribute__((warn_unused_result));
GList* g_list_nth (GList *list,
      guint n);
GList* g_list_nth_prev (GList *list,
      guint n);
GList* g_list_find (GList *list,
      gconstpointer data);
GList* g_list_find_custom (GList *list,
      gconstpointer data,
      GCompareFunc func);
gint g_list_position (GList *list,
      GList *llink);
gint g_list_index (GList *list,
      gconstpointer data);
GList* g_list_last (GList *list);
GList* g_list_first (GList *list);
guint g_list_length (GList *list);
void g_list_foreach (GList *list,
      GFunc func,
      gpointer user_data);
GList* g_list_sort (GList *list,
      GCompareFunc compare_func) __attribute__((warn_unused_result));
GList* g_list_sort_with_data (GList *list,
      GCompareDataFunc compare_func,
      gpointer user_data) __attribute__((warn_unused_result));
gpointer g_list_nth_data (GList *list,
      guint n);






void g_list_push_allocator (gpointer allocator);
void g_list_pop_allocator (void);



# 35 "/usr/include/glib-2.0/glib/gcache.h" 2



typedef struct _GCache GCache;

typedef gpointer (*GCacheNewFunc) (gpointer key);
typedef gpointer (*GCacheDupFunc) (gpointer value);
typedef void (*GCacheDestroyFunc) (gpointer value);



GCache* g_cache_new (GCacheNewFunc value_new_func,
                                GCacheDestroyFunc value_destroy_func,
                                GCacheDupFunc key_dup_func,
                                GCacheDestroyFunc key_destroy_func,
                                GHashFunc hash_key_func,
                                GHashFunc hash_value_func,
                                GEqualFunc key_equal_func);
void g_cache_destroy (GCache *cache);
gpointer g_cache_insert (GCache *cache,
                                gpointer key);
void g_cache_remove (GCache *cache,
                                gconstpointer value);
void g_cache_key_foreach (GCache *cache,
                                GHFunc func,
                                gpointer user_data);

void g_cache_value_foreach (GCache *cache,
                                GHFunc func,
                                gpointer user_data);



# 41 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gchecksum.h" 1
# 28 "/usr/include/glib-2.0/glib/gchecksum.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 29 "/usr/include/glib-2.0/glib/gchecksum.h" 2


# 46 "/usr/include/glib-2.0/glib/gchecksum.h"
typedef enum {
  G_CHECKSUM_MD5,
  G_CHECKSUM_SHA1,
  G_CHECKSUM_SHA256
} GChecksumType;
# 61 "/usr/include/glib-2.0/glib/gchecksum.h"
typedef struct _GChecksum GChecksum;

gssize g_checksum_type_get_length (GChecksumType checksum_type);

GChecksum * g_checksum_new (GChecksumType checksum_type);
void g_checksum_reset (GChecksum *checksum);
GChecksum * g_checksum_copy (const GChecksum *checksum);
void g_checksum_free (GChecksum *checksum);
void g_checksum_update (GChecksum *checksum,
                                             const guchar *data,
                                             gssize length);
const gchar *g_checksum_get_string (GChecksum *checksum);
void g_checksum_get_digest (GChecksum *checksum,
                                             guint8 *buffer,
                                             gsize *digest_len);

gchar *g_compute_checksum_for_data (GChecksumType checksum_type,
                                      const guchar *data,
                                      gsize length);
gchar *g_compute_checksum_for_string (GChecksumType checksum_type,
                                      const gchar *str,
                                      gssize length);


# 42 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gcompletion.h" 1
# 34 "/usr/include/glib-2.0/glib/gcompletion.h"
# 1 "/usr/include/glib-2.0/glib/glist.h" 1
# 35 "/usr/include/glib-2.0/glib/gcompletion.h" 2



typedef struct _GCompletion GCompletion;

typedef gchar* (*GCompletionFunc) (gpointer);




typedef gint (*GCompletionStrncmpFunc) (const gchar *s1,
     const gchar *s2,
     gsize n);

struct _GCompletion
{
  GList* items;
  GCompletionFunc func;

  gchar* prefix;
  GList* cache;
  GCompletionStrncmpFunc strncmp_func;
};

GCompletion* g_completion_new (GCompletionFunc func);
void g_completion_add_items (GCompletion* cmp,
                                         GList* items);
void g_completion_remove_items (GCompletion* cmp,
                                         GList* items);
void g_completion_clear_items (GCompletion* cmp);
GList* g_completion_complete (GCompletion* cmp,
                                         const gchar* prefix,
                                         gchar** new_prefix);
GList* g_completion_complete_utf8 (GCompletion *cmp,
                                         const gchar* prefix,
                                         gchar** new_prefix);
void g_completion_set_compare (GCompletion *cmp,
             GCompletionStrncmpFunc strncmp_func);
void g_completion_free (GCompletion* cmp);


# 43 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gconvert.h" 1
# 34 "/usr/include/glib-2.0/glib/gconvert.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 35 "/usr/include/glib-2.0/glib/gconvert.h" 2



typedef enum
{
  G_CONVERT_ERROR_NO_CONVERSION,
  G_CONVERT_ERROR_ILLEGAL_SEQUENCE,
  G_CONVERT_ERROR_FAILED,
  G_CONVERT_ERROR_PARTIAL_INPUT,
  G_CONVERT_ERROR_BAD_URI,
  G_CONVERT_ERROR_NOT_ABSOLUTE_PATH
} GConvertError;


GQuark g_convert_error_quark (void);



typedef struct _GIConv *GIConv;

GIConv g_iconv_open (const gchar *to_codeset,
         const gchar *from_codeset);
gsize g_iconv (GIConv converter,
         gchar **inbuf,
         gsize *inbytes_left,
         gchar **outbuf,
         gsize *outbytes_left);
gint g_iconv_close (GIConv converter);


gchar* g_convert (const gchar *str,
    gssize len,
    const gchar *to_codeset,
    const gchar *from_codeset,
    gsize *bytes_read,
    gsize *bytes_written,
    GError **error) __attribute__((__malloc__));
gchar* g_convert_with_iconv (const gchar *str,
    gssize len,
    GIConv converter,
    gsize *bytes_read,
    gsize *bytes_written,
    GError **error) __attribute__((__malloc__));
gchar* g_convert_with_fallback (const gchar *str,
    gssize len,
    const gchar *to_codeset,
    const gchar *from_codeset,
    const gchar *fallback,
    gsize *bytes_read,
    gsize *bytes_written,
    GError **error) __attribute__((__malloc__));




gchar* g_locale_to_utf8 (const gchar *opsysstring,
      gssize len,
      gsize *bytes_read,
      gsize *bytes_written,
      GError **error) __attribute__((__malloc__));
gchar* g_locale_from_utf8 (const gchar *utf8string,
      gssize len,
      gsize *bytes_read,
      gsize *bytes_written,
      GError **error) __attribute__((__malloc__));
# 111 "/usr/include/glib-2.0/glib/gconvert.h"
gchar* g_filename_to_utf8 (const gchar *opsysstring,
        gssize len,
        gsize *bytes_read,
        gsize *bytes_written,
        GError **error) __attribute__((__malloc__));
gchar* g_filename_from_utf8 (const gchar *utf8string,
        gssize len,
        gsize *bytes_read,
        gsize *bytes_written,
        GError **error) __attribute__((__malloc__));

gchar *g_filename_from_uri (const gchar *uri,
       gchar **hostname,
       GError **error) __attribute__((__malloc__));

gchar *g_filename_to_uri (const gchar *filename,
       const gchar *hostname,
       GError **error) __attribute__((__malloc__));
gchar *g_filename_display_name (const gchar *filename) __attribute__((__malloc__));
gboolean g_get_filename_charsets (const gchar ***charsets);

gchar *g_filename_display_basename (const gchar *filename) __attribute__((__malloc__));

gchar **g_uri_list_extract_uris (const gchar *uri_list) __attribute__((__malloc__));


# 44 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gdataset.h" 1
# 34 "/usr/include/glib-2.0/glib/gdataset.h"
# 1 "/usr/include/glib-2.0/glib/gquark.h" 1
# 35 "/usr/include/glib-2.0/glib/gdataset.h" 2



typedef struct _GData GData;

typedef void (*GDataForeachFunc) (GQuark key_id,
                                                 gpointer data,
                                                 gpointer user_data);



void g_datalist_init (GData **datalist);
void g_datalist_clear (GData **datalist);
gpointer g_datalist_id_get_data (GData **datalist,
      GQuark key_id);
void g_datalist_id_set_data_full (GData **datalist,
      GQuark key_id,
      gpointer data,
      GDestroyNotify destroy_func);
gpointer g_datalist_id_remove_no_notify (GData **datalist,
      GQuark key_id);
void g_datalist_foreach (GData **datalist,
      GDataForeachFunc func,
      gpointer user_data);
# 69 "/usr/include/glib-2.0/glib/gdataset.h"
void g_datalist_set_flags (GData **datalist,
      guint flags);
void g_datalist_unset_flags (GData **datalist,
      guint flags);
guint g_datalist_get_flags (GData **datalist);
# 93 "/usr/include/glib-2.0/glib/gdataset.h"
void g_dataset_destroy (gconstpointer dataset_location);
gpointer g_dataset_id_get_data (gconstpointer dataset_location,
                                         GQuark key_id);
void g_dataset_id_set_data_full (gconstpointer dataset_location,
                                         GQuark key_id,
                                         gpointer data,
                                         GDestroyNotify destroy_func);
gpointer g_dataset_id_remove_no_notify (gconstpointer dataset_location,
                                         GQuark key_id);
void g_dataset_foreach (gconstpointer dataset_location,
                                         GDataForeachFunc func,
                                         gpointer user_data);
# 120 "/usr/include/glib-2.0/glib/gdataset.h"

# 45 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gdate.h" 1
# 36 "/usr/include/glib-2.0/glib/gdate.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 37 "/usr/include/glib-2.0/glib/gdate.h" 2
# 1 "/usr/include/glib-2.0/glib/gquark.h" 1
# 38 "/usr/include/glib-2.0/glib/gdate.h" 2


# 50 "/usr/include/glib-2.0/glib/gdate.h"
typedef gint32 GTime;
typedef guint16 GDateYear;
typedef guint8 GDateDay;
typedef struct _GDate GDate;


typedef enum
{
  G_DATE_DAY = 0,
  G_DATE_MONTH = 1,
  G_DATE_YEAR = 2
} GDateDMY;


typedef enum
{
  G_DATE_BAD_WEEKDAY = 0,
  G_DATE_MONDAY = 1,
  G_DATE_TUESDAY = 2,
  G_DATE_WEDNESDAY = 3,
  G_DATE_THURSDAY = 4,
  G_DATE_FRIDAY = 5,
  G_DATE_SATURDAY = 6,
  G_DATE_SUNDAY = 7
} GDateWeekday;
typedef enum
{
  G_DATE_BAD_MONTH = 0,
  G_DATE_JANUARY = 1,
  G_DATE_FEBRUARY = 2,
  G_DATE_MARCH = 3,
  G_DATE_APRIL = 4,
  G_DATE_MAY = 5,
  G_DATE_JUNE = 6,
  G_DATE_JULY = 7,
  G_DATE_AUGUST = 8,
  G_DATE_SEPTEMBER = 9,
  G_DATE_OCTOBER = 10,
  G_DATE_NOVEMBER = 11,
  G_DATE_DECEMBER = 12
} GDateMonth;
# 101 "/usr/include/glib-2.0/glib/gdate.h"
struct _GDate
{
  guint julian_days : 32;





  guint julian : 1;
  guint dmy : 1;


  guint day : 6;
  guint month : 4;
  guint year : 16;
};





GDate* g_date_new (void);
GDate* g_date_new_dmy (GDateDay day,
                                           GDateMonth month,
                                           GDateYear year);
GDate* g_date_new_julian (guint32 julian_day);
void g_date_free (GDate *date);






gboolean g_date_valid (const GDate *date);
gboolean g_date_valid_day (GDateDay day) __attribute__((__const__));
gboolean g_date_valid_month (GDateMonth month) __attribute__((__const__));
gboolean g_date_valid_year (GDateYear year) __attribute__((__const__));
gboolean g_date_valid_weekday (GDateWeekday weekday) __attribute__((__const__));
gboolean g_date_valid_julian (guint32 julian_date) __attribute__((__const__));
gboolean g_date_valid_dmy (GDateDay day,
                                           GDateMonth month,
                                           GDateYear year) __attribute__((__const__));

GDateWeekday g_date_get_weekday (const GDate *date);
GDateMonth g_date_get_month (const GDate *date);
GDateYear g_date_get_year (const GDate *date);
GDateDay g_date_get_day (const GDate *date);
guint32 g_date_get_julian (const GDate *date);
guint g_date_get_day_of_year (const GDate *date);






guint g_date_get_monday_week_of_year (const GDate *date);
guint g_date_get_sunday_week_of_year (const GDate *date);
guint g_date_get_iso8601_week_of_year (const GDate *date);





void g_date_clear (GDate *date,
                                           guint n_dates);





void g_date_set_parse (GDate *date,
                                           const gchar *str);
void g_date_set_time_t (GDate *date,
        time_t timet);
void g_date_set_time_val (GDate *date,
        GTimeVal *timeval);

void g_date_set_time (GDate *date,
                                           GTime time_);

void g_date_set_month (GDate *date,
                                           GDateMonth month);
void g_date_set_day (GDate *date,
                                           GDateDay day);
void g_date_set_year (GDate *date,
                                           GDateYear year);
void g_date_set_dmy (GDate *date,
                                           GDateDay day,
                                           GDateMonth month,
                                           GDateYear y);
void g_date_set_julian (GDate *date,
                                           guint32 julian_date);
gboolean g_date_is_first_of_month (const GDate *date);
gboolean g_date_is_last_of_month (const GDate *date);


void g_date_add_days (GDate *date,
                                           guint n_days);
void g_date_subtract_days (GDate *date,
                                           guint n_days);


void g_date_add_months (GDate *date,
                                           guint n_months);
void g_date_subtract_months (GDate *date,
                                           guint n_months);


void g_date_add_years (GDate *date,
                                           guint n_years);
void g_date_subtract_years (GDate *date,
                                           guint n_years);
gboolean g_date_is_leap_year (GDateYear year) __attribute__((__const__));
guint8 g_date_get_days_in_month (GDateMonth month,
                                           GDateYear year) __attribute__((__const__));
guint8 g_date_get_monday_weeks_in_year (GDateYear year) __attribute__((__const__));
guint8 g_date_get_sunday_weeks_in_year (GDateYear year) __attribute__((__const__));



gint g_date_days_between (const GDate *date1,
        const GDate *date2);


gint g_date_compare (const GDate *lhs,
                                           const GDate *rhs);
void g_date_to_struct_tm (const GDate *date,
                                           struct tm *tm);

void g_date_clamp (GDate *date,
        const GDate *min_date,
        const GDate *max_date);


void g_date_order (GDate *date1, GDate *date2);




gsize g_date_strftime (gchar *s,
                                           gsize slen,
                                           const gchar *format,
                                           const GDate *date);
# 261 "/usr/include/glib-2.0/glib/gdate.h"

# 46 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gdir.h" 1
# 31 "/usr/include/glib-2.0/glib/gdir.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 32 "/usr/include/glib-2.0/glib/gdir.h" 2



typedef struct _GDir GDir;







GDir * g_dir_open (const gchar *path,
            guint flags,
            GError **error);
const gchar *g_dir_read_name (GDir *dir);
void g_dir_rewind (GDir *dir);
void g_dir_close (GDir *dir);


# 47 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 48 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gfileutils.h" 1
# 28 "/usr/include/glib-2.0/glib/gfileutils.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 29 "/usr/include/glib-2.0/glib/gfileutils.h" 2





typedef enum
{
  G_FILE_ERROR_EXIST,
  G_FILE_ERROR_ISDIR,
  G_FILE_ERROR_ACCES,
  G_FILE_ERROR_NAMETOOLONG,
  G_FILE_ERROR_NOENT,
  G_FILE_ERROR_NOTDIR,
  G_FILE_ERROR_NXIO,
  G_FILE_ERROR_NODEV,
  G_FILE_ERROR_ROFS,
  G_FILE_ERROR_TXTBSY,
  G_FILE_ERROR_FAULT,
  G_FILE_ERROR_LOOP,
  G_FILE_ERROR_NOSPC,
  G_FILE_ERROR_NOMEM,
  G_FILE_ERROR_MFILE,
  G_FILE_ERROR_NFILE,
  G_FILE_ERROR_BADF,
  G_FILE_ERROR_INVAL,
  G_FILE_ERROR_PIPE,
  G_FILE_ERROR_AGAIN,
  G_FILE_ERROR_INTR,
  G_FILE_ERROR_IO,
  G_FILE_ERROR_PERM,
  G_FILE_ERROR_NOSYS,
  G_FILE_ERROR_FAILED
} GFileError;





typedef enum
{
  G_FILE_TEST_IS_REGULAR = 1 << 0,
  G_FILE_TEST_IS_SYMLINK = 1 << 1,
  G_FILE_TEST_IS_DIR = 1 << 2,
  G_FILE_TEST_IS_EXECUTABLE = 1 << 3,
  G_FILE_TEST_EXISTS = 1 << 4
} GFileTest;

GQuark g_file_error_quark (void);

GFileError g_file_error_from_errno (gint err_no);
# 87 "/usr/include/glib-2.0/glib/gfileutils.h"
gboolean g_file_test (const gchar *filename,
                              GFileTest test);
gboolean g_file_get_contents (const gchar *filename,
                              gchar **contents,
                              gsize *length,
                              GError **error);
gboolean g_file_set_contents (const gchar *filename,
         const gchar *contents,
         gssize length,
         GError **error);
gchar *g_file_read_link (const gchar *filename,
         GError **error);


gint g_mkstemp (gchar *tmpl);
gint g_mkstemp_full (gchar *tmpl,
                              int flags,
                              int mode);


gint g_file_open_tmp (const gchar *tmpl,
         gchar **name_used,
         GError **error);

char *g_format_size_for_display (goffset size);

gchar *g_build_path (const gchar *separator,
    const gchar *first_element,
    ...) __attribute__((__malloc__)) __attribute__((__sentinel__));
gchar *g_build_pathv (const gchar *separator,
    gchar **args) __attribute__((__malloc__));

gchar *g_build_filename (const gchar *first_element,
    ...) __attribute__((__malloc__)) __attribute__((__sentinel__));
gchar *g_build_filenamev (gchar **args) __attribute__((__malloc__));

int g_mkdir_with_parents (const gchar *pathname,
        int mode);


# 49 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/ghash.h" 1
# 34 "/usr/include/glib-2.0/glib/ghash.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/ghash.h" 2
# 1 "/usr/include/glib-2.0/glib/glist.h" 1
# 36 "/usr/include/glib-2.0/glib/ghash.h" 2



typedef struct _GHashTable GHashTable;

typedef gboolean (*GHRFunc) (gpointer key,
                               gpointer value,
                               gpointer user_data);

typedef struct _GHashTableIter GHashTableIter;

struct _GHashTableIter
{

  gpointer dummy1;
  gpointer dummy2;
  gpointer dummy3;
  int dummy4;
  gboolean dummy5;
  gpointer dummy6;
};



GHashTable* g_hash_table_new (GHashFunc hash_func,
         GEqualFunc key_equal_func);
GHashTable* g_hash_table_new_full (GHashFunc hash_func,
         GEqualFunc key_equal_func,
         GDestroyNotify key_destroy_func,
         GDestroyNotify value_destroy_func);
void g_hash_table_destroy (GHashTable *hash_table);
void g_hash_table_insert (GHashTable *hash_table,
         gpointer key,
         gpointer value);
void g_hash_table_replace (GHashTable *hash_table,
         gpointer key,
         gpointer value);
gboolean g_hash_table_remove (GHashTable *hash_table,
         gconstpointer key);
void g_hash_table_remove_all (GHashTable *hash_table);
gboolean g_hash_table_steal (GHashTable *hash_table,
         gconstpointer key);
void g_hash_table_steal_all (GHashTable *hash_table);
gpointer g_hash_table_lookup (GHashTable *hash_table,
         gconstpointer key);
gboolean g_hash_table_lookup_extended (GHashTable *hash_table,
         gconstpointer lookup_key,
         gpointer *orig_key,
         gpointer *value);
void g_hash_table_foreach (GHashTable *hash_table,
         GHFunc func,
         gpointer user_data);
gpointer g_hash_table_find (GHashTable *hash_table,
         GHRFunc predicate,
         gpointer user_data);
guint g_hash_table_foreach_remove (GHashTable *hash_table,
         GHRFunc func,
         gpointer user_data);
guint g_hash_table_foreach_steal (GHashTable *hash_table,
         GHRFunc func,
         gpointer user_data);
guint g_hash_table_size (GHashTable *hash_table);
GList * g_hash_table_get_keys (GHashTable *hash_table);
GList * g_hash_table_get_values (GHashTable *hash_table);

void g_hash_table_iter_init (GHashTableIter *iter,
         GHashTable *hash_table);
gboolean g_hash_table_iter_next (GHashTableIter *iter,
         gpointer *key,
         gpointer *value);
GHashTable* g_hash_table_iter_get_hash_table (GHashTableIter *iter);
void g_hash_table_iter_remove (GHashTableIter *iter);
void g_hash_table_iter_steal (GHashTableIter *iter);


GHashTable* g_hash_table_ref (GHashTable *hash_table);
void g_hash_table_unref (GHashTable *hash_table);
# 138 "/usr/include/glib-2.0/glib/ghash.h"
gboolean g_str_equal (gconstpointer v1,
                      gconstpointer v2);
guint g_str_hash (gconstpointer v);

gboolean g_int_equal (gconstpointer v1,
                      gconstpointer v2);
guint g_int_hash (gconstpointer v);

gboolean g_int64_equal (gconstpointer v1,
                        gconstpointer v2);
guint g_int64_hash (gconstpointer v);

gboolean g_double_equal (gconstpointer v1,
                         gconstpointer v2);
guint g_double_hash (gconstpointer v);







guint g_direct_hash (gconstpointer v) __attribute__((__const__));
gboolean g_direct_equal (gconstpointer v1,
                         gconstpointer v2) __attribute__((__const__));


# 50 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/ghook.h" 1
# 34 "/usr/include/glib-2.0/glib/ghook.h"
# 1 "/usr/include/glib-2.0/glib/gmem.h" 1
# 35 "/usr/include/glib-2.0/glib/ghook.h" 2





typedef struct _GHook GHook;
typedef struct _GHookList GHookList;

typedef gint (*GHookCompareFunc) (GHook *new_hook,
       GHook *sibling);
typedef gboolean (*GHookFindFunc) (GHook *hook,
       gpointer data);
typedef void (*GHookMarshaller) (GHook *hook,
       gpointer marshal_data);
typedef gboolean (*GHookCheckMarshaller) (GHook *hook,
       gpointer marshal_data);
typedef void (*GHookFunc) (gpointer data);
typedef gboolean (*GHookCheckFunc) (gpointer data);
typedef void (*GHookFinalizeFunc) (GHookList *hook_list,
       GHook *hook);
typedef enum
{
  G_HOOK_FLAG_ACTIVE = 1 << 0,
  G_HOOK_FLAG_IN_CALL = 1 << 1,
  G_HOOK_FLAG_MASK = 0x0f
} GHookFlagMask;




struct _GHookList
{
  gulong seq_id;
  guint hook_size : 16;
  guint is_setup : 1;
  GHook *hooks;
  gpointer dummy3;
  GHookFinalizeFunc finalize_hook;
  gpointer dummy[2];
};
struct _GHook
{
  gpointer data;
  GHook *next;
  GHook *prev;
  guint ref_count;
  gulong hook_id;
  guint flags;
  gpointer func;
  GDestroyNotify destroy;
};
# 106 "/usr/include/glib-2.0/glib/ghook.h"
void g_hook_list_init (GHookList *hook_list,
      guint hook_size);
void g_hook_list_clear (GHookList *hook_list);
GHook* g_hook_alloc (GHookList *hook_list);
void g_hook_free (GHookList *hook_list,
      GHook *hook);
GHook * g_hook_ref (GHookList *hook_list,
      GHook *hook);
void g_hook_unref (GHookList *hook_list,
      GHook *hook);
gboolean g_hook_destroy (GHookList *hook_list,
      gulong hook_id);
void g_hook_destroy_link (GHookList *hook_list,
      GHook *hook);
void g_hook_prepend (GHookList *hook_list,
      GHook *hook);
void g_hook_insert_before (GHookList *hook_list,
      GHook *sibling,
      GHook *hook);
void g_hook_insert_sorted (GHookList *hook_list,
      GHook *hook,
      GHookCompareFunc func);
GHook* g_hook_get (GHookList *hook_list,
      gulong hook_id);
GHook* g_hook_find (GHookList *hook_list,
      gboolean need_valids,
      GHookFindFunc func,
      gpointer data);
GHook* g_hook_find_data (GHookList *hook_list,
      gboolean need_valids,
      gpointer data);
GHook* g_hook_find_func (GHookList *hook_list,
      gboolean need_valids,
      gpointer func);
GHook* g_hook_find_func_data (GHookList *hook_list,
      gboolean need_valids,
      gpointer func,
      gpointer data);

GHook* g_hook_first_valid (GHookList *hook_list,
      gboolean may_be_in_call);



GHook* g_hook_next_valid (GHookList *hook_list,
      GHook *hook,
      gboolean may_be_in_call);

gint g_hook_compare_ids (GHook *new_hook,
      GHook *sibling);





void g_hook_list_invoke (GHookList *hook_list,
      gboolean may_recurse);



void g_hook_list_invoke_check (GHookList *hook_list,
      gboolean may_recurse);


void g_hook_list_marshal (GHookList *hook_list,
      gboolean may_recurse,
      GHookMarshaller marshaller,
      gpointer marshal_data);
void g_hook_list_marshal_check (GHookList *hook_list,
      gboolean may_recurse,
      GHookCheckMarshaller marshaller,
      gpointer marshal_data);


# 51 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/ghostutils.h" 1
# 27 "/usr/include/glib-2.0/glib/ghostutils.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 28 "/usr/include/glib-2.0/glib/ghostutils.h" 2



gboolean g_hostname_is_non_ascii (const gchar *hostname);
gboolean g_hostname_is_ascii_encoded (const gchar *hostname);
gboolean g_hostname_is_ip_address (const gchar *hostname);

gchar *g_hostname_to_ascii (const gchar *hostname);
gchar *g_hostname_to_unicode (const gchar *hostname);


# 52 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/giochannel.h" 1
# 34 "/usr/include/glib-2.0/glib/giochannel.h"
# 1 "/usr/include/glib-2.0/glib/gconvert.h" 1
# 35 "/usr/include/glib-2.0/glib/giochannel.h" 2
# 1 "/usr/include/glib-2.0/glib/gmain.h" 1
# 27 "/usr/include/glib-2.0/glib/gmain.h"
# 1 "/usr/include/glib-2.0/glib/gpoll.h" 1
# 27 "/usr/include/glib-2.0/glib/gpoll.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 28 "/usr/include/glib-2.0/glib/gpoll.h" 2


# 61 "/usr/include/glib-2.0/glib/gpoll.h"
typedef struct _GPollFD GPollFD;
typedef gint (*GPollFunc) (GPollFD *ufds,
     guint nfsd,
     gint timeout_);

struct _GPollFD
{



  gint fd;

  gushort events;
  gushort revents;
};
# 87 "/usr/include/glib-2.0/glib/gpoll.h"
gint g_poll (GPollFD *fds,
      guint nfds,
      gint timeout);


# 28 "/usr/include/glib-2.0/glib/gmain.h" 2
# 1 "/usr/include/glib-2.0/glib/gslist.h" 1
# 34 "/usr/include/glib-2.0/glib/gslist.h"
# 1 "/usr/include/glib-2.0/glib/gmem.h" 1
# 35 "/usr/include/glib-2.0/glib/gslist.h" 2



typedef struct _GSList GSList;

struct _GSList
{
  gpointer data;
  GSList *next;
};



GSList* g_slist_alloc (void) __attribute__((warn_unused_result));
void g_slist_free (GSList *list);
void g_slist_free_1 (GSList *list);

GSList* g_slist_append (GSList *list,
       gpointer data) __attribute__((warn_unused_result));
GSList* g_slist_prepend (GSList *list,
       gpointer data) __attribute__((warn_unused_result));
GSList* g_slist_insert (GSList *list,
       gpointer data,
       gint position) __attribute__((warn_unused_result));
GSList* g_slist_insert_sorted (GSList *list,
       gpointer data,
       GCompareFunc func) __attribute__((warn_unused_result));
GSList* g_slist_insert_sorted_with_data (GSList *list,
       gpointer data,
       GCompareDataFunc func,
       gpointer user_data) __attribute__((warn_unused_result));
GSList* g_slist_insert_before (GSList *slist,
       GSList *sibling,
       gpointer data) __attribute__((warn_unused_result));
GSList* g_slist_concat (GSList *list1,
       GSList *list2) __attribute__((warn_unused_result));
GSList* g_slist_remove (GSList *list,
       gconstpointer data) __attribute__((warn_unused_result));
GSList* g_slist_remove_all (GSList *list,
       gconstpointer data) __attribute__((warn_unused_result));
GSList* g_slist_remove_link (GSList *list,
       GSList *link_) __attribute__((warn_unused_result));
GSList* g_slist_delete_link (GSList *list,
       GSList *link_) __attribute__((warn_unused_result));
GSList* g_slist_reverse (GSList *list) __attribute__((warn_unused_result));
GSList* g_slist_copy (GSList *list) __attribute__((warn_unused_result));
GSList* g_slist_nth (GSList *list,
       guint n);
GSList* g_slist_find (GSList *list,
       gconstpointer data);
GSList* g_slist_find_custom (GSList *list,
       gconstpointer data,
       GCompareFunc func);
gint g_slist_position (GSList *list,
       GSList *llink);
gint g_slist_index (GSList *list,
       gconstpointer data);
GSList* g_slist_last (GSList *list);
guint g_slist_length (GSList *list);
void g_slist_foreach (GSList *list,
       GFunc func,
       gpointer user_data);
GSList* g_slist_sort (GSList *list,
       GCompareFunc compare_func) __attribute__((warn_unused_result));
GSList* g_slist_sort_with_data (GSList *list,
       GCompareDataFunc compare_func,
       gpointer user_data) __attribute__((warn_unused_result));
gpointer g_slist_nth_data (GSList *list,
       guint n);




void g_slist_push_allocator (gpointer dummy);
void g_slist_pop_allocator (void);



# 29 "/usr/include/glib-2.0/glib/gmain.h" 2
# 1 "/usr/include/glib-2.0/glib/gthread.h" 1
# 30 "/usr/include/glib-2.0/glib/gmain.h" 2



typedef struct _GMainContext GMainContext;
typedef struct _GMainLoop GMainLoop;
typedef struct _GSource GSource;
typedef struct _GSourceCallbackFuncs GSourceCallbackFuncs;
typedef struct _GSourceFuncs GSourceFuncs;

typedef gboolean (*GSourceFunc) (gpointer data);
typedef void (*GChildWatchFunc) (GPid pid,
           gint status,
           gpointer data);
struct _GSource
{

  gpointer callback_data;
  GSourceCallbackFuncs *callback_funcs;

  GSourceFuncs *source_funcs;
  guint ref_count;

  GMainContext *context;

  gint priority;
  guint flags;
  guint source_id;

  GSList *poll_fds;

  GSource *prev;
  GSource *next;

  gpointer reserved1;
  gpointer reserved2;
};

struct _GSourceCallbackFuncs
{
  void (*ref) (gpointer cb_data);
  void (*unref) (gpointer cb_data);
  void (*get) (gpointer cb_data,
   GSource *source,
   GSourceFunc *func,
   gpointer *data);
};

typedef void (*GSourceDummyMarshal) (void);

struct _GSourceFuncs
{
  gboolean (*prepare) (GSource *source,
   gint *timeout_);
  gboolean (*check) (GSource *source);
  gboolean (*dispatch) (GSource *source,
   GSourceFunc callback,
   gpointer user_data);
  void (*finalize) (GSource *source);


  GSourceFunc closure_callback;
  GSourceDummyMarshal closure_marshal;
};
# 104 "/usr/include/glib-2.0/glib/gmain.h"
GMainContext *g_main_context_new (void);
GMainContext *g_main_context_ref (GMainContext *context);
void g_main_context_unref (GMainContext *context);
GMainContext *g_main_context_default (void);

gboolean g_main_context_iteration (GMainContext *context,
     gboolean may_block);
gboolean g_main_context_pending (GMainContext *context);



GSource *g_main_context_find_source_by_id (GMainContext *context,
            guint source_id);
GSource *g_main_context_find_source_by_user_data (GMainContext *context,
            gpointer user_data);
GSource *g_main_context_find_source_by_funcs_user_data (GMainContext *context,
             GSourceFuncs *funcs,
            gpointer user_data);



void g_main_context_wakeup (GMainContext *context);
gboolean g_main_context_acquire (GMainContext *context);
void g_main_context_release (GMainContext *context);
gboolean g_main_context_is_owner (GMainContext *context);
gboolean g_main_context_wait (GMainContext *context,
     GCond *cond,
     GMutex *mutex);

gboolean g_main_context_prepare (GMainContext *context,
      gint *priority);
gint g_main_context_query (GMainContext *context,
      gint max_priority,
      gint *timeout_,
      GPollFD *fds,
      gint n_fds);
gint g_main_context_check (GMainContext *context,
      gint max_priority,
      GPollFD *fds,
      gint n_fds);
void g_main_context_dispatch (GMainContext *context);

void g_main_context_set_poll_func (GMainContext *context,
           GPollFunc func);
GPollFunc g_main_context_get_poll_func (GMainContext *context);



void g_main_context_add_poll (GMainContext *context,
         GPollFD *fd,
         gint priority);
void g_main_context_remove_poll (GMainContext *context,
         GPollFD *fd);

gint g_main_depth (void);
GSource *g_main_current_source (void);



void g_main_context_push_thread_default (GMainContext *context);
void g_main_context_pop_thread_default (GMainContext *context);
GMainContext *g_main_context_get_thread_default (void);



GMainLoop *g_main_loop_new (GMainContext *context,
           gboolean is_running);
void g_main_loop_run (GMainLoop *loop);
void g_main_loop_quit (GMainLoop *loop);
GMainLoop *g_main_loop_ref (GMainLoop *loop);
void g_main_loop_unref (GMainLoop *loop);
gboolean g_main_loop_is_running (GMainLoop *loop);
GMainContext *g_main_loop_get_context (GMainLoop *loop);



GSource *g_source_new (GSourceFuncs *source_funcs,
       guint struct_size);
GSource *g_source_ref (GSource *source);
void g_source_unref (GSource *source);

guint g_source_attach (GSource *source,
       GMainContext *context);
void g_source_destroy (GSource *source);

void g_source_set_priority (GSource *source,
       gint priority);
gint g_source_get_priority (GSource *source);
void g_source_set_can_recurse (GSource *source,
       gboolean can_recurse);
gboolean g_source_get_can_recurse (GSource *source);
guint g_source_get_id (GSource *source);

GMainContext *g_source_get_context (GSource *source);

void g_source_set_callback (GSource *source,
       GSourceFunc func,
       gpointer data,
       GDestroyNotify notify);

void g_source_set_funcs (GSource *source,
                                   GSourceFuncs *funcs);
gboolean g_source_is_destroyed (GSource *source);


void g_source_set_callback_indirect (GSource *source,
         gpointer callback_data,
         GSourceCallbackFuncs *callback_funcs);

void g_source_add_poll (GSource *source,
        GPollFD *fd);
void g_source_remove_poll (GSource *source,
        GPollFD *fd);

void g_source_get_current_time (GSource *source,
        GTimeVal *timeval);







GSource *g_idle_source_new (void);
GSource *g_child_watch_source_new (GPid pid);
GSource *g_timeout_source_new (guint interval);
GSource *g_timeout_source_new_seconds (guint interval);



void g_get_current_time (GTimeVal *result);
# 259 "/usr/include/glib-2.0/glib/gmain.h"
gboolean g_source_remove (guint tag);
gboolean g_source_remove_by_user_data (gpointer user_data);
gboolean g_source_remove_by_funcs_user_data (GSourceFuncs *funcs,
           gpointer user_data);


guint g_timeout_add_full (gint priority,
         guint interval,
         GSourceFunc function,
         gpointer data,
         GDestroyNotify notify);
guint g_timeout_add (guint interval,
         GSourceFunc function,
         gpointer data);
guint g_timeout_add_seconds_full (gint priority,
                                     guint interval,
                                     GSourceFunc function,
                                     gpointer data,
                                     GDestroyNotify notify);
guint g_timeout_add_seconds (guint interval,
         GSourceFunc function,
         gpointer data);
guint g_child_watch_add_full (gint priority,
         GPid pid,
         GChildWatchFunc function,
         gpointer data,
         GDestroyNotify notify);
guint g_child_watch_add (GPid pid,
         GChildWatchFunc function,
         gpointer data);
guint g_idle_add (GSourceFunc function,
         gpointer data);
guint g_idle_add_full (gint priority,
         GSourceFunc function,
         gpointer data,
         GDestroyNotify notify);
gboolean g_idle_remove_by_data (gpointer data);


extern GSourceFuncs g_timeout_funcs;
extern GSourceFuncs g_child_watch_funcs;
extern GSourceFuncs g_idle_funcs;


# 36 "/usr/include/glib-2.0/glib/giochannel.h" 2
# 1 "/usr/include/glib-2.0/glib/gstring.h" 1
# 34 "/usr/include/glib-2.0/glib/gstring.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/gstring.h" 2
# 1 "/usr/include/glib-2.0/glib/gunicode.h" 1
# 29 "/usr/include/glib-2.0/glib/gunicode.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 30 "/usr/include/glib-2.0/glib/gunicode.h" 2
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 31 "/usr/include/glib-2.0/glib/gunicode.h" 2



typedef guint32 gunichar;
typedef guint16 gunichar2;




typedef enum
{
  G_UNICODE_CONTROL,
  G_UNICODE_FORMAT,
  G_UNICODE_UNASSIGNED,
  G_UNICODE_PRIVATE_USE,
  G_UNICODE_SURROGATE,
  G_UNICODE_LOWERCASE_LETTER,
  G_UNICODE_MODIFIER_LETTER,
  G_UNICODE_OTHER_LETTER,
  G_UNICODE_TITLECASE_LETTER,
  G_UNICODE_UPPERCASE_LETTER,
  G_UNICODE_COMBINING_MARK,
  G_UNICODE_ENCLOSING_MARK,
  G_UNICODE_NON_SPACING_MARK,
  G_UNICODE_DECIMAL_NUMBER,
  G_UNICODE_LETTER_NUMBER,
  G_UNICODE_OTHER_NUMBER,
  G_UNICODE_CONNECT_PUNCTUATION,
  G_UNICODE_DASH_PUNCTUATION,
  G_UNICODE_CLOSE_PUNCTUATION,
  G_UNICODE_FINAL_PUNCTUATION,
  G_UNICODE_INITIAL_PUNCTUATION,
  G_UNICODE_OTHER_PUNCTUATION,
  G_UNICODE_OPEN_PUNCTUATION,
  G_UNICODE_CURRENCY_SYMBOL,
  G_UNICODE_MODIFIER_SYMBOL,
  G_UNICODE_MATH_SYMBOL,
  G_UNICODE_OTHER_SYMBOL,
  G_UNICODE_LINE_SEPARATOR,
  G_UNICODE_PARAGRAPH_SEPARATOR,
  G_UNICODE_SPACE_SEPARATOR
} GUnicodeType;






typedef enum
{
  G_UNICODE_BREAK_MANDATORY,
  G_UNICODE_BREAK_CARRIAGE_RETURN,
  G_UNICODE_BREAK_LINE_FEED,
  G_UNICODE_BREAK_COMBINING_MARK,
  G_UNICODE_BREAK_SURROGATE,
  G_UNICODE_BREAK_ZERO_WIDTH_SPACE,
  G_UNICODE_BREAK_INSEPARABLE,
  G_UNICODE_BREAK_NON_BREAKING_GLUE,
  G_UNICODE_BREAK_CONTINGENT,
  G_UNICODE_BREAK_SPACE,
  G_UNICODE_BREAK_AFTER,
  G_UNICODE_BREAK_BEFORE,
  G_UNICODE_BREAK_BEFORE_AND_AFTER,
  G_UNICODE_BREAK_HYPHEN,
  G_UNICODE_BREAK_NON_STARTER,
  G_UNICODE_BREAK_OPEN_PUNCTUATION,
  G_UNICODE_BREAK_CLOSE_PUNCTUATION,
  G_UNICODE_BREAK_QUOTATION,
  G_UNICODE_BREAK_EXCLAMATION,
  G_UNICODE_BREAK_IDEOGRAPHIC,
  G_UNICODE_BREAK_NUMERIC,
  G_UNICODE_BREAK_INFIX_SEPARATOR,
  G_UNICODE_BREAK_SYMBOL,
  G_UNICODE_BREAK_ALPHABETIC,
  G_UNICODE_BREAK_PREFIX,
  G_UNICODE_BREAK_POSTFIX,
  G_UNICODE_BREAK_COMPLEX_CONTEXT,
  G_UNICODE_BREAK_AMBIGUOUS,
  G_UNICODE_BREAK_UNKNOWN,
  G_UNICODE_BREAK_NEXT_LINE,
  G_UNICODE_BREAK_WORD_JOINER,
  G_UNICODE_BREAK_HANGUL_L_JAMO,
  G_UNICODE_BREAK_HANGUL_V_JAMO,
  G_UNICODE_BREAK_HANGUL_T_JAMO,
  G_UNICODE_BREAK_HANGUL_LV_SYLLABLE,
  G_UNICODE_BREAK_HANGUL_LVT_SYLLABLE
} GUnicodeBreakType;

typedef enum
{
  G_UNICODE_SCRIPT_INVALID_CODE = -1,
  G_UNICODE_SCRIPT_COMMON = 0,
  G_UNICODE_SCRIPT_INHERITED,
  G_UNICODE_SCRIPT_ARABIC,
  G_UNICODE_SCRIPT_ARMENIAN,
  G_UNICODE_SCRIPT_BENGALI,
  G_UNICODE_SCRIPT_BOPOMOFO,
  G_UNICODE_SCRIPT_CHEROKEE,
  G_UNICODE_SCRIPT_COPTIC,
  G_UNICODE_SCRIPT_CYRILLIC,
  G_UNICODE_SCRIPT_DESERET,
  G_UNICODE_SCRIPT_DEVANAGARI,
  G_UNICODE_SCRIPT_ETHIOPIC,
  G_UNICODE_SCRIPT_GEORGIAN,
  G_UNICODE_SCRIPT_GOTHIC,
  G_UNICODE_SCRIPT_GREEK,
  G_UNICODE_SCRIPT_GUJARATI,
  G_UNICODE_SCRIPT_GURMUKHI,
  G_UNICODE_SCRIPT_HAN,
  G_UNICODE_SCRIPT_HANGUL,
  G_UNICODE_SCRIPT_HEBREW,
  G_UNICODE_SCRIPT_HIRAGANA,
  G_UNICODE_SCRIPT_KANNADA,
  G_UNICODE_SCRIPT_KATAKANA,
  G_UNICODE_SCRIPT_KHMER,
  G_UNICODE_SCRIPT_LAO,
  G_UNICODE_SCRIPT_LATIN,
  G_UNICODE_SCRIPT_MALAYALAM,
  G_UNICODE_SCRIPT_MONGOLIAN,
  G_UNICODE_SCRIPT_MYANMAR,
  G_UNICODE_SCRIPT_OGHAM,
  G_UNICODE_SCRIPT_OLD_ITALIC,
  G_UNICODE_SCRIPT_ORIYA,
  G_UNICODE_SCRIPT_RUNIC,
  G_UNICODE_SCRIPT_SINHALA,
  G_UNICODE_SCRIPT_SYRIAC,
  G_UNICODE_SCRIPT_TAMIL,
  G_UNICODE_SCRIPT_TELUGU,
  G_UNICODE_SCRIPT_THAANA,
  G_UNICODE_SCRIPT_THAI,
  G_UNICODE_SCRIPT_TIBETAN,
  G_UNICODE_SCRIPT_CANADIAN_ABORIGINAL,
  G_UNICODE_SCRIPT_YI,
  G_UNICODE_SCRIPT_TAGALOG,
  G_UNICODE_SCRIPT_HANUNOO,
  G_UNICODE_SCRIPT_BUHID,
  G_UNICODE_SCRIPT_TAGBANWA,


  G_UNICODE_SCRIPT_BRAILLE,
  G_UNICODE_SCRIPT_CYPRIOT,
  G_UNICODE_SCRIPT_LIMBU,
  G_UNICODE_SCRIPT_OSMANYA,
  G_UNICODE_SCRIPT_SHAVIAN,
  G_UNICODE_SCRIPT_LINEAR_B,
  G_UNICODE_SCRIPT_TAI_LE,
  G_UNICODE_SCRIPT_UGARITIC,


  G_UNICODE_SCRIPT_NEW_TAI_LUE,
  G_UNICODE_SCRIPT_BUGINESE,
  G_UNICODE_SCRIPT_GLAGOLITIC,
  G_UNICODE_SCRIPT_TIFINAGH,
  G_UNICODE_SCRIPT_SYLOTI_NAGRI,
  G_UNICODE_SCRIPT_OLD_PERSIAN,
  G_UNICODE_SCRIPT_KHAROSHTHI,


  G_UNICODE_SCRIPT_UNKNOWN,
  G_UNICODE_SCRIPT_BALINESE,
  G_UNICODE_SCRIPT_CUNEIFORM,
  G_UNICODE_SCRIPT_PHOENICIAN,
  G_UNICODE_SCRIPT_PHAGS_PA,
  G_UNICODE_SCRIPT_NKO,


  G_UNICODE_SCRIPT_KAYAH_LI,
  G_UNICODE_SCRIPT_LEPCHA,
  G_UNICODE_SCRIPT_REJANG,
  G_UNICODE_SCRIPT_SUNDANESE,
  G_UNICODE_SCRIPT_SAURASHTRA,
  G_UNICODE_SCRIPT_CHAM,
  G_UNICODE_SCRIPT_OL_CHIKI,
  G_UNICODE_SCRIPT_VAI,
  G_UNICODE_SCRIPT_CARIAN,
  G_UNICODE_SCRIPT_LYCIAN,
  G_UNICODE_SCRIPT_LYDIAN
} GUnicodeScript;







gboolean g_get_charset (const char **charset);



gboolean g_unichar_isalnum (gunichar c) __attribute__((__const__));
gboolean g_unichar_isalpha (gunichar c) __attribute__((__const__));
gboolean g_unichar_iscntrl (gunichar c) __attribute__((__const__));
gboolean g_unichar_isdigit (gunichar c) __attribute__((__const__));
gboolean g_unichar_isgraph (gunichar c) __attribute__((__const__));
gboolean g_unichar_islower (gunichar c) __attribute__((__const__));
gboolean g_unichar_isprint (gunichar c) __attribute__((__const__));
gboolean g_unichar_ispunct (gunichar c) __attribute__((__const__));
gboolean g_unichar_isspace (gunichar c) __attribute__((__const__));
gboolean g_unichar_isupper (gunichar c) __attribute__((__const__));
gboolean g_unichar_isxdigit (gunichar c) __attribute__((__const__));
gboolean g_unichar_istitle (gunichar c) __attribute__((__const__));
gboolean g_unichar_isdefined (gunichar c) __attribute__((__const__));
gboolean g_unichar_iswide (gunichar c) __attribute__((__const__));
gboolean g_unichar_iswide_cjk(gunichar c) __attribute__((__const__));
gboolean g_unichar_iszerowidth(gunichar c) __attribute__((__const__));
gboolean g_unichar_ismark (gunichar c) __attribute__((__const__));



gunichar g_unichar_toupper (gunichar c) __attribute__((__const__));
gunichar g_unichar_tolower (gunichar c) __attribute__((__const__));
gunichar g_unichar_totitle (gunichar c) __attribute__((__const__));



gint g_unichar_digit_value (gunichar c) __attribute__((__const__));

gint g_unichar_xdigit_value (gunichar c) __attribute__((__const__));


GUnicodeType g_unichar_type (gunichar c) __attribute__((__const__));


GUnicodeBreakType g_unichar_break_type (gunichar c) __attribute__((__const__));


gint g_unichar_combining_class (gunichar uc) __attribute__((__const__));





void g_unicode_canonical_ordering (gunichar *string,
       gsize len);




gunichar *g_unicode_canonical_decomposition (gunichar ch,
          gsize *result_len) __attribute__((__malloc__));



extern const gchar * const g_utf8_skip;



gunichar g_utf8_get_char (const gchar *p) __attribute__((__pure__));
gunichar g_utf8_get_char_validated (const gchar *p,
        gssize max_len) __attribute__((__pure__));

gchar* g_utf8_offset_to_pointer (const gchar *str,
                                   glong offset) __attribute__((__pure__));
glong g_utf8_pointer_to_offset (const gchar *str,
       const gchar *pos) __attribute__((__pure__));
gchar* g_utf8_prev_char (const gchar *p) __attribute__((__pure__));
gchar* g_utf8_find_next_char (const gchar *p,
       const gchar *end) __attribute__((__pure__));
gchar* g_utf8_find_prev_char (const gchar *str,
       const gchar *p) __attribute__((__pure__));

glong g_utf8_strlen (const gchar *p,
       gssize max) __attribute__((__pure__));


gchar* g_utf8_strncpy (gchar *dest,
         const gchar *src,
         gsize n);



gchar* g_utf8_strchr (const gchar *p,
         gssize len,
         gunichar c);
gchar* g_utf8_strrchr (const gchar *p,
         gssize len,
         gunichar c);
gchar* g_utf8_strreverse (const gchar *str,
     gssize len);

gunichar2 *g_utf8_to_utf16 (const gchar *str,
    glong len,
    glong *items_read,
    glong *items_written,
    GError **error) __attribute__((__malloc__));
gunichar * g_utf8_to_ucs4 (const gchar *str,
    glong len,
    glong *items_read,
    glong *items_written,
    GError **error) __attribute__((__malloc__));
gunichar * g_utf8_to_ucs4_fast (const gchar *str,
    glong len,
    glong *items_written) __attribute__((__malloc__));
gunichar * g_utf16_to_ucs4 (const gunichar2 *str,
    glong len,
    glong *items_read,
    glong *items_written,
    GError **error) __attribute__((__malloc__));
gchar* g_utf16_to_utf8 (const gunichar2 *str,
    glong len,
    glong *items_read,
    glong *items_written,
    GError **error) __attribute__((__malloc__));
gunichar2 *g_ucs4_to_utf16 (const gunichar *str,
    glong len,
    glong *items_read,
    glong *items_written,
    GError **error) __attribute__((__malloc__));
gchar* g_ucs4_to_utf8 (const gunichar *str,
    glong len,
    glong *items_read,
    glong *items_written,
    GError **error) __attribute__((__malloc__));





gint g_unichar_to_utf8 (gunichar c,
        gchar *outbuf);





gboolean g_utf8_validate (const gchar *str,
                          gssize max_len,
                          const gchar **end);


gboolean g_unichar_validate (gunichar ch) __attribute__((__const__));

gchar *g_utf8_strup (const gchar *str,
         gssize len) __attribute__((__malloc__));
gchar *g_utf8_strdown (const gchar *str,
         gssize len) __attribute__((__malloc__));
gchar *g_utf8_casefold (const gchar *str,
   gssize len) __attribute__((__malloc__));

typedef enum {
  G_NORMALIZE_DEFAULT,
  G_NORMALIZE_NFD = G_NORMALIZE_DEFAULT,
  G_NORMALIZE_DEFAULT_COMPOSE,
  G_NORMALIZE_NFC = G_NORMALIZE_DEFAULT_COMPOSE,
  G_NORMALIZE_ALL,
  G_NORMALIZE_NFKD = G_NORMALIZE_ALL,
  G_NORMALIZE_ALL_COMPOSE,
  G_NORMALIZE_NFKC = G_NORMALIZE_ALL_COMPOSE
} GNormalizeMode;

gchar *g_utf8_normalize (const gchar *str,
    gssize len,
    GNormalizeMode mode) __attribute__((__malloc__));

gint g_utf8_collate (const gchar *str1,
      const gchar *str2) __attribute__((__pure__));
gchar *g_utf8_collate_key (const gchar *str,
      gssize len) __attribute__((__malloc__));
gchar *g_utf8_collate_key_for_filename (const gchar *str,
                   gssize len) __attribute__((__malloc__));

gboolean g_unichar_get_mirror_char (gunichar ch,
                                    gunichar *mirrored_ch);

GUnicodeScript g_unichar_get_script (gunichar ch) __attribute__((__const__));




gchar *_g_utf8_make_valid (const gchar *name);


# 36 "/usr/include/glib-2.0/glib/gstring.h" 2
# 1 "/usr/include/glib-2.0/glib/gutils.h" 1
# 37 "/usr/include/glib-2.0/glib/gstring.h" 2



typedef struct _GString GString;
typedef struct _GStringChunk GStringChunk;

struct _GString
{
  gchar *str;
  gsize len;
  gsize allocated_len;
};



GStringChunk* g_string_chunk_new (gsize size);
void g_string_chunk_free (GStringChunk *chunk);
void g_string_chunk_clear (GStringChunk *chunk);
gchar* g_string_chunk_insert (GStringChunk *chunk,
         const gchar *string);
gchar* g_string_chunk_insert_len (GStringChunk *chunk,
         const gchar *string,
         gssize len);
gchar* g_string_chunk_insert_const (GStringChunk *chunk,
         const gchar *string);




GString* g_string_new (const gchar *init);
GString* g_string_new_len (const gchar *init,
                                         gssize len);
GString* g_string_sized_new (gsize dfl_size);
gchar* g_string_free (GString *string,
      gboolean free_segment);
gboolean g_string_equal (const GString *v,
      const GString *v2);
guint g_string_hash (const GString *str);
GString* g_string_assign (GString *string,
      const gchar *rval);
GString* g_string_truncate (GString *string,
      gsize len);
GString* g_string_set_size (GString *string,
      gsize len);
GString* g_string_insert_len (GString *string,
                                         gssize pos,
                                         const gchar *val,
                                         gssize len);
GString* g_string_append (GString *string,
                    const gchar *val);
GString* g_string_append_len (GString *string,
                    const gchar *val,
                                         gssize len);
GString* g_string_append_c (GString *string,
      gchar c);
GString* g_string_append_unichar (GString *string,
      gunichar wc);
GString* g_string_prepend (GString *string,
      const gchar *val);
GString* g_string_prepend_c (GString *string,
      gchar c);
GString* g_string_prepend_unichar (GString *string,
      gunichar wc);
GString* g_string_prepend_len (GString *string,
                    const gchar *val,
                                         gssize len);
GString* g_string_insert (GString *string,
      gssize pos,
      const gchar *val);
GString* g_string_insert_c (GString *string,
      gssize pos,
      gchar c);
GString* g_string_insert_unichar (GString *string,
      gssize pos,
      gunichar wc);
GString* g_string_overwrite (GString *string,
      gsize pos,
      const gchar *val);
GString* g_string_overwrite_len (GString *string,
      gsize pos,
      const gchar *val,
      gssize len);
GString* g_string_erase (GString *string,
      gssize pos,
      gssize len);
GString* g_string_ascii_down (GString *string);
GString* g_string_ascii_up (GString *string);
void g_string_vprintf (GString *string,
      const gchar *format,
      va_list args);
void g_string_printf (GString *string,
      const gchar *format,
      ...) __attribute__((__format__ (__printf__, 2, 3)));
void g_string_append_vprintf (GString *string,
      const gchar *format,
      va_list args);
void g_string_append_printf (GString *string,
      const gchar *format,
      ...) __attribute__((__format__ (__printf__, 2, 3)));
GString * g_string_append_uri_escaped(GString *string,
      const char *unescaped,
      const char *reserved_chars_allowed,
      gboolean allow_utf8);



static inline GString*
g_string_append_c_inline (GString *gstring,
                          gchar c)
{
  if (gstring->len + 1 < gstring->allocated_len)
    {
      gstring->str[gstring->len++] = c;
      gstring->str[gstring->len] = 0;
    }
  else
    g_string_insert_c (gstring, -1, c);
  return gstring;
}
# 167 "/usr/include/glib-2.0/glib/gstring.h"
GString* g_string_down (GString *string);
GString* g_string_up (GString *string);








# 37 "/usr/include/glib-2.0/glib/giochannel.h" 2






typedef struct _GIOChannel GIOChannel;
typedef struct _GIOFuncs GIOFuncs;

typedef enum
{
  G_IO_ERROR_NONE,
  G_IO_ERROR_AGAIN,
  G_IO_ERROR_INVAL,
  G_IO_ERROR_UNKNOWN
} GIOError;



typedef enum
{

  G_IO_CHANNEL_ERROR_FBIG,
  G_IO_CHANNEL_ERROR_INVAL,
  G_IO_CHANNEL_ERROR_IO,
  G_IO_CHANNEL_ERROR_ISDIR,
  G_IO_CHANNEL_ERROR_NOSPC,
  G_IO_CHANNEL_ERROR_NXIO,
  G_IO_CHANNEL_ERROR_OVERFLOW,
  G_IO_CHANNEL_ERROR_PIPE,

  G_IO_CHANNEL_ERROR_FAILED
} GIOChannelError;

typedef enum
{
  G_IO_STATUS_ERROR,
  G_IO_STATUS_NORMAL,
  G_IO_STATUS_EOF,
  G_IO_STATUS_AGAIN
} GIOStatus;

typedef enum
{
  G_SEEK_CUR,
  G_SEEK_SET,
  G_SEEK_END
} GSeekType;

typedef enum
{
  G_IO_IN =1,
  G_IO_OUT =4,
  G_IO_PRI =2,
  G_IO_ERR =8,
  G_IO_HUP =16,
  G_IO_NVAL =32
} GIOCondition;

typedef enum
{
  G_IO_FLAG_APPEND = 1 << 0,
  G_IO_FLAG_NONBLOCK = 1 << 1,
  G_IO_FLAG_IS_READABLE = 1 << 2,
  G_IO_FLAG_IS_WRITEABLE = 1 << 3,
  G_IO_FLAG_IS_SEEKABLE = 1 << 4,
  G_IO_FLAG_MASK = (1 << 5) - 1,
  G_IO_FLAG_GET_MASK = G_IO_FLAG_MASK,
  G_IO_FLAG_SET_MASK = G_IO_FLAG_APPEND | G_IO_FLAG_NONBLOCK
} GIOFlags;

struct _GIOChannel
{

  gint ref_count;
  GIOFuncs *funcs;

  gchar *encoding;
  GIConv read_cd;
  GIConv write_cd;
  gchar *line_term;
  guint line_term_len;

  gsize buf_size;
  GString *read_buf;
  GString *encoded_read_buf;
  GString *write_buf;
  gchar partial_write_buf[6];



  guint use_buffer : 1;
  guint do_encode : 1;
  guint close_on_unref : 1;
  guint is_readable : 1;
  guint is_writeable : 1;
  guint is_seekable : 1;

  gpointer reserved1;
  gpointer reserved2;
};

typedef gboolean (*GIOFunc) (GIOChannel *source,
        GIOCondition condition,
        gpointer data);
struct _GIOFuncs
{
  GIOStatus (*io_read) (GIOChannel *channel,
             gchar *buf,
      gsize count,
      gsize *bytes_read,
      GError **err);
  GIOStatus (*io_write) (GIOChannel *channel,
      const gchar *buf,
      gsize count,
      gsize *bytes_written,
      GError **err);
  GIOStatus (*io_seek) (GIOChannel *channel,
      gint64 offset,
      GSeekType type,
      GError **err);
  GIOStatus (*io_close) (GIOChannel *channel,
      GError **err);
  GSource* (*io_create_watch) (GIOChannel *channel,
      GIOCondition condition);
  void (*io_free) (GIOChannel *channel);
  GIOStatus (*io_set_flags) (GIOChannel *channel,
                                  GIOFlags flags,
      GError **err);
  GIOFlags (*io_get_flags) (GIOChannel *channel);
};

void g_io_channel_init (GIOChannel *channel);
GIOChannel *g_io_channel_ref (GIOChannel *channel);
void g_io_channel_unref (GIOChannel *channel);


GIOError g_io_channel_read (GIOChannel *channel,
            gchar *buf,
            gsize count,
            gsize *bytes_read);
GIOError g_io_channel_write (GIOChannel *channel,
            const gchar *buf,
            gsize count,
            gsize *bytes_written);
GIOError g_io_channel_seek (GIOChannel *channel,
            gint64 offset,
            GSeekType type);
void g_io_channel_close (GIOChannel *channel);


GIOStatus g_io_channel_shutdown (GIOChannel *channel,
     gboolean flush,
     GError **err);
guint g_io_add_watch_full (GIOChannel *channel,
     gint priority,
     GIOCondition condition,
     GIOFunc func,
     gpointer user_data,
     GDestroyNotify notify);
GSource * g_io_create_watch (GIOChannel *channel,
     GIOCondition condition);
guint g_io_add_watch (GIOChannel *channel,
     GIOCondition condition,
     GIOFunc func,
     gpointer user_data);




void g_io_channel_set_buffer_size (GIOChannel *channel,
        gsize size);
gsize g_io_channel_get_buffer_size (GIOChannel *channel);
GIOCondition g_io_channel_get_buffer_condition (GIOChannel *channel);
GIOStatus g_io_channel_set_flags (GIOChannel *channel,
        GIOFlags flags,
        GError **error);
GIOFlags g_io_channel_get_flags (GIOChannel *channel);
void g_io_channel_set_line_term (GIOChannel *channel,
        const gchar *line_term,
        gint length);
const gchar* g_io_channel_get_line_term (GIOChannel *channel,
        gint *length);
void g_io_channel_set_buffered (GIOChannel *channel,
        gboolean buffered);
gboolean g_io_channel_get_buffered (GIOChannel *channel);
GIOStatus g_io_channel_set_encoding (GIOChannel *channel,
        const gchar *encoding,
        GError **error);
const gchar* g_io_channel_get_encoding (GIOChannel *channel);
void g_io_channel_set_close_on_unref (GIOChannel *channel,
        gboolean do_close);
gboolean g_io_channel_get_close_on_unref (GIOChannel *channel);


GIOStatus g_io_channel_flush (GIOChannel *channel,
        GError **error);
GIOStatus g_io_channel_read_line (GIOChannel *channel,
        gchar **str_return,
        gsize *length,
        gsize *terminator_pos,
        GError **error);
GIOStatus g_io_channel_read_line_string (GIOChannel *channel,
        GString *buffer,
        gsize *terminator_pos,
        GError **error);
GIOStatus g_io_channel_read_to_end (GIOChannel *channel,
        gchar **str_return,
        gsize *length,
        GError **error);
GIOStatus g_io_channel_read_chars (GIOChannel *channel,
        gchar *buf,
        gsize count,
        gsize *bytes_read,
        GError **error);
GIOStatus g_io_channel_read_unichar (GIOChannel *channel,
        gunichar *thechar,
        GError **error);
GIOStatus g_io_channel_write_chars (GIOChannel *channel,
        const gchar *buf,
        gssize count,
        gsize *bytes_written,
        GError **error);
GIOStatus g_io_channel_write_unichar (GIOChannel *channel,
        gunichar thechar,
        GError **error);
GIOStatus g_io_channel_seek_position (GIOChannel *channel,
        gint64 offset,
        GSeekType type,
        GError **error);




GIOChannel* g_io_channel_new_file (const gchar *filename,
        const gchar *mode,
        GError **error);



GQuark g_io_channel_error_quark (void);
GIOChannelError g_io_channel_error_from_errno (gint en);
# 298 "/usr/include/glib-2.0/glib/giochannel.h"
GIOChannel* g_io_channel_unix_new (int fd);
gint g_io_channel_unix_get_fd (GIOChannel *channel);



extern GSourceFuncs g_io_watch_funcs;
# 364 "/usr/include/glib-2.0/glib/giochannel.h"

# 53 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gkeyfile.h" 1
# 30 "/usr/include/glib-2.0/glib/gkeyfile.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 31 "/usr/include/glib-2.0/glib/gkeyfile.h" 2



typedef enum
{
  G_KEY_FILE_ERROR_UNKNOWN_ENCODING,
  G_KEY_FILE_ERROR_PARSE,
  G_KEY_FILE_ERROR_NOT_FOUND,
  G_KEY_FILE_ERROR_KEY_NOT_FOUND,
  G_KEY_FILE_ERROR_GROUP_NOT_FOUND,
  G_KEY_FILE_ERROR_INVALID_VALUE
} GKeyFileError;



GQuark g_key_file_error_quark (void);

typedef struct _GKeyFile GKeyFile;

typedef enum
{
  G_KEY_FILE_NONE = 0,
  G_KEY_FILE_KEEP_COMMENTS = 1 << 0,
  G_KEY_FILE_KEEP_TRANSLATIONS = 1 << 1
} GKeyFileFlags;

GKeyFile *g_key_file_new (void);
void g_key_file_free (GKeyFile *key_file);
void g_key_file_set_list_separator (GKeyFile *key_file,
          gchar separator);
gboolean g_key_file_load_from_file (GKeyFile *key_file,
          const gchar *file,
          GKeyFileFlags flags,
          GError **error);
gboolean g_key_file_load_from_data (GKeyFile *key_file,
          const gchar *data,
          gsize length,
          GKeyFileFlags flags,
          GError **error);
gboolean g_key_file_load_from_dirs (GKeyFile *key_file,
          const gchar *file,
          const gchar **search_dirs,
          gchar **full_path,
          GKeyFileFlags flags,
          GError **error);
gboolean g_key_file_load_from_data_dirs (GKeyFile *key_file,
          const gchar *file,
          gchar **full_path,
          GKeyFileFlags flags,
          GError **error);
gchar *g_key_file_to_data (GKeyFile *key_file,
          gsize *length,
          GError **error) __attribute__((__malloc__));
gchar *g_key_file_get_start_group (GKeyFile *key_file) __attribute__((__malloc__));
gchar **g_key_file_get_groups (GKeyFile *key_file,
          gsize *length) __attribute__((__malloc__));
gchar **g_key_file_get_keys (GKeyFile *key_file,
          const gchar *group_name,
          gsize *length,
          GError **error) __attribute__((__malloc__));
gboolean g_key_file_has_group (GKeyFile *key_file,
          const gchar *group_name);
gboolean g_key_file_has_key (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error);
gchar *g_key_file_get_value (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error) __attribute__((__malloc__));
void g_key_file_set_value (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar *value);
gchar *g_key_file_get_string (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error) __attribute__((__malloc__));
void g_key_file_set_string (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar *string);
gchar *g_key_file_get_locale_string (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar *locale,
          GError **error) __attribute__((__malloc__));
void g_key_file_set_locale_string (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar *locale,
          const gchar *string);
gboolean g_key_file_get_boolean (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error);
void g_key_file_set_boolean (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gboolean value);
gint g_key_file_get_integer (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error);
void g_key_file_set_integer (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gint value);
gdouble g_key_file_get_double (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
                                             GError **error);
void g_key_file_set_double (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
                                             gdouble value);
gchar **g_key_file_get_string_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gsize *length,
          GError **error) __attribute__((__malloc__));
void g_key_file_set_string_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar * const list[],
          gsize length);
gchar **g_key_file_get_locale_string_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar *locale,
          gsize *length,
          GError **error) __attribute__((__malloc__));
void g_key_file_set_locale_string_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar *locale,
          const gchar * const list[],
          gsize length);
gboolean *g_key_file_get_boolean_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gsize *length,
          GError **error) __attribute__((__malloc__));
void g_key_file_set_boolean_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gboolean list[],
          gsize length);
gint *g_key_file_get_integer_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gsize *length,
          GError **error) __attribute__((__malloc__));
void g_key_file_set_double_list (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
                                             gdouble list[],
                                             gsize length);
gdouble *g_key_file_get_double_list (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
                                             gsize *length,
                                             GError **error) __attribute__((__malloc__));
void g_key_file_set_integer_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gint list[],
          gsize length);
gboolean g_key_file_set_comment (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
                                             const gchar *comment,
                                             GError **error);
gchar *g_key_file_get_comment (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
                                             GError **error) __attribute__((__malloc__));

gboolean g_key_file_remove_comment (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
          GError **error);
gboolean g_key_file_remove_key (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error);
gboolean g_key_file_remove_group (GKeyFile *key_file,
          const gchar *group_name,
          GError **error);
# 248 "/usr/include/glib-2.0/glib/gkeyfile.h"

# 54 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/glist.h" 1
# 55 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gmacros.h" 1
# 56 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gmain.h" 1
# 57 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gmappedfile.h" 1
# 29 "/usr/include/glib-2.0/glib/gmappedfile.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 30 "/usr/include/glib-2.0/glib/gmappedfile.h" 2



typedef struct _GMappedFile GMappedFile;

GMappedFile *g_mapped_file_new (const gchar *filename,
             gboolean writable,
             GError **error) __attribute__((__malloc__));
gsize g_mapped_file_get_length (GMappedFile *file);
gchar *g_mapped_file_get_contents (GMappedFile *file);
GMappedFile *g_mapped_file_ref (GMappedFile *file);
void g_mapped_file_unref (GMappedFile *file);


void g_mapped_file_free (GMappedFile *file);



# 58 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gmarkup.h" 1
# 30 "/usr/include/glib-2.0/glib/gmarkup.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 31 "/usr/include/glib-2.0/glib/gmarkup.h" 2
# 1 "/usr/include/glib-2.0/glib/gslist.h" 1
# 32 "/usr/include/glib-2.0/glib/gmarkup.h" 2



typedef enum
{
  G_MARKUP_ERROR_BAD_UTF8,
  G_MARKUP_ERROR_EMPTY,
  G_MARKUP_ERROR_PARSE,



  G_MARKUP_ERROR_UNKNOWN_ELEMENT,
  G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE,
  G_MARKUP_ERROR_INVALID_CONTENT,
  G_MARKUP_ERROR_MISSING_ATTRIBUTE
} GMarkupError;



GQuark g_markup_error_quark (void);

typedef enum
{
  G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG = 1 << 0,
  G_MARKUP_TREAT_CDATA_AS_TEXT = 1 << 1,
  G_MARKUP_PREFIX_ERROR_POSITION = 1 << 2
} GMarkupParseFlags;

typedef struct _GMarkupParseContext GMarkupParseContext;
typedef struct _GMarkupParser GMarkupParser;

struct _GMarkupParser
{

  void (*start_element) (GMarkupParseContext *context,
                          const gchar *element_name,
                          const gchar **attribute_names,
                          const gchar **attribute_values,
                          gpointer user_data,
                          GError **error);


  void (*end_element) (GMarkupParseContext *context,
                          const gchar *element_name,
                          gpointer user_data,
                          GError **error);



  void (*text) (GMarkupParseContext *context,
                          const gchar *text,
                          gsize text_len,
                          gpointer user_data,
                          GError **error);






  void (*passthrough) (GMarkupParseContext *context,
                          const gchar *passthrough_text,
                          gsize text_len,
                          gpointer user_data,
                          GError **error);




  void (*error) (GMarkupParseContext *context,
                          GError *error,
                          gpointer user_data);
};

GMarkupParseContext *g_markup_parse_context_new (const GMarkupParser *parser,
                                                   GMarkupParseFlags flags,
                                                   gpointer user_data,
                                                   GDestroyNotify user_data_dnotify);
void g_markup_parse_context_free (GMarkupParseContext *context);
gboolean g_markup_parse_context_parse (GMarkupParseContext *context,
                                                   const gchar *text,
                                                   gssize text_len,
                                                   GError **error);
void g_markup_parse_context_push (GMarkupParseContext *context,
                                                   GMarkupParser *parser,
                                                   gpointer user_data);
gpointer g_markup_parse_context_pop (GMarkupParseContext *context);

gboolean g_markup_parse_context_end_parse (GMarkupParseContext *context,
                                                       GError **error);
const gchar *g_markup_parse_context_get_element (GMarkupParseContext *context);
const GSList *g_markup_parse_context_get_element_stack (GMarkupParseContext *context);


void g_markup_parse_context_get_position (GMarkupParseContext *context,
                                                          gint *line_number,
                                                          gint *char_number);
gpointer g_markup_parse_context_get_user_data (GMarkupParseContext *context);


gchar* g_markup_escape_text (const gchar *text,
                             gssize length);

gchar *g_markup_printf_escaped (const char *format,
    ...) __attribute__((__format__ (__printf__, 1, 2)));
gchar *g_markup_vprintf_escaped (const char *format,
     va_list args);

typedef enum
{
  G_MARKUP_COLLECT_INVALID,
  G_MARKUP_COLLECT_STRING,
  G_MARKUP_COLLECT_STRDUP,
  G_MARKUP_COLLECT_BOOLEAN,
  G_MARKUP_COLLECT_TRISTATE,

  G_MARKUP_COLLECT_OPTIONAL = (1 << 16)
} GMarkupCollectType;



gboolean g_markup_collect_attributes (const gchar *element_name,
                                        const gchar **attribute_names,
                                        const gchar **attribute_values,
                                        GError **error,
                                        GMarkupCollectType first_type,
                                        const gchar *first_attr,
                                        ...);


# 59 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gmem.h" 1
# 60 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gmessages.h" 1
# 35 "/usr/include/glib-2.0/glib/gmessages.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 36 "/usr/include/glib-2.0/glib/gmessages.h" 2
# 1 "/usr/include/glib-2.0/glib/gmacros.h" 1
# 37 "/usr/include/glib-2.0/glib/gmessages.h" 2




       
# 42 "/usr/include/glib-2.0/glib/gmessages.h" 3






gsize g_printf_string_upper_bound (const gchar* format,
         va_list args);
# 58 "/usr/include/glib-2.0/glib/gmessages.h" 3
typedef enum
{

  G_LOG_FLAG_RECURSION = 1 << 0,
  G_LOG_FLAG_FATAL = 1 << 1,


  G_LOG_LEVEL_ERROR = 1 << 2,
  G_LOG_LEVEL_CRITICAL = 1 << 3,
  G_LOG_LEVEL_WARNING = 1 << 4,
  G_LOG_LEVEL_MESSAGE = 1 << 5,
  G_LOG_LEVEL_INFO = 1 << 6,
  G_LOG_LEVEL_DEBUG = 1 << 7,

  G_LOG_LEVEL_MASK = ~(G_LOG_FLAG_RECURSION | G_LOG_FLAG_FATAL)
} GLogLevelFlags;




typedef void (*GLogFunc) (const gchar *log_domain,
                                                 GLogLevelFlags log_level,
                                                 const gchar *message,
                                                 gpointer user_data);



guint g_log_set_handler (const gchar *log_domain,
                                         GLogLevelFlags log_levels,
                                         GLogFunc log_func,
                                         gpointer user_data);
void g_log_remove_handler (const gchar *log_domain,
                                         guint handler_id);
void g_log_default_handler (const gchar *log_domain,
                                         GLogLevelFlags log_level,
                                         const gchar *message,
                                         gpointer unused_data);
GLogFunc g_log_set_default_handler (GLogFunc log_func,
        gpointer user_data);
void g_log (const gchar *log_domain,
                                         GLogLevelFlags log_level,
                                         const gchar *format,
                                         ...) __attribute__((__format__ (__printf__, 3, 4)));
void g_logv (const gchar *log_domain,
                                         GLogLevelFlags log_level,
                                         const gchar *format,
                                         va_list args);
GLogLevelFlags g_log_set_fatal_mask (const gchar *log_domain,
                                         GLogLevelFlags fatal_mask);
GLogLevelFlags g_log_set_always_fatal (GLogLevelFlags fatal_mask);


__attribute__((visibility("hidden"))) void _g_log_fallback_handler (const gchar *log_domain,
       GLogLevelFlags log_level,
       const gchar *message,
       gpointer unused_data);


void g_return_if_fail_warning (const char *log_domain,
          const char *pretty_function,
          const char *expression);
void g_warn_message (const char *domain,
                               const char *file,
                               int line,
                               const char *func,
                               const char *warnexpr);

void g_assert_warning (const char *log_domain,
          const char *file,
          const int line,
                 const char *pretty_function,
                 const char *expression) __attribute__((__noreturn__));
# 229 "/usr/include/glib-2.0/glib/gmessages.h" 3
typedef void (*GPrintFunc) (const gchar *string);
void g_print (const gchar *format,
                                         ...) __attribute__((__format__ (__printf__, 1, 2)));
GPrintFunc g_set_print_handler (GPrintFunc func);
void g_printerr (const gchar *format,
                                         ...) __attribute__((__format__ (__printf__, 1, 2)));
GPrintFunc g_set_printerr_handler (GPrintFunc func);
# 341 "/usr/include/glib-2.0/glib/gmessages.h" 3

# 61 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gnode.h" 1
# 34 "/usr/include/glib-2.0/glib/gnode.h"
# 1 "/usr/include/glib-2.0/glib/gmem.h" 1
# 35 "/usr/include/glib-2.0/glib/gnode.h" 2



typedef struct _GNode GNode;


typedef enum
{
  G_TRAVERSE_LEAVES = 1 << 0,
  G_TRAVERSE_NON_LEAVES = 1 << 1,
  G_TRAVERSE_ALL = G_TRAVERSE_LEAVES | G_TRAVERSE_NON_LEAVES,
  G_TRAVERSE_MASK = 0x03,
  G_TRAVERSE_LEAFS = G_TRAVERSE_LEAVES,
  G_TRAVERSE_NON_LEAFS = G_TRAVERSE_NON_LEAVES
} GTraverseFlags;


typedef enum
{
  G_IN_ORDER,
  G_PRE_ORDER,
  G_POST_ORDER,
  G_LEVEL_ORDER
} GTraverseType;

typedef gboolean (*GNodeTraverseFunc) (GNode *node,
       gpointer data);
typedef void (*GNodeForeachFunc) (GNode *node,
       gpointer data);
# 77 "/usr/include/glib-2.0/glib/gnode.h"
typedef gpointer (*GCopyFunc) (gconstpointer src,
                                                 gpointer data);



struct _GNode
{
  gpointer data;
  GNode *next;
  GNode *prev;
  GNode *parent;
  GNode *children;
};
# 115 "/usr/include/glib-2.0/glib/gnode.h"
GNode* g_node_new (gpointer data);
void g_node_destroy (GNode *root);
void g_node_unlink (GNode *node);
GNode* g_node_copy_deep (GNode *node,
     GCopyFunc copy_func,
     gpointer data);
GNode* g_node_copy (GNode *node);
GNode* g_node_insert (GNode *parent,
     gint position,
     GNode *node);
GNode* g_node_insert_before (GNode *parent,
     GNode *sibling,
     GNode *node);
GNode* g_node_insert_after (GNode *parent,
     GNode *sibling,
     GNode *node);
GNode* g_node_prepend (GNode *parent,
     GNode *node);
guint g_node_n_nodes (GNode *root,
     GTraverseFlags flags);
GNode* g_node_get_root (GNode *node);
gboolean g_node_is_ancestor (GNode *node,
     GNode *descendant);
guint g_node_depth (GNode *node);
GNode* g_node_find (GNode *root,
     GTraverseType order,
     GTraverseFlags flags,
     gpointer data);
# 213 "/usr/include/glib-2.0/glib/gnode.h"
void g_node_traverse (GNode *root,
     GTraverseType order,
     GTraverseFlags flags,
     gint max_depth,
     GNodeTraverseFunc func,
     gpointer data);






guint g_node_max_height (GNode *root);

void g_node_children_foreach (GNode *node,
      GTraverseFlags flags,
      GNodeForeachFunc func,
      gpointer data);
void g_node_reverse_children (GNode *node);
guint g_node_n_children (GNode *node);
GNode* g_node_nth_child (GNode *node,
      guint n);
GNode* g_node_last_child (GNode *node);
GNode* g_node_find_child (GNode *node,
      GTraverseFlags flags,
      gpointer data);
gint g_node_child_position (GNode *node,
      GNode *child);
gint g_node_child_index (GNode *node,
      gpointer data);

GNode* g_node_first_sibling (GNode *node);
GNode* g_node_last_sibling (GNode *node);
# 282 "/usr/include/glib-2.0/glib/gnode.h"
void g_node_push_allocator (gpointer dummy);
void g_node_pop_allocator (void);



# 62 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/goption.h" 1
# 28 "/usr/include/glib-2.0/glib/goption.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 29 "/usr/include/glib-2.0/glib/goption.h" 2
# 1 "/usr/include/glib-2.0/glib/gquark.h" 1
# 30 "/usr/include/glib-2.0/glib/goption.h" 2


# 40 "/usr/include/glib-2.0/glib/goption.h"
typedef struct _GOptionContext GOptionContext;
# 53 "/usr/include/glib-2.0/glib/goption.h"
typedef struct _GOptionGroup GOptionGroup;
typedef struct _GOptionEntry GOptionEntry;
# 82 "/usr/include/glib-2.0/glib/goption.h"
typedef enum
{
  G_OPTION_FLAG_HIDDEN = 1 << 0,
  G_OPTION_FLAG_IN_MAIN = 1 << 1,
  G_OPTION_FLAG_REVERSE = 1 << 2,
  G_OPTION_FLAG_NO_ARG = 1 << 3,
  G_OPTION_FLAG_FILENAME = 1 << 4,
  G_OPTION_FLAG_OPTIONAL_ARG = 1 << 5,
  G_OPTION_FLAG_NOALIAS = 1 << 6
} GOptionFlags;
# 118 "/usr/include/glib-2.0/glib/goption.h"
typedef enum
{
  G_OPTION_ARG_NONE,
  G_OPTION_ARG_STRING,
  G_OPTION_ARG_INT,
  G_OPTION_ARG_CALLBACK,
  G_OPTION_ARG_FILENAME,
  G_OPTION_ARG_STRING_ARRAY,
  G_OPTION_ARG_FILENAME_ARRAY,
  G_OPTION_ARG_DOUBLE,
  G_OPTION_ARG_INT64
} GOptionArg;
# 148 "/usr/include/glib-2.0/glib/goption.h"
typedef gboolean (*GOptionArgFunc) (const gchar *option_name,
        const gchar *value,
        gpointer data,
        GError **error);
# 166 "/usr/include/glib-2.0/glib/goption.h"
typedef gboolean (*GOptionParseFunc) (GOptionContext *context,
          GOptionGroup *group,
          gpointer data,
          GError **error);
# 181 "/usr/include/glib-2.0/glib/goption.h"
typedef void (*GOptionErrorFunc) (GOptionContext *context,
      GOptionGroup *group,
      gpointer data,
      GError **error);
# 205 "/usr/include/glib-2.0/glib/goption.h"
typedef enum
{
  G_OPTION_ERROR_UNKNOWN_OPTION,
  G_OPTION_ERROR_BAD_VALUE,
  G_OPTION_ERROR_FAILED
} GOptionError;

GQuark g_option_error_quark (void);
# 279 "/usr/include/glib-2.0/glib/goption.h"
struct _GOptionEntry
{
  const gchar *long_name;
  gchar short_name;
  gint flags;

  GOptionArg arg;
  gpointer arg_data;

  const gchar *description;
  const gchar *arg_description;
};
# 310 "/usr/include/glib-2.0/glib/goption.h"
GOptionContext *g_option_context_new (const gchar *parameter_string);
void g_option_context_set_summary (GOptionContext *context,
                                                   const gchar *summary);
const gchar *g_option_context_get_summary (GOptionContext *context);
void g_option_context_set_description (GOptionContext *context,
                                                   const gchar *description);
const gchar *g_option_context_get_description (GOptionContext *context);
void g_option_context_free (GOptionContext *context);
void g_option_context_set_help_enabled (GOptionContext *context,
         gboolean help_enabled);
gboolean g_option_context_get_help_enabled (GOptionContext *context);
void g_option_context_set_ignore_unknown_options (GOptionContext *context,
            gboolean ignore_unknown);
gboolean g_option_context_get_ignore_unknown_options (GOptionContext *context);

void g_option_context_add_main_entries (GOptionContext *context,
         const GOptionEntry *entries,
         const gchar *translation_domain);
gboolean g_option_context_parse (GOptionContext *context,
         gint *argc,
         gchar ***argv,
         GError **error);
void g_option_context_set_translate_func (GOptionContext *context,
           GTranslateFunc func,
           gpointer data,
           GDestroyNotify destroy_notify);
void g_option_context_set_translation_domain (GOptionContext *context,
        const gchar *domain);

void g_option_context_add_group (GOptionContext *context,
       GOptionGroup *group);
void g_option_context_set_main_group (GOptionContext *context,
            GOptionGroup *group);
GOptionGroup *g_option_context_get_main_group (GOptionContext *context);
gchar *g_option_context_get_help (GOptionContext *context,
                                               gboolean main_help,
                                               GOptionGroup *group);

GOptionGroup *g_option_group_new (const gchar *name,
           const gchar *description,
           const gchar *help_description,
           gpointer user_data,
           GDestroyNotify destroy);
void g_option_group_set_parse_hooks (GOptionGroup *group,
           GOptionParseFunc pre_parse_func,
           GOptionParseFunc post_parse_func);
void g_option_group_set_error_hook (GOptionGroup *group,
           GOptionErrorFunc error_func);
void g_option_group_free (GOptionGroup *group);
void g_option_group_add_entries (GOptionGroup *group,
           const GOptionEntry *entries);
void g_option_group_set_translate_func (GOptionGroup *group,
           GTranslateFunc func,
           gpointer data,
           GDestroyNotify destroy_notify);
void g_option_group_set_translation_domain (GOptionGroup *group,
           const gchar *domain);


# 63 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gpattern.h" 1
# 27 "/usr/include/glib-2.0/glib/gpattern.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 28 "/usr/include/glib-2.0/glib/gpattern.h" 2




typedef struct _GPatternSpec GPatternSpec;

GPatternSpec* g_pattern_spec_new (const gchar *pattern);
void g_pattern_spec_free (GPatternSpec *pspec);
gboolean g_pattern_spec_equal (GPatternSpec *pspec1,
     GPatternSpec *pspec2);
gboolean g_pattern_match (GPatternSpec *pspec,
     guint string_length,
     const gchar *string,
     const gchar *string_reversed);
gboolean g_pattern_match_string (GPatternSpec *pspec,
     const gchar *string);
gboolean g_pattern_match_simple (const gchar *pattern,
     const gchar *string);


# 64 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gpoll.h" 1
# 65 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gprimes.h" 1
# 34 "/usr/include/glib-2.0/glib/gprimes.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/gprimes.h" 2


# 47 "/usr/include/glib-2.0/glib/gprimes.h"
guint g_spaced_primes_closest (guint num) __attribute__((__const__));


# 66 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gqsort.h" 1
# 34 "/usr/include/glib-2.0/glib/gqsort.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/gqsort.h" 2



void g_qsort_with_data (gconstpointer pbase,
   gint total_elems,
   gsize size,
   GCompareDataFunc compare_func,
   gpointer user_data);


# 67 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gquark.h" 1
# 68 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gqueue.h" 1
# 34 "/usr/include/glib-2.0/glib/gqueue.h"
# 1 "/usr/include/glib-2.0/glib/glist.h" 1
# 35 "/usr/include/glib-2.0/glib/gqueue.h" 2



typedef struct _GQueue GQueue;

struct _GQueue
{
  GList *head;
  GList *tail;
  guint length;
};





GQueue* g_queue_new (void);
void g_queue_free (GQueue *queue);
void g_queue_init (GQueue *queue);
void g_queue_clear (GQueue *queue);
gboolean g_queue_is_empty (GQueue *queue);
guint g_queue_get_length (GQueue *queue);
void g_queue_reverse (GQueue *queue);
GQueue * g_queue_copy (GQueue *queue);
void g_queue_foreach (GQueue *queue,
     GFunc func,
     gpointer user_data);
GList * g_queue_find (GQueue *queue,
     gconstpointer data);
GList * g_queue_find_custom (GQueue *queue,
     gconstpointer data,
     GCompareFunc func);
void g_queue_sort (GQueue *queue,
     GCompareDataFunc compare_func,
     gpointer user_data);

void g_queue_push_head (GQueue *queue,
     gpointer data);
void g_queue_push_tail (GQueue *queue,
     gpointer data);
void g_queue_push_nth (GQueue *queue,
     gpointer data,
     gint n);
gpointer g_queue_pop_head (GQueue *queue);
gpointer g_queue_pop_tail (GQueue *queue);
gpointer g_queue_pop_nth (GQueue *queue,
     guint n);
gpointer g_queue_peek_head (GQueue *queue);
gpointer g_queue_peek_tail (GQueue *queue);
gpointer g_queue_peek_nth (GQueue *queue,
     guint n);
gint g_queue_index (GQueue *queue,
     gconstpointer data);
void g_queue_remove (GQueue *queue,
     gconstpointer data);
void g_queue_remove_all (GQueue *queue,
     gconstpointer data);
void g_queue_insert_before (GQueue *queue,
     GList *sibling,
     gpointer data);
void g_queue_insert_after (GQueue *queue,
     GList *sibling,
     gpointer data);
void g_queue_insert_sorted (GQueue *queue,
     gpointer data,
     GCompareDataFunc func,
     gpointer user_data);

void g_queue_push_head_link (GQueue *queue,
     GList *link_);
void g_queue_push_tail_link (GQueue *queue,
     GList *link_);
void g_queue_push_nth_link (GQueue *queue,
     gint n,
     GList *link_);
GList* g_queue_pop_head_link (GQueue *queue);
GList* g_queue_pop_tail_link (GQueue *queue);
GList* g_queue_pop_nth_link (GQueue *queue,
     guint n);
GList* g_queue_peek_head_link (GQueue *queue);
GList* g_queue_peek_tail_link (GQueue *queue);
GList* g_queue_peek_nth_link (GQueue *queue,
     guint n);
gint g_queue_link_index (GQueue *queue,
     GList *link_);
void g_queue_unlink (GQueue *queue,
     GList *link_);
void g_queue_delete_link (GQueue *queue,
     GList *link_);


# 69 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/grand.h" 1
# 34 "/usr/include/glib-2.0/glib/grand.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/grand.h" 2



typedef struct _GRand GRand;
# 49 "/usr/include/glib-2.0/glib/grand.h"
GRand* g_rand_new_with_seed (guint32 seed);
GRand* g_rand_new_with_seed_array (const guint32 *seed,
        guint seed_length);
GRand* g_rand_new (void);
void g_rand_free (GRand *rand_);
GRand* g_rand_copy (GRand *rand_);
void g_rand_set_seed (GRand *rand_,
          guint32 seed);
void g_rand_set_seed_array (GRand *rand_,
          const guint32 *seed,
          guint seed_length);



guint32 g_rand_int (GRand *rand_);
gint32 g_rand_int_range (GRand *rand_,
          gint32 begin,
          gint32 end);
gdouble g_rand_double (GRand *rand_);
gdouble g_rand_double_range (GRand *rand_,
          gdouble begin,
          gdouble end);
void g_random_set_seed (guint32 seed);



guint32 g_random_int (void);
gint32 g_random_int_range (gint32 begin,
          gint32 end);
gdouble g_random_double (void);
gdouble g_random_double_range (gdouble begin,
          gdouble end);



# 70 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/grel.h" 1
# 34 "/usr/include/glib-2.0/glib/grel.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/grel.h" 2



typedef struct _GRelation GRelation;
typedef struct _GTuples GTuples;

struct _GTuples
{
  guint len;
};
# 69 "/usr/include/glib-2.0/glib/grel.h"
GRelation* g_relation_new (gint fields);
void g_relation_destroy (GRelation *relation);
void g_relation_index (GRelation *relation,
                               gint field,
                               GHashFunc hash_func,
                               GEqualFunc key_equal_func);
void g_relation_insert (GRelation *relation,
                               ...);
gint g_relation_delete (GRelation *relation,
                               gconstpointer key,
                               gint field);
GTuples* g_relation_select (GRelation *relation,
                               gconstpointer key,
                               gint field);
gint g_relation_count (GRelation *relation,
                               gconstpointer key,
                               gint field);
gboolean g_relation_exists (GRelation *relation,
                               ...);
void g_relation_print (GRelation *relation);

void g_tuples_destroy (GTuples *tuples);
gpointer g_tuples_index (GTuples *tuples,
                               gint index_,
                               gint field);


# 71 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gregex.h" 1
# 29 "/usr/include/glib-2.0/glib/gregex.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 30 "/usr/include/glib-2.0/glib/gregex.h" 2
# 1 "/usr/include/glib-2.0/glib/gstring.h" 1
# 31 "/usr/include/glib-2.0/glib/gregex.h" 2



typedef enum
{
  G_REGEX_ERROR_COMPILE,
  G_REGEX_ERROR_OPTIMIZE,
  G_REGEX_ERROR_REPLACE,
  G_REGEX_ERROR_MATCH,
  G_REGEX_ERROR_INTERNAL,


  G_REGEX_ERROR_STRAY_BACKSLASH = 101,
  G_REGEX_ERROR_MISSING_CONTROL_CHAR = 102,
  G_REGEX_ERROR_UNRECOGNIZED_ESCAPE = 103,
  G_REGEX_ERROR_QUANTIFIERS_OUT_OF_ORDER = 104,
  G_REGEX_ERROR_QUANTIFIER_TOO_BIG = 105,
  G_REGEX_ERROR_UNTERMINATED_CHARACTER_CLASS = 106,
  G_REGEX_ERROR_INVALID_ESCAPE_IN_CHARACTER_CLASS = 107,
  G_REGEX_ERROR_RANGE_OUT_OF_ORDER = 108,
  G_REGEX_ERROR_NOTHING_TO_REPEAT = 109,
  G_REGEX_ERROR_UNRECOGNIZED_CHARACTER = 112,
  G_REGEX_ERROR_POSIX_NAMED_CLASS_OUTSIDE_CLASS = 113,
  G_REGEX_ERROR_UNMATCHED_PARENTHESIS = 114,
  G_REGEX_ERROR_INEXISTENT_SUBPATTERN_REFERENCE = 115,
  G_REGEX_ERROR_UNTERMINATED_COMMENT = 118,
  G_REGEX_ERROR_EXPRESSION_TOO_LARGE = 120,
  G_REGEX_ERROR_MEMORY_ERROR = 121,
  G_REGEX_ERROR_VARIABLE_LENGTH_LOOKBEHIND = 125,
  G_REGEX_ERROR_MALFORMED_CONDITION = 126,
  G_REGEX_ERROR_TOO_MANY_CONDITIONAL_BRANCHES = 127,
  G_REGEX_ERROR_ASSERTION_EXPECTED = 128,
  G_REGEX_ERROR_UNKNOWN_POSIX_CLASS_NAME = 130,
  G_REGEX_ERROR_POSIX_COLLATING_ELEMENTS_NOT_SUPPORTED = 131,
  G_REGEX_ERROR_HEX_CODE_TOO_LARGE = 134,
  G_REGEX_ERROR_INVALID_CONDITION = 135,
  G_REGEX_ERROR_SINGLE_BYTE_MATCH_IN_LOOKBEHIND = 136,
  G_REGEX_ERROR_INFINITE_LOOP = 140,
  G_REGEX_ERROR_MISSING_SUBPATTERN_NAME_TERMINATOR = 142,
  G_REGEX_ERROR_DUPLICATE_SUBPATTERN_NAME = 143,
  G_REGEX_ERROR_MALFORMED_PROPERTY = 146,
  G_REGEX_ERROR_UNKNOWN_PROPERTY = 147,
  G_REGEX_ERROR_SUBPATTERN_NAME_TOO_LONG = 148,
  G_REGEX_ERROR_TOO_MANY_SUBPATTERNS = 149,
  G_REGEX_ERROR_INVALID_OCTAL_VALUE = 151,
  G_REGEX_ERROR_TOO_MANY_BRANCHES_IN_DEFINE = 154,
  G_REGEX_ERROR_DEFINE_REPETION = 155,
  G_REGEX_ERROR_INCONSISTENT_NEWLINE_OPTIONS = 156,
  G_REGEX_ERROR_MISSING_BACK_REFERENCE = 157
} GRegexError;



GQuark g_regex_error_quark (void);



typedef enum
{
  G_REGEX_CASELESS = 1 << 0,
  G_REGEX_MULTILINE = 1 << 1,
  G_REGEX_DOTALL = 1 << 2,
  G_REGEX_EXTENDED = 1 << 3,
  G_REGEX_ANCHORED = 1 << 4,
  G_REGEX_DOLLAR_ENDONLY = 1 << 5,
  G_REGEX_UNGREEDY = 1 << 9,
  G_REGEX_RAW = 1 << 11,
  G_REGEX_NO_AUTO_CAPTURE = 1 << 12,
  G_REGEX_OPTIMIZE = 1 << 13,
  G_REGEX_DUPNAMES = 1 << 19,
  G_REGEX_NEWLINE_CR = 1 << 20,
  G_REGEX_NEWLINE_LF = 1 << 21,
  G_REGEX_NEWLINE_CRLF = G_REGEX_NEWLINE_CR | G_REGEX_NEWLINE_LF
} GRegexCompileFlags;



typedef enum
{
  G_REGEX_MATCH_ANCHORED = 1 << 4,
  G_REGEX_MATCH_NOTBOL = 1 << 7,
  G_REGEX_MATCH_NOTEOL = 1 << 8,
  G_REGEX_MATCH_NOTEMPTY = 1 << 10,
  G_REGEX_MATCH_PARTIAL = 1 << 15,
  G_REGEX_MATCH_NEWLINE_CR = 1 << 20,
  G_REGEX_MATCH_NEWLINE_LF = 1 << 21,
  G_REGEX_MATCH_NEWLINE_CRLF = G_REGEX_MATCH_NEWLINE_CR | G_REGEX_MATCH_NEWLINE_LF,
  G_REGEX_MATCH_NEWLINE_ANY = 1 << 22
} GRegexMatchFlags;

typedef struct _GRegex GRegex;
typedef struct _GMatchInfo GMatchInfo;

typedef gboolean (*GRegexEvalCallback) (const GMatchInfo *match_info,
       GString *result,
       gpointer user_data);


GRegex *g_regex_new (const gchar *pattern,
       GRegexCompileFlags compile_options,
       GRegexMatchFlags match_options,
       GError **error);
GRegex *g_regex_ref (GRegex *regex);
void g_regex_unref (GRegex *regex);
const gchar *g_regex_get_pattern (const GRegex *regex);
gint g_regex_get_max_backref (const GRegex *regex);
gint g_regex_get_capture_count (const GRegex *regex);
gint g_regex_get_string_number (const GRegex *regex,
       const gchar *name);
gchar *g_regex_escape_string (const gchar *string,
       gint length);


gboolean g_regex_match_simple (const gchar *pattern,
       const gchar *string,
       GRegexCompileFlags compile_options,
       GRegexMatchFlags match_options);
gboolean g_regex_match (const GRegex *regex,
       const gchar *string,
       GRegexMatchFlags match_options,
       GMatchInfo **match_info);
gboolean g_regex_match_full (const GRegex *regex,
       const gchar *string,
       gssize string_len,
       gint start_position,
       GRegexMatchFlags match_options,
       GMatchInfo **match_info,
       GError **error);
gboolean g_regex_match_all (const GRegex *regex,
       const gchar *string,
       GRegexMatchFlags match_options,
       GMatchInfo **match_info);
gboolean g_regex_match_all_full (const GRegex *regex,
       const gchar *string,
       gssize string_len,
       gint start_position,
       GRegexMatchFlags match_options,
       GMatchInfo **match_info,
       GError **error);


gchar **g_regex_split_simple (const gchar *pattern,
       const gchar *string,
       GRegexCompileFlags compile_options,
       GRegexMatchFlags match_options);
gchar **g_regex_split (const GRegex *regex,
       const gchar *string,
       GRegexMatchFlags match_options);
gchar **g_regex_split_full (const GRegex *regex,
       const gchar *string,
       gssize string_len,
       gint start_position,
       GRegexMatchFlags match_options,
       gint max_tokens,
       GError **error);


gchar *g_regex_replace (const GRegex *regex,
       const gchar *string,
       gssize string_len,
       gint start_position,
       const gchar *replacement,
       GRegexMatchFlags match_options,
       GError **error);
gchar *g_regex_replace_literal (const GRegex *regex,
       const gchar *string,
       gssize string_len,
       gint start_position,
       const gchar *replacement,
       GRegexMatchFlags match_options,
       GError **error);
gchar *g_regex_replace_eval (const GRegex *regex,
       const gchar *string,
       gssize string_len,
       gint start_position,
       GRegexMatchFlags match_options,
       GRegexEvalCallback eval,
       gpointer user_data,
       GError **error);
gboolean g_regex_check_replacement (const gchar *replacement,
       gboolean *has_references,
       GError **error);


GRegex *g_match_info_get_regex (const GMatchInfo *match_info);
const gchar *g_match_info_get_string (const GMatchInfo *match_info);

void g_match_info_free (GMatchInfo *match_info);
gboolean g_match_info_next (GMatchInfo *match_info,
       GError **error);
gboolean g_match_info_matches (const GMatchInfo *match_info);
gint g_match_info_get_match_count (const GMatchInfo *match_info);
gboolean g_match_info_is_partial_match (const GMatchInfo *match_info);
gchar *g_match_info_expand_references(const GMatchInfo *match_info,
       const gchar *string_to_expand,
       GError **error);
gchar *g_match_info_fetch (const GMatchInfo *match_info,
       gint match_num);
gboolean g_match_info_fetch_pos (const GMatchInfo *match_info,
       gint match_num,
       gint *start_pos,
       gint *end_pos);
gchar *g_match_info_fetch_named (const GMatchInfo *match_info,
       const gchar *name);
gboolean g_match_info_fetch_named_pos (const GMatchInfo *match_info,
       const gchar *name,
       gint *start_pos,
       gint *end_pos);
gchar **g_match_info_fetch_all (const GMatchInfo *match_info);


# 72 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gscanner.h" 1
# 34 "/usr/include/glib-2.0/glib/gscanner.h"
# 1 "/usr/include/glib-2.0/glib/gdataset.h" 1
# 35 "/usr/include/glib-2.0/glib/gscanner.h" 2
# 1 "/usr/include/glib-2.0/glib/ghash.h" 1
# 36 "/usr/include/glib-2.0/glib/gscanner.h" 2



typedef struct _GScanner GScanner;
typedef struct _GScannerConfig GScannerConfig;
typedef union _GTokenValue GTokenValue;

typedef void (*GScannerMsgFunc) (GScanner *scanner,
       gchar *message,
       gboolean error);
# 64 "/usr/include/glib-2.0/glib/gscanner.h"
typedef enum
{
  G_ERR_UNKNOWN,
  G_ERR_UNEXP_EOF,
  G_ERR_UNEXP_EOF_IN_STRING,
  G_ERR_UNEXP_EOF_IN_COMMENT,
  G_ERR_NON_DIGIT_IN_CONST,
  G_ERR_DIGIT_RADIX,
  G_ERR_FLOAT_RADIX,
  G_ERR_FLOAT_MALFORMED
} GErrorType;


typedef enum
{
  G_TOKEN_EOF = 0,

  G_TOKEN_LEFT_PAREN = '(',
  G_TOKEN_RIGHT_PAREN = ')',
  G_TOKEN_LEFT_CURLY = '{',
  G_TOKEN_RIGHT_CURLY = '}',
  G_TOKEN_LEFT_BRACE = '[',
  G_TOKEN_RIGHT_BRACE = ']',
  G_TOKEN_EQUAL_SIGN = '=',
  G_TOKEN_COMMA = ',',

  G_TOKEN_NONE = 256,

  G_TOKEN_ERROR,

  G_TOKEN_CHAR,
  G_TOKEN_BINARY,
  G_TOKEN_OCTAL,
  G_TOKEN_INT,
  G_TOKEN_HEX,
  G_TOKEN_FLOAT,
  G_TOKEN_STRING,

  G_TOKEN_SYMBOL,
  G_TOKEN_IDENTIFIER,
  G_TOKEN_IDENTIFIER_NULL,

  G_TOKEN_COMMENT_SINGLE,
  G_TOKEN_COMMENT_MULTI,
  G_TOKEN_LAST
} GTokenType;

union _GTokenValue
{
  gpointer v_symbol;
  gchar *v_identifier;
  gulong v_binary;
  gulong v_octal;
  gulong v_int;
  guint64 v_int64;
  gdouble v_float;
  gulong v_hex;
  gchar *v_string;
  gchar *v_comment;
  guchar v_char;
  guint v_error;
};

struct _GScannerConfig
{


  gchar *cset_skip_characters;
  gchar *cset_identifier_first;
  gchar *cset_identifier_nth;
  gchar *cpair_comment_single;



  guint case_sensitive : 1;




  guint skip_comment_multi : 1;
  guint skip_comment_single : 1;
  guint scan_comment_multi : 1;
  guint scan_identifier : 1;
  guint scan_identifier_1char : 1;
  guint scan_identifier_NULL : 1;
  guint scan_symbols : 1;
  guint scan_binary : 1;
  guint scan_octal : 1;
  guint scan_float : 1;
  guint scan_hex : 1;
  guint scan_hex_dollar : 1;
  guint scan_string_sq : 1;
  guint scan_string_dq : 1;
  guint numbers_2_int : 1;
  guint int_2_float : 1;
  guint identifier_2_string : 1;
  guint char_2_token : 1;
  guint symbol_2_token : 1;
  guint scope_0_fallback : 1;
  guint store_int64 : 1;
  guint padding_dummy;
};

struct _GScanner
{

  gpointer user_data;
  guint max_parse_errors;


  guint parse_errors;


  const gchar *input_name;


  GData *qdata;


  GScannerConfig *config;


  GTokenType token;
  GTokenValue value;
  guint line;
  guint position;


  GTokenType next_token;
  GTokenValue next_value;
  guint next_line;
  guint next_position;


  GHashTable *symbol_table;
  gint input_fd;
  const gchar *text;
  const gchar *text_end;
  gchar *buffer;
  guint scope_id;


  GScannerMsgFunc msg_handler;
};

GScanner* g_scanner_new (const GScannerConfig *config_templ);
void g_scanner_destroy (GScanner *scanner);
void g_scanner_input_file (GScanner *scanner,
       gint input_fd);
void g_scanner_sync_file_offset (GScanner *scanner);
void g_scanner_input_text (GScanner *scanner,
       const gchar *text,
       guint text_len);
GTokenType g_scanner_get_next_token (GScanner *scanner);
GTokenType g_scanner_peek_next_token (GScanner *scanner);
GTokenType g_scanner_cur_token (GScanner *scanner);
GTokenValue g_scanner_cur_value (GScanner *scanner);
guint g_scanner_cur_line (GScanner *scanner);
guint g_scanner_cur_position (GScanner *scanner);
gboolean g_scanner_eof (GScanner *scanner);
guint g_scanner_set_scope (GScanner *scanner,
       guint scope_id);
void g_scanner_scope_add_symbol (GScanner *scanner,
       guint scope_id,
       const gchar *symbol,
       gpointer value);
void g_scanner_scope_remove_symbol (GScanner *scanner,
       guint scope_id,
       const gchar *symbol);
gpointer g_scanner_scope_lookup_symbol (GScanner *scanner,
       guint scope_id,
       const gchar *symbol);
void g_scanner_scope_foreach_symbol (GScanner *scanner,
       guint scope_id,
       GHFunc func,
       gpointer user_data);
gpointer g_scanner_lookup_symbol (GScanner *scanner,
       const gchar *symbol);
void g_scanner_unexp_token (GScanner *scanner,
       GTokenType expected_token,
       const gchar *identifier_spec,
       const gchar *symbol_spec,
       const gchar *symbol_name,
       const gchar *message,
       gint is_error);
void g_scanner_error (GScanner *scanner,
       const gchar *format,
       ...) __attribute__((__format__ (__printf__, 2, 3)));
void g_scanner_warn (GScanner *scanner,
       const gchar *format,
       ...) __attribute__((__format__ (__printf__, 2, 3)));
# 276 "/usr/include/glib-2.0/glib/gscanner.h"

# 73 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gsequence.h" 1
# 28 "/usr/include/glib-2.0/glib/gsequence.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 29 "/usr/include/glib-2.0/glib/gsequence.h" 2



typedef struct _GSequence GSequence;
typedef struct _GSequenceNode GSequenceIter;

typedef gint (* GSequenceIterCompareFunc) (GSequenceIter *a,
                                           GSequenceIter *b,
                                           gpointer data);



GSequence * g_sequence_new (GDestroyNotify data_destroy);
void g_sequence_free (GSequence *seq);
gint g_sequence_get_length (GSequence *seq);
void g_sequence_foreach (GSequence *seq,
                                              GFunc func,
                                              gpointer user_data);
void g_sequence_foreach_range (GSequenceIter *begin,
                                              GSequenceIter *end,
                                              GFunc func,
                                              gpointer user_data);
void g_sequence_sort (GSequence *seq,
                                              GCompareDataFunc cmp_func,
                                              gpointer cmp_data);
void g_sequence_sort_iter (GSequence *seq,
                                              GSequenceIterCompareFunc cmp_func,
                                              gpointer cmp_data);



GSequenceIter *g_sequence_get_begin_iter (GSequence *seq);
GSequenceIter *g_sequence_get_end_iter (GSequence *seq);
GSequenceIter *g_sequence_get_iter_at_pos (GSequence *seq,
                                              gint pos);
GSequenceIter *g_sequence_append (GSequence *seq,
                                              gpointer data);
GSequenceIter *g_sequence_prepend (GSequence *seq,
                                              gpointer data);
GSequenceIter *g_sequence_insert_before (GSequenceIter *iter,
                                              gpointer data);
void g_sequence_move (GSequenceIter *src,
                                              GSequenceIter *dest);
void g_sequence_swap (GSequenceIter *a,
                                              GSequenceIter *b);
GSequenceIter *g_sequence_insert_sorted (GSequence *seq,
                                              gpointer data,
                                              GCompareDataFunc cmp_func,
                                              gpointer cmp_data);
GSequenceIter *g_sequence_insert_sorted_iter (GSequence *seq,
                                              gpointer data,
                                              GSequenceIterCompareFunc iter_cmp,
                                              gpointer cmp_data);
void g_sequence_sort_changed (GSequenceIter *iter,
                                              GCompareDataFunc cmp_func,
                                              gpointer cmp_data);
void g_sequence_sort_changed_iter (GSequenceIter *iter,
                                              GSequenceIterCompareFunc iter_cmp,
                                              gpointer cmp_data);
void g_sequence_remove (GSequenceIter *iter);
void g_sequence_remove_range (GSequenceIter *begin,
                                              GSequenceIter *end);
void g_sequence_move_range (GSequenceIter *dest,
                                              GSequenceIter *begin,
                                              GSequenceIter *end);
GSequenceIter *g_sequence_search (GSequence *seq,
                                              gpointer data,
                                              GCompareDataFunc cmp_func,
                                              gpointer cmp_data);
GSequenceIter *g_sequence_search_iter (GSequence *seq,
                                              gpointer data,
                                              GSequenceIterCompareFunc iter_cmp,
                                              gpointer cmp_data);



gpointer g_sequence_get (GSequenceIter *iter);
void g_sequence_set (GSequenceIter *iter,
                                              gpointer data);


gboolean g_sequence_iter_is_begin (GSequenceIter *iter);
gboolean g_sequence_iter_is_end (GSequenceIter *iter);
GSequenceIter *g_sequence_iter_next (GSequenceIter *iter);
GSequenceIter *g_sequence_iter_prev (GSequenceIter *iter);
gint g_sequence_iter_get_position (GSequenceIter *iter);
GSequenceIter *g_sequence_iter_move (GSequenceIter *iter,
                                              gint delta);
GSequence * g_sequence_iter_get_sequence (GSequenceIter *iter);



gint g_sequence_iter_compare (GSequenceIter *a,
                                              GSequenceIter *b);
GSequenceIter *g_sequence_range_get_midpoint (GSequenceIter *begin,
                                              GSequenceIter *end);


# 74 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gshell.h" 1
# 28 "/usr/include/glib-2.0/glib/gshell.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 29 "/usr/include/glib-2.0/glib/gshell.h" 2





typedef enum
{

  G_SHELL_ERROR_BAD_QUOTING,

  G_SHELL_ERROR_EMPTY_STRING,
  G_SHELL_ERROR_FAILED
} GShellError;

GQuark g_shell_error_quark (void);

gchar* g_shell_quote (const gchar *unquoted_string);
gchar* g_shell_unquote (const gchar *quoted_string,
                             GError **error);
gboolean g_shell_parse_argv (const gchar *command_line,
                             gint *argcp,
                             gchar ***argvp,
                             GError **error);


# 75 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gslice.h" 1
# 76 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gslist.h" 1
# 77 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gspawn.h" 1
# 28 "/usr/include/glib-2.0/glib/gspawn.h"
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 29 "/usr/include/glib-2.0/glib/gspawn.h" 2






typedef enum
{
  G_SPAWN_ERROR_FORK,
  G_SPAWN_ERROR_READ,
  G_SPAWN_ERROR_CHDIR,
  G_SPAWN_ERROR_ACCES,
  G_SPAWN_ERROR_PERM,
  G_SPAWN_ERROR_2BIG,
  G_SPAWN_ERROR_NOEXEC,
  G_SPAWN_ERROR_NAMETOOLONG,
  G_SPAWN_ERROR_NOENT,
  G_SPAWN_ERROR_NOMEM,
  G_SPAWN_ERROR_NOTDIR,
  G_SPAWN_ERROR_LOOP,
  G_SPAWN_ERROR_TXTBUSY,
  G_SPAWN_ERROR_IO,
  G_SPAWN_ERROR_NFILE,
  G_SPAWN_ERROR_MFILE,
  G_SPAWN_ERROR_INVAL,
  G_SPAWN_ERROR_ISDIR,
  G_SPAWN_ERROR_LIBBAD,
  G_SPAWN_ERROR_FAILED


} GSpawnError;

typedef void (* GSpawnChildSetupFunc) (gpointer user_data);

typedef enum
{
  G_SPAWN_LEAVE_DESCRIPTORS_OPEN = 1 << 0,
  G_SPAWN_DO_NOT_REAP_CHILD = 1 << 1,

  G_SPAWN_SEARCH_PATH = 1 << 2,

  G_SPAWN_STDOUT_TO_DEV_NULL = 1 << 3,
  G_SPAWN_STDERR_TO_DEV_NULL = 1 << 4,
  G_SPAWN_CHILD_INHERITS_STDIN = 1 << 5,
  G_SPAWN_FILE_AND_ARGV_ZERO = 1 << 6
} GSpawnFlags;

GQuark g_spawn_error_quark (void);
# 86 "/usr/include/glib-2.0/glib/gspawn.h"
gboolean g_spawn_async (const gchar *working_directory,
                        gchar **argv,
                        gchar **envp,
                        GSpawnFlags flags,
                        GSpawnChildSetupFunc child_setup,
                        gpointer user_data,
                        GPid *child_pid,
                        GError **error);





gboolean g_spawn_async_with_pipes (const gchar *working_directory,
                                   gchar **argv,
                                   gchar **envp,
                                   GSpawnFlags flags,
                                   GSpawnChildSetupFunc child_setup,
                                   gpointer user_data,
                                   GPid *child_pid,
                                   gint *standard_input,
                                   gint *standard_output,
                                   gint *standard_error,
                                   GError **error);






gboolean g_spawn_sync (const gchar *working_directory,
                               gchar **argv,
                               gchar **envp,
                               GSpawnFlags flags,
                               GSpawnChildSetupFunc child_setup,
                               gpointer user_data,
                               gchar **standard_output,
                               gchar **standard_error,
                               gint *exit_status,
                               GError **error);

gboolean g_spawn_command_line_sync (const gchar *command_line,
                                     gchar **standard_output,
                                     gchar **standard_error,
                                     gint *exit_status,
                                     GError **error);
gboolean g_spawn_command_line_async (const gchar *command_line,
                                     GError **error);

void g_spawn_close_pid (GPid pid);


# 78 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gstrfuncs.h" 1
# 35 "/usr/include/glib-2.0/glib/gstrfuncs.h"
# 1 "/usr/include/glib-2.0/glib/gmacros.h" 1
# 36 "/usr/include/glib-2.0/glib/gstrfuncs.h" 2
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 37 "/usr/include/glib-2.0/glib/gstrfuncs.h" 2




typedef enum {
  G_ASCII_ALNUM = 1 << 0,
  G_ASCII_ALPHA = 1 << 1,
  G_ASCII_CNTRL = 1 << 2,
  G_ASCII_DIGIT = 1 << 3,
  G_ASCII_GRAPH = 1 << 4,
  G_ASCII_LOWER = 1 << 5,
  G_ASCII_PRINT = 1 << 6,
  G_ASCII_PUNCT = 1 << 7,
  G_ASCII_SPACE = 1 << 8,
  G_ASCII_UPPER = 1 << 9,
  G_ASCII_XDIGIT = 1 << 10
} GAsciiType;

extern const guint16 * const g_ascii_table;
# 90 "/usr/include/glib-2.0/glib/gstrfuncs.h"
gchar g_ascii_tolower (gchar c) __attribute__((__const__));
gchar g_ascii_toupper (gchar c) __attribute__((__const__));

gint g_ascii_digit_value (gchar c) __attribute__((__const__));
gint g_ascii_xdigit_value (gchar c) __attribute__((__const__));





gchar* g_strdelimit (gchar *string,
     const gchar *delimiters,
     gchar new_delimiter);
gchar* g_strcanon (gchar *string,
     const gchar *valid_chars,
     gchar substitutor);
const gchar* g_strerror (gint errnum) __attribute__((__const__));
const gchar* g_strsignal (gint signum) __attribute__((__const__));
gchar* g_strreverse (gchar *string);
gsize g_strlcpy (gchar *dest,
     const gchar *src,
     gsize dest_size);
gsize g_strlcat (gchar *dest,
     const gchar *src,
     gsize dest_size);
gchar * g_strstr_len (const gchar *haystack,
     gssize haystack_len,
     const gchar *needle);
gchar * g_strrstr (const gchar *haystack,
     const gchar *needle);
gchar * g_strrstr_len (const gchar *haystack,
     gssize haystack_len,
     const gchar *needle);

gboolean g_str_has_suffix (const gchar *str,
     const gchar *suffix);
gboolean g_str_has_prefix (const gchar *str,
     const gchar *prefix);



gdouble g_strtod (const gchar *nptr,
     gchar **endptr);
gdouble g_ascii_strtod (const gchar *nptr,
     gchar **endptr);
guint64 g_ascii_strtoull (const gchar *nptr,
     gchar **endptr,
     guint base);
gint64 g_ascii_strtoll (const gchar *nptr,
     gchar **endptr,
     guint base);




gchar * g_ascii_dtostr (gchar *buffer,
     gint buf_len,
     gdouble d);
gchar * g_ascii_formatd (gchar *buffer,
     gint buf_len,
     const gchar *format,
     gdouble d);


gchar* g_strchug (gchar *string);

gchar* g_strchomp (gchar *string);



gint g_ascii_strcasecmp (const gchar *s1,
        const gchar *s2);
gint g_ascii_strncasecmp (const gchar *s1,
        const gchar *s2,
        gsize n);
gchar* g_ascii_strdown (const gchar *str,
        gssize len) __attribute__((__malloc__));
gchar* g_ascii_strup (const gchar *str,
        gssize len) __attribute__((__malloc__));
# 177 "/usr/include/glib-2.0/glib/gstrfuncs.h"
gint g_strcasecmp (const gchar *s1,
     const gchar *s2);
gint g_strncasecmp (const gchar *s1,
     const gchar *s2,
     guint n);
gchar* g_strdown (gchar *string);
gchar* g_strup (gchar *string);






gchar* g_strdup (const gchar *str) __attribute__((__malloc__));
gchar* g_strdup_printf (const gchar *format,
     ...) __attribute__((__format__ (__printf__, 1, 2))) __attribute__((__malloc__));
gchar* g_strdup_vprintf (const gchar *format,
     va_list args) __attribute__((__malloc__));
gchar* g_strndup (const gchar *str,
     gsize n) __attribute__((__malloc__));
gchar* g_strnfill (gsize length,
     gchar fill_char) __attribute__((__malloc__));
gchar* g_strconcat (const gchar *string1,
     ...) __attribute__((__malloc__)) __attribute__((__sentinel__));
gchar* g_strjoin (const gchar *separator,
     ...) __attribute__((__malloc__)) __attribute__((__sentinel__));





gchar* g_strcompress (const gchar *source) __attribute__((__malloc__));
# 218 "/usr/include/glib-2.0/glib/gstrfuncs.h"
gchar* g_strescape (const gchar *source,
     const gchar *exceptions) __attribute__((__malloc__));

gpointer g_memdup (gconstpointer mem,
     guint byte_size) __attribute__((__malloc__)) __attribute__((__alloc_size__(2)));
# 233 "/usr/include/glib-2.0/glib/gstrfuncs.h"
gchar** g_strsplit (const gchar *string,
     const gchar *delimiter,
     gint max_tokens) __attribute__((__malloc__));
gchar ** g_strsplit_set (const gchar *string,
     const gchar *delimiters,
     gint max_tokens) __attribute__((__malloc__));
gchar* g_strjoinv (const gchar *separator,
     gchar **str_array) __attribute__((__malloc__));
void g_strfreev (gchar **str_array);
gchar** g_strdupv (gchar **str_array) __attribute__((__malloc__));
guint g_strv_length (gchar **str_array);

gchar* g_stpcpy (gchar *dest,
                                        const char *src);

const gchar *g_strip_context (const gchar *msgid,
     const gchar *msgval) __attribute__((__format_arg__ (1)));

const gchar *g_dgettext (const gchar *domain,
     const gchar *msgid) __attribute__((__format_arg__ (2)));

const gchar *g_dngettext (const gchar *domain,
     const gchar *msgid,
     const gchar *msgid_plural,
     gulong n) __attribute__((__format_arg__ (3)));
const gchar *g_dpgettext (const gchar *domain,
                                        const gchar *msgctxtid,
                                        gsize msgidoffset) __attribute__((__format_arg__ (2)));
const gchar *g_dpgettext2 (const gchar *domain,
                                        const gchar *context,
                                        const gchar *msgid) __attribute__((__format_arg__ (3)));


# 79 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gstring.h" 1
# 80 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gtestutils.h" 1
# 28 "/usr/include/glib-2.0/glib/gtestutils.h"
# 1 "/usr/include/glib-2.0/glib/gmessages.h" 1
# 29 "/usr/include/glib-2.0/glib/gtestutils.h" 2
# 1 "/usr/include/glib-2.0/glib/gstring.h" 1
# 30 "/usr/include/glib-2.0/glib/gtestutils.h" 2
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 31 "/usr/include/glib-2.0/glib/gtestutils.h" 2
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 32 "/usr/include/glib-2.0/glib/gtestutils.h" 2
# 1 "/usr/include/glib-2.0/glib/gslist.h" 1
# 33 "/usr/include/glib-2.0/glib/gtestutils.h" 2



typedef struct GTestCase GTestCase;
typedef struct GTestSuite GTestSuite;
# 76 "/usr/include/glib-2.0/glib/gtestutils.h"
int g_strcmp0 (const char *str1,
                                         const char *str2);


void g_test_minimized_result (double minimized_quantity,
                                         const char *format,
                                         ...) __attribute__((__format__ (__printf__, 2, 3)));
void g_test_maximized_result (double maximized_quantity,
                                         const char *format,
                                         ...) __attribute__((__format__ (__printf__, 2, 3)));


void g_test_init (int *argc,
                                         char ***argv,
                                         ...);
# 99 "/usr/include/glib-2.0/glib/gtestutils.h"
int g_test_run (void);

void g_test_add_func (const char *testpath,
                                         void (*test_func) (void));
void g_test_add_data_func (const char *testpath,
                                         gconstpointer test_data,
                                         void (*test_func) (gconstpointer));
# 120 "/usr/include/glib-2.0/glib/gtestutils.h"
void g_test_message (const char *format,
                                         ...) __attribute__((__format__ (__printf__, 1, 2)));
void g_test_bug_base (const char *uri_pattern);
void g_test_bug (const char *bug_uri_snippet);

void g_test_timer_start (void);
double g_test_timer_elapsed (void);
double g_test_timer_last (void);


void g_test_queue_free (gpointer gfree_pointer);
void g_test_queue_destroy (GDestroyNotify destroy_func,
                                         gpointer destroy_data);



typedef enum {
  G_TEST_TRAP_SILENCE_STDOUT = 1 << 7,
  G_TEST_TRAP_SILENCE_STDERR = 1 << 8,
  G_TEST_TRAP_INHERIT_STDIN = 1 << 9
} GTestTrapFlags;
gboolean g_test_trap_fork (guint64 usec_timeout,
                                         GTestTrapFlags test_trap_flags);
gboolean g_test_trap_has_passed (void);
gboolean g_test_trap_reached_timeout (void);
# 154 "/usr/include/glib-2.0/glib/gtestutils.h"
gint32 g_test_rand_int (void);
gint32 g_test_rand_int_range (gint32 begin,
                                         gint32 end);
double g_test_rand_double (void);
double g_test_rand_double_range (double range_start,
                                         double range_end);


GTestCase* g_test_create_case (const char *test_name,
                                         gsize data_size,
                                         gconstpointer test_data,
                                         void (*data_setup) (void),
                                         void (*data_test) (void),
                                         void (*data_teardown) (void));
GTestSuite* g_test_create_suite (const char *suite_name);
GTestSuite* g_test_get_root (void);
void g_test_suite_add (GTestSuite *suite,
                                         GTestCase *test_case);
void g_test_suite_add_suite (GTestSuite *suite,
                                         GTestSuite *nestedsuite);
int g_test_run_suite (GTestSuite *suite);


void g_test_trap_assertions (const char *domain,
                                         const char *file,
                                         int line,
                                         const char *func,
                                         guint64 assertion_flags,
                                         const char *pattern);
void g_assertion_message (const char *domain,
                                         const char *file,
                                         int line,
                                         const char *func,
                                         const char *message) __attribute__((__noreturn__));
void g_assertion_message_expr (const char *domain,
                                         const char *file,
                                         int line,
                                         const char *func,
                                         const char *expr) __attribute__((__noreturn__));
void g_assertion_message_cmpstr (const char *domain,
                                         const char *file,
                                         int line,
                                         const char *func,
                                         const char *expr,
                                         const char *arg1,
                                         const char *cmp,
                                         const char *arg2) __attribute__((__noreturn__));
void g_assertion_message_cmpnum (const char *domain,
                                         const char *file,
                                         int line,
                                         const char *func,
                                         const char *expr,
                                         long double arg1,
                                         const char *cmp,
                                         long double arg2,
                                         char numtype) __attribute__((__noreturn__));
void g_assertion_message_error (const char *domain,
                                         const char *file,
                                         int line,
                                         const char *func,
                                         const char *expr,
                                         GError *error,
                                         GQuark error_domain,
                                         int error_code) __attribute__((__noreturn__));
void g_test_add_vtable (const char *testpath,
                                         gsize data_size,
                                         gconstpointer test_data,
                                         void (*data_setup) (void),
                                         void (*data_test) (void),
                                         void (*data_teardown) (void));
typedef struct {
  gboolean test_initialized;
  gboolean test_quick;
  gboolean test_perf;
  gboolean test_verbose;
  gboolean test_quiet;
} GTestConfig;
extern const GTestConfig * const g_test_config_vars;


typedef enum {
  G_TEST_LOG_NONE,
  G_TEST_LOG_ERROR,
  G_TEST_LOG_START_BINARY,
  G_TEST_LOG_LIST_CASE,
  G_TEST_LOG_SKIP_CASE,
  G_TEST_LOG_START_CASE,
  G_TEST_LOG_STOP_CASE,
  G_TEST_LOG_MIN_RESULT,
  G_TEST_LOG_MAX_RESULT,
  G_TEST_LOG_MESSAGE
} GTestLogType;

typedef struct {
  GTestLogType log_type;
  guint n_strings;
  gchar **strings;
  guint n_nums;
  long double *nums;
} GTestLogMsg;
typedef struct {

  GString *data;
  GSList *msgs;
} GTestLogBuffer;

const char* g_test_log_type_name (GTestLogType log_type);
GTestLogBuffer* g_test_log_buffer_new (void);
void g_test_log_buffer_free (GTestLogBuffer *tbuffer);
void g_test_log_buffer_push (GTestLogBuffer *tbuffer,
                                         guint n_bytes,
                                         const guint8 *bytes);
GTestLogMsg* g_test_log_buffer_pop (GTestLogBuffer *tbuffer);
void g_test_log_msg_free (GTestLogMsg *tmsg);
# 282 "/usr/include/glib-2.0/glib/gtestutils.h"
typedef gboolean (*GTestLogFatalFunc) (const gchar *log_domain,
                                                 GLogLevelFlags log_level,
                                                 const gchar *message,
                                                 gpointer user_data);
void
g_test_log_set_fatal_handler (GTestLogFatalFunc log_func,
                                         gpointer user_data);


# 81 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gthread.h" 1
# 82 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gthreadpool.h" 1
# 34 "/usr/include/glib-2.0/glib/gthreadpool.h"
# 1 "/usr/include/glib-2.0/glib/gthread.h" 1
# 35 "/usr/include/glib-2.0/glib/gthreadpool.h" 2



typedef struct _GThreadPool GThreadPool;






struct _GThreadPool
{
  GFunc func;
  gpointer user_data;
  gboolean exclusive;
};






GThreadPool* g_thread_pool_new (GFunc func,
                                               gpointer user_data,
                                               gint max_threads,
                                               gboolean exclusive,
                                               GError **error);





void g_thread_pool_push (GThreadPool *pool,
                                               gpointer data,
                                               GError **error);




void g_thread_pool_set_max_threads (GThreadPool *pool,
                                               gint max_threads,
                                               GError **error);
gint g_thread_pool_get_max_threads (GThreadPool *pool);



guint g_thread_pool_get_num_threads (GThreadPool *pool);


guint g_thread_pool_unprocessed (GThreadPool *pool);





void g_thread_pool_free (GThreadPool *pool,
                                               gboolean immediate,
                                               gboolean wait_);



void g_thread_pool_set_max_unused_threads (gint max_threads);
gint g_thread_pool_get_max_unused_threads (void);
guint g_thread_pool_get_num_unused_threads (void);


void g_thread_pool_stop_unused_threads (void);


void g_thread_pool_set_sort_function (GThreadPool *pool,
                                        GCompareDataFunc func,
            gpointer user_data);


void g_thread_pool_set_max_idle_time (guint interval);
guint g_thread_pool_get_max_idle_time (void);


# 83 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gtimer.h" 1
# 34 "/usr/include/glib-2.0/glib/gtimer.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 35 "/usr/include/glib-2.0/glib/gtimer.h" 2







typedef struct _GTimer GTimer;



GTimer* g_timer_new (void);
void g_timer_destroy (GTimer *timer);
void g_timer_start (GTimer *timer);
void g_timer_stop (GTimer *timer);
void g_timer_reset (GTimer *timer);
void g_timer_continue (GTimer *timer);
gdouble g_timer_elapsed (GTimer *timer,
      gulong *microseconds);

void g_usleep (gulong microseconds);

void g_time_val_add (GTimeVal *time_,
                                  glong microseconds);
gboolean g_time_val_from_iso8601 (const gchar *iso_date,
      GTimeVal *time_);
gchar* g_time_val_to_iso8601 (GTimeVal *time_) __attribute__((__malloc__));


# 84 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gtree.h" 1
# 34 "/usr/include/glib-2.0/glib/gtree.h"
# 1 "/usr/include/glib-2.0/glib/gnode.h" 1
# 35 "/usr/include/glib-2.0/glib/gtree.h" 2



typedef struct _GTree GTree;

typedef gboolean (*GTraverseFunc) (gpointer key,
                                   gpointer value,
                                   gpointer data);



GTree* g_tree_new (GCompareFunc key_compare_func);
GTree* g_tree_new_with_data (GCompareDataFunc key_compare_func,
                                 gpointer key_compare_data);
GTree* g_tree_new_full (GCompareDataFunc key_compare_func,
                                 gpointer key_compare_data,
                                 GDestroyNotify key_destroy_func,
                                 GDestroyNotify value_destroy_func);
GTree* g_tree_ref (GTree *tree);
void g_tree_unref (GTree *tree);
void g_tree_destroy (GTree *tree);
void g_tree_insert (GTree *tree,
                                 gpointer key,
                                 gpointer value);
void g_tree_replace (GTree *tree,
                                 gpointer key,
                                 gpointer value);
gboolean g_tree_remove (GTree *tree,
                                 gconstpointer key);
gboolean g_tree_steal (GTree *tree,
                                 gconstpointer key);
gpointer g_tree_lookup (GTree *tree,
                                 gconstpointer key);
gboolean g_tree_lookup_extended (GTree *tree,
                                 gconstpointer lookup_key,
                                 gpointer *orig_key,
                                 gpointer *value);
void g_tree_foreach (GTree *tree,
                                 GTraverseFunc func,
                                 gpointer user_data);


void g_tree_traverse (GTree *tree,
                                 GTraverseFunc traverse_func,
                                 GTraverseType traverse_type,
                                 gpointer user_data);


gpointer g_tree_search (GTree *tree,
                                 GCompareFunc search_func,
                                 gconstpointer user_data);
gint g_tree_height (GTree *tree);
gint g_tree_nnodes (GTree *tree);


# 85 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 86 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gunicode.h" 1
# 87 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gurifuncs.h" 1
# 30 "/usr/include/glib-2.0/glib/gurifuncs.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 31 "/usr/include/glib-2.0/glib/gurifuncs.h" 2


# 69 "/usr/include/glib-2.0/glib/gurifuncs.h"
char * g_uri_unescape_string (const char *escaped_string,
          const char *illegal_characters);
char * g_uri_unescape_segment (const char *escaped_string,
          const char *escaped_string_end,
          const char *illegal_characters);
char * g_uri_parse_scheme (const char *uri);
char * g_uri_escape_string (const char *unescaped,
          const char *reserved_chars_allowed,
          gboolean allow_utf8);


# 88 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gutils.h" 1
# 89 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gvarianttype.h" 1
# 26 "/usr/include/glib-2.0/glib/gvarianttype.h"
# 1 "/usr/include/glib-2.0/glib/gmessages.h" 1
# 27 "/usr/include/glib-2.0/glib/gvarianttype.h" 2
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 28 "/usr/include/glib-2.0/glib/gvarianttype.h" 2


# 40 "/usr/include/glib-2.0/glib/gvarianttype.h"
typedef struct _GVariantType GVariantType;
# 250 "/usr/include/glib-2.0/glib/gvarianttype.h"
gboolean g_variant_type_string_is_valid (const gchar *type_string);
gboolean g_variant_type_string_scan (const gchar *string,
                                                                         const gchar *limit,
                                                                         const gchar **endptr);


void g_variant_type_free (GVariantType *type);
GVariantType * g_variant_type_copy (const GVariantType *type);
GVariantType * g_variant_type_new (const gchar *type_string);


gsize g_variant_type_get_string_length (const GVariantType *type);
const gchar * g_variant_type_peek_string (const GVariantType *type);
gchar * g_variant_type_dup_string (const GVariantType *type);


gboolean g_variant_type_is_definite (const GVariantType *type);
gboolean g_variant_type_is_container (const GVariantType *type);
gboolean g_variant_type_is_basic (const GVariantType *type);
gboolean g_variant_type_is_maybe (const GVariantType *type);
gboolean g_variant_type_is_array (const GVariantType *type);
gboolean g_variant_type_is_tuple (const GVariantType *type);
gboolean g_variant_type_is_dict_entry (const GVariantType *type);
gboolean g_variant_type_is_variant (const GVariantType *type);


guint g_variant_type_hash (gconstpointer type);
gboolean g_variant_type_equal (gconstpointer type1,
                                                                         gconstpointer type2);


gboolean g_variant_type_is_subtype_of (const GVariantType *type,
                                                                         const GVariantType *supertype);


const GVariantType * g_variant_type_element (const GVariantType *type);
const GVariantType * g_variant_type_first (const GVariantType *type);
const GVariantType * g_variant_type_next (const GVariantType *type);
gsize g_variant_type_n_items (const GVariantType *type);
const GVariantType * g_variant_type_key (const GVariantType *type);
const GVariantType * g_variant_type_value (const GVariantType *type);


GVariantType * g_variant_type_new_array (const GVariantType *element);
GVariantType * g_variant_type_new_maybe (const GVariantType *element);
GVariantType * g_variant_type_new_tuple (const GVariantType * const *items,
                                                                         gint length);
GVariantType * g_variant_type_new_dict_entry (const GVariantType *key,
                                                                         const GVariantType *value);


const GVariantType * g_variant_type_checked_ (const gchar *);


# 90 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gvariant.h" 1
# 27 "/usr/include/glib-2.0/glib/gvariant.h"
# 1 "/usr/include/glib-2.0/glib/gstring.h" 1
# 28 "/usr/include/glib-2.0/glib/gvariant.h" 2



typedef struct _GVariant GVariant;

typedef enum
{
  G_VARIANT_CLASS_BOOLEAN = 'b',
  G_VARIANT_CLASS_BYTE = 'y',
  G_VARIANT_CLASS_INT16 = 'n',
  G_VARIANT_CLASS_UINT16 = 'q',
  G_VARIANT_CLASS_INT32 = 'i',
  G_VARIANT_CLASS_UINT32 = 'u',
  G_VARIANT_CLASS_INT64 = 'x',
  G_VARIANT_CLASS_UINT64 = 't',
  G_VARIANT_CLASS_HANDLE = 'h',
  G_VARIANT_CLASS_DOUBLE = 'd',
  G_VARIANT_CLASS_STRING = 's',
  G_VARIANT_CLASS_OBJECT_PATH = 'o',
  G_VARIANT_CLASS_SIGNATURE = 'g',
  G_VARIANT_CLASS_VARIANT = 'v',
  G_VARIANT_CLASS_MAYBE = 'm',
  G_VARIANT_CLASS_ARRAY = 'a',
  G_VARIANT_CLASS_TUPLE = '(',
  G_VARIANT_CLASS_DICT_ENTRY = '{'
} GVariantClass;

void g_variant_unref (GVariant *value);
GVariant * g_variant_ref (GVariant *value);
GVariant * g_variant_ref_sink (GVariant *value);

const GVariantType * g_variant_get_type (GVariant *value);
const gchar * g_variant_get_type_string (GVariant *value);
gboolean g_variant_is_of_type (GVariant *value,
                                                                         const GVariantType *type);
gboolean g_variant_is_container (GVariant *value);
GVariantClass g_variant_classify (GVariant *value);

GVariant * g_variant_new_boolean (gboolean boolean);
GVariant * g_variant_new_byte (guchar byte);
GVariant * g_variant_new_int16 (gint16 int16);
GVariant * g_variant_new_uint16 (guint16 uint16);
GVariant * g_variant_new_int32 (gint32 int32);
GVariant * g_variant_new_uint32 (guint32 uint32);
GVariant * g_variant_new_int64 (gint64 int64);
GVariant * g_variant_new_uint64 (guint64 uint64);
GVariant * g_variant_new_handle (gint32 handle);
GVariant * g_variant_new_double (gdouble floating);
GVariant * g_variant_new_string (const gchar *string);
GVariant * g_variant_new_object_path (const gchar *object_path);
gboolean g_variant_is_object_path (const gchar *string);
GVariant * g_variant_new_signature (const gchar *signature);
gboolean g_variant_is_signature (const gchar *string);
GVariant * g_variant_new_variant (GVariant *value);
GVariant * g_variant_new_strv (const gchar * const *strv,
                                                                         gssize length);

gboolean g_variant_get_boolean (GVariant *value);
guchar g_variant_get_byte (GVariant *value);
gint16 g_variant_get_int16 (GVariant *value);
guint16 g_variant_get_uint16 (GVariant *value);
gint32 g_variant_get_int32 (GVariant *value);
guint32 g_variant_get_uint32 (GVariant *value);
gint64 g_variant_get_int64 (GVariant *value);
guint64 g_variant_get_uint64 (GVariant *value);
gint32 g_variant_get_handle (GVariant *value);
gdouble g_variant_get_double (GVariant *value);
GVariant * g_variant_get_variant (GVariant *value);
const gchar * g_variant_get_string (GVariant *value,
                                                                         gsize *length);
gchar * g_variant_dup_string (GVariant *value,
                                                                         gsize *length);
const gchar ** g_variant_get_strv (GVariant *value,
                                                                         gsize *length);
gchar ** g_variant_dup_strv (GVariant *value,
                                                                         gsize *length);

GVariant * g_variant_new_maybe (const GVariantType *child_type,
                                                                         GVariant *child);
GVariant * g_variant_new_array (const GVariantType *child_type,
                                                                         GVariant * const *children,
                                                                         gsize n_children);
GVariant * g_variant_new_tuple (GVariant * const *children,
                                                                         gsize n_children);
GVariant * g_variant_new_dict_entry (GVariant *key,
                                                                         GVariant *value);

GVariant * g_variant_get_maybe (GVariant *value);
gsize g_variant_n_children (GVariant *value);
void g_variant_get_child (GVariant *value,
                                                                         gsize index_,
                                                                         const gchar *format_string,
                                                                         ...);
GVariant * g_variant_get_child_value (GVariant *value,
                                                                         gsize index_);
gconstpointer g_variant_get_fixed_array (GVariant *value,
                                                                         gsize *n_elements,
                                                                         gsize element_size);

gsize g_variant_get_size (GVariant *value);
gconstpointer g_variant_get_data (GVariant *value);
void g_variant_store (GVariant *value,
                                                                         gpointer data);

gchar * g_variant_print (GVariant *value,
                                                                         gboolean type_annotate);
GString * g_variant_print_string (GVariant *value,
                                                                         GString *string,
                                                                         gboolean type_annotate);

guint g_variant_hash (gconstpointer value);
gboolean g_variant_equal (gconstpointer one,
                                                                         gconstpointer two);

GVariant * g_variant_get_normal_form (GVariant *value);
gboolean g_variant_is_normal_form (GVariant *value);
GVariant * g_variant_byteswap (GVariant *value);
GVariant * g_variant_new_from_data (const GVariantType *type,
                                                                         gconstpointer data,
                                                                         gsize size,
                                                                         gboolean trusted,
                                                                         GDestroyNotify notify,
                                                                         gpointer user_data);

typedef struct _GVariantIter GVariantIter;
struct _GVariantIter {

  gsize x[16];
};

GVariantIter * g_variant_iter_new (GVariant *value);
gsize g_variant_iter_init (GVariantIter *iter,
                                                                         GVariant *value);
GVariantIter * g_variant_iter_copy (GVariantIter *iter);
gsize g_variant_iter_n_children (GVariantIter *iter);
void g_variant_iter_free (GVariantIter *iter);
GVariant * g_variant_iter_next_value (GVariantIter *iter);
gboolean g_variant_iter_next (GVariantIter *iter,
                                                                         const gchar *format_string,
                                                                         ...);
gboolean g_variant_iter_loop (GVariantIter *iter,
                                                                         const gchar *format_string,
                                                                         ...);


typedef struct _GVariantBuilder GVariantBuilder;
struct _GVariantBuilder {

  gsize x[16];
};


GQuark g_variant_parser_get_error_quark (void);

GVariantBuilder * g_variant_builder_new (const GVariantType *type);
void g_variant_builder_unref (GVariantBuilder *builder);
GVariantBuilder * g_variant_builder_ref (GVariantBuilder *builder);
void g_variant_builder_init (GVariantBuilder *builder,
                                                                         const GVariantType *type);
GVariant * g_variant_builder_end (GVariantBuilder *builder);
void g_variant_builder_clear (GVariantBuilder *builder);
void g_variant_builder_open (GVariantBuilder *builder,
                                                                         const GVariantType *type);
void g_variant_builder_close (GVariantBuilder *builder);
void g_variant_builder_add_value (GVariantBuilder *builder,
                                                                         GVariant *value);
void g_variant_builder_add (GVariantBuilder *builder,
                                                                         const gchar *format_string,
                                                                         ...);

GVariant * g_variant_new (const gchar *format_string,
                                                                         ...);
void g_variant_get (GVariant *value,
                                                                         const gchar *format_string,
                                                                         ...);
GVariant * g_variant_new_va (const gchar *format_string,
                                                                         const gchar **endptr,
                                                                         va_list *app);
void g_variant_get_va (GVariant *value,
                                                                         const gchar *format_string,
                                                                         const gchar **endptr,
                                                                         va_list *app);


GVariant * g_variant_parse (const GVariantType *type,
                                                                         const gchar *text,
                                                                         const gchar *limit,
                                                                         const gchar **endptr,
                                                                         GError **error);
GVariant * g_variant_new_parsed (const gchar *format,
                                                                         ...);
GVariant * g_variant_new_parsed_va (const gchar *format,
                                                                         va_list *app);


# 91 "/usr/include/glib-2.0/glib.h" 2
# 34 "packet-nas_eps.c" 2
# 1 "../../epan/packet.h" 1
# 28 "../../epan/packet.h"
# 1 "../../wiretap/wtap.h" 1
# 27 "../../wiretap/wtap.h"
# 1 "/usr/include/sys/time.h" 1 3 4
# 29 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
# 75 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 30 "/usr/include/sys/time.h" 2 3 4

# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 35 "/usr/include/sys/select.h" 2 3 4
# 46 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
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



# 32 "/usr/include/sys/time.h" 2 3 4








# 57 "/usr/include/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
# 73 "/usr/include/sys/time.h" 3 4
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int settimeofday (__const struct timeval *__tv,
    __const struct timezone *__tz)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int adjtime (__const struct timeval *__delta,
      struct timeval *__olddelta) __attribute__ ((__nothrow__));




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };






typedef int __itimer_which_t;




extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) __attribute__ ((__nothrow__));




extern int setitimer (__itimer_which_t __which,
        __const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__));




extern int utimes (__const char *__file, __const struct timeval __tvp[2])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int lutimes (__const char *__file, __const struct timeval __tvp[2])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, __const struct timeval __tvp[2]) __attribute__ ((__nothrow__));
# 191 "/usr/include/sys/time.h" 3 4

# 28 "../../wiretap/wtap.h" 2
# 325 "../../wiretap/wtap.h"
struct nstr_phdr {
 gint64 rec_offset;
 gint32 rec_len;
 guint8 nicno_offset;
 guint8 nicno_len;
 guint8 dir_offset;
 guint8 dir_len;
 guint8 eth_offset;
 guint8 pcb_offset;
 guint8 l_pcb_offset;
 guint8 rec_type;
 guint8 vlantag_offset;
 guint8 coreid_offset;
};


struct eth_phdr {
 gint fcs_len;
};



struct x25_phdr {
 guint8 flags;
};




struct isdn_phdr {
 gboolean uton;
 guint8 channel;
};
# 431 "../../wiretap/wtap.h"
struct atm_phdr {
 guint32 flags;
 guint8 aal;
 guint8 type;
 guint8 subtype;
 guint16 vpi;
 guint16 vci;
 guint8 aal2_cid;
 guint16 channel;
 guint16 cells;
 guint16 aal5t_u2u;
 guint16 aal5t_len;
 guint32 aal5t_chksum;
};
# 458 "../../wiretap/wtap.h"
struct ascend_phdr {
 guint16 type;
 char user[64];
 guint32 sess;
 char call_num[64];
 guint32 chunk;
 guint32 task;
};







struct p2p_phdr {
 int sent;
};
# 495 "../../wiretap/wtap.h"
struct ieee_802_11_phdr {
 gint fcs_len;
 guint8 channel;
 guint8 data_rate;
 guint8 signal_level;
};
# 519 "../../wiretap/wtap.h"
struct cosine_phdr {
 guint8 encap;
 guint8 direction;
 char if_name[128];
 guint16 pro;
 guint16 off;
 guint16 pri;
 guint16 rm;
 guint16 err;
};
# 551 "../../wiretap/wtap.h"
struct irda_phdr {
 guint16 pkttype;
};



struct nettl_phdr {
 guint16 subsys;
 guint32 devid;
 guint32 kind;
 gint32 pid;
 guint16 uid;
};







struct mtp2_phdr {
 guint8 sent;
 guint8 annex_a_used;
 guint16 link_number;
};



typedef union {
 struct {
  guint16 vp;
  guint16 vc;
  guint16 cid;
 } atm;

 guint32 ds0mask;
} k12_input_info_t;

struct k12_phdr {
 guint32 input;
 const gchar* input_name;
 const gchar* stack_file;
 guint32 input_type;
 k12_input_info_t input_info;
 guchar* extra_info;
 guint32 extra_length;
 void* stuff;
};





struct lapd_phdr {
 guint16 pkttype;
 guint8 we_network;
};

struct wtap;
struct catapult_dct2000_phdr
{
 union
 {
  struct isdn_phdr isdn;
  struct atm_phdr atm;
  struct p2p_phdr p2p;
 } inner_pseudo_header;
 gint64 seek_off;
 struct wtap *wth;
};
# 629 "../../wiretap/wtap.h"
struct libpcap_bt_phdr {
    guint32 direction;
};







struct libpcap_ppp_phdr {
    guint8 direction;
};




struct erf_phdr {
  guint64 ts;
  guint8 type;
  guint8 flags;
  guint16 rlen;
  guint16 lctr;
  guint16 wlen;
};

struct erf_ehdr {
  guint64 ehdr;
};





struct erf_mc_phdr {
  struct erf_phdr phdr;
  struct erf_ehdr ehdr_list[8];
  union
  {
    guint16 eth_hdr;
    guint32 mc_hdr;
  } subhdr;
};
# 728 "../../wiretap/wtap.h"
struct sita_phdr {
   guint8 flags;
   guint8 signals;
   guint8 errors1;
   guint8 errors2;
   guint8 proto;
};


struct bthci_phdr {
 gboolean sent;
 guint8 channel;
};







struct l1event_phdr {
 gboolean uton;
};


struct i2c_phdr {
 guint8 is_event;
 guint8 bus;
 guint32 flags;
};


struct gsm_um_phdr {
 gboolean uplink;
 guint8 channel;

 guint8 bsic;
 guint16 arfcn;
 guint32 tdma_frame;
 guint8 error;
 guint16 timeshift;
};
# 781 "../../wiretap/wtap.h"
union wtap_pseudo_header {
 struct eth_phdr eth;
 struct x25_phdr x25;
 struct isdn_phdr isdn;
 struct atm_phdr atm;
 struct ascend_phdr ascend;
 struct p2p_phdr p2p;
 struct ieee_802_11_phdr ieee_802_11;
 struct cosine_phdr cosine;
 struct irda_phdr irda;
 struct nettl_phdr nettl;
 struct mtp2_phdr mtp2;
 struct k12_phdr k12;
 struct lapd_phdr lapd;
 struct catapult_dct2000_phdr dct2000;
 struct erf_mc_phdr erf;
 struct sita_phdr sita;
 struct bthci_phdr bthci;
 struct l1event_phdr l1event;
 struct i2c_phdr i2c;
 struct gsm_um_phdr gsm_um;
 struct nstr_phdr nstr;
};

struct wtap_nstime {
 time_t secs;
 int nsecs;
};

struct wtap_pkthdr {
 struct wtap_nstime ts;
 guint32 caplen;
 guint32 len;
 int pkt_encap;
};

struct Buffer;
struct wtap_dumper;

typedef struct wtap wtap;
typedef struct wtap_dumper wtap_dumper;

struct file_type_info {


    const char *name;



    const char *short_name;



    const char *file_extensions;



    const char *file_extension_default;


    gboolean can_compress;



    int (*can_write_encap)(int);



    int (*dump_open)(wtap_dumper *, gboolean, int *);
};


typedef int (*wtap_open_routine_t)(struct wtap*, int *, char **);
# 863 "../../wiretap/wtap.h"
struct wtap* wtap_open_offline(const char *filename, int *err,
    gchar **err_info, gboolean do_random);






void wtap_cleareof(wtap *wth);




gboolean wtap_read(wtap *wth, int *err, gchar **err_info,
    gint64 *data_offset);

gboolean wtap_seek_read (wtap *wth, gint64 seek_off,
 union wtap_pseudo_header *pseudo_header, guint8 *pd, int len,
 int *err, gchar **err_info);


struct wtap_pkthdr *wtap_phdr(wtap *wth);
union wtap_pseudo_header *wtap_pseudoheader(wtap *wth);
guint8 *wtap_buf_ptr(wtap *wth);





gint64 wtap_read_so_far(wtap *wth, int *err);
gint64 wtap_file_size(wtap *wth, int *err);
int wtap_snapshot_length(wtap *wth);
int wtap_file_type(wtap *wth);
int wtap_file_encap(wtap *wth);
int wtap_file_tsprecision(wtap *wth);


void wtap_sequential_close(wtap *wth);
void wtap_close(wtap *wth);


gboolean wtap_dump_can_open(int filetype);
gboolean wtap_dump_can_write_encap(int filetype, int encap);
gboolean wtap_dump_can_compress(int filetype);
wtap_dumper* wtap_dump_open(const char *filename, int filetype, int encap,
 int snaplen, gboolean compressed, int *err);
wtap_dumper* wtap_dump_fdopen(int fd, int filetype, int encap, int snaplen,
 gboolean compressed, int *err);
gboolean wtap_dump(wtap_dumper *, const struct wtap_pkthdr *,
 const union wtap_pseudo_header *pseudo_header, const guchar *, int *err);
void wtap_dump_flush(wtap_dumper *);
gint64 wtap_get_bytes_dumped(wtap_dumper *);
void wtap_set_bytes_dumped(wtap_dumper *wdh, gint64 bytes_dumped);
gboolean wtap_dump_close(wtap_dumper *, int *);


const char *wtap_file_type_string(int filetype);
const char *wtap_file_type_short_string(int filetype);
int wtap_short_string_to_file_type(const char *short_name);

const char *wtap_file_extensions_string(int filetype);
const char *wtap_file_extension_default_string(int filetype);

const char *wtap_encap_string(int encap);
const char *wtap_encap_short_string(int encap);
int wtap_short_string_to_encap(const char *short_name);

const char *wtap_strerror(int err);


int wtap_get_num_encap_types(void);
int wtap_get_num_file_types(void);


void wtap_register_open_routine(wtap_open_routine_t, gboolean has_magic);
int wtap_register_file_type(const struct file_type_info* fi);
int wtap_register_encap_type(char* name, char* short_name);
# 29 "../../epan/packet.h" 2
# 1 "../../epan/proto.h" 1
# 48 "../../epan/proto.h"
# 1 "../../epan/ipv4.h" 1
# 34 "../../epan/ipv4.h"
typedef struct {
 guint32 addr;
 guint32 nmask;
} ipv4_addr;


ipv4_addr* ipv4_addr_new(void);


void ipv4_addr_free(ipv4_addr *ipv4);

void ipv4_addr_set_host_order_addr(ipv4_addr *ipv4, const guint32 new_addr);
void ipv4_addr_set_net_order_addr(ipv4_addr *ipv4, const guint32 new_addr);
void ipv4_addr_set_netmask_bits(ipv4_addr *ipv4, const guint new_nmask_bits);

guint32 ipv4_get_net_order_addr(ipv4_addr *ipv4);
guint32 ipv4_get_host_order_addr(ipv4_addr *ipv4);



void ipv4_addr_str_buf(const ipv4_addr *ipv4, gchar *buf);




gboolean ipv4_addr_eq(ipv4_addr *a, ipv4_addr *b);
gboolean ipv4_addr_gt(ipv4_addr *a, ipv4_addr *b);
gboolean ipv4_addr_ge(ipv4_addr *a, ipv4_addr *b);
gboolean ipv4_addr_lt(ipv4_addr *a, ipv4_addr *b);
gboolean ipv4_addr_le(ipv4_addr *a, ipv4_addr *b);
# 49 "../../epan/proto.h" 2
# 1 "../../epan/nstime.h" 1
# 37 "../../epan/nstime.h"
typedef struct {
 time_t secs;
 int nsecs;
} nstime_t;




extern void nstime_set_zero(nstime_t *nstime);


extern gboolean nstime_is_zero(nstime_t *nstime);





extern void nstime_set_unset(nstime_t *nstime);


extern gboolean nstime_is_unset(nstime_t *nstime);
# 66 "../../epan/nstime.h"
extern void nstime_delta(nstime_t *delta, const nstime_t *b, const nstime_t *a );
# 75 "../../epan/nstime.h"
extern void nstime_sum(nstime_t *sum, const nstime_t *b, const nstime_t *a );
# 84 "../../epan/nstime.h"
extern void nstime_diff(nstime_t *diff, const nstime_t *b, const nstime_t *a );
# 98 "../../epan/nstime.h"
extern int nstime_cmp (const nstime_t *a, const nstime_t *b );


extern double nstime_to_msec(const nstime_t *nstime);


extern double nstime_to_sec(const nstime_t *nstime);


extern double wtap_nstime_to_sec(const struct wtap_nstime *nstime);
# 50 "../../epan/proto.h" 2
# 1 "../../epan/time_fmt.h" 1
# 31 "../../epan/time_fmt.h"
typedef enum {
 TO_STR_TIME_RES_T_SECS,
 TO_STR_TIME_RES_T_DSECS,
 TO_STR_TIME_RES_T_CSECS,
 TO_STR_TIME_RES_T_MSECS,
 TO_STR_TIME_RES_T_USECS,
 TO_STR_TIME_RES_T_NSECS
} to_str_time_res_t;




typedef enum {

 ABSOLUTE_TIME_LOCAL = 1000,
 ABSOLUTE_TIME_UTC,
 ABSOLUTE_TIME_DOY_UTC
} absolute_time_display_e;
# 51 "../../epan/proto.h" 2
# 1 "../../epan/tvbuff.h" 1
# 39 "../../epan/tvbuff.h"
# 1 "../../epan/ipv6-utils.h" 1
# 31 "../../epan/ipv6-utils.h"
struct e_in6_addr {
 guint8 bytes[16];
};
# 40 "../../epan/tvbuff.h" 2
# 1 "../../epan/guid-utils.h" 1
# 33 "../../epan/guid-utils.h"
typedef struct _e_guid_t {
    guint32 data1;
    guint16 data2;
    guint16 data3;
    guint8 data4[8];
} e_guid_t;


extern void guids_init(void);


extern void guids_add_guid(e_guid_t *guid, const gchar *name);


extern const gchar *guids_get_guid_name(e_guid_t *guid);



extern const gchar* guids_resolve_guid_to_str(e_guid_t *guid);
# 41 "../../epan/tvbuff.h" 2
# 1 "../../epan/exceptions.h" 1
# 29 "../../epan/exceptions.h"
# 1 "../../epan/except.h" 1
# 36 "../../epan/except.h"
# 1 "/usr/include/setjmp.h" 1 3 4
# 28 "/usr/include/setjmp.h" 3 4


# 1 "/usr/include/bits/setjmp.h" 1 3 4
# 29 "/usr/include/bits/setjmp.h" 3 4
typedef int __jmp_buf[6];
# 31 "/usr/include/setjmp.h" 2 3 4
# 1 "/usr/include/bits/sigset.h" 1 3 4
# 32 "/usr/include/setjmp.h" 2 3 4



struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };




typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) __attribute__ ((__nothrow__));






extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) __attribute__ ((__nothrow__));




extern int _setjmp (struct __jmp_buf_tag __env[1]) __attribute__ ((__nothrow__));
# 78 "/usr/include/setjmp.h" 3 4




extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







typedef struct __jmp_buf_tag sigjmp_buf[1];
# 110 "/usr/include/setjmp.h" 3 4
extern void siglongjmp (sigjmp_buf __env, int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 120 "/usr/include/setjmp.h" 3 4

# 37 "../../epan/except.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 65 "/usr/include/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 62 "/usr/include/endian.h" 2 3 4
# 66 "/usr/include/bits/waitstatus.h" 2 3 4

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
# 44 "/usr/include/stdlib.h" 2 3 4
# 68 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 96 "/usr/include/stdlib.h" 3 4


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


# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__)) ;




extern double atof (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

# 277 "/usr/include/stdlib.h" 3 4

extern __inline double
__attribute__ ((__nothrow__)) atof (__const char *__nptr)
{
  return strtod (__nptr, (char **) ((void *)0));
}
extern __inline int
__attribute__ ((__nothrow__)) atoi (__const char *__nptr)
{
  return (int) strtol (__nptr, (char **) ((void *)0), 10);
}
extern __inline long int
__attribute__ ((__nothrow__)) atol (__const char *__nptr)
{
  return strtol (__nptr, (char **) ((void *)0), 10);
}




__extension__ extern __inline long long int
__attribute__ ((__nothrow__)) atoll (__const char *__nptr)
{
  return strtoll (__nptr, (char **) ((void *)0), 10);
}

# 311 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 28 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 61 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;
# 87 "/usr/include/sys/types.h" 3 4
typedef __off_t off_t;
# 105 "/usr/include/sys/types.h" 3 4
typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 147 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
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
# 223 "/usr/include/sys/types.h" 3 4
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






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 274 "/usr/include/sys/types.h" 3 4

# 321 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







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
       int32_t *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__));







extern double drand48 (void) __attribute__ ((__nothrow__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__));



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__));






# 498 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 531 "/usr/include/stdlib.h" 3 4





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 554 "/usr/include/stdlib.h" 3 4






extern void _Exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 712 "/usr/include/stdlib.h" 3 4





extern int system (__const char *__command) ;

# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);
# 752 "/usr/include/stdlib.h" 3 4



extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 771 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;

# 808 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__)) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__));








extern int rpmatch (__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 896 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 948 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 964 "/usr/include/stdlib.h" 3 4

# 38 "../../epan/except.h" 2
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



# 39 "../../epan/except.h" 2
# 48 "../../epan/except.h"
enum { except_no_call, except_call };

typedef struct {
    unsigned long except_group;
    unsigned long except_code;
} except_id_t;

typedef struct {
    except_id_t volatile except_id;
    const char *volatile except_message;
    void *volatile except_dyndata;
} except_t;

struct except_cleanup {
    void (*except_func)(void *);
    void *except_context;
};

struct except_catch {
    const except_id_t *except_id;
    size_t except_size;
    except_t except_obj;
    jmp_buf except_jmp;
};

enum except_stacktype {
    XCEPT_CLEANUP, XCEPT_CATCHER
};

struct except_stacknode {
    struct except_stacknode *except_down;
    enum except_stacktype except_type;
    union {
 struct except_catch *except_catcher;
 struct except_cleanup *except_cleanup;
    } except_info;
};


extern void except_setup_clean(struct except_stacknode *,
 struct except_cleanup *, void (*)(void *), void *);
extern void except_setup_try(struct except_stacknode *,
 struct except_catch *, const except_id_t [], size_t);
extern struct except_stacknode *except_pop(void);


extern int except_init(void);
extern void except_deinit(void);
extern void except_rethrow(except_t *) __attribute__((__noreturn__));
extern void except_throw(long, long, const char *) __attribute__((__noreturn__));
extern void except_throwd(long, long, const char *, void *) __attribute__((__noreturn__));
extern void except_throwf(long, long, const char *, ...) __attribute__((__noreturn__));
extern void (*except_unhandled_catcher(void (*)(except_t *)))(except_t *);
extern unsigned long except_code(except_t *);
extern unsigned long except_group(except_t *);
extern const char *except_message(except_t *);
extern void *except_data(except_t *);
extern void *except_take_data(except_t *);
extern void except_set_allocator(void *(*)(size_t), void (*)(void *));
extern void *except_alloc(size_t);
extern void except_free(void *);
# 30 "../../epan/exceptions.h" 2
# 42 "../../epan/tvbuff.h" 2
# 55 "../../epan/tvbuff.h"
typedef enum {
 TVBUFF_REAL_DATA,
 TVBUFF_SUBSET,
 TVBUFF_COMPOSITE
} tvbuff_type;

typedef struct {

 struct tvbuff *tvb;


 guint offset;

 guint length;

} tvb_backing_t;

typedef struct {
 GSList *tvbs;




 guint *start_offsets;
 guint *end_offsets;

} tvb_comp_t;

typedef void (*tvbuff_free_cb_t)(void*);

typedef struct tvbuff {

 tvbuff_type type;
 gboolean initialized;
 guint usage_count;
 struct tvbuff *ds_tvb;




 GSList *used_in;



 union {
  tvb_backing_t subset;
  tvb_comp_t composite;
 } tvbuffs;







 const guint8 *real_data;


 guint length;


 guint reported_length;


 gint raw_offset;


 tvbuff_free_cb_t free_cb;
} tvbuff_t;
# 148 "../../epan/tvbuff.h"
extern void tvbuff_init(void);



extern void tvbuff_cleanup(void);





extern tvbuff_t* tvb_new(tvbuff_type);
# 179 "../../epan/tvbuff.h"
extern void tvb_free(tvbuff_t*);


extern void tvb_free_chain(tvbuff_t*);


extern guint tvb_increment_usage_count(tvbuff_t*, const guint count);






extern guint tvb_decrement_usage_count(tvbuff_t*, const guint count);





extern void tvb_set_free_cb(tvbuff_t*, const tvbuff_free_cb_t);
# 210 "../../epan/tvbuff.h"
extern void tvb_set_child_real_data_tvbuff(tvbuff_t* parent, tvbuff_t* child);

extern tvbuff_t* tvb_new_child_real_data(tvbuff_t* parent, const guint8* data, const guint length,
    const gint reported_length);


extern void tvb_set_real_data(tvbuff_t*, const guint8* data, const guint length,
    const gint reported_length);


extern tvbuff_t* tvb_new_real_data(const guint8* data, const guint length,
    const gint reported_length);
# 237 "../../epan/tvbuff.h"
extern void tvb_set_subset(tvbuff_t* tvb, tvbuff_t* backing,
  const gint backing_offset, const gint backing_length, const gint reported_length);



extern tvbuff_t* tvb_new_subset(tvbuff_t* backing,
  const gint backing_offset, const gint backing_length, const gint reported_length);



extern tvbuff_t* tvb_new_subset_remaining(tvbuff_t* backing,
  const gint backing_offset);






extern void tvb_composite_append(tvbuff_t* tvb, tvbuff_t* member);


extern void tvb_composite_prepend(tvbuff_t* tvb, tvbuff_t* member);



extern tvbuff_t* tvb_new_composite(void);



extern void tvb_composite_finalize(tvbuff_t* tvb);



extern guint tvb_length(const tvbuff_t*);




extern gint tvb_length_remaining(const tvbuff_t*, const gint offset);


extern guint tvb_ensure_length_remaining(const tvbuff_t*, const gint offset);



extern gboolean tvb_bytes_exist(const tvbuff_t*, const gint offset, const gint length);



extern void tvb_ensure_bytes_exist(const tvbuff_t *tvb, const gint offset, const gint length);


extern gboolean tvb_offset_exists(const tvbuff_t*, const gint offset);


extern guint tvb_reported_length(const tvbuff_t*);





extern gint tvb_reported_length_remaining(const tvbuff_t *tvb, const gint offset);







extern void tvb_set_reported_length(tvbuff_t*, const guint);

extern guint tvb_offset_from_real_beginning(const tvbuff_t *tvb);
# 317 "../../epan/tvbuff.h"
extern guint8 tvb_get_guint8(tvbuff_t*, const gint offset);

extern guint16 tvb_get_ntohs(tvbuff_t*, const gint offset);
extern guint32 tvb_get_ntoh24(tvbuff_t*, const gint offset);
extern guint32 tvb_get_ntohl(tvbuff_t*, const gint offset);
extern guint64 tvb_get_ntoh64(tvbuff_t*, const gint offset);
extern gfloat tvb_get_ntohieee_float(tvbuff_t*, const gint offset);
extern gdouble tvb_get_ntohieee_double(tvbuff_t*, const gint offset);

extern guint16 tvb_get_letohs(tvbuff_t*, const gint offset);
extern guint32 tvb_get_letoh24(tvbuff_t*, const gint offset);
extern guint32 tvb_get_letohl(tvbuff_t*, const gint offset);
extern guint64 tvb_get_letoh64(tvbuff_t*, const gint offset);
extern gfloat tvb_get_letohieee_float(tvbuff_t*, const gint offset);
extern gdouble tvb_get_letohieee_double(tvbuff_t*, const gint offset);





extern guint32 tvb_get_ipv4(tvbuff_t*, const gint offset);


extern void tvb_get_ipv6(tvbuff_t*, const gint offset, struct e_in6_addr *addr);


extern void tvb_get_ntohguid(tvbuff_t *tvb, const gint offset, e_guid_t *guid);
extern void tvb_get_letohguid(tvbuff_t *tvb, const gint offset, e_guid_t *guid);
extern void tvb_get_guid(tvbuff_t *tvb, const gint offset, e_guid_t *guid, const guint representation);


extern guint8 tvb_get_bits8(tvbuff_t *tvb, gint bit_offset, const gint no_of_bits);
extern guint16 tvb_get_bits16(tvbuff_t *tvb, gint bit_offset, const gint no_of_bits, const gboolean little_endian);
extern guint32 tvb_get_bits32(tvbuff_t *tvb, gint bit_offset, const gint no_of_bits, const gboolean little_endian);
extern guint64 tvb_get_bits64(tvbuff_t *tvb, gint bit_offset, const gint no_of_bits, const gboolean little_endian);






extern guint32 tvb_get_bits(tvbuff_t *tvb, const gint bit_offset, const gint no_of_bits, const gboolean little_endian);







extern void* tvb_memcpy(tvbuff_t*, void* target, const gint offset, size_t length);



extern void* tvb_memdup(tvbuff_t*, const gint offset, size_t length);





extern void* ep_tvb_memdup(tvbuff_t *tvb, const gint offset, size_t length);
# 403 "../../epan/tvbuff.h"
extern const guint8* tvb_get_ptr(tvbuff_t*, const gint offset, const gint length);
# 412 "../../epan/tvbuff.h"
extern gint tvb_find_guint8(tvbuff_t*, const gint offset, const gint maxlength,
    const guint8 needle);







extern gint tvb_pbrk_guint8(tvbuff_t *, const gint offset, const gint maxlength,
    const guint8 *needles, guchar *found_needle);






extern guint tvb_strsize(tvbuff_t *tvb, const gint offset);





extern gint tvb_strnlen(tvbuff_t*, const gint offset, const guint maxlength);
# 448 "../../epan/tvbuff.h"
extern char *tvb_fake_unicode(tvbuff_t *tvb, int offset, const int len,
                              const gboolean little_endian);
extern char *tvb_get_ephemeral_faked_unicode(tvbuff_t *tvb, int offset, const int len,
                              const gboolean little_endian);




extern gchar * tvb_format_text(tvbuff_t *tvb, const gint offset, const gint size);





extern gchar * tvb_format_text_wsp(tvbuff_t *tvb, const gint offset, const gint size);





extern gchar *tvb_format_stringzpad(tvbuff_t *tvb, const gint offset, const gint size);





extern gchar *tvb_format_stringzpad_wsp(tvbuff_t *tvb, const gint offset, const gint size);
# 501 "../../epan/tvbuff.h"
extern guint8 *tvb_get_string(tvbuff_t *tvb, const gint offset, const gint length);
extern gchar *tvb_get_unicode_string(tvbuff_t *tvb, const gint offset, gint length, const guint encoding);
extern guint8 *tvb_get_ephemeral_string(tvbuff_t *tvb, const gint offset, const gint length);
extern gchar *tvb_get_ephemeral_unicode_string(tvbuff_t *tvb, const gint offset, gint length, const guint encoding);
extern guint8 *tvb_get_seasonal_string(tvbuff_t *tvb, const gint offset, const gint length);
# 530 "../../epan/tvbuff.h"
extern guint8 *tvb_get_stringz(tvbuff_t *tvb, const gint offset, gint *lengthp);
extern guint8 *tvb_get_ephemeral_stringz(tvbuff_t *tvb, const gint offset, gint *lengthp);
extern gchar *tvb_get_ephemeral_unicode_stringz(tvbuff_t *tvb, const gint offset, gint *lengthp, const guint encoding);
extern guint8 *tvb_get_seasonal_stringz(tvbuff_t *tvb, const gint offset, gint *lengthp);
# 548 "../../epan/tvbuff.h"
extern gint tvb_get_nstringz(tvbuff_t *tvb, const gint offset, const guint bufsize,
    guint8* buffer);







extern gint tvb_get_nstringz0(tvbuff_t *tvb, const gint offset, const guint bufsize,
    guint8* buffer);
# 579 "../../epan/tvbuff.h"
extern gint tvb_find_line_end(tvbuff_t *tvb, const gint offset, int len,
    gint *next_offset, const gboolean desegment);
# 600 "../../epan/tvbuff.h"
extern gint tvb_find_line_end_unquoted(tvbuff_t *tvb, const gint offset, int len,
    gint *next_offset);
# 620 "../../epan/tvbuff.h"
extern gint tvb_skip_wsp(tvbuff_t* tvb, const gint offset, const gint maxlength);

extern gint tvb_skip_wsp_return(tvbuff_t* tvb, const gint offset);





extern gint tvb_strneql(tvbuff_t *tvb, const gint offset, const gchar *str,
    const size_t size);





extern gint tvb_strncaseeql(tvbuff_t *tvb, const gint offset, const gchar *str,
    const size_t size);





extern gint tvb_memeql(tvbuff_t *tvb, const gint offset, const guint8 *str,
    size_t size);






extern gchar *tvb_bytes_to_str_punct(tvbuff_t *tvb, const gint offset, const gint len,
    const gchar punct);





extern gchar *tvb_bytes_to_str(tvbuff_t *tvb, const gint offset, const gint len);
# 668 "../../epan/tvbuff.h"
typedef struct dgt_set_t
{
 const unsigned char out[15];
}
dgt_set_t;

extern gchar *tvb_bcd_dig_to_ep_str(tvbuff_t *tvb, const gint offset, const gint len, dgt_set_t *dgt, gboolean skip_first);
# 683 "../../epan/tvbuff.h"
extern gint tvb_find_tvb(tvbuff_t *haystack_tvb, tvbuff_t *needle_tvb,
 const gint haystack_offset);






extern tvbuff_t* tvb_uncompress(tvbuff_t *tvb, const int offset, int comprlen);






extern tvbuff_t* tvb_child_uncompress(tvbuff_t *parent, tvbuff_t *tvb, const int offset, int comprlen);
# 52 "../../epan/proto.h" 2
# 1 "../../epan/ftypes/ftypes.h" 1
# 30 "../../epan/ftypes/ftypes.h"
# 1 "../../epan/ftypes/../slab.h" 1
# 31 "../../epan/ftypes/ftypes.h" 2


enum ftenum {
 FT_NONE,
 FT_PROTOCOL,
 FT_BOOLEAN,
 FT_UINT8,
 FT_UINT16,
 FT_UINT24,
 FT_UINT32,
 FT_UINT64,
 FT_INT8,
 FT_INT16,
 FT_INT24,
 FT_INT32,
 FT_INT64,
 FT_FLOAT,
 FT_DOUBLE,
 FT_ABSOLUTE_TIME,
 FT_RELATIVE_TIME,
 FT_STRING,
 FT_STRINGZ,
 FT_EBCDIC,
 FT_UINT_STRING,

 FT_ETHER,
 FT_BYTES,
 FT_UINT_BYTES,
 FT_IPv4,
 FT_IPv6,
 FT_IPXNET,
 FT_FRAMENUM,
 FT_PCRE,
 FT_GUID,
 FT_OID,
 FT_NUM_TYPES
};
# 81 "../../epan/ftypes/ftypes.h"
typedef enum ftenum ftenum_t;
typedef struct _ftype_t ftype_t;


enum ftrepr {
 FTREPR_DISPLAY,
 FTREPR_DFILTER
};

typedef enum ftrepr ftrepr_t;






void
ftypes_initialize(void);




const char*
ftype_name(ftenum_t ftype);




const char*
ftype_pretty_name(ftenum_t ftype);


int
ftype_length(ftenum_t ftype);

gboolean
ftype_can_slice(enum ftenum ftype);

gboolean
ftype_can_eq(enum ftenum ftype);

gboolean
ftype_can_ne(enum ftenum ftype);

gboolean
ftype_can_gt(enum ftenum ftype);

gboolean
ftype_can_ge(enum ftenum ftype);

gboolean
ftype_can_lt(enum ftenum ftype);

gboolean
ftype_can_le(enum ftenum ftype);

gboolean
ftype_can_bitwise_and(enum ftenum ftype);

gboolean
ftype_can_contains(enum ftenum ftype);

gboolean
ftype_can_matches(enum ftenum ftype);



# 1 "../../epan/ipv4.h" 1
# 149 "../../epan/ftypes/ftypes.h" 2


# 1 "../../epan/tvbuff.h" 1
# 152 "../../epan/ftypes/ftypes.h" 2
# 1 "../../epan/nstime.h" 1
# 153 "../../epan/ftypes/ftypes.h" 2
# 1 "../../epan/dfilter/drange.h" 1
# 39 "../../epan/dfilter/drange.h"
typedef enum {
 DRANGE_NODE_END_T_UNINITIALIZED,
 DRANGE_NODE_END_T_LENGTH,
 DRANGE_NODE_END_T_OFFSET,
 DRANGE_NODE_END_T_TO_THE_END
} drange_node_end_t;

typedef struct _drange_node {
  gint start_offset;
  gint length;
  gint end_offset;
  drange_node_end_t ending;
} drange_node;

typedef struct _drange {
  GSList* range_list;
  gboolean has_total_length;
  gint total_length;
  gint min_start_offset;
  gint max_start_offset;
} drange;


drange_node* drange_node_new(void);


void drange_node_free(drange_node* drnode);


void drange_node_free_list(GSList* list);


gint drange_node_get_start_offset(drange_node* drnode);
gint drange_node_get_length(drange_node* drnode);
gint drange_node_get_end_offset(drange_node* drnode);
drange_node_end_t drange_node_get_ending(drange_node* drnode);


void drange_node_set_start_offset(drange_node* drnode, gint offset);
void drange_node_set_length(drange_node* drnode, gint length);
void drange_node_set_end_offset(drange_node* drnode, gint offset);
void drange_node_set_to_the_end(drange_node* drnode);


drange* drange_new(void);
drange* drange_new_from_list(GSList *list);




void drange_free(drange* dr);


gboolean drange_has_total_length(drange* dr);
gint drange_get_total_length(drange* dr);
gint drange_get_min_start_offset(drange* dr);
gint drange_get_max_start_offset(drange* dr);


void drange_append_drange_node(drange* dr, drange_node* drnode);
void drange_prepend_drange_node(drange* dr, drange_node* drnode);
void drange_foreach_drange_node(drange* dr, GFunc func, gpointer funcdata);
# 154 "../../epan/ftypes/ftypes.h" 2

typedef struct _fvalue_t {
 ftype_t *ftype;
 union {

  guint32 uinteger;
  gint32 sinteger;
  guint64 integer64;
  gdouble floating;
  gchar *string;
  guchar *ustring;
  GByteArray *bytes;
  ipv4_addr ipv4;
  e_guid_t guid;
  nstime_t time;
  tvbuff_t *tvb;



  GRegex *re;

 } value;



 gboolean fvalue_gboolean1;

} fvalue_t;

typedef void (*FvalueNewFunc)(fvalue_t*);
typedef void (*FvalueFreeFunc)(fvalue_t*);
typedef void (*LogFunc)(const char*,...);

typedef gboolean (*FvalueFromUnparsed)(fvalue_t*, char*, gboolean, LogFunc);
typedef gboolean (*FvalueFromString)(fvalue_t*, char*, LogFunc);
typedef void (*FvalueToStringRepr)(fvalue_t*, ftrepr_t, char*);
typedef int (*FvalueStringReprLen)(fvalue_t*, ftrepr_t);

typedef void (*FvalueSetFunc)(fvalue_t*, gpointer, gboolean);
typedef void (*FvalueSetUnsignedIntegerFunc)(fvalue_t*, guint32);
typedef void (*FvalueSetSignedIntegerFunc)(fvalue_t*, gint32);
typedef void (*FvalueSetInteger64Func)(fvalue_t*, guint64);
typedef void (*FvalueSetFloatingFunc)(fvalue_t*, gdouble);

typedef gpointer (*FvalueGetFunc)(fvalue_t*);
typedef guint32 (*FvalueGetUnsignedIntegerFunc)(fvalue_t*);
typedef gint32 (*FvalueGetSignedIntegerFunc)(fvalue_t*);
typedef guint64 (*FvalueGetInteger64Func)(fvalue_t*);
typedef double (*FvalueGetFloatingFunc)(fvalue_t*);

typedef gboolean (*FvalueCmp)(fvalue_t*, fvalue_t*);

typedef guint (*FvalueLen)(fvalue_t*);
typedef void (*FvalueSlice)(fvalue_t*, GByteArray *, guint offset, guint length);

struct _ftype_t {
 ftenum_t ftype;
 const char *name;
 const char *pretty_name;
 int wire_size;
 FvalueNewFunc new_value;
 FvalueFreeFunc free_value;
 FvalueFromUnparsed val_from_unparsed;
 FvalueFromString val_from_string;
 FvalueToStringRepr val_to_string_repr;
 FvalueStringReprLen len_string_repr;


 FvalueSetFunc set_value;
 FvalueSetUnsignedIntegerFunc set_value_uinteger;
 FvalueSetSignedIntegerFunc set_value_sinteger;
 FvalueSetInteger64Func set_value_integer64;
 FvalueSetFloatingFunc set_value_floating;


 FvalueGetFunc get_value;
 FvalueGetUnsignedIntegerFunc get_value_uinteger;
 FvalueGetSignedIntegerFunc get_value_sinteger;
 FvalueGetInteger64Func get_value_integer64;
 FvalueGetFloatingFunc get_value_floating;

 FvalueCmp cmp_eq;
 FvalueCmp cmp_ne;
 FvalueCmp cmp_gt;
 FvalueCmp cmp_ge;
 FvalueCmp cmp_lt;
 FvalueCmp cmp_le;
 FvalueCmp cmp_bitwise_and;
 FvalueCmp cmp_contains;
 FvalueCmp cmp_matches;

 FvalueLen len;
 FvalueSlice slice;
};


fvalue_t*
fvalue_new(ftenum_t ftype);

void
fvalue_init(fvalue_t *fv, ftenum_t ftype);



union fvalue_tslab_item { fvalue_t slab_item; union fvalue_tslab_item *next_free; };




extern union fvalue_tslab_item *fvalue_t_free_list;
# 282 "../../epan/ftypes/ftypes.h"
fvalue_t*
fvalue_from_unparsed(ftenum_t ftype, char *s, gboolean allow_partial_value, LogFunc logfunc);

fvalue_t*
fvalue_from_string(ftenum_t ftype, char *s, LogFunc logfunc);







int
fvalue_string_repr_len(fvalue_t *fv, ftrepr_t rtype);
# 307 "../../epan/ftypes/ftypes.h"
extern char *
fvalue_to_string_repr(fvalue_t *fv, ftrepr_t rtype, char *buf);

ftype_t*
fvalue_ftype(fvalue_t *fv);

const char*
fvalue_type_name(fvalue_t *fv);

void
fvalue_set(fvalue_t *fv, gpointer value, gboolean already_copied);

void
fvalue_set_uinteger(fvalue_t *fv, guint32 value);

void
fvalue_set_sinteger(fvalue_t *fv, gint32 value);

void
fvalue_set_integer64(fvalue_t *fv, guint64 value);

void
fvalue_set_floating(fvalue_t *fv, gdouble value);

gpointer
fvalue_get(fvalue_t *fv);

extern guint32
fvalue_get_uinteger(fvalue_t *fv);

extern gint32
fvalue_get_sinteger(fvalue_t *fv);

guint64
fvalue_get_integer64(fvalue_t *fv);

extern double
fvalue_get_floating(fvalue_t *fv);

gboolean
fvalue_eq(fvalue_t *a, fvalue_t *b);

gboolean
fvalue_ne(fvalue_t *a, fvalue_t *b);

gboolean
fvalue_gt(fvalue_t *a, fvalue_t *b);

gboolean
fvalue_ge(fvalue_t *a, fvalue_t *b);

gboolean
fvalue_lt(fvalue_t *a, fvalue_t *b);

gboolean
fvalue_le(fvalue_t *a, fvalue_t *b);

gboolean
fvalue_bitwise_and(fvalue_t *a, fvalue_t *b);

gboolean
fvalue_contains(fvalue_t *a, fvalue_t *b);

gboolean
fvalue_matches(fvalue_t *a, fvalue_t *b);

guint
fvalue_length(fvalue_t *fv);

fvalue_t*
fvalue_slice(fvalue_t *fv, drange *dr);
# 53 "../../epan/proto.h" 2
# 1 "../../register.h" 1
# 30 "../../register.h"
typedef enum {
  RA_NONE,
  RA_DISSECTORS,
  RA_LISTENERS,
  RA_REGISTER,
  RA_PLUGIN_REGISTER,
  RA_HANDOFF,
  RA_PLUGIN_HANDOFF,
  RA_PREFERENCES,
  RA_CONFIGURATION
} register_action_e;

typedef void (*register_cb)(register_action_e action, const char *message, gpointer client_data);

extern void register_all_protocols(register_cb cb, gpointer client_data);
extern void register_all_protocol_handoffs(register_cb cb, gpointer client_data);
extern void register_all_tap_listeners(void);
extern gulong register_count(void);
# 54 "../../epan/proto.h" 2






extern int hf_text_only;




struct _value_string;







typedef void (*custom_fmt_func_t)(gchar *, guint32);





struct _protocol;


typedef struct _protocol protocol_t;
# 220 "../../epan/proto.h"
typedef enum {
 BASE_NONE,
 BASE_DEC,
 BASE_HEX,
 BASE_OCT,
 BASE_DEC_HEX,
 BASE_HEX_DEC,
 BASE_CUSTOM
} base_display_e;
# 242 "../../epan/proto.h"
typedef enum {
    HF_REF_TYPE_NONE,
    HF_REF_TYPE_INDIRECT,
    HF_REF_TYPE_DIRECT
} hf_ref_type;


typedef struct _header_field_info header_field_info;


struct _header_field_info {

 const char *name;
 const char *abbrev;
 enum ftenum type;
 int display;
 const void *strings;



 guint32 bitmask;
 const char *blurb;


 int id;
 int parent;
 hf_ref_type ref_type;
 int bitshift;
 header_field_info *same_name_next;
 header_field_info *same_name_prev;
};
# 282 "../../epan/proto.h"
typedef struct hf_register_info {
 int *p_id;
 header_field_info hfinfo;
} hf_register_info;





typedef struct _item_label_t {
 char representation[240];
} item_label_t;



typedef struct field_info {
 header_field_info *hfinfo;
 gint start;
 gint length;
 gint appendix_start;
 gint appendix_length;
 gint tree_type;
 item_label_t *rep;
 guint32 flags;
 tvbuff_t *ds_tvb;
 fvalue_t value;
} field_info;
# 352 "../../epan/proto.h"
typedef struct {
    GHashTable *interesting_hfids;
    gboolean visible;
    gboolean fake_protocols;
    gint count;
} tree_data_t;


typedef struct _proto_node {
 struct _proto_node *first_child;
 struct _proto_node *last_child;
 struct _proto_node *next;
 struct _proto_node *parent;
 field_info *finfo;
 tree_data_t *tree_data;
} proto_node;


typedef proto_node proto_tree;

typedef proto_node proto_item;
# 449 "../../epan/proto.h"
typedef void (*proto_tree_foreach_func)(proto_node *, gpointer);
typedef gboolean (*proto_tree_traverse_func)(proto_node *, gpointer);

extern gboolean proto_tree_traverse_post_order(proto_tree *tree,
    proto_tree_traverse_func func, gpointer data);

extern void proto_tree_children_foreach(proto_tree *tree,
    proto_tree_foreach_func func, gpointer data);
# 471 "../../epan/proto.h"
extern void proto_init(void (register_all_protocols_func)(register_cb cb, gpointer client_data),
         void (register_all_handoffs_func)(register_cb cb, gpointer client_data),
         register_cb cb, void *client_data);



extern void proto_cleanup(void);
# 492 "../../epan/proto.h"
extern gboolean proto_field_is_referenced(proto_tree *tree, int proto_id);







extern proto_tree* proto_item_add_subtree(proto_item *ti, const gint idx);




extern proto_tree* proto_item_get_subtree(const proto_item *ti);




extern proto_item* proto_item_get_parent(const proto_item *ti);





extern proto_item* proto_item_get_parent_nth(proto_item *ti, int gen);





extern void proto_item_set_text(proto_item *ti, const char *format, ...)
 __attribute__((__format__ (__printf__, 2, 3)));





extern void proto_item_append_text(proto_item *ti, const char *format, ...)
 __attribute__((__format__ (__printf__, 2, 3)));





extern void proto_item_prepend_text(proto_item *ti, const char *format, ...)
 __attribute__((__format__ (__printf__, 2, 3)));




extern void proto_item_set_len(proto_item *ti, const gint length);
# 554 "../../epan/proto.h"
extern void proto_item_set_end(proto_item *ti, tvbuff_t *tvb, gint end);





extern int proto_item_get_len(const proto_item *ti);
# 569 "../../epan/proto.h"
extern gboolean proto_item_set_expert_flags(proto_item *ti, const int group, const guint severity);






extern proto_tree* proto_tree_create_root(void);



extern void proto_tree_free(proto_tree *tree);
# 589 "../../epan/proto.h"
extern gboolean
proto_tree_set_visible(proto_tree *tree, gboolean visible);




extern void
proto_tree_set_fake_protocols(proto_tree *tree, gboolean fake_protocols);





extern void
proto_tree_prime_hfid(proto_tree *tree, const int hfid);




extern proto_item* proto_tree_get_parent(const proto_tree *tree);




extern proto_tree* proto_tree_get_root(proto_tree *tree);





extern void proto_tree_move_item(proto_tree *tree, proto_item *fixed_item, proto_item *item_to_move);







extern void proto_tree_set_appendix(proto_tree *tree, tvbuff_t *tvb, gint start, const gint length);
# 639 "../../epan/proto.h"
extern proto_item *
proto_tree_add_item(proto_tree *tree, const int hfindex, tvbuff_t *tvb,
    const gint start, gint length, const guint encoding);
# 651 "../../epan/proto.h"
extern proto_item *
proto_tree_add_text(proto_tree *tree, tvbuff_t *tvb, gint start, gint length, const char *format,
 ...) __attribute__((__format__ (__printf__, 5, 6)));
# 663 "../../epan/proto.h"
extern proto_item *
proto_tree_add_text_valist(proto_tree *tree, tvbuff_t *tvb, gint start,
 gint length, const char *format, va_list ap);
# 677 "../../epan/proto.h"
extern proto_item *
proto_tree_add_none_format(proto_tree *tree, const int hfindex, tvbuff_t *tvb, const gint start,
 gint length, const char *format, ...) __attribute__((__format__ (__printf__, 6, 7)));
# 690 "../../epan/proto.h"
extern proto_item *
proto_tree_add_protocol_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const char *format, ...) __attribute__((__format__ (__printf__, 6, 7)));
# 705 "../../epan/proto.h"
extern proto_item *
proto_tree_add_bytes(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const guint8* start_ptr);
# 721 "../../epan/proto.h"
extern proto_item *
proto_tree_add_bytes_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, const guint8* start_ptr, const char *format,
 ...) __attribute__((__format__ (__printf__, 7, 8)));
# 737 "../../epan/proto.h"
extern proto_item *
proto_tree_add_bytes_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const guint8* start_ptr, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 749 "../../epan/proto.h"
extern proto_item *
proto_tree_add_time(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, nstime_t* value_ptr);
# 765 "../../epan/proto.h"
extern proto_item *
proto_tree_add_time_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, nstime_t* value_ptr, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 782 "../../epan/proto.h"
extern proto_item *
proto_tree_add_time_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, nstime_t* value_ptr, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 794 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ipxnet(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint32 value);
# 810 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ipxnet_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, guint32 value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 826 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ipxnet_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint32 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 838 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ipv4(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint32 value);
# 854 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ipv4_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, guint32 value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 870 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ipv4_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint32 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 882 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ipv6(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const guint8* value_ptr);
# 898 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ipv6_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, const guint8* value_ptr, const char *format,
 ...) __attribute__((__format__ (__printf__, 7, 8)));
# 914 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ipv6_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const guint8* value_ptr, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 926 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ether(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const guint8* value);
# 942 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ether_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, const guint8* value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 958 "../../epan/proto.h"
extern proto_item *
proto_tree_add_ether_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const guint8* value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 970 "../../epan/proto.h"
extern proto_item *
proto_tree_add_guid(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const e_guid_t *value_ptr);
# 986 "../../epan/proto.h"
extern proto_item *
proto_tree_add_guid_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, const e_guid_t *value_ptr, const char *format,
 ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1002 "../../epan/proto.h"
extern proto_item *
proto_tree_add_guid_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const e_guid_t *value_ptr, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1014 "../../epan/proto.h"
extern proto_item *
proto_tree_add_oid(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const guint8* value_ptr);
# 1030 "../../epan/proto.h"
extern proto_item *
proto_tree_add_oid_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, const guint8* value_ptr, const char *format,
 ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1046 "../../epan/proto.h"
extern proto_item *
proto_tree_add_oid_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const guint8* value_ptr, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1058 "../../epan/proto.h"
extern proto_item *
proto_tree_add_string(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const char* value);
# 1074 "../../epan/proto.h"
extern proto_item *
proto_tree_add_string_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, const char* value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 1090 "../../epan/proto.h"
extern proto_item *
proto_tree_add_string_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, const char* value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1102 "../../epan/proto.h"
extern proto_item *
proto_tree_add_boolean(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint32 value);
# 1118 "../../epan/proto.h"
extern proto_item *
proto_tree_add_boolean_format_value(proto_tree *tree, int hfindex,
 tvbuff_t *tvb, gint start, gint length, guint32 value,
 const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1134 "../../epan/proto.h"
extern proto_item *
proto_tree_add_boolean_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint32 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1146 "../../epan/proto.h"
extern proto_item *
proto_tree_add_float(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, float value);
# 1162 "../../epan/proto.h"
extern proto_item *
proto_tree_add_float_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, float value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 1178 "../../epan/proto.h"
extern proto_item *
proto_tree_add_float_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, float value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1190 "../../epan/proto.h"
extern proto_item *
proto_tree_add_double(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, double value);
# 1206 "../../epan/proto.h"
extern proto_item *
proto_tree_add_double_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, double value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 1222 "../../epan/proto.h"
extern proto_item *
proto_tree_add_double_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, double value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1234 "../../epan/proto.h"
extern proto_item *
proto_tree_add_uint(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint32 value);
# 1250 "../../epan/proto.h"
extern proto_item *
proto_tree_add_uint_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, guint32 value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 1267 "../../epan/proto.h"
extern proto_item *
proto_tree_add_uint_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint32 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1279 "../../epan/proto.h"
extern proto_item *
proto_tree_add_uint64(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint64 value);
# 1295 "../../epan/proto.h"
extern proto_item *
proto_tree_add_uint64_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, guint64 value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 1311 "../../epan/proto.h"
extern proto_item *
proto_tree_add_uint64_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, guint64 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1323 "../../epan/proto.h"
extern proto_item *
proto_tree_add_int(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, gint32 value);
# 1339 "../../epan/proto.h"
extern proto_item *
proto_tree_add_int_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, gint32 value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 1356 "../../epan/proto.h"
extern proto_item *
proto_tree_add_int_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, gint32 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1368 "../../epan/proto.h"
extern proto_item *
proto_tree_add_int64(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, gint64 value);
# 1384 "../../epan/proto.h"
extern proto_item *
proto_tree_add_int64_format_value(proto_tree *tree, int hfindex, tvbuff_t *tvb,
 gint start, gint length, gint64 value, const char *format, ...)
 __attribute__((__format__ (__printf__, 7, 8)));
# 1400 "../../epan/proto.h"
extern proto_item *
proto_tree_add_int64_format(proto_tree *tree, int hfindex, tvbuff_t *tvb, gint start,
 gint length, gint64 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));







extern proto_item *
proto_tree_add_debug_text(proto_tree *tree, const char *format,
 ...) __attribute__((__format__ (__printf__, 2, 3)));
# 1430 "../../epan/proto.h"
extern void
proto_item_append_string(proto_item *pi, const char *str);







extern void
proto_item_fill_label(field_info *fi, gchar *label_str);







extern int
proto_register_protocol(const char *name, const char *short_name, const char *filter_name);



extern void
proto_mark_private(const int proto_id);




extern gboolean
proto_is_private(const int proto_id);





typedef void (*prefix_initializer_t)(const char* match);




extern void
proto_register_prefix(const char *prefix, prefix_initializer_t initializer);


extern void proto_initialize_all_prefixes(void);





extern void
proto_register_field_array(const int parent, hf_register_info *hf, const int num_records);




extern void
proto_register_subtree_array(gint *const *indices, const int num_indices);



extern int proto_registrar_n(void);




extern const char* proto_registrar_get_name(const int n);




extern const char* proto_registrar_get_abbrev(const int n);




extern header_field_info* proto_registrar_get_nth(guint hfindex);




extern header_field_info* proto_registrar_get_byname(const char *field_name);




extern int proto_registrar_get_ftype(const int n);




extern int proto_registrar_get_parent(const int n);




extern gboolean proto_registrar_is_protocol(const int n);




extern gint proto_registrar_get_length(const int n);





extern int proto_get_first_protocol(void **cookie);
extern int proto_get_next_protocol(void **cookie);
extern header_field_info *proto_get_first_protocol_field(const int proto_id, void **cookle);
extern header_field_info *proto_get_next_protocol_field(void **cookle);




extern int proto_get_id_by_filter_name(const gchar* filter_name);




extern gboolean proto_can_toggle_protocol(const int proto_id);



extern protocol_t *find_protocol_by_id(const int proto_id);




extern const char *proto_get_protocol_name(const int proto_id);



extern int proto_get_id(const protocol_t *protocol);



extern const char *proto_get_protocol_short_name(const protocol_t *protocol);



extern const char *proto_get_protocol_long_name(const protocol_t *protocol);




extern gboolean proto_is_protocol_enabled(const protocol_t *protocol);




extern const char *proto_get_protocol_filter_name(const int proto_id);




extern void proto_set_decoding(const int proto_id, const gboolean enabled);


extern void proto_enable_all(void);



extern void proto_set_cant_toggle(const int proto_id);






extern gboolean proto_check_for_protocol_or_field(const proto_tree* tree, const int id);






extern GPtrArray* proto_get_finfo_ptr_array(const proto_tree *tree, const int hfindex);





extern gboolean proto_tracking_interesting_fields(const proto_tree *tree);







extern GPtrArray* proto_find_finfo(proto_tree *tree, const int hfindex);





extern GPtrArray* proto_all_finfos(proto_tree *tree);


extern void proto_registrar_dump_protocols(void);


extern void proto_registrar_dump_values(void);




extern void proto_registrar_dump_fields(const int format);







extern gboolean *tree_is_expanded;



extern int num_tree_types;
# 1661 "../../epan/proto.h"
extern int
hfinfo_bitwidth(const header_field_info *hfinfo);




# 1 "../../epan/epan.h" 1
# 28 "../../epan/epan.h"
# 1 "../../epan/frame_data.h" 1
# 28 "../../epan/frame_data.h"
# 1 "../../epan/column_info.h" 1
# 42 "../../epan/column_info.h"
typedef struct {
  const gchar **col_expr;
  gchar **col_expr_val;
} col_expr_t;


typedef struct _column_info {
  gint num_cols;
  gint *col_fmt;
  gboolean **fmt_matx;
  gint *col_first;
  gint *col_last;
  gchar **col_title;
  gchar **col_custom_field;
  gint *col_custom_occurrence;
  gint *col_custom_field_id;
  struct _dfilter_t **col_custom_dfilter;
  const gchar **col_data;
  gchar **col_buf;
  int *col_fence;
  col_expr_t col_expr;
  gboolean writable;
  gboolean columns_changed;
} column_info;
# 76 "../../epan/column_info.h"
enum {
  COL_8021Q_VLAN_ID,
  COL_ABS_DATE_TIME,
  COL_ABS_TIME,
  COL_CIRCUIT_ID,
  COL_DSTIDX,
  COL_SRCIDX,
  COL_VSAN,
  COL_CUMULATIVE_BYTES,
  COL_CUSTOM,
  COL_DCE_CALL,
  COL_DCE_CTX,
  COL_DELTA_TIME,
  COL_DELTA_CONV_TIME,
  COL_DELTA_TIME_DIS,
  COL_RES_DST,
  COL_UNRES_DST,
  COL_RES_DST_PORT,
  COL_UNRES_DST_PORT,
  COL_DEF_DST,
  COL_DEF_DST_PORT,
  COL_EXPERT,
  COL_IF_DIR,
  COL_OXID,
  COL_RXID,
  COL_FR_DLCI,
  COL_FREQ_CHAN,
  COL_BSSGP_TLLI,
  COL_HPUX_DEVID,
  COL_HPUX_SUBSYS,
  COL_DEF_DL_DST,
  COL_DEF_DL_SRC,
  COL_RES_DL_DST,
  COL_UNRES_DL_DST,
  COL_RES_DL_SRC,
  COL_UNRES_DL_SRC,
  COL_RSSI,
  COL_TX_RATE,
  COL_DSCP_VALUE,
  COL_INFO,
  COL_COS_VALUE,
  COL_RES_NET_DST,
  COL_UNRES_NET_DST,
  COL_RES_NET_SRC,
  COL_UNRES_NET_SRC,
  COL_DEF_NET_DST,
  COL_DEF_NET_SRC,
  COL_NUMBER,
  COL_PACKET_LENGTH,
  COL_PROTOCOL,
  COL_REL_TIME,
  COL_REL_CONV_TIME,
  COL_DEF_SRC,
  COL_DEF_SRC_PORT,
  COL_RES_SRC,
  COL_UNRES_SRC,
  COL_RES_SRC_PORT,
  COL_UNRES_SRC_PORT,
  COL_TEI,
  COL_CLS_TIME,
  NUM_COL_FMTS
};
# 29 "../../epan/frame_data.h" 2
# 42 "../../epan/frame_data.h"
typedef struct _frame_data {
  struct _frame_data *next;
  struct _frame_data *prev;
  GSList *pfd;
  guint32 num;
  guint32 pkt_len;
  guint32 cap_len;
  guint32 cum_bytes;
  gint64 file_off;
  guint16 subnum;
  gint16 lnk_t;
  struct {
    unsigned int passed_dfilter : 1;
    unsigned int encoding : 2;
    unsigned int visited : 1;
    unsigned int marked : 1;
    unsigned int ref_time : 1;
    unsigned int ignored : 1;
  } flags;

  const void *color_filter;

  nstime_t abs_ts;
  nstime_t rel_ts;
  nstime_t del_dis_ts;
  nstime_t del_cap_ts;


  gchar **col_text;
  guint *col_text_len;

} frame_data;





typedef struct {
  tvbuff_t *tvb;
  gboolean name_initialized;
  const char *name;
} data_source;



extern void p_add_proto_data(frame_data *fd, int proto, void *proto_data);
extern void *p_get_proto_data(frame_data *fd, int proto);
extern void p_remove_proto_data(frame_data *fd, int proto);


extern gint frame_data_compare(const frame_data *fdata1, const frame_data *fdata2, int field);

extern void frame_data_cleanup(frame_data *fdata);

extern void frame_data_init(frame_data *fdata, guint32 num,
                const struct wtap_pkthdr *phdr, gint64 offset,
                guint32 cum_bytes);



extern void frame_data_set_before_dissect(frame_data *fdata,
                nstime_t *elapsed_time,
                nstime_t *first_ts,
                nstime_t *prev_dis_ts,
                nstime_t *prev_cap_ts);

extern void frame_data_set_after_dissect(frame_data *fdata,
                guint32 *cum_bytes,
                nstime_t *prev_dis_ts);
# 29 "../../epan/epan.h" 2
# 1 "../../epan/column_info.h" 1
# 30 "../../epan/epan.h" 2


typedef struct _epan_dissect_t epan_dissect_t;

# 1 "../../epan/dfilter/dfilter.h" 1
# 29 "../../epan/dfilter/dfilter.h"
typedef struct _dfilter_t dfilter_t;

# 1 "../../epan/epan.h" 1
# 32 "../../epan/dfilter/dfilter.h" 2
# 1 "../../epan/proto.h" 1
# 33 "../../epan/dfilter/dfilter.h" 2



void
dfilter_init(void);


void
dfilter_cleanup(void);
# 58 "../../epan/dfilter/dfilter.h"
gboolean
dfilter_compile(const gchar *text, dfilter_t **dfp);



void
dfilter_free(dfilter_t *df);







extern const gchar *dfilter_error_msg;



gboolean
dfilter_apply_edt(dfilter_t *df, epan_dissect_t* edt);


gboolean
dfilter_apply(dfilter_t *df, proto_tree *tree);


void
dfilter_prime_proto_tree(const dfilter_t *df, proto_tree *tree);

GPtrArray *
dfilter_deprecated_tokens(dfilter_t *df);


void
dfilter_dump(dfilter_t *df);
# 35 "../../epan/epan.h" 2


void epan_init(void (*register_all_protocols_func)(register_cb cb, gpointer client_data),
        void (*register_all_handoffs_func)(register_cb cb, gpointer client_data),
        register_cb cb,
        void *client_data,
        void (*report_failure_fcn_p)(const char *, va_list),
        void (*report_open_failure_fcn_p)(const char *, int, gboolean),
        void (*report_read_failure_fcn_p)(const char *, int),
        void (*report_write_failure_fcn_p)(const char *, int));


void epan_cleanup(void);







void epan_conversation_init(void);
void epan_conversation_cleanup(void);
# 68 "../../epan/epan.h"
void epan_circuit_init(void);
void epan_circuit_cleanup(void);
# 79 "../../epan/epan.h"
typedef struct epan_session epan_t;

epan_t*
epan_new(void);

void
epan_free(epan_t*);

extern gchar*
epan_get_version(void);


epan_dissect_t*
epan_dissect_init(epan_dissect_t *edt, const gboolean create_proto_tree, const gboolean proto_tree_visible);




epan_dissect_t*
epan_dissect_new(const gboolean create_proto_tree, const gboolean proto_tree_visible);


void
epan_dissect_fake_protocols(epan_dissect_t *edt, const gboolean fake_protocols);


void
epan_dissect_run(epan_dissect_t *edt, void* pseudo_header,
        const guint8* data, frame_data *fd, column_info *cinfo);


void
epan_dissect_prime_dfilter(epan_dissect_t *edt, const dfilter_t *dfcode);


void
epan_dissect_fill_in_columns(epan_dissect_t *edt, const gboolean fill_col_exprs, const gboolean fill_fd_colums);


void
epan_dissect_cleanup(epan_dissect_t* edt);


void
epan_dissect_free(epan_dissect_t* edt);


const gchar *
epan_custom_set(epan_dissect_t *edt, int id, gint occurrence,
    gchar *result, gchar *expr, const int size);




void
epan_get_compiled_version_info(GString *str);




void
epan_get_runtime_version_info(GString *str);
# 1668 "../../epan/proto.h" 2





extern gboolean
proto_can_match_selected(field_info *finfo, epan_dissect_t *edt);





extern char*
proto_construct_match_selected_string(field_info *finfo, epan_dissect_t *edt);






extern field_info*
proto_find_field_from_offset(proto_tree *tree, guint offset, tvbuff_t *tvb);
# 1709 "../../epan/proto.h"
extern proto_item *
proto_tree_add_bitmask(proto_tree *tree, tvbuff_t *tvb, const guint offset,
  const int hf_hdr, const gint ett, const int **fields, const gboolean little_endian);
# 1726 "../../epan/proto.h"
extern proto_item *
proto_tree_add_bitmask_text(proto_tree *tree, tvbuff_t *tvb, const guint offset, const guint len,
  const char *name, const char *fallback,
  const gint ett, const int **fields, const gboolean little_endian, const int flags);
# 1745 "../../epan/proto.h"
extern proto_item *
proto_tree_add_bits_item(proto_tree *tree, const int hf_index, tvbuff_t *tvb, const gint bit_offset, const gint no_of_bits, const gboolean little_endian);
# 1758 "../../epan/proto.h"
extern proto_item *
proto_tree_add_bits_ret_val(proto_tree *tree, const int hf_index, tvbuff_t *tvb, const gint bit_offset, const gint no_of_bits, guint64 *return_value, const gboolean little_endian);
# 1772 "../../epan/proto.h"
extern proto_item *
proto_tree_add_uint_bits_format_value(proto_tree *tree, const int hf_index, tvbuff_t *tvb, const gint bit_offset, const gint no_of_bits,
 guint32 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1788 "../../epan/proto.h"
extern proto_item *
proto_tree_add_boolean_bits_format_value(proto_tree *tree, const int hf_index, tvbuff_t *tvb, const gint bit_offset, const gint no_of_bits,
 guint32 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1804 "../../epan/proto.h"
extern proto_item *
proto_tree_add_int_bits_format_value(proto_tree *tree, const int hf_index, tvbuff_t *tvb, const gint bit_offset, const gint no_of_bits,
 gint32 value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));
# 1820 "../../epan/proto.h"
extern proto_item *
proto_tree_add_float_bits_format_value(proto_tree *tree, const int hf_index, tvbuff_t *tvb, const gint bit_offset, const gint no_of_bits,
 float value, const char *format, ...) __attribute__((__format__ (__printf__, 7, 8)));




extern guchar
proto_check_field_name(const gchar *field_name);
# 1838 "../../epan/proto.h"
const gchar *
proto_custom_set(proto_tree* tree, const int field_id,
                             gint occurrence,
                             gchar *result,
                             gchar *expr, const int size );
# 30 "../../epan/packet.h" 2

# 1 "../../epan/pint.h" 1
# 32 "../../epan/packet.h" 2
# 1 "../../epan/to_str.h" 1
# 32 "../../epan/to_str.h"
# 1 "../../epan/packet_info.h" 1
# 30 "../../epan/packet_info.h"
# 1 "../../epan/address.h" 1
# 29 "../../epan/address.h"
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

# 165 "/usr/include/string.h" 3 4
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
# 1303 "/usr/include/bits/string2.h" 3 4
extern char *__strdup (__const char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
# 1322 "/usr/include/bits/string2.h" 3 4
extern char *__strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
# 638 "/usr/include/string.h" 2 3 4
# 646 "/usr/include/string.h" 3 4

# 30 "../../epan/address.h" 2
# 1 "../../epan/emem.h" 1
# 29 "../../epan/emem.h"
# 1 "../../epan/g_gnuc_malloc.h" 1
# 30 "../../epan/emem.h" 2






void emem_init(void);
# 51 "../../epan/emem.h"
void *ep_alloc(size_t size) __attribute__((__malloc__));



void* ep_alloc0(size_t size) __attribute__((__malloc__));



gchar* ep_strdup(const gchar* src) __attribute__((__malloc__));


gchar* ep_strndup(const gchar* src, size_t len) __attribute__((__malloc__));


void* ep_memdup(const void* src, size_t len) __attribute__((__malloc__));


gchar* ep_strdup_vprintf(const gchar* fmt, va_list ap) __attribute__((__malloc__));
gchar* ep_strdup_printf(const gchar* fmt, ...)
     __attribute__((__malloc__)) __attribute__((__format__ (__printf__, 1, 2)));
# 87 "../../epan/emem.h"
gchar** ep_strsplit(const gchar* string, const gchar* delimiter, int max_tokens);


void ep_free_all(void);




typedef struct _ep_stack_frame_t** ep_stack_t;

struct _ep_stack_frame_t {
    void* payload;
    struct _ep_stack_frame_t* below;
    struct _ep_stack_frame_t* above;
};




ep_stack_t ep_stack_new(void) __attribute__((__malloc__));




void* ep_stack_push(ep_stack_t stack, void* item);




void* ep_stack_pop(ep_stack_t stack);
# 136 "../../epan/emem.h"
void *se_alloc(size_t size) __attribute__((__malloc__));


void* se_alloc0(size_t size) __attribute__((__malloc__));


gchar* se_strdup(const gchar* src) __attribute__((__malloc__));


gchar* se_strndup(const gchar* src, size_t len) __attribute__((__malloc__));


void* se_memdup(const void* src, size_t len) __attribute__((__malloc__));


gchar* se_strdup_vprintf(const gchar* fmt, va_list ap) __attribute__((__malloc__));
gchar* se_strdup_printf(const gchar* fmt, ...)
     __attribute__((__malloc__)) __attribute__((__format__ (__printf__, 1, 2)));





void se_free_all(void);







typedef struct _emem_tree_node_t {
 struct _emem_tree_node_t *parent;
 struct _emem_tree_node_t *left;
 struct _emem_tree_node_t *right;
 struct {


  guint32 rb_color:1;


  guint32 is_subtree:1;
 } u;
 guint32 key32;
 void *data;
} emem_tree_node_t;
# 190 "../../epan/emem.h"
typedef struct _emem_tree_t {
 struct _emem_tree_t *next;
 int type;
 const char *name;
 emem_tree_node_t *tree;
 void *(*malloc)(size_t);
} emem_tree_t;
# 207 "../../epan/emem.h"
emem_tree_t *se_tree_create(int type, const char *name) __attribute__((__malloc__));
# 218 "../../epan/emem.h"
emem_tree_t *se_tree_create_non_persistent(int type, const char *name) __attribute__((__malloc__));
# 270 "../../epan/emem.h"
emem_tree_t *pe_tree_create(int type, const char *name) __attribute__((__malloc__));
# 291 "../../epan/emem.h"
void emem_tree_insert32(emem_tree_t *se_tree, guint32 key, void *data);




void *emem_tree_lookup32(emem_tree_t *se_tree, guint32 key);







void *emem_tree_lookup32_le(emem_tree_t *se_tree, guint32 key);

typedef struct _emem_tree_key_t {
 guint32 length;
 guint32 *key;
} emem_tree_key_t;
# 342 "../../epan/emem.h"
void emem_tree_insert32_array(emem_tree_t *se_tree, emem_tree_key_t *key, void *data);




void *emem_tree_lookup32_array(emem_tree_t *se_tree, emem_tree_key_t *key);
# 357 "../../epan/emem.h"
void *emem_tree_lookup32_array_le(emem_tree_t *se_tree, emem_tree_key_t *key);




void emem_tree_insert_string(emem_tree_t* h, const gchar* k, void* v, guint32 flags);


void* emem_tree_lookup_string(emem_tree_t* h, const gchar* k, guint32 flags);



typedef gboolean (*tree_foreach_func)(void *value, void *userdata);

gboolean emem_tree_foreach(emem_tree_t* emem_tree, tree_foreach_func callback, void *user_data);






typedef struct _emem_strbuf_t {
    gchar *str;


    gsize len;
    gsize alloc_len;
    gsize max_alloc_len;
} emem_strbuf_t;
# 399 "../../epan/emem.h"
emem_strbuf_t *ep_strbuf_new(const gchar *init) __attribute__((__malloc__));
# 409 "../../epan/emem.h"
emem_strbuf_t *ep_strbuf_new_label(const gchar *init) __attribute__((__malloc__));
# 422 "../../epan/emem.h"
emem_strbuf_t *ep_strbuf_sized_new(gsize alloc_len, gsize max_alloc_len) __attribute__((__malloc__));
# 431 "../../epan/emem.h"
void ep_strbuf_append_vprintf(emem_strbuf_t *strbuf, const gchar *format, va_list ap);







void ep_strbuf_printf(emem_strbuf_t *strbuf, const gchar *format, ...)
     __attribute__((__format__ (__printf__, 2, 3)));







void ep_strbuf_append_printf(emem_strbuf_t *strbuf, const gchar *format, ...)
    __attribute__((__format__ (__printf__, 2, 3)));
# 459 "../../epan/emem.h"
emem_strbuf_t *ep_strbuf_append(emem_strbuf_t *strbuf, const gchar *str);
# 469 "../../epan/emem.h"
emem_strbuf_t *ep_strbuf_append_c(emem_strbuf_t *strbuf, const gchar c);
# 479 "../../epan/emem.h"
emem_strbuf_t *ep_strbuf_truncate(emem_strbuf_t *strbuf, gsize len);

void emem_print_tree(emem_tree_t* emem_tree);
# 508 "../../epan/emem.h"
gboolean ep_verify_pointer(const void *ptr);







gboolean se_verify_pointer(const void *ptr);
# 31 "../../epan/address.h" 2
# 40 "../../epan/address.h"
typedef enum {
  AT_NONE,
  AT_ETHER,
  AT_IPv4,
  AT_IPv6,
  AT_IPX,
  AT_SNA,
  AT_ATALK,
  AT_VINES,
  AT_OSI,
  AT_ARCNET,
  AT_FC,
  AT_SS7PC,
  AT_STRINGZ,
  AT_EUI64,
  AT_URI,
  AT_TIPC,
  AT_IB,
  AT_USB

} address_type;

typedef struct _address {
  address_type type;
  int len;
  const void *data;
} address;
# 141 "../../epan/address.h"
typedef enum {
  PT_NONE,
  PT_SCTP,
  PT_TCP,
  PT_UDP,
  PT_DCCP,
  PT_IPX,
  PT_NCP,
  PT_EXCHG,
  PT_DDP,
  PT_SBCCS,
  PT_IDP,
  PT_TIPC,
  PT_USB,
  PT_I2C,
  PT_IBQP
} port_type;


typedef enum {
  CT_NONE,
  CT_DLCI,
  CT_ISDN,
  CT_X25,
  CT_ISUP,
  CT_IAX2,
  CT_H223,
  CT_BICC

} circuit_type;
# 31 "../../epan/packet_info.h" 2
# 48 "../../epan/packet_info.h"
typedef struct _packet_info {
  const char *current_proto;
  column_info *cinfo;
  frame_data *fd;
  union wtap_pseudo_header *pseudo_header;
  GSList *data_src;
  address dl_src;
  address dl_dst;
  address net_src;
  address net_dst;
  address src;
  address dst;
  guint32 ethertype;
  guint32 ipproto;
  guint32 ipxptype;
  guint32 mpls_label;
  circuit_type ctype;
  guint32 circuit_id;
  const char *noreassembly_reason;
  gboolean fragmented;
  gboolean in_error_pkt;
  port_type ptype;
  guint32 srcport;
  guint32 destport;
  guint32 match_uint;
  const char *match_string;
  guint16 can_desegment;






  guint16 saved_can_desegment;
# 90 "../../epan/packet_info.h"
  int desegment_offset;


  guint32 desegment_len;
# 102 "../../epan/packet_info.h"
  guint16 want_pdu_tracking;
# 125 "../../epan/packet_info.h"
  guint32 bytes_until_next_pdu;


  int iplen;
  int iphdrlen;
  guint8 ip_ttl;
  int p2p_dir;



  guint16 oxid;
  guint16 rxid;
  guint8 r_ctl;
  guint8 sof_eof;





  guint16 src_idx;
  guint16 dst_idx;
  guint16 vsan;


  guint16 dcectxid;
  int dcetransporttype;


  guint16 dcetransportsalt;
# 167 "../../epan/packet_info.h"
  guint16 decrypt_gssapi_tvb;
  tvbuff_t *gssapi_wrap_tvb;
  tvbuff_t *gssapi_encrypted_tvb;
  tvbuff_t *gssapi_decrypted_tvb;
  gboolean gssapi_data_encrypted;

  guint32 ppid;
  guint32 ppids[2];


  void *private_data;

  GString *layer_names;
  guint16 link_number;
  guint8 annex_a_used;
  guint16 profinet_type;
  void *profinet_conv;
  void *usb_conv_info;
  void *tcp_tree;

  const char *dcerpc_procedure_name;

  struct _sccp_msg_info_t* sccp_info;
  guint16 clnp_srcref;
  guint16 clnp_dstref;

  guint16 zbee_cluster_id;


  guint8 zbee_stack_vers;


  int link_dir;


} packet_info;
# 33 "../../epan/to_str.h" 2
# 43 "../../epan/to_str.h"
struct e_in6_addr;



extern gchar* ep_address_to_str(const address *);
extern gchar* se_address_to_str(const address *);
extern void address_to_str_buf(const address *addr, gchar *buf, int buf_len);
extern gchar* bytestring_to_str(const guint8 *, const guint32, const char);
extern gchar* ether_to_str(const guint8 *);
extern const gchar* ip_to_str(const guint8 *);
extern void ip_to_str_buf(const guint8 *ad, gchar *buf, const int buf_len);
extern gchar* fc_to_str(const guint8 *);
extern gchar* fcwwn_to_str (const guint8 *);
extern gchar* ip6_to_str(const struct e_in6_addr *);
extern void ip6_to_str_buf(const struct e_in6_addr *, gchar *);
extern gchar* ipx_addr_to_str(const guint32, const guint8 *);
extern gchar* ipxnet_to_string(const guint8 *ad);
extern gchar* ipxnet_to_str_punct(const guint32 ad, const char punct);
extern gchar* vines_addr_to_str(const guint8 *addrp);
extern gchar* time_secs_to_str(const gint32 time_val);
extern gchar* time_secs_to_str_unsigned(const guint32);
extern gchar* time_msecs_to_str(gint32 time_val);
extern gchar* abs_time_to_str(const nstime_t*, const absolute_time_display_e fmt,
    gboolean show_zone);
extern gchar* abs_time_secs_to_str(const time_t, const absolute_time_display_e fmt,
    gboolean show_zone);
extern void display_signed_time(gchar *, int, const gint32, gint32, const to_str_time_res_t);
extern void display_epoch_time(gchar *, int, const time_t, gint32, const to_str_time_res_t);

extern gchar* guint32_to_str(const guint32 u);
extern void guint32_to_str_buf(guint32 u, gchar *buf, int buf_len);

extern gchar* rel_time_to_str(const nstime_t*);
extern gchar* rel_time_to_secs_str(const nstime_t*);
extern gchar* guid_to_str(const e_guid_t*);
extern gchar* guid_to_str_buf(const e_guid_t*, gchar*, int);

extern char *decode_bits_in_field(const gint bit_offset, const gint no_of_bits, const guint64 value);

extern char *other_decode_bitfield_value(char *buf, const guint32 val, const guint32 mask,
    const int width);
extern char *decode_bitfield_value(char *buf, const guint32 val, const guint32 mask,
    const int width);
extern const char *decode_boolean_bitfield(const guint32 val, const guint32 mask, const int width,
  const char *truedesc, const char *falsedesc);
extern const char *decode_numeric_bitfield(const guint32 val, const guint32 mask, const int width,
  const char *fmt);
# 33 "../../epan/packet.h" 2
# 1 "../../epan/value_string.h" 1
# 32 "../../epan/value_string.h"
typedef struct _value_string {
  guint32 value;
  const gchar *strptr;
} value_string;



typedef struct _string_string {
  const gchar *value;
  const gchar *strptr;
} string_string;


typedef struct _range_string {
  guint32 value_min;
  guint32 value_max;
  const gchar *strptr;
} range_string;
# 58 "../../epan/value_string.h"
extern const gchar* match_strval_idx(const guint32 val, const value_string *vs, gint *idx);


extern const gchar* match_strval(const guint32 val, const value_string *vs);




extern const gchar* val_to_str(const guint32 val, const value_string *vs, const char *fmt);





extern const gchar* val_to_str_const(const guint32 val, const value_string *vs, const char *unknown_str);





extern const gchar* match_strstr_idx(const gchar *val, const string_string *vs, gint *idx);


extern const gchar* match_strstr(const gchar *val, const string_string *vs);




extern const gchar* str_to_str(const gchar *val, const string_string *vs, const char *fmt);
# 117 "../../epan/value_string.h"
struct _value_string_ext;
typedef const char *(*_value_string_match_t)(const guint32, const struct _value_string_ext *);

typedef struct _value_string_ext {
  _value_string_match_t _vs_match;
  guint32 _vs_first_value;
  guint _vs_num_entries;

  const value_string *_vs_p;
  const gchar *_vs_name;
} value_string_ext;







gboolean value_string_ext_validate(value_string_ext *vse);
gchar *value_string_ext_match_type_str(value_string_ext *vse);


extern const gchar *_match_strval_ext_init(const guint32 val, value_string_ext *vse);





extern value_string_ext *value_string_ext_new(value_string *vs, guint vs_tot_num_entries, gchar *vs_name);





extern const gchar* match_strval_ext(const guint32 val, const value_string_ext *vse);




extern const gchar* val_to_str_ext(const guint32 val, const value_string_ext *vs, const char *fmt);




extern const gchar* val_to_str_ext_const(const guint32 val, const value_string_ext *vs, const char *unknown_str);





extern const char *decode_enumerated_bitfield(const guint32 val, const guint32 mask,
  const int width, const value_string *tab, const char *fmt);



extern const char *decode_enumerated_bitfield_shifted(const guint32 val, const guint32 mask,
  const int width, const value_string *tab, const char *fmt);







extern const gchar* rval_to_str(const guint32 val, const range_string *rs, const char *fmt);





extern const gchar *match_strrval_idx(const guint32 val, const range_string *rs, gint *idx);


extern const gchar *match_strrval(const guint32 val, const range_string *rs);
# 34 "../../epan/packet.h" 2


# 1 "../../epan/packet_info.h" 1
# 37 "../../epan/packet.h" 2
# 1 "../../epan/column-utils.h" 1
# 47 "../../epan/column-utils.h"
extern void col_setup(column_info *cinfo, const gint num_cols);





extern void col_init(column_info *cinfo);





extern void col_set_fmt_time(const frame_data *fd, column_info *cinfo, const gint fmt, const gint col);





extern void col_fill_in_frame_data(const frame_data *fd, column_info *cinfo, const gint col, gboolean const fill_col_exprs);





extern void col_fill_in(packet_info *pinfo, const gboolean fill_col_exprs, const gboolean fill_fd_colums);
# 80 "../../epan/column-utils.h"
extern gboolean col_get_writable(column_info *cinfo);






extern void col_set_writable(column_info *cinfo, const gboolean writable);
# 98 "../../epan/column-utils.h"
extern gint check_col(column_info *cinfo, const gint col);
# 109 "../../epan/column-utils.h"
extern void col_set_fence(column_info *cinfo, const gint col);






extern void col_clear(column_info *cinfo, const gint col);
# 126 "../../epan/column-utils.h"
extern void col_set_str(column_info *cinfo, const gint col, const gchar * str);







extern void col_add_str(column_info *cinfo, const gint col, const gchar *str);
# 145 "../../epan/column-utils.h"
extern void col_add_fstr(column_info *cinfo, const gint col, const gchar *format, ...)
    __attribute__((__format__ (__printf__, 3, 4)));


void col_custom_set_edt(epan_dissect_t *edt, column_info *cinfo);


void col_custom_prime_edt(epan_dissect_t *edt, column_info *cinfo);


gboolean have_custom_cols(column_info *cinfo);

gboolean col_has_time_fmt(column_info *cinfo, const gint col);

gboolean col_based_on_frame_data(column_info *cinfo, const gint col);







extern void col_append_str(column_info *cinfo, const gint col, const gchar *str);
# 178 "../../epan/column-utils.h"
extern void col_append_fstr(column_info *cinfo, const gint col, const gchar *format, ...)
    __attribute__((__format__ (__printf__, 3, 4)));
# 188 "../../epan/column-utils.h"
extern void col_prepend_fstr(column_info *cinfo, const gint col, const gchar *format, ...)
    __attribute__((__format__ (__printf__, 3, 4)));
# 199 "../../epan/column-utils.h"
extern void col_prepend_fence_fstr(column_info *cinfo, const gint col, const gchar *format, ...)
    __attribute__((__format__ (__printf__, 3, 4)));
# 211 "../../epan/column-utils.h"
extern void col_append_sep_str(column_info *cinfo, const gint col, const gchar *sep,
  const gchar *str);
# 224 "../../epan/column-utils.h"
extern void col_append_sep_fstr(column_info *cinfo, const gint col, const gchar *sep,
  const gchar *format, ...)
    __attribute__((__format__ (__printf__, 4, 5)));
# 239 "../../epan/column-utils.h"
extern void col_set_time(column_info *cinfo, const int col,
   const nstime_t *ts, char *fieldname);
# 38 "../../epan/packet.h" 2

# 1 "../../epan/tfs.h" 1
# 34 "../../epan/tfs.h"
typedef struct true_false_string {
        const char *true_string;
        const char *false_string;
} true_false_string;





extern const true_false_string tfs_true_false;
extern const true_false_string tfs_yes_no;
extern const true_false_string tfs_set_notset;
extern const true_false_string tfs_enabled_disabled;
extern const true_false_string tfs_ok_error;
extern const true_false_string tfs_error_ok;
extern const true_false_string tfs_success_fail;
extern const true_false_string tfs_fail_success;
extern const true_false_string tfs_on_off;
extern const true_false_string tfs_ack_nack;
extern const true_false_string tfs_odd_even;
extern const true_false_string tfs_allow_block;
extern const true_false_string tfs_restricted_allowed;
extern const true_false_string tfs_accept_reject;
extern const true_false_string tfs_more_nomore;
extern const true_false_string tfs_present_absent;
extern const true_false_string tfs_active_inactive;
extern const true_false_string tfs_found_not_found;
extern const true_false_string tfs_command_response;
extern const true_false_string tfs_capable_not_capable;
extern const true_false_string tfs_supported_not_supported;
extern const true_false_string tfs_used_notused;
extern const true_false_string tfs_high_low;
extern const true_false_string tfs_pressed_not_pressed;
# 40 "../../epan/packet.h" 2
# 60 "../../epan/packet.h"
typedef struct _packet_counts {
  gint sctp;
  gint tcp;
  gint udp;
  gint icmp;
  gint ospf;
  gint gre;
  gint netbios;
  gint ipx;
  gint vines;
  gint other;
  gint total;
  gint arp;
  gint i2c_event;
  gint i2c_data;
} packet_counts;





typedef enum {
 PACKET_CHAR_ENC_CHAR_ASCII = 0,
 PACKET_CHAR_ENC_CHAR_EBCDIC = 1
} packet_char_enc;

extern void packet_init(void);
extern void packet_cleanup(void);



struct dissector_handle;
typedef struct dissector_handle *dissector_handle_t;



struct dissector_table;
typedef struct dissector_table *dissector_table_t;




typedef void (*dissector_t)(tvbuff_t *, packet_info *, proto_tree *);
# 116 "../../epan/packet.h"
typedef int (*new_dissector_t)(tvbuff_t *, packet_info *, proto_tree *);
# 125 "../../epan/packet.h"
typedef gboolean (*heur_dissector_t)(tvbuff_t *tvb, packet_info *pinfo,
 proto_tree *tree);

typedef void (*DATFunc) (const gchar *table_name, ftenum_t selector_type,
    gpointer key, gpointer value, gpointer user_data);
typedef void (*DATFunc_handle) (const gchar *table_name, gpointer value,
    gpointer user_data);
typedef void (*DATFunc_table) (const gchar *table_name, const gchar *ui_name,
    gpointer user_data);


typedef struct dtbl_entry dtbl_entry_t;

extern dissector_handle_t dtbl_entry_get_handle (dtbl_entry_t *dtbl_entry);
extern dissector_handle_t dtbl_entry_get_initial_handle (dtbl_entry_t * entry);
extern void dissector_table_foreach_changed (const char *name, DATFunc func,
    gpointer user_data);
extern void dissector_table_foreach (const char *name, DATFunc func,
    gpointer user_data);
extern void dissector_all_tables_foreach_changed (DATFunc func,
    gpointer user_data);
extern void dissector_table_foreach_handle(const char *name, DATFunc_handle func,
    gpointer user_data);
extern void dissector_all_tables_foreach_table (DATFunc_table func,
    gpointer user_data);


extern dissector_table_t register_dissector_table(const char *name,
    const char *ui_name, const ftenum_t type, const int base);


extern dissector_table_t find_dissector_table(const char *name);


extern const char *get_dissector_table_ui_name(const char *name);



extern ftenum_t get_dissector_table_selector_type(const char *name);



extern int get_dissector_table_base(const char *name);


extern void dissector_add_uint(const char *abbrev, const guint32 pattern,
    dissector_handle_t handle);







extern void dissector_delete_uint(const char *name, const guint32 pattern,
    dissector_handle_t handle);







extern void dissector_change_uint(const char *abbrev, const guint32 pattern,
    dissector_handle_t handle);






extern void dissector_reset_uint(const char *name, const guint32 pattern);
# 205 "../../epan/packet.h"
extern gboolean dissector_try_uint(dissector_table_t sub_dissectors,
    const guint32 uint_val, tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree);
# 215 "../../epan/packet.h"
extern gboolean dissector_try_uint_new(dissector_table_t sub_dissectors,
 const guint32 uint_val, tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, const gboolean add_proto_name);







extern dissector_handle_t dissector_get_uint_handle(
    dissector_table_t const sub_dissectors, const guint32 uint_val);






extern void dissector_add_string(const char *name, const gchar *pattern,
    dissector_handle_t handle);



extern void dissector_delete_string(const char *name, const gchar *pattern,
 dissector_handle_t handle);



extern void dissector_change_string(const char *name, const gchar *pattern,
    dissector_handle_t handle);


extern void dissector_reset_string(const char *name, const gchar *pattern);




extern gboolean dissector_try_string(dissector_table_t sub_dissectors,
    const gchar *string, tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree);



extern dissector_handle_t dissector_get_string_handle(
    dissector_table_t sub_dissectors, const gchar *string);



extern void dissector_add_handle(const char *name, dissector_handle_t handle);





typedef GSList *heur_dissector_list_t;







extern void register_heur_dissector_list(const char *name,
    heur_dissector_list_t *list);
# 288 "../../epan/packet.h"
extern gboolean dissector_try_heuristic(heur_dissector_list_t sub_dissectors,
    tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree);
# 298 "../../epan/packet.h"
extern void heur_dissector_add(const char *name, heur_dissector_t dissector,
    const int proto);
# 308 "../../epan/packet.h"
extern void heur_dissector_delete(const char *name, heur_dissector_t dissector, const int proto);


extern void register_dissector(const char *name, dissector_t dissector,
    const int proto);
extern void new_register_dissector(const char *name, new_dissector_t dissector,
    const int proto);


extern const char *dissector_handle_get_short_name(const dissector_handle_t handle);


extern int dissector_handle_get_protocol_index(const dissector_handle_t handle);


extern dissector_handle_t find_dissector(const char *name);


extern dissector_handle_t create_dissector_handle(dissector_t dissector,
    const int proto);
extern dissector_handle_t new_create_dissector_handle(new_dissector_t dissector,
    const int proto);
# 343 "../../epan/packet.h"
extern int call_dissector(dissector_handle_t handle, tvbuff_t *tvb,
    packet_info *pinfo, proto_tree *tree);
# 358 "../../epan/packet.h"
extern int call_dissector_only(dissector_handle_t handle, tvbuff_t *tvb,
    packet_info *pinfo, proto_tree *tree);


extern void dissect_init(void);

extern void dissect_cleanup(void);





extern void set_actual_length(tvbuff_t *tvb, const guint specified_len);





extern void register_init_routine(void (*func)(void));


extern void init_dissection(void);


extern void cleanup_dissection(void);





extern void register_postseq_cleanup_routine(void (*func)(void));


extern void postseq_cleanup_all_protocols(void);
# 400 "../../epan/packet.h"
extern void
register_final_registration_routine(void (*func)(void));


extern void
final_registration_all_protocols(void);





extern void add_new_data_source(packet_info *pinfo, tvbuff_t *tvb,
    const char *name);




extern const char* get_data_source_name(data_source *src);




extern void free_data_sources(packet_info *pinfo);




extern void dissect_packet(epan_dissect_t *edt,
    union wtap_pseudo_header *pseudo_header, const guchar *pd,
    frame_data *fd, column_info *cinfo);


extern void capture_ethertype(guint16 etype, const guchar *pd, int offset,
  int len, packet_counts *ld);
extern void ethertype(guint16 etype, tvbuff_t *tvb, int offset_after_ethertype,
  packet_info *pinfo, proto_tree *tree, proto_tree *fh_tree,
  int etype_id, int trailer_id, int fcs_len);





extern void dissector_dump_decodes(void);





extern void register_postdissector(dissector_handle_t);
extern gboolean have_postdissector(void);
extern void call_all_postdissectors(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree);
# 35 "packet-nas_eps.c" 2
# 1 "../../epan/asn1.h" 1
# 29 "../../epan/asn1.h"
typedef enum {
  ASN1_ENC_BER,
  ASN1_ENC_PER,
  ASN1_ENC_ECN,
  ASN1_ENC_XER
} asn1_enc_e;

typedef enum {
  CB_ASN1_ENC,
  CB_DISSECTOR,
  CB_NEW_DISSECTOR,
  CB_DISSECTOR_HANDLE
} asn1_cb_variant;

typedef enum {
  ASN1_PAR_IRR,

  ASN1_PAR_BOOLEAN,
  ASN1_PAR_INTEGER,

  ASN1_PAR_TYPE
} asn1_par_type;

typedef struct _asn1_par_def_t {
  const gchar *name;
  asn1_par_type ptype;
} asn1_par_def_t;

typedef struct _asn1_par_t {
  const gchar *name;
  asn1_par_type ptype;
  union {
    gboolean v_boolean;
    gint32 v_integer;
    void *v_type;
  } value;
  struct _asn1_par_t *next;
} asn1_par_t;

typedef struct _asn1_stack_frame_t {
  const gchar *name;
  struct _asn1_par_t *par;
  struct _asn1_stack_frame_t *next;
} asn1_stack_frame_t;



typedef struct _asn1_ctx_t {
  guint32 signature;
  asn1_enc_e encoding;
  gboolean aligned;
  packet_info *pinfo;
  proto_item *created_item;
  struct _asn1_stack_frame_t *stack;
  void *value_ptr;
  void *private_data;
  struct {
    int hf_index;
    gboolean data_value_descr_present;
    gboolean direct_ref_present;
    gboolean indirect_ref_present;
    tvbuff_t *data_value_descriptor;
    const char *direct_reference;
    gint32 indirect_reference;
    gint encoding;





    tvbuff_t *single_asn1_type;
    tvbuff_t *octet_aligned;
    tvbuff_t *arbitrary;
    union {
      struct {
        int (*ber_callback)(gboolean imp_tag, tvbuff_t *tvb, int offset, struct _asn1_ctx_t* ,proto_tree *tree, int hf_index );
      } ber;
      struct {
        int (*type_cb)(tvbuff_t*, int, struct _asn1_ctx_t*, proto_tree*, int);
      } per;
    } u;
  } external;
  struct {
    int hf_index;
    gboolean data_value_descr_present;
    tvbuff_t *data_value_descriptor;
    gint identification;
# 124 "../../epan/asn1.h"
    gint32 presentation_context_id;
    const char *abstract_syntax;
    const char *transfer_syntax;
    tvbuff_t *data_value;
    union {
      struct {
        int (*ber_callback)(gboolean imp_tag, tvbuff_t *tvb, int offset, struct _asn1_ctx_t* ,proto_tree *tree, int hf_index );
      } ber;
      struct {
        int (*type_cb)(tvbuff_t*, int, struct _asn1_ctx_t*, proto_tree*, int);
      } per;
    } u;
  } embedded_pdv;
  struct _rose_ctx_t *rose_ctx;
} asn1_ctx_t;



typedef struct _rose_ctx_t {
  guint32 signature;
  dissector_table_t arg_global_dissector_table;
  dissector_table_t arg_local_dissector_table;
  dissector_table_t res_global_dissector_table;
  dissector_table_t res_local_dissector_table;
  dissector_table_t err_global_dissector_table;
  dissector_table_t err_local_dissector_table;

  int apdu_depth;
  gboolean fillin_info;
  gchar *fillin_ptr;
  gsize fillin_buf_size;
  struct {
    gint pdu;






    gint code;





    gint32 code_local;
    const char *code_global;
    proto_item *code_item;
  } d;
  void *private_data;
} rose_ctx_t;

extern void asn1_ctx_init(asn1_ctx_t *actx, asn1_enc_e encoding, gboolean aligned, packet_info *pinfo);
extern gboolean asn1_ctx_check_signature(asn1_ctx_t *actx);
extern void asn1_ctx_clean_external(asn1_ctx_t *actx);
extern void asn1_ctx_clean_epdv(asn1_ctx_t *actx);

extern void asn1_stack_frame_push(asn1_ctx_t *actx, const gchar *name);
extern void asn1_stack_frame_pop(asn1_ctx_t *actx, const gchar *name);
extern void asn1_stack_frame_check(asn1_ctx_t *actx, const gchar *name, const asn1_par_def_t *par_def);

extern void asn1_param_push_boolean(asn1_ctx_t *actx, gboolean value);
extern void asn1_param_push_integer(asn1_ctx_t *actx, gint32 value);
extern gboolean asn1_param_get_boolean(asn1_ctx_t *actx, const gchar *name);
extern gint32 asn1_param_get_integer(asn1_ctx_t *actx, const gchar *name);

extern void rose_ctx_init(rose_ctx_t *rctx);
extern gboolean rose_ctx_check_signature(rose_ctx_t *rctx);
extern void rose_ctx_clean_data(rose_ctx_t *rctx);

extern asn1_ctx_t *get_asn1_ctx(void *ptr);
extern rose_ctx_t *get_rose_ctx(void *ptr);

extern double asn1_get_real(const guint8 *real_ptr, gint real_len);
# 36 "packet-nas_eps.c" 2

# 1 "packet-gsm_map.h" 1
# 1 "packet-gsm_map-template.h"
# 32 "packet-gsm_map-template.h"
typedef struct _gsm_map_tap_rec_t {
    gboolean invoke;
    guint8 opr_code_idx;
    guint16 size;
} gsm_map_tap_rec_t;
# 46 "packet-gsm_map-template.h"
extern const value_string gsm_map_opr_code_strings[];
const char* unpack_digits(tvbuff_t *tvb, int offset);

extern const value_string ssCode_vals[];
extern const value_string gsm_map_PDP_Type_Organisation_vals[];
extern const value_string gsm_map_ietf_defined_pdp_vals[];
extern const value_string gsm_map_etsi_defined_pdp_vals[];

guint8 dissect_cbs_data_coding_scheme(tvbuff_t *tvb, packet_info *pinfo __attribute__((unused)), proto_tree *tree);
void dissect_gsm_map_msisdn(tvbuff_t *tvb, packet_info *pinfo __attribute__((unused)), proto_tree *tree);
# 1 "packet-gsm_map-exp.h"



int dissect_gsm_map_SS_Code(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));



int dissect_gsm_map_ExtensionContainer(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));



extern const value_string gsm_map_LCSServiceTypeID_vals[];
extern const value_string gsm_map_Ext_BasicServiceCode_vals[];
int dissect_gsm_map_AddressString(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ISDN_AddressString(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ISDN_SubaddressString(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_AlertingPattern(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_GSN_Address(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_IMSI(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_IMEI(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_GlobalCellId(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_LCSClientExternalID(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_LCSServiceTypeID(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_CellGlobalIdOrServiceAreaIdFixedLength(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_LAIFixedLength(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_Ext_BasicServiceCode(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_AgeOfLocationInformation(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));



extern const value_string gsm_map_ss_SS_Info_vals[];
extern const value_string gsm_map_ss_InterrogateSS_Res_vals[];
int dissect_gsm_map_ss_RegisterSS_Arg(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ss_SS_Info(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ss_SS_Status(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ss_SS_ForBS_Code(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ss_CCBS_Feature(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ss_InterrogateSS_Res(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ss_USSD_Arg(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ss_USSD_Res(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ss_USSD_DataCodingScheme(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ss_USSD_String(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ss_RegisterCC_EntryRes(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ss_EraseCC_EntryArg(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ss_EraseCC_EntryRes(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));



extern const value_string gsm_map_ms_NotificationToMSUser_vals[];
extern const value_string gsm_map_ms_SubscriberState_vals[];
int dissect_gsm_map_ms_QoS_Subscribed(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ms_Ext_QoS_Subscribed(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ms_Ext2_QoS_Subscribed(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ms_Ext3_QoS_Subscribed(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ms_LSAIdentity(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ms_CUG_Info(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ms_CUG_Index(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ms_CUG_Interlock(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ms_NotificationToMSUser(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ms_SupportedCamelPhases(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ms_OfferedCamel4Functionalities(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ms_MS_Classmark2(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ms_GPRSMSClass(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ms_LocationInformation(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ms_RAIdentity(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ms_GeographicalInformation(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ms_SubscriberState(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ms_GPRSChargingID(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));



int dissect_gsm_map_ch_SuppressionOfAnnouncement(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ch_CallReferenceNumber(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_ch_UU_Data(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));



int dissect_gsm_map_lcs_LocationType(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_lcs_DeferredLocationEventType(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_lcs_LCS_ClientID(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_lcs_LCSClientName(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_lcs_LCSRequestorID(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_lcs_LCS_QoS(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_lcs_SupportedGADShapes(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_lcs_LCS_ReferenceNumber(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_lcs_LCSCodeword(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_lcs_AreaEventInfo(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_lcs_Ext_GeographicalInformation(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_lcs_VelocityEstimate(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_lcs_Add_GeographicalInformation(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_map_lcs_LCS_ClientID_PDU(tvbuff_t *tvb __attribute__((unused)), packet_info *pinfo __attribute__((unused)), proto_tree *tree __attribute__((unused)));



extern const value_string gsm_old_GSMMAPLocalErrorcode_vals[];
extern const value_string gsm_old_GetPasswordArg_vals[];
int dissect_gsm_old_GSMMAPLocalErrorcode(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_old_NewPassword(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_old_GetPasswordArg(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_old_CurrentPassword(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_old_SecurityHeader(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
int dissect_gsm_old_ProtectedPayload(gboolean implicit_tag __attribute__((unused)), tvbuff_t *tvb __attribute__((unused)), int offset __attribute__((unused)), asn1_ctx_t *actx __attribute__((unused)), proto_tree *tree __attribute__((unused)), int hf_index __attribute__((unused)));
# 58 "packet-gsm_map-template.h"
# 38 "packet-nas_eps.c" 2
# 1 "packet-gsm_a_common.h" 1
# 54 "packet-gsm_a_common.h"
# 1 "packet-sccp.h" 1
# 51 "packet-sccp.h"
extern const value_string sccp_message_type_acro_values[];
extern const value_string sccp_release_cause_values[];
extern const value_string sccp_return_cause_values[];
extern const value_string sccp_reset_cause_values[];
extern const value_string sccp_error_cause_values[];
extern const value_string sccp_refusal_cause_values[];


extern const value_string sua_co_class_type_acro_values[];

typedef enum _sccp_payload_t {
    SCCP_PLOAD_NONE,
    SCCP_PLOAD_BSSAP,
    SCCP_PLOAD_RANAP,
    SCCP_PLOAD_NUM_PLOADS
} sccp_payload_t;

typedef struct _sccp_msg_info_t {
 guint framenum;
 guint offset;
 guint type;

 union {
  struct {
   gchar* label;
   gchar* comment;
   struct _sccp_assoc_info_t* assoc;
   struct _sccp_msg_info_t* next;
  } co;
  struct {
   guint8* calling_gt;
   guint calling_ssn;
   guint8* called_gt;
   guint called_ssn;
  } ud;
 } data;
} sccp_msg_info_t;

typedef struct _sccp_assoc_info_t {
    guint32 id;
    guint32 calling_dpc;
    guint32 called_dpc;
    guint8 calling_ssn;
    guint8 called_ssn;
    gboolean has_fw_key;
    gboolean has_bw_key;
    sccp_msg_info_t* msgs;
    sccp_msg_info_t* curr_msg;

    sccp_payload_t payload;
    gchar* calling_party;
    gchar* called_party;
    gchar* extra_info;
    guint32 app_info;

} sccp_assoc_info_t;

extern void reset_sccp_assoc(void);
extern sccp_assoc_info_t* get_sccp_assoc(packet_info* pinfo, guint offset, guint32 src_lr, guint32 dst_lr, guint msg_type);






extern const value_string sccp_address_signal_values[];
# 55 "packet-gsm_a_common.h" 2


typedef guint16 (*elem_fcn)(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
typedef void (*msg_fcn)(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len);
# 67 "packet-gsm_a_common.h"
int my_dgt_tbcd_unpack(
 char *out,
 guchar *in,
 int num_octs,
 dgt_set_t *dgt
 );






extern const value_string protocol_discriminator_vals[];
extern const value_string gsm_a_pd_short_str_vals[];

extern guint16 de_cld_party_bcd_num(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);


extern const value_string gsm_bssmap_elem_strings[];
extern gint ett_gsm_bssmap_elem[];
extern elem_fcn bssmap_elem_fcn[];
extern int hf_gsm_a_bssmap_elem_id;
extern int hf_gsm_a_bssmap_cell_ci;

extern const value_string gsm_dtap_elem_strings[];
extern gint ett_gsm_dtap_elem[];
extern elem_fcn dtap_elem_fcn[];
extern int hf_gsm_a_dtap_elem_id;

extern const value_string gsm_rp_elem_strings[];
extern gint ett_gsm_rp_elem[];
extern elem_fcn rp_elem_fcn[];
extern int hf_gsm_a_rp_elem_id;

extern const value_string gsm_rr_elem_strings[];
extern gint ett_gsm_rr_elem[];
extern elem_fcn rr_elem_fcn[];
extern int hf_gsm_a_rr_elem_id;
extern void get_rr_msg_params(guint8 oct, const gchar **msg_str, int *ett_tree, int *hf_idx, msg_fcn *msg_fcn);

extern const value_string gsm_common_elem_strings[];
extern gint ett_gsm_common_elem[];
extern elem_fcn common_elem_fcn[];
extern int hf_gsm_a_common_elem_id;

extern const value_string gsm_gm_elem_strings[];
extern gint ett_gsm_gm_elem[];
extern elem_fcn gm_elem_fcn[];
extern int hf_gsm_a_gm_elem_id;
extern void get_gmm_msg_params(guint8 oct, const gchar **msg_str, int *ett_tree, int *hf_idx, msg_fcn *msg_fcn);
extern void get_sm_msg_params(guint8 oct, const gchar **msg_str, int *ett_tree, int *hf_idx, msg_fcn *msg_fcn);

extern const value_string gsm_bsslap_elem_strings[];
extern gint ett_gsm_bsslap_elem[];
extern elem_fcn bsslap_elem_fcn[];
extern int hf_gsm_a_bsslap_elem_id;

extern const value_string gsm_bssmap_le_elem_strings[];
extern gint ett_gsm_bssmap_le_elem[];
extern elem_fcn bssmap_le_elem_fcn[];
extern int hf_gsm_bssmap_le_elem_id;

extern const value_string nas_eps_common_elem_strings[];
extern gint ett_nas_eps_common_elem[];
extern elem_fcn nas_eps_common_elem_fcn[];
extern int hf_nas_eps_common_elem_id;

extern const value_string nas_emm_elem_strings[];
extern gint ett_nas_eps_emm_elem[];
extern elem_fcn emm_elem_fcn[];
extern int hf_nas_eps_emm_elem_id;

extern const value_string nas_esm_elem_strings[];
extern gint ett_nas_eps_esm_elem[];
extern elem_fcn esm_elem_fcn[];
extern int hf_nas_eps_esm_elem_id;

extern const value_string sgsap_elem_strings[];
extern gint ett_sgsap_elem[];
extern elem_fcn sgsap_elem_fcn[];
extern int hf_sgsap_elem_id;

extern sccp_msg_info_t* sccp_msg;
extern sccp_assoc_info_t* sccp_assoc;

extern int gsm_a_tap;
extern gboolean lower_nibble;
extern packet_info *gsm_a_dtap_pinfo;


void dissect_geographical_description(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree);


extern int hf_gsm_a_length;
extern int hf_gsm_a_extension;
extern int hf_gsm_a_tmsi;
extern int hf_gsm_a_L3_protocol_discriminator;
extern int hf_gsm_a_call_prio;
extern int hf_gsm_a_b8spare;
extern int hf_gsm_a_skip_ind;
extern int hf_gsm_a_rr_chnl_needed_ch1;
extern int hf_gsm_a_spare_bits;
extern int hf_gsm_a_lac;
# 189 "packet-gsm_a_common.h"
extern const char* get_gsm_a_msg_string(int pdu_type, int idx);
# 312 "packet-gsm_a_common.h"
extern guint16 elem_tlv(tvbuff_t *tvb, proto_tree *tree, guint8 iei, gint pdu_type, int idx, guint32 offset, guint len, const gchar *name_add);




extern guint16 elem_tlv_e(tvbuff_t *tvb, proto_tree *tree, guint8 iei, gint pdu_type, int idx, guint32 offset, guint len, const gchar *name_add);







extern guint16 elem_tv(tvbuff_t *tvb, proto_tree *tree, guint8 iei, gint pdu_type, int idx, guint32 offset, const gchar *name_add);
# 334 "packet-gsm_a_common.h"
extern guint16 elem_tv_short(tvbuff_t *tvb, proto_tree *tree, guint8 iei, gint pdu_type, int idx, guint32 offset, const gchar *name_add);




extern guint16 elem_t(tvbuff_t *tvb, proto_tree *tree, guint8 iei, gint pdu_type, int idx, guint32 offset, const gchar *name_add);




extern guint16 elem_lv(tvbuff_t *tvb, proto_tree *tree, gint pdu_type, int idx, guint32 offset, guint len, const gchar *name_add);




extern guint16 elem_lv_e(tvbuff_t *tvb, proto_tree *tree, gint pdu_type, int idx, guint32 offset, guint len, const gchar *name_add);







extern guint16 elem_v(tvbuff_t *tvb, proto_tree *tree, gint pdu_type, int idx, guint32 offset);
# 367 "packet-gsm_a_common.h"
extern guint16 elem_v_short(tvbuff_t *tvb, proto_tree *tree, gint pdu_type, int idx, guint32 offset);
# 547 "packet-gsm_a_common.h"
typedef enum
{
 PD_GCC = 0,
 PD_BCC,
 PD_RSVD_1,
 PD_CC,
 PD_GTTP,
 PD_MM,
 PD_RR,
 PD_UNK_1,
 PD_GMM,
 PD_SMS,
 PD_SM,
 PD_SS,
 PD_LCS,
 PD_UNK_2,
 PD_RSVD_EXT,
 PD_TP
}
gsm_a_pd_str_e;

typedef struct _gsm_a_tap_rec_t {



 guint8 pdu_type;
 guint8 message_type;
 gsm_a_pd_str_e protocol_disc;
} gsm_a_tap_rec_t;

void dissect_bssmap(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree);

void dissect_bssmap_le(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree);

void bssmap_old_bss_to_new_bss_info(tvbuff_t *tvb, proto_tree *tree, packet_info *pinfo);
void bssmap_new_bss_to_old_bss_info(tvbuff_t *tvb, proto_tree *tree, packet_info *pinfo);

void dtap_mm_mm_info(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len);

guint16 be_cell_id_aux(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len, guint8 disc);
guint16 be_cell_id_list(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 be_chan_type(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);

guint16 de_lai(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_mid(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_cell_id(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_bearer_cap(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_bearer_cap_uplink(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 be_ganss_loc_type(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 be_ganss_pos_dta(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 be_ganss_ass_dta(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_plmn_list(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_ms_cm_1(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)));
guint16 de_ms_cm_2(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_ms_cm_3(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_serv_cat(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_sm_apn(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_sm_pco(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)));
guint16 de_sm_qos(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_sm_pflow_id(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_sm_tflow_temp(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);

guint16 de_gmm_drx_param(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_gmm_ms_net_cap(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_gmm_rai(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_gmm_ms_radio_acc_cap(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);

guint16 de_rr_cause(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_rr_cell_dsc(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_rr_ch_dsc(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)));
guint16 de_rr_ch_mode(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_rr_chnl_needed(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)));
guint16 de_rr_cip_mode_set(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_rr_cm_enq_mask(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_rr_meas_res(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)));
guint16 de_rr_multirate_conf(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)));
guint16 de_rr_sus_cau(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);
guint16 de_rr_tlli(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len);

guint16 de_rej_cause(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)));
guint16 de_d_gb_call_ref(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)));

guint16 de_emm_ue_net_cap(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)));

void dtap_rr_ho_cmd(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len);
void dtap_rr_cip_mode_cpte(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len);

void bssmap_perf_loc_abort(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len);
void bssmap_reset(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len);
void bssmap_conn_oriented(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len);






extern const value_string gsm_a_bssmap_msg_strings[];
extern const value_string gsm_a_dtap_msg_mm_strings[];
extern const value_string gsm_a_dtap_msg_rr_strings[];
extern const value_string gsm_a_dtap_msg_cc_strings[];
extern const value_string gsm_a_dtap_msg_gmm_strings[];
extern const value_string gsm_a_dtap_msg_sms_strings[];
extern const value_string gsm_a_dtap_msg_sm_strings[];
extern const value_string gsm_a_dtap_msg_ss_strings[];
extern const value_string gsm_a_dtap_msg_tp_strings[];
extern const value_string gsm_a_sacch_msg_rr_strings[];
extern const gchar *gsm_a_pd_str[];

extern const value_string gsm_a_qos_del_of_err_sdu_vals[];
extern const value_string gsm_a_qos_del_order_vals[];
extern const value_string gsm_a_qos_traffic_cls_vals[];
extern const value_string gsm_a_qos_ber_vals[];
extern const value_string gsm_a_qos_sdu_err_rat_vals[];
extern const value_string gsm_a_qos_traff_hdl_pri_vals[];

extern const value_string gsm_a_type_of_number_values[];
extern const value_string gsm_a_numbering_plan_id_values[];
extern const value_string gsm_a_sms_vals[];
extern value_string_ext gsm_a_rr_rxlev_vals_ext;

typedef enum
{

 DE_CELL_ID,
 DE_CIPH_KEY_SEQ_NUM,
 DE_LAI,
 DE_MID,
 DE_MS_CM_1,
 DE_MS_CM_2,
 DE_MS_CM_3,
 DE_SPARE_NIBBLE,
 DE_D_GB_CALL_REF,
 DE_G_CIPH_KEY_NUM,
 DE_PD_SAPI,
 DE_PRIO,
 DE_PLMN_LIST,

 DE_COMMON_NONE
}
common_elem_idx_t;

typedef enum
{
 BE_CIC,
 BE_RSVD_1,
 BE_RES_AVAIL,
 BE_CAUSE,
 BE_CELL_ID,
 BE_PRIO,
 BE_L3_HEADER_INFO,
 BE_IMSI,
 BE_TMSI,
 BE_ENC_INFO,
 BE_CHAN_TYPE,
 BE_PERIODICITY,
 BE_EXT_RES_IND,
 BE_NUM_MS,
 BE_RSVD_2,
 BE_RSVD_3,
 BE_RSVD_4,
 BE_CM_INFO_2,
 BE_CM_INFO_3,
 BE_INT_BAND,
 BE_RR_CAUSE,
 BE_RSVD_5,
 BE_L3_INFO,
 BE_DLCI,
 BE_DOWN_DTX_FLAG,
 BE_CELL_ID_LIST,
 BE_RESP_REQ,
 BE_RES_IND_METHOD,
 BE_CM_INFO_1,
 BE_CIC_LIST,
 BE_DIAG,
 BE_L3_MSG,
 BE_CHOSEN_CHAN,
 BE_TOT_RES_ACC,
 BE_CIPH_RESP_MODE,
 BE_CHAN_NEEDED,
 BE_TRACE_TYPE,
 BE_TRIGGERID,
 BE_TRACE_REF,
 BE_TRANSID,
 BE_MID,
 BE_OMCID,
 BE_FOR_IND,
 BE_CHOSEN_ENC_ALG,
 BE_CCT_POOL,
 BE_CCT_POOL_LIST,
 BE_TIME_IND,
 BE_RES_SIT,
 BE_CURR_CHAN_1,
 BE_QUE_IND,
 BE_SPEECH_VER,
 BE_ASS_REQ,
 BE_TALKER_FLAG,
 BE_CONN_REL_REQ,
 BE_GROUP_CALL_REF,
 BE_EMLPP_PRIO,
 BE_CONF_EVO_IND,
 BE_OLD2NEW_INFO,
 BE_LSA_ID,
 BE_LSA_ID_LIST,
 BE_LSA_INFO,
 BE_LCS_QOS,
 BE_LSA_ACC_CTRL,
 BE_LCS_PRIO,
 BE_LOC_TYPE,
 BE_LOC_EST,
 BE_POS_DATA,
 BE_LCS_CAUSE,
 BE_LCS_CLIENT,
 BE_APDU,
 BE_NE_ID,
 BE_GPS_ASSIST_DATA,
 BE_DECIPH_KEYS,
 BE_RET_ERR_REQ,
 BE_RET_ERR_CAUSE,
 BE_SEG,
 BE_SERV_HO,
 BE_SRC_RNC_TO_TAR_RNC_UMTS,
 BE_SRC_RNC_TO_TAR_RNC_CDMA,
 BE_GERAN_CLS_M,
 BE_GRAN_BSC_CONT,
 BE_NEW_BSS_TO_OLD_BSS_INF,
 BE_INTER_SYS_INF,
 BE_SNA_ACC_INF,
 BE_VSTK_RAND_INF,
 BE_VSTK_INF,
 BE_PAGING_INF,
 BE_IMEI,
 BE_VEL_EST,
 BE_VGCS_FEAT_FLG,
 BE_TALKER_PRI,
 BE_EMRG_SET_IND,
 BE_TALKER_ID,
 BE_CELL_ID_LIST_SEG,
 BE_SMS_TO_VGCS,
 BE_VGCS_TALKER_MOD,
 BE_VGS_VBS_CELL_STAT,
 BE_CELL_ID_LST_SEG_F_EST_CELLS,
 BE_CELL_ID_LST_SEG_F_CELL_TB_EST,
 BE_CELL_ID_LST_SEG_F_REL_CELL,
 BE_CELL_ID_LST_SEG_F_NOT_EST_CELL,
 BE_GANSS_ASS_DTA,
 BE_GANSS_POS_DTA,
 BE_GANSS_LOC_TYP,
 BE_APP_DATA,
 BE_DATA_ID,
 BE_APP_DATA_INF,
 BE_MSISDN,
 BE_AOIP_TRANS_LAY_ADD,
 BE_SPEECH_CODEC_LST,
 BE_SPEECH_CODEC,
 BE_CALL_ID,
 BE_CALL_ID_LST,
 BE_NONE
}
bssmap_elem_idx_t;

typedef enum
{

 DE_BMAPLE_LCSQOS,
 DE_BMAPLE_LCS_PRIO,
 DE_BMAPLE_LOC_TYPE,
 DE_BMAPLE_GANSS_LOC_TYPE,
 DE_BMAPLE_GEO_LOC,
 DE_BMAPLE_POS_DATA,
 DE_BMAPLE_GANSS_POS_DATA,
 DE_BMAPLE_VELOC_DATA,
 DE_BMAPLE_LCS_CAUSE,
 DE_BMAPLE_LCS_CLIENT_TYPE,
 DE_BMAPLE_APDU,
 DE_BMAPLE_NETWORK_ELEM_ID,
 DE_BMAPLE_REQ_GPS_ASSIST_D,
 DE_BMAPLE_REQ_GNSS_ASSIST_D,
 DE_BMAPLE_DECIPH_KEYS,
 DE_BMAPLE_RETURN_ERROR_REQ,
 DE_BMAPLE_RETURN_ERROR_CAUSE,
 DE_BMAPLE_SEGMENTATION,
 DE_BMAPLE_CLASSMARK_TYPE_3,
 DE_BMAPLE_CAUSE,
 DE_BMAPLE_CELL_IDENTIFIER,
 DE_BMAPLE_CHOSEN_CHANNEL,
 DE_BMAPLE_IMSI,
 DE_BMAPLE_RES1,
 DE_BMAPLE_RES2,
 DE_BMAPLE_RES3,
 DE_BMAPLE_LCS_CAPABILITY,
 DE_BMAPLE_PACKET_MEAS_REP,
 DE_BMAPLE_MEAS_CELL_ID,
 DE_BMAPLE_IMEI,
 BMAPLE_NONE
}
bssmap_le_elem_idx_t;

typedef enum
{

 DE_BLAP_RES1,
 DE_BLAP_TA,
 DE_BLAP_RES3,
 DE_BLAP_RES4,
 DE_BLAP_RES5,
 DE_BLAP_RES6,
 DE_BLAP_RES7,
 DE_BLAP_CH_DESC,
 DE_BLAP_RES9,
 DE_BLAP_RES10,
 DE_BLAP_RES11,
 DE_BLAP_MEAS_REP,
 DE_BLAP_RES13,
 DE_BLAP_CAUSE,
 DE_BLAP_RRLP_FLG,
 DE_BLAP_RRLP_IE,
 DE_BLAP_CELL_ID_LIST,
 DE_BLAP_ENH_MEAS_REP,
 DE_BLAP_LAC,
 DE_BLAP_FREQ_LIST,
 DE_BLAP_MS_POW,
 DE_BLAP_DELTA_TIME,
 DE_BLAP_SERV_CELL_ID,
 DE_BLAP_ENC_KEY,
 DE_BLAP_CIP_M_SET,
 DE_BLAP_CH_MODE,
 DE_BLAP_POLL_REP,
 DE_BLAP_PKT_CH_DESC,
 DE_BLAP_TLLI,
 DE_BLAP_TFI,
 DE_BLAP_START_TIME,
 BSSLAP_NONE
}
bsslap_elem_idx_t;

typedef enum
{

 DE_AUTH_PARAM_RAND,
 DE_AUTH_PARAM_AUTN,
 DE_AUTH_RESP_PARAM,
 DE_AUTH_RESP_PARAM_EXT,
 DE_AUTH_FAIL_PARAM,
 DE_CM_SRVC_TYPE,
 DE_ID_TYPE,
 DE_LOC_UPD_TYPE,
 DE_NETWORK_NAME,
 DE_REJ_CAUSE,
 DE_FOP,
 DE_TIME_ZONE,
 DE_TIME_ZONE_TIME,
 DE_CTS_PERM,
 DE_LSA_ID,
 DE_DAY_SAVING_TIME,
 DE_EMERGENCY_NUM_LIST,

 DE_AUX_STATES,
 DE_BEARER_CAP,
 DE_CC_CAP,
 DE_CALL_STATE,
 DE_CLD_PARTY_BCD_NUM,
 DE_CLD_PARTY_SUB_ADDR,
 DE_CLG_PARTY_BCD_NUM,
 DE_CLG_PARTY_SUB_ADDR,
 DE_CAUSE,
 DE_CLIR_SUP,
 DE_CLIR_INV,
 DE_CONGESTION,
 DE_CONN_NUM,
 DE_CONN_SUB_ADDR,
 DE_FACILITY,
 DE_HLC,
 DE_KEYPAD_FACILITY,
 DE_LLC,
 DE_MORE_DATA,
 DE_NOT_IND,
 DE_PROG_IND,
 DE_RECALL_TYPE,
 DE_RED_PARTY_BCD_NUM,
 DE_RED_PARTY_SUB_ADDR,
 DE_REPEAT_IND,
 DE_REV_CALL_SETUP_DIR,
 DE_SETUP_CONTAINER,
 DE_SIGNAL,
 DE_SS_VER_IND,
 DE_USER_USER,
 DE_ALERT_PATTERN,
 DE_ALLOWED_ACTIONS,
 DE_SI,
 DE_NET_CC_CAP,
 DE_CAUSE_NO_CLI,
 DE_SUP_CODEC_LIST,
 DE_SERV_CAT,
 DE_REDIAL,
 DE_NET_INIT_SERV_UPG,

 DE_CP_USER_DATA,
 DE_CP_CAUSE,

 DE_TP_SUB_CHANNEL,
 DE_TP_ACK,
 DE_TP_LOOP_TYPE,
 DE_TP_LOOP_ACK,
 DE_TP_TESTED_DEVICE,
 DE_TP_PDU_DESCRIPTION,
 DE_TP_MODE_FLAG,
 DE_TP_EGPRS_MODE_FLAG,
 DE_TP_UE_TEST_LOOP_MODE,
 DE_TP_UE_POSITIONING_TECHNOLOGY,
 DE_TP_RLC_SDU_COUNTER_VALUE,
 DE_TP_EPC_UE_TEST_LOOP_MODE,
 DE_TP_EPC_UE_TL_A_LB_SETUP,
 DE_TP_EPC_UE_TL_B_LB_SETUP,
 DE_NONE
}
dtap_elem_idx_t;

typedef enum
{

 DE_ATTACH_RES,
 DE_ATTACH_TYPE,
 DE_CIPH_ALG,
 DE_TMSI_STAT,
 DE_DETACH_TYPE,
 DE_DRX_PARAM,
 DE_FORCE_TO_STAND,
 DE_FORCE_TO_STAND_H,
 DE_P_TMSI_SIG,
 DE_P_TMSI_SIG_2,
 DE_ID_TYPE_2,
 DE_IMEISV_REQ,
 DE_REC_N_PDU_NUM_LIST,
 DE_MS_NET_CAP,
 DE_MS_RAD_ACC_CAP,
 DE_GMM_CAUSE,
 DE_RAI,
 DE_UPD_RES,
 DE_UPD_TYPE,
 DE_AC_REF_NUM,
 DE_AC_REF_NUM_H,
 DE_SRVC_TYPE,
 DE_CELL_NOT,
 DE_PS_LCS_CAP,
 DE_NET_FEAT_SUP,
 DE_RAT_INFO_CONTAINER,


 DE_ACC_POINT_NAME,
 DE_NET_SAPI,
 DE_PRO_CONF_OPT,
 DE_PD_PRO_ADDR,
 DE_QOS,
 DE_SM_CAUSE,
 DE_SM_CAUSE_2,
 DE_LINKED_TI,
 DE_LLC_SAPI,
 DE_TEAR_DOWN_IND,
 DE_PACKET_FLOW_ID,
 DE_TRAFFIC_FLOW_TEMPLATE,
 DE_TMGI,
 DE_MBMS_BEARER_CAP,
 DE_MBMS_PROT_CONF_OPT,
 DE_ENH_NSAPI,
 DE_REQ_TYPE,

 DE_PDP_CONTEXT_STAT,
 DE_RAD_PRIO,
 DE_GPRS_TIMER,
 DE_GPRS_TIMER_2,
 DE_RAD_PRIO_2,
 DE_MBMS_CTX_STATUS,
 DE_GM_NONE
}
gm_elem_idx_t;

typedef enum
{

 DE_RR_BA_RANGE,
 DE_RR_CELL_CH_DSC,
 DE_RR_BA_LIST_PREF,
 DE_RR_UTRAN_FREQ_LIST,
 DE_RR_CELL_SELECT_INDIC,
 DE_RR_CELL_DSC,
 DE_RR_CELL_OPT_BCCH,
 DE_RR_CELL_OPT_SACCH,
 DE_RR_CELL_SEL_PARAM,



 DE_RR_CH_DSC,
 DE_RR_CH_DSC2,
 DE_RR_CH_DSC3,
 DE_RR_CH_MODE,
 DE_RR_CH_MODE2,
 DE_RR_UTRAN_CM,

 DE_RR_CM_ENQ_MASK,

 DE_RR_CHNL_NEEDED,


 DE_RR_CIP_MODE_SET,
 DE_RR_CIP_MODE_RESP,
 DE_RR_CTRL_CH_DESC,

 DE_RR_DYN_ARFCN_MAP,
 DE_RR_FREQ_CH_SEQ,
 DE_RR_FREQ_LIST,
 DE_RR_FREQ_SHORT_LIST,
 DE_RR_FREQ_SHORT_LIST2,

 DE_RR_GPRS_RESUMPTION,
 DE_RR_GPRS_BROADCAST_INFORMATION,


 DE_RR_HO_REF,

 DE_RR_IA_REST_OCT,
 DE_RR_IAR_REST_OCT,
 DE_RR_IAX_REST_OCT,
 DE_RR_L2_PSEUDO_LEN,
 DE_RR_MEAS_RES,

 DE_RR_MOB_ALL,
 DE_RR_MOB_TIME_DIFF,
 DE_RR_MULTIRATE_CONF,
 DE_RR_MULT_ALL,



 DE_RR_NEIGH_CELL_DESC,
 DE_RR_NEIGH_CELL_DESC2,



 DE_RR_P1_REST_OCT,
 DE_RR_P2_REST_OCT,
 DE_RR_P3_REST_OCT,
 DE_RR_PACKET_CH_DESC,
 DE_RR_DED_MOD_OR_TBF,


 DE_RR_PAGE_MODE,





 DE_RR_NCC_PERM,
 DE_RR_POW_CMD,
 DE_RR_POW_CMD_AND_ACC_TYPE,
 DE_RR_RACH_CTRL_PARAM,
 DE_RR_REQ_REF,
 DE_RR_CAUSE,
 DE_RR_SYNC_IND,
 DE_RR_SI1_REST_OCT,

 DE_RR_SI2TER_REST_OCT,
 DE_RR_SI2QUATER_REST_OCT,
 DE_RR_SI3_REST_OCT,
 DE_RR_SI4_REST_OCT,
 DE_RR_SI6_REST_OCT,




 DE_RR_SI13_REST_OCT,







 DE_RR_STARTING_TIME,
 DE_RR_TIMING_ADV,
 DE_RR_TIME_DIFF,
 DE_RR_TLLI,
 DE_RR_TMSI_PTMSI,
 DE_RR_VGCS_TAR_MODE_IND,
 DE_RR_VGCS_CIP_PAR,

 DE_RR_WAIT_IND,

 DE_RR_EXT_MEAS_RESULT,
 DE_RR_EXT_MEAS_FREQ_LIST,
 DE_RR_SUS_CAU,
 DE_RR_APDU_ID,
 DE_RR_APDU_FLAGS,
 DE_RR_APDU_DATA,
 DE_RR_HO_TO_UTRAN_CMD,





 DE_RR_SERV_SUP,



 DE_RR_DED_SERV_INF,
# 1162 "packet-gsm_a_common.h"
 DE_RR_CARRIER_IND,
 DE_RR_NONE
}
rr_elem_idx_t;

typedef enum
{

    DE_EMM_ADD_UPD_RES,
    DE_EMM_ADD_UPD_TYPE,
    DE_EMM_AUTH_FAIL_PAR,
    DE_EMM_AUTN,
    DE_EMM_AUTH_PAR_RAND,
    DE_EMM_AUTH_RESP_PAR,
    DE_EMM_CSFB_RESP,
    DE_EMM_DAYL_SAV_T,
    DE_EMM_DET_TYPE,
    DE_EMM_DRX_PAR,
    DE_EMM_CAUSE,
    DE_EMM_ATT_RES,
    DE_EMM_ATT_TYPE,
    DE_EMM_EPS_MID,
    DE_EMM_EPS_NET_FEATURE_SUP,
    DE_EMM_EPS_UPD_RES,
    DE_EMM_EPS_UPD_TYPE,
    DE_EMM_ESM_MSG_CONT,
    DE_EMM_GPRS_TIMER,
    DE_EMM_ID_TYPE_2,
    DE_EMM_IMEISV_REQ,
    DE_EMM_KSI_AND_SEQ_NO,
    DE_EMM_MS_NET_CAP,
    DE_EMM_NAS_KEY_SET_ID,
    DE_EMM_NAS_MSG_CONT,
    DE_EMM_NAS_SEC_ALGS,
    DE_EMM_NET_NAME,
    DE_EMM_NONCE,
    DE_EMM_PAGING_ID,
    DE_EMM_P_TMSI_SIGN,
    DE_EMM_SERV_TYPE,
    DE_EMM_SHORT_MAC,
    DE_EMM_TZ,
    DE_EMM_TZ_AND_T,
    DE_EMM_TMSI_STAT,
    DE_EMM_TRAC_AREA_ID,
    DE_EMM_TRAC_AREA_ID_LST,
    DE_EMM_UE_NET_CAP,
    DE_EMM_UE_RA_CAP_INF_UPD_NEED,
    DE_EMM_UE_SEC_CAP,
    DE_EMM_EMERG_NUM_LST,
    DE_EMM_CLI,
    DE_EMM_SS_CODE,
    DE_EMM_LCS_IND,
    DE_EMM_LCS_CLIENT_ID,
    DE_EMM_GEN_MSG_CONT_TYPE,
    DE_EMM_GEN_MSG_CONT,
    DE_EMM_VOICE_DMN_PREF,
    DE_EMM_NONE

}
nas_emm_elem_idx_t;
# 39 "packet-nas_eps.c" 2
# 1 "packet-e212.h" 1
# 29 "packet-e212.h"
# 1 "../../epan/value_string.h" 1
# 30 "packet-e212.h" 2

extern value_string_ext E212_codes_ext;

gchar* dissect_e212_mcc_mnc_ep_str(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, int offset, gboolean little_endian);
int dissect_e212_mcc_mnc(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, int offset, gboolean little_endian);
int dissect_e212_mcc_mnc_in_address(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, int offset);
# 40 "packet-nas_eps.c" 2






static int proto_nas_eps = -1;


static dissector_handle_t gsm_a_dtap_handle;


static void disect_nas_eps_esm_msg(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, int offset);

static int hf_nas_eps_msg_emm_type = -1;
int hf_nas_eps_common_elem_id = -1;
int hf_nas_eps_emm_elem_id = -1;
static int hf_nas_eps_bearer_id = -1;
static int hf_nas_eps_spare_bits = -1;
static int hf_nas_eps_security_header_type = -1;
static int hf_nas_eps_msg_auth_code = -1;
static int hf_nas_eps_seq_no = -1;
static int hf_nas_eps_seq_no_short = -1;
static int hf_nas_eps_emm_ebi0 = -1;
static int hf_nas_eps_emm_ebi1 = -1;
static int hf_nas_eps_emm_ebi2 = -1;
static int hf_nas_eps_emm_ebi3 = -1;
static int hf_nas_eps_emm_ebi4 = -1;
static int hf_nas_eps_emm_ebi5 = -1;
static int hf_nas_eps_emm_ebi6 = -1;
static int hf_nas_eps_emm_ebi7 = -1;
static int hf_nas_eps_emm_ebi8 = -1;
static int hf_nas_eps_emm_ebi9 = -1;
static int hf_nas_eps_emm_ebi10 = -1;
static int hf_nas_eps_emm_ebi11 = -1;
static int hf_nas_eps_emm_ebi12 = -1;
static int hf_nas_eps_emm_ebi13 = -1;
static int hf_nas_eps_emm_ebi14 = -1;
static int hf_nas_eps_emm_ebi15 = -1;
static int hf_nas_eps_emm_dl_nas_cnt = -1;
static int hf_nas_eps_emm_nounce_mme = -1;
static int hf_nas_eps_emm_eps_att_type = -1;
static int hf_nas_eps_emm_cs_lcs_type = -1;
static int hf_nas_eps_emm_epc_lcs_type = -1;
static int hf_nas_eps_emm_emc_bs_type = -1;
static int hf_nas_eps_emm_ims_vops_type = -1;
static int hf_nas_eps_emm_nas_key_set_id = -1;
static int hf_nas_eps_tsc = -1;
static int hf_nas_eps_emm_odd_even = -1;
static int hf_nas_eps_emm_type_of_id = -1;
static int hf_nas_eps_emm_mme_grp_id = -1;
static int hf_nas_eps_emm_imsi = -1;
static int hf_nas_eps_emm_imei = -1;
static int hf_nas_eps_emm_mme_code = -1;
static int hf_nas_eps_emm_m_tmsi = -1;
static int hf_nas_eps_esm_msg_cont = -1;
static int hf_nas_eps_esm_imeisv_req = -1;
static int hf_nas_eps_emm_toi = -1;
static int hf_nas_eps_emm_toc = -1;
static int hf_nas_eps_emm_EPS_attach_result = -1;
static int hf_nas_eps_emm_spare_half_octet = -1;
static int hf_nas_eps_emm_add_upd_res = -1;
static int hf_nas_eps_emm_add_upd_type = -1;
static int hf_nas_eps_emm_res = -1;
static int hf_nas_eps_emm_csfb_resp = -1;
static int hf_nas_eps_emm_cause = -1;
static int hf_nas_eps_emm_id_type2 = -1;
static int hf_nas_eps_emm_short_mac = -1;
static int hf_nas_eps_emm_tai_tol = -1;
static int hf_nas_eps_emm_tai_n_elem = -1;
static int hf_nas_eps_emm_tai_tac = -1;
static int hf_nas_eps_emm_eea0 = -1;
static int hf_nas_eps_emm_128eea1 = -1;
static int hf_nas_eps_emm_128eea2 = -1;
static int hf_nas_eps_emm_eea3 = -1;
static int hf_nas_eps_emm_eea4 = -1;
static int hf_nas_eps_emm_eea5 = -1;
static int hf_nas_eps_emm_eea6 = -1;
static int hf_nas_eps_emm_eea7 = -1;
static int hf_nas_eps_emm_eia0 = -1;
static int hf_nas_eps_emm_128eia1 = -1;
static int hf_nas_eps_emm_128eia2 = -1;
static int hf_nas_eps_emm_eia3 = -1;
static int hf_nas_eps_emm_eia4 = -1;
static int hf_nas_eps_emm_eia5 = -1;
static int hf_nas_eps_emm_eia6 = -1;
static int hf_nas_eps_emm_eia7 = -1;
static int hf_nas_eps_emm_uea0 = -1;
static int hf_nas_eps_emm_uea1 = -1;
static int hf_nas_eps_emm_uea2 = -1;
static int hf_nas_eps_emm_uea3 = -1;
static int hf_nas_eps_emm_uea4 = -1;
static int hf_nas_eps_emm_uea5 = -1;
static int hf_nas_eps_emm_uea6 = -1;
static int hf_nas_eps_emm_uea7 = -1;
static int hf_nas_eps_emm_ucs2_supp = -1;
static int hf_nas_eps_emm_uia0 = -1;
static int hf_nas_eps_emm_uia1 = -1;
static int hf_nas_eps_emm_uia2 = -1;
static int hf_nas_eps_emm_uia3 = -1;
static int hf_nas_eps_emm_uia4 = -1;
static int hf_nas_eps_emm_uia5 = -1;
static int hf_nas_eps_emm_uia6 = -1;
static int hf_nas_eps_emm_uia7 = -1;
static int hf_nas_eps_emm_gea1 = -1;
static int hf_nas_eps_emm_gea2 = -1;
static int hf_nas_eps_emm_gea3 = -1;
static int hf_nas_eps_emm_gea4 = -1;
static int hf_nas_eps_emm_gea5 = -1;
static int hf_nas_eps_emm_gea6 = -1;
static int hf_nas_eps_emm_gea7 = -1;
static int hf_nas_eps_emm_1xsrvcc_cap = -1;
static int hf_nas_eps_emm_ue_ra_cap_inf_upd_need_flg;
static int hf_nas_eps_emm_ss_code = -1;
static int hf_nas_eps_emm_lcs_ind = -1;
static int hf_nas_eps_emm_apn_ambr_ul = -1;
static int hf_nas_eps_emm_apn_ambr_dl = -1;
static int hf_nas_eps_emm_apn_ambr_ul_ext = -1;
static int hf_nas_eps_emm_apn_ambr_dl_ext = -1;
static int hf_nas_eps_emm_apn_ambr_ul_ext2 = -1;
static int hf_nas_eps_emm_apn_ambr_dl_ext2 = -1;

static int hf_nas_eps_emm_switch_off = -1;
static int hf_nas_eps_emm_detach_type_UL = -1;
static int hf_nas_eps_emm_detach_type_DL = -1;

static int hf_nas_eps_qci = -1;
static int hf_nas_eps_mbr_ul = -1;
static int hf_nas_eps_mbr_dl = -1;
static int hf_nas_eps_gbr_ul = -1;
static int hf_nas_eps_gbr_dl = -1;
static int hf_nas_eps_embr_ul = -1;
static int hf_nas_eps_embr_dl = -1;
static int hf_nas_eps_egbr_ul = -1;
static int hf_nas_eps_egbr_dl = -1;

static int hf_nas_eps_esm_cause = -1;
static int hf_nas_eps_esm_eit = -1;
static int hf_nas_eps_esm_lnkd_eps_bearer_id = -1;
static int hf_nas_eps_esm_pdn_type = -1;
static int hf_nas_eps_esm_pdn_ipv4 = -1;
static int hf_nas_eps_esm_pdn_ipv6_if_id = -1;

static int hf_nas_eps_esm_linked_bearer_id = -1;

static int hf_nas_eps_active_flg = -1;
static int hf_nas_eps_eps_update_result_value = -1;
static int hf_nas_eps_eps_update_type_value = -1;
static int hf_nas_eps_service_type = -1;


static int hf_nas_eps_msg_esm_type = -1;
int hf_nas_eps_esm_elem_id = -1;
static int hf_nas_eps_esm_proc_trans_id = -1;


static int ett_nas_eps = -1;
static int ett_nas_eps_esm_msg_cont = -1;


static packet_info *gpinfo;




static const value_string nas_msg_emm_strings[] = {
    { 0x41, "Attach request"},
    { 0x42, "Attach accept"},
    { 0x43, "Attach complete"},
    { 0x44, "Attach reject"},
    { 0x45, "Detach request"},
    { 0x46, "Detach accept"},

    { 0x48, "Tracking area update request"},
    { 0x49, "Tracking area update accept"},
    { 0x4a, "Tracking area update complete"},
    { 0x4b, "Tracking area update reject"},

    { 0x4c, "Extended service request"},
    { 0x4e, "Service reject"},

    { 0x50, "GUTI reallocation command"},
    { 0x51, "GUTI reallocation complete"},
    { 0x52, "Authentication request"},
    { 0x53, "Authentication response"},
    { 0x54, "Authentication reject"},
    { 0x5c, "Authentication failure"},
    { 0x55, "Identity request"},
    { 0x56, "Identity response"},
    { 0x5d, "Security mode command"},
    { 0x5e, "Security mode complete"},
    { 0x5f, "Security mode reject"},

    { 0x60, "EMM status"},
    { 0x61, "EMM information"},
    { 0x62, "Downlink NAS transport"},
    { 0x63, "Uplink NAS transport"},
    { 0x64, "CS Service notification"},
    { 0x68, "Downlink generic NAS transport"},
    { 0x69, "Uplink generic NAS transport"},
    { 0, ((void *)0) }
};



static const value_string nas_msg_esm_strings[] = {
    { 0xc1, "Activate default EPS bearer context request"},
    { 0xc2, "Activate default EPS bearer context accept"},
    { 0xc3, "Activate default EPS bearer context reject"},
    { 0xc5, "Activate dedicated EPS bearer context request"},
    { 0xc6, "Activate dedicated EPS bearer context accept"},
    { 0xc7, "Activate dedicated EPS bearer context reject"},
    { 0xc9, "Modify EPS bearer context request"},
    { 0xca, "Modify EPS bearer context accept"},
    { 0xcb, "Modify EPS bearer context reject"},
    { 0xcd, "Deactivate EPS bearer context request"},
    { 0xce, "Deactivate EPS bearer context accept"},
    { 0xd0, "PDN connectivity request"},
    { 0xd1, "PDN connectivity reject"},
    { 0xd2, "PDN disconnect request"},
    { 0xd3, "PDN disconnect reject"},
    { 0xd4, "Bearer resource allocation request"},
    { 0xd5, "Bearer resource allocation reject"},
    { 0xd6, "Bearer resource modification request"},
    { 0xd7, "Bearer resource modification reject"},
    { 0xd9, "ESM information request"},
    { 0xda, "ESM information response"},
    { 0xdb, "Notification"},
    { 0xe8, "ESM status"},
    { 0, ((void *)0) }
};

static const value_string security_header_type_vals[] = {
    { 0, "Plain NAS message, not security protected"},
    { 1, "Integrity protected"},
    { 2, "Integrity protected and ciphered"},
    { 3, "Integrity protected with new EPS security context"},
    { 4, "Integrity protected and ciphered with new EPS security context"},
    { 5, "Reserved"},
    { 6, "Reserved"},
    { 7, "Reserved"},
    { 8, "Reserved"},
    { 9, "Reserved"},
    { 10, "Reserved"},
    { 11, "Reserved"},
    { 12, "Security header for the SERVICE REQUEST message "},
    { 13, "These values are not used in this version of the protocol. If received they shall be interpreted as \"1100\""},
    { 14, "These values are not used in this version of the protocol. If received they shall be interpreted as \"1100\""},
    { 15, "These values are not used in this version of the protocol. If received they shall be interpreted as \"1100\""},
    { 0, ((void *)0) }
};

const value_string nas_eps_common_elem_strings[] = {
    { 0x00, "EPS bearer context status" },
    { 0x00, "Location area identification" },
    { 0x00, "Mobile identity" },
    { 0x00, "Mobile station classmark 2" },
    { 0x00, "Mobile station classmark 3" },
    { 0x00, "NAS security parameters from E-UTRA" },
    { 0x00, "NAS security parameters to E-UTRA" },
    { 0x00, "PLMN list" },

    { 0x00, "Supported codec list" },
    { 0, ((void *)0) }
};

static guint16
calc_bitrate(guint8 value){
    guint16 return_value = value;

    if (value > 63 && value <= 127) {
        return_value = 64 + (value - 64) * 8;
    }
    else if (value > 127 && value <= 254) {
        return_value = 576 + (value - 128) * 64;
    }
    else if (value==0xff) {
        return_value = 0;
    }
    return return_value;
}
static guint32
calc_bitrate_ext(guint8 value){
    guint32 return_value = 0;

    if (value > 0 && value <= 0x4a) {
        return_value = 8600 + value * 100;
    }
    else if (value > 0x4a && value <= 0xba) {
        return_value = 16 + (value-0x4a);
    }
    else if (value > 0xba && value <= 0xfa) {
        return_value = 128 + (value-0xba)*2;
    }
 else {
  return_value = 256;
 }

    return return_value;
}


gint ett_nas_eps_common_elem[(sizeof(nas_eps_common_elem_strings)/sizeof(value_string))];

typedef enum
{
    DE_EPS_CMN_EPS_BE_CTX_STATUS,
    DE_EPS_CMN_LOC_AREA_ID,
    DE_EPS_CMN_MOB_ID,
    DE_EPS_MS_CM_2,
    DE_EPS_MS_CM_3,
    DE_EPS_NAS_SEC_PAR_FROM_EUTRA,
    DE_EPS_NAS_SEC_PAR_TO_EUTRA,

    DE_EPS_CMN_PLM_LST,
    DE_EPS_CMN_SUP_CODEC_LST,
    DE_EPS_COMMON_NONE
}
nas_eps_common_elem_idx_t;







static const true_false_string nas_eps_emm_ebi_vals = {
    "BEARER CONTEXT-ACTIVE",
    "BEARER CONTEXT-INACTIVE"
};

static guint16
de_eps_cmn_eps_be_ctx_status(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
    guint32 curr_offset;

    curr_offset = offset;


    proto_tree_add_item(tree, hf_nas_eps_emm_ebi7, tvb, curr_offset, 1, (0));
    proto_tree_add_item(tree, hf_nas_eps_emm_ebi6, tvb, curr_offset, 1, (0));
    proto_tree_add_item(tree, hf_nas_eps_emm_ebi5, tvb, curr_offset, 1, (0));

    proto_tree_add_item(tree, hf_nas_eps_emm_ebi4, tvb, curr_offset, 1, (0));
    proto_tree_add_item(tree, hf_nas_eps_emm_ebi3, tvb, curr_offset, 1, (0));
    proto_tree_add_item(tree, hf_nas_eps_emm_ebi2, tvb, curr_offset, 1, (0));
    proto_tree_add_item(tree, hf_nas_eps_emm_ebi1, tvb, curr_offset, 1, (0));
    proto_tree_add_item(tree, hf_nas_eps_emm_ebi0, tvb, curr_offset, 1, (0));
    curr_offset++;

    proto_tree_add_item(tree, hf_nas_eps_emm_ebi15, tvb, curr_offset, 1, (0));
    proto_tree_add_item(tree, hf_nas_eps_emm_ebi14, tvb, curr_offset, 1, (0));
    proto_tree_add_item(tree, hf_nas_eps_emm_ebi13, tvb, curr_offset, 1, (0));
    proto_tree_add_item(tree, hf_nas_eps_emm_ebi12, tvb, curr_offset, 1, (0));
    proto_tree_add_item(tree, hf_nas_eps_emm_ebi11, tvb, curr_offset, 1, (0));
    proto_tree_add_item(tree, hf_nas_eps_emm_ebi10, tvb, curr_offset, 1, (0));
    proto_tree_add_item(tree, hf_nas_eps_emm_ebi9, tvb, curr_offset, 1, (0));
    proto_tree_add_item(tree, hf_nas_eps_emm_ebi8, tvb, curr_offset, 1, (0));

    return len;
}
# 434 "packet-nas_eps.c"
static guint16
de_sec_par_from_eutra(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
    guint32 curr_offset;

    curr_offset = offset;





    proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, curr_offset<<3, 4, (0));
    proto_tree_add_item(tree, hf_nas_eps_emm_dl_nas_cnt, tvb, curr_offset, 1, (0));

    return len;
}




static guint16
de_sec_par_to_eutra(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
    guint32 curr_offset;

    curr_offset = offset;



    proto_tree_add_item(tree, hf_nas_eps_emm_nounce_mme, tvb, curr_offset, 1, (0));
    curr_offset+=4;





    proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, curr_offset<<3, 1, (0));
    proto_tree_add_item(tree, hf_nas_eps_emm_toc, tvb, curr_offset, 1, (0));

    proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, (curr_offset<<3)+4, 1, (0));
    proto_tree_add_item(tree, hf_nas_eps_emm_toi, tvb, curr_offset, 1, (0));
    curr_offset++;







    proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, curr_offset<<3, 4, (0));

    proto_tree_add_bits_item(tree, hf_nas_eps_tsc, tvb, (curr_offset<<3)+4, 1, (0));

    proto_tree_add_bits_item(tree, hf_nas_eps_emm_nas_key_set_id, tvb, (curr_offset<<3)+5, 3, (0));
    curr_offset++;
    return len;
}







guint16 (*nas_eps_common_elem_fcn[])(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len) = {

    de_eps_cmn_eps_be_ctx_status,
    de_lai,
    de_mid,
    de_ms_cm_2,
    de_ms_cm_3,
    de_sec_par_from_eutra,
    de_sec_par_to_eutra,

    de_plmn_list,
    ((void *)0),
    ((void *)0),
};

const value_string nas_emm_elem_strings[] = {

    { 0x00, "Additional update result" },
    { 0x00, "Additional update type" },
    { 0x00, "Authentication failure parameter" },
    { 0x00, "Authentication parameter AUTN" },
    { 0x00, "Authentication parameter RAND" },
    { 0x00, "Authentication response parameter" },
    { 0x00, "CSFB response" },
    { 0x00, "Daylight saving time" },
    { 0x00, "Detach type" },
    { 0x00, "DRX parameter" },
    { 0x00, "EMM cause" },
    { 0x00, "EPS attach result" },
    { 0x00, "EPS attach type" },
    { 0x00, "EPS mobile identity" },
    { 0x00, "EPS network feature support" },
    { 0x00, "EPS update result" },
    { 0x00, "EPS update type" },
    { 0x00, "ESM message container" },
    { 0x00, "GPRS timer" },
    { 0x00, "Identity type 2" },
    { 0x00, "IMEISV request" },
    { 0x00, "KSI and sequence number" },
    { 0x00, "MS network capability" },
    { 0x00, "NAS key set identifier" },
    { 0x00, "NAS message container" },
    { 0x00, "NAS security algorithms" },
    { 0x00, "Network name" },
    { 0x00, "Nonce" },
    { 0x00, "Paging identity" },
    { 0x00, "P-TMSI signature" },
    { 0x00, "Service type" },
    { 0x00, "Short MAC" },
    { 0x00, "Time zone" },
    { 0x00, "Time zone and time" },
    { 0x00, "TMSI status" },
    { 0x00, "Tracking area identity" },
    { 0x00, "Tracking area identity list" },
    { 0x00, "UE network capability" },
    { 0x00, "UE radio capability information update needed" },
    { 0x00, "UE security capability" },
    { 0x00, "Emergency Number List" },
    { 0x00, "CLI" },
    { 0x00, "SS Code" },
    { 0x00, "LCS indicator" },
    { 0x00, "LCS client identity" },

    { 0, ((void *)0) }
};

gint ett_nas_eps_emm_elem[(sizeof(nas_emm_elem_strings)/sizeof(value_string))];
# 637 "packet-nas_eps.c"
static const value_string nas_eps_emm_add_upd_res_vals[] = {
 { 0x0, "no additional information"},
 { 0x1, "CS Fallback not preferred"},
 { 0x2, "SMS only"},
 { 0x3, "reserved"},
 { 0, ((void *)0) }
};
static guint16
de_emm_add_upd_res(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset, bit_offset;

 curr_offset = offset;
 bit_offset = (curr_offset<<3)+4;

 proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, bit_offset, 2, (0));
 bit_offset += 2;
 proto_tree_add_bits_item(tree, hf_nas_eps_emm_add_upd_res, tvb, bit_offset, 2, (0));
 curr_offset++;

 return (curr_offset - offset);
}



static const value_string nas_eps_emm_add_upd_type_vals[] = {
 { 0x0, "no additional information (shall be interpreted as request for combined attach or combined tracking area updating)"},
 { 0x1, "SMS only"},
 { 0, ((void *)0) }
};
static guint16
de_emm_add_upd_type(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset, bit_offset;

 curr_offset = offset;
 bit_offset = (curr_offset<<3)+4;

 proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, bit_offset, 3, (0));
 bit_offset += 3;
 proto_tree_add_bits_item(tree, hf_nas_eps_emm_add_upd_type, tvb, bit_offset, 1, (0));
 curr_offset++;

 return (curr_offset - offset);
}
# 698 "packet-nas_eps.c"
static guint16
de_emm_auth_resp_par(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
    guint32 curr_offset;

    curr_offset = offset;

    proto_tree_add_item(tree, hf_nas_eps_emm_res, tvb, curr_offset, len, (0));

    return len;
}
# 722 "packet-nas_eps.c"
static const value_string nas_eps_emm_csfb_resp_vals[] = {
    { 0x0, "CS fallback rejected by the UE"},
    { 0x1, "CS fallback accepted by the UE"},
    { 0, ((void *)0) }
};

static guint16
de_emm_csfb_resp(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
    guint32 curr_offset, bit_offset;

    curr_offset = offset;


    bit_offset = curr_offset<<3;
    proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, bit_offset+4, 1, (0));

    proto_tree_add_item(tree, hf_nas_eps_emm_csfb_resp, tvb, curr_offset, 1, (0));
    curr_offset++;

    return(curr_offset-offset);
}
# 752 "packet-nas_eps.c"
static const value_string nas_eps_emm_switch_off_vals[] = {
    { 0x0, "Normal detach"},
    { 0x1, "Switch off"},
    { 0, ((void *)0) }
};



static const value_string nas_eps_emm_type_of_dtatch_UL_vals[] = {
    { 0x1, "EPS detach"},
    { 0x2, "IMSI detach"},
    { 0x3, "Combined EPS/IMSI detach"},
    { 0x4, "Combined EPS/IMSI detach"},
    { 0x5, "Combined EPS/IMSI detach"},
    { 0x6, "Reserved"},
    { 0x7, "Reserved"},
    { 0, ((void *)0) }
};





static const value_string nas_eps_emm_type_of_dtatch_DL_vals[] = {
    { 0x1, "Re-attach required"},
    { 0x2, "Re-attach not required"},
    { 0x3, "IMSI detach"},
    { 0x4, "IMSI detach"},
    { 0x5, "IMSI detach"},
    { 0x6, "Reserved"},
    { 0x7, "Reserved"},
    { 0, ((void *)0) }
};
# 793 "packet-nas_eps.c"
static const value_string nas_eps_emm_cause_values[] = {
    { 0x2, "IMSI unknown in HLR"},
    { 0x3, "Illegal MS"},
    { 0x6, "Illegal ME"},
    { 0x7, "EPS services not allowed"},
    { 0x8, "EPS services and non-EPS services not allowed"},
    { 0x9, "UE identity cannot be derived by the network"},
    { 0xa, "Implicitly detached"},
    { 0xb, "PLMN not allowed"},
    { 0xc, "Tracking Area not allowed"},
    { 0xd, "Roaming not allowed in this tracking area"},
    { 0xe, "EPS services not allowed in this PLMN"},
    { 0xf, "No Suitable Cells In tracking area"},
    { 0x10, "MSC temporarily not reachable"},
    { 0x11, "Network failure"},
    { 0x12, "CS domain not available"},
    { 0x13, "ESM failure"},
    { 0x14, "MAC failure"},
    { 0x15, "Synch failure"},
    { 0x16, "Congestion"},
    { 0x17, "UE security capabilities mismatch"},
    { 0x18, "Security mode rejected, unspecified"},
    { 0x19, "Not authorized for this CSG"},
    { 0x1a, "Non-EPS authentication unacceptable"},
    { 0x26, "CS fallback call establishment not allowed"},
    { 0x27, "CS domain temporarily not available"},
    { 0x28, "No EPS bearer context activated"},
    { 0x5f, "Semantically incorrect message"},
    { 0x60, "Invalid mandatory information"},
    { 0x61, "Message type non-existent or not implemented"},
    { 0x62, "Message type not compatible with the protocol state"},
    { 0x63, "Information element non-existent or not implemented"},
    { 0x64, "Conditional IE error"},
    { 0x65, "Message not compatible with the protocol state"},
    { 0x6f, "Protocol error, unspecified"},
    { 0, ((void *)0) }
};

static guint16
de_emm_cause(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
    guint32 curr_offset;

    curr_offset = offset;

    proto_tree_add_item(tree, hf_nas_eps_emm_cause, tvb, curr_offset, 1, (0));
    curr_offset++;

    return curr_offset-offset;}




static const value_string nas_eps_emm_EPS_attach_result_values[] = {
    { 0, "reserved"},
    { 1, "EPS only"},
    { 2, "Combined EPS/IMSI attach"},
    { 3, "reserved"},
    { 4, "reserved"},
    { 5, "reserved"},
    { 6, "reserved"},
    { 7, "reserved"},
    { 0, ((void *)0) }
};






static const value_string nas_eps_emm_eps_att_type_vals[] = {
    { 0, "EPS attach(unused)"},
    { 1, "EPS attach"},
    { 2, "Combined handover EPS/IMSI attach"},
    { 3, "EPS attach(unused)"},
    { 4, "EPS attach(unused)"},
    { 5, "EPS attach(unused)"},
    { 6, "EPS emergency attach"},
    { 7, "Reserved"},
    { 0, ((void *)0) }
};





static char *
unpack_eps_mid_digits(tvbuff_t *tvb) {

    int length;
    guint8 octet;
    int i=0;
    int offset = 0;
    char *digit_str;

    length = tvb_length(tvb);

    digit_str = ep_alloc(length*2);


    octet = tvb_get_guint8(tvb,offset);
    digit_str[i++] = (((octet>>4) & 0x0f) + '0');
    offset++;


    while ( offset < length ){

        octet = tvb_get_guint8(tvb,offset);
        digit_str[i] = ((octet & 0x0f) + '0');
        i++;




        octet = octet >> 4;

        if (octet == 0x0f)
            break;

        digit_str[i] = ((octet & 0x0f) + '0');
        i++;
        offset++;

    }
    digit_str[i]= '\0';
    return digit_str;
}

static const value_string nas_eps_emm_type_of_id_vals[] = {
    { 0, "reserved"},
    { 1, "IMSI"},
    { 2, "reserved"},
    { 3, "IMEI"},
    { 4, "reserved"},
    { 5, "reserved"},
    { 6, "GUTI"},
    { 7, "reserved"},
    { 0, ((void *)0) }
};
static guint16
de_emm_eps_mid(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
    guint32 curr_offset;
    guint8 octet;
    char *digit_str;
    tvbuff_t *new_tvb;

    curr_offset = offset;

    octet = tvb_get_guint8(tvb,offset);

    proto_tree_add_item(tree, hf_nas_eps_emm_odd_even, tvb, curr_offset, 1, (0));
    proto_tree_add_item(tree, hf_nas_eps_emm_type_of_id, tvb, curr_offset, 1, (0));
    switch (octet&0x7){
        case 1:

            new_tvb = tvb_new_subset(tvb, curr_offset, len, len );
            digit_str = unpack_eps_mid_digits(new_tvb);
            proto_tree_add_string(tree, hf_nas_eps_emm_imsi, new_tvb, 0, -1, digit_str);
            break;
        case 3:

            new_tvb = tvb_new_subset(tvb, curr_offset, len, len );
            digit_str = unpack_eps_mid_digits(new_tvb);
            proto_tree_add_string(tree, hf_nas_eps_emm_imei, new_tvb, 0, -1, digit_str);
   break;
  case 6:

   curr_offset++;
   curr_offset = dissect_e212_mcc_mnc(tvb, gpinfo, tree, curr_offset, (!(0)));

   proto_tree_add_item(tree, hf_nas_eps_emm_mme_grp_id, tvb, curr_offset, 2, (0));
   curr_offset+=2;

   proto_tree_add_item(tree, hf_nas_eps_emm_mme_code, tvb, curr_offset, 1, (0));
   curr_offset++;

   proto_tree_add_item(tree, hf_nas_eps_emm_m_tmsi, tvb, curr_offset, 4, (0));
   curr_offset+=4;
   break;
  default:
   proto_tree_add_text(tree, tvb, curr_offset, len - 1, "Type of identity not known");
   break;
 }

 return(len);
}




static const value_string nas_eps_emm_cs_lcs_vals[] = {
 { 0, "no information about support of location services via CS domain is available"},
 { 1, "location services via CS domain not supported"},
 { 2, "location services via CS domain supported"},
 { 3, "reserved"},
 { 0, ((void *)0) }
};
static const true_false_string nas_eps_emm_epc_lcs_value = {
 "location services via EPC supported",
 "location services via EPC not supported"
};
static const true_false_string nas_eps_emm_emc_bs_value = {
 "emergency bearer services in S1 mode supported",
 "emergency bearer services in S1 mode not supported"
};
static const true_false_string nas_eps_emm_ims_vops_value = {
 "IMS voice over PS session in S1 mode supported",
 "IMS voice over PS session in S1 mode not supported"
};

static guint16
de_emm_eps_net_feature_sup(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset, bit_offset;

 curr_offset = offset;
 bit_offset = curr_offset << 3;
 proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, bit_offset, 3, (0));
 bit_offset += 3;
 proto_tree_add_bits_item(tree, hf_nas_eps_emm_cs_lcs_type, tvb, bit_offset, 2, (0));
 bit_offset += 2;
 proto_tree_add_bits_item(tree, hf_nas_eps_emm_epc_lcs_type, tvb, bit_offset, 1, (0));
 bit_offset += 1;
 proto_tree_add_bits_item(tree, hf_nas_eps_emm_emc_bs_type, tvb, bit_offset, 1, (0));
 bit_offset += 1;
 proto_tree_add_bits_item(tree, hf_nas_eps_emm_ims_vops_type, tvb, bit_offset, 1, (0));
 bit_offset += 1;

 return len;
}



static const value_string nas_eps_emm_eps_update_result_vals[] = {
 { 0, "TA updated"},
 { 1, "Combined TA/LA updated"},
 { 2, "TA updated and ISR activated"},
 { 3, "Combined TA/LA updated and ISR activated"},
 { 0, ((void *)0) }
};




static const true_false_string nas_eps_emm_active_flg_value = {
 "Bearer establishment requested",
 "No bearer establishment requested"
};

static const value_string nas_eps_emm_eps_update_type_vals[] = {
 { 0, "TA updating"},
 { 1, "Combined TA/LA updating"},
 { 2, "Combined TA/LA updating with IMSI attach"},
 { 3, "Periodic updating"},
 { 4, "unused; shall be interpreted as 'TA updating', if received by the network"},
 { 5, "unused; shall be interpreted as 'TA updating', if received by the network"},
 { 0, ((void *)0) }
};




static guint16
de_emm_esm_msg_cont(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 proto_item *item;
 proto_tree *sub_tree;
 tvbuff_t *new_tvb;
 guint32 curr_offset;

 curr_offset = offset;


 item = proto_tree_add_item(tree, hf_nas_eps_esm_msg_cont, tvb, curr_offset, len, (0));
 sub_tree = proto_item_add_subtree(item, ett_nas_eps_esm_msg_cont);


 new_tvb = tvb_new_subset(tvb, curr_offset, len, len );

 disect_nas_eps_esm_msg(new_tvb, gpinfo, sub_tree, 0 );

 return(len);
}
# 1086 "packet-nas_eps.c"
static const value_string nas_eps_emm_id_type2_vals[] = {
 { 1, "IMSI"},
 { 2, "IMEI"},
 { 3, "IMEISV"},
 { 4, "TMSI"},
 { 0, ((void *)0) }
};






static const value_string nas_eps_emm_imeisv_req_vals[] = {
 { 0, "IMEISV not requested"},
 { 1, "IMEISV requested"},
 { 2, "IMEISV not requested"},
 { 3, "IMEISV not requested"},
 { 4, "IMEISV not requested"},
 { 5, "IMEISV not requested"},
 { 6, "IMEISV not requested"},
 { 7, "IMEISV not requested"},
 { 0, ((void *)0) }
};
static guint16
de_emm_nas_imeisv_req(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;
 int bit_offset;

 curr_offset = offset;

 bit_offset = curr_offset<<3;
 bit_offset+=4;
 proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, bit_offset, 1, (0));
 proto_tree_add_item(tree, hf_nas_eps_esm_imeisv_req, tvb, curr_offset, 1, (0));
 curr_offset++;

 return(curr_offset - offset);
}



static guint16
de_emm_nas_ksi_and_seq_no(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;
 int bit_offset;

 curr_offset = offset;
 bit_offset = curr_offset<<3;

 proto_tree_add_bits_item(tree, hf_nas_eps_emm_nas_key_set_id, tvb, bit_offset, 3, (0));
 bit_offset += 3;
 proto_tree_add_bits_item(tree, hf_nas_eps_seq_no_short, tvb, bit_offset, 5, (0));
 curr_offset++;

 return(curr_offset - offset);
}
# 1156 "packet-nas_eps.c"
static const value_string nas_eps_tsc_vals[] = {
 { 0, "Native security context"},
 { 1, "Mapped security context"},
 { 0, ((void *)0) }
};



static const value_string nas_eps_emm_NAS_key_set_identifier_vals[] = {
 { 0, ""},
 { 1, ""},
 { 2, ""},
 { 3, ""},
 { 4, ""},
 { 5, ""},
 { 6, ""},
 { 7, "No key is available"},
 { 0, ((void *)0) }
};


static void
de_emm_nas_key_set_id_bits(tvbuff_t *tvb, proto_tree *tree, guint32 bit_offset, const gchar *add_string)
{
 proto_item *item;


 proto_tree_add_bits_item(tree, hf_nas_eps_tsc, tvb, bit_offset, 1, (0));
 bit_offset++;

 item = proto_tree_add_bits_item(tree, hf_nas_eps_emm_nas_key_set_id, tvb, bit_offset, 3, (0));
 if(add_string){
  proto_item_append_text(item, "%s", add_string);
 }
 bit_offset+=3;
}



static guint16
de_emm_nas_key_set_id(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset, bit_offset;

 curr_offset = offset;


 bit_offset = curr_offset<<3;
 bit_offset+=4;


 proto_tree_add_bits_item(tree, hf_nas_eps_tsc, tvb, bit_offset, 1, (0));
 bit_offset++;

 proto_tree_add_bits_item(tree, hf_nas_eps_emm_nas_key_set_id, tvb, bit_offset, 3, (0));
 bit_offset+=3;
 curr_offset++;

 return(curr_offset - offset);
}




static guint16
de_emm_nas_msg_cont(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 tvbuff_t *new_tvb;
 guint32 curr_offset;

 curr_offset = offset;







 new_tvb = tvb_new_subset(tvb, curr_offset, len, len );
 if(gsm_a_dtap_handle)
  call_dissector(gsm_a_dtap_handle,new_tvb, gpinfo, tree);

 return(len);
}




static const value_string nas_eps_emm_toi_vals[] = {
 { 0, "EPS integrity algorithm EIA0 (null integrity protection algorithm)"},
 { 1, "EPS integrity algorithm 128-EIA1"},
 { 2, "EPS integrity algorithm 128-EIA2"},
 { 3, "EPS integrity algorithm EIA3"},
 { 4, "EPS integrity algorithm EIA4"},
 { 5, "EPS integrity algorithm EIA5"},
 { 6, "EPS integrity algorithm EIA6"},
 { 7, "EPS integrity algorithm EIA7"},
 { 0, ((void *)0) }
};



static const value_string nas_eps_emm_toc_vals[] = {
 { 0, "EPS encryption algorithm EEA0 (null ciphering algorithm)"},
 { 1, "EPS encryption algorithm 128-EEA1"},
 { 2, "EPS encryption algorithm 128-EEA2"},
 { 3, "EPS encryption algorithm EEA3"},
 { 4, "EPS encryption algorithm EEA4"},
 { 5, "EPS encryption algorithm EEA5"},
 { 6, "EPS encryption algorithm EEA6"},
 { 7, "EPS encryption algorithm EEA7"},
 { 0, ((void *)0) }
};
static guint16
de_emm_nas_sec_alsgs(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 int bit_offset;
 guint32 curr_offset;

 curr_offset = offset;

 bit_offset = offset<<3;

 proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, bit_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_toc, tvb, curr_offset, 1, (0));
 bit_offset+=4;

 proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, bit_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_toi, tvb, curr_offset, 1, (0));

 curr_offset++;

 return(curr_offset-offset);
}
# 1300 "packet-nas_eps.c"
static guint16
de_emm_nonce(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;

 curr_offset = offset;


 proto_tree_add_text(tree, tvb, curr_offset, 4 , "Nounce");
 curr_offset+=5;

 return(len);
}



static guint16
de_emm_paging_id(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;

 curr_offset = offset;


 proto_tree_add_text(tree, tvb, curr_offset, len , "Paging identity value (Not dissected yet)");
 curr_offset+=len;

 return(len);
}







static const value_string nas_eps_service_type_vals[] = {
 { 0, "Mobile originating CS fallback or 1xCS fallback"},
 { 1, "Mobile terminating CS fallback or 1xCS fallback"},
 { 2, "Mobile originating CS fallback emergency call or 1xCS fallback emergency call"},
 { 0, ((void *)0) }
};




static guint16
de_emm_nas_short_mac(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;

 curr_offset = offset;


 proto_tree_add_item(tree, hf_nas_eps_emm_short_mac, tvb, curr_offset, 2, (0));
 curr_offset+=2;

 return(curr_offset-offset);
}
# 1375 "packet-nas_eps.c"
static guint16
de_emm_trac_area_id(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;

 curr_offset = offset;

 curr_offset = dissect_e212_mcc_mnc(tvb, gpinfo, tree, curr_offset, (!(0)));
 proto_tree_add_item(tree, hf_nas_eps_emm_tai_tac, tvb, curr_offset, 2, (0));
 curr_offset+=2;

 return(curr_offset-offset);
}






static const value_string nas_eps_emm_tai_tol_vals[] = {
 { 0, "list of TACs belonging to one PLMN, with non-consecutive TAC values"},
 { 1, "list of TACs belonging to one PLMN, with consecutive TAC values"},
 { 2, "list of TAIs belonging to different PLMNs"},
 { 0, ((void *)0) }
};

static guint16
de_emm_trac_area_id_lst(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 proto_item *item;
 guint32 curr_offset;
 guint8 octet, tol, n_elem;
 int i;

 curr_offset = offset;

 proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, curr_offset<<3, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_tai_tol, tvb, curr_offset, 1, (0));

 octet = tvb_get_guint8(tvb,curr_offset)& 0x7f;
 tol = octet >> 5;
 n_elem = (octet & 0x1f)+1;
 item = proto_tree_add_item(tree, hf_nas_eps_emm_tai_n_elem, tvb, curr_offset, 1, (0));
 if(n_elem<16)
  proto_item_append_text(item, " [+1 = %u element(s)]", n_elem);

 curr_offset++;
 if (tol>2){
  proto_tree_add_text(tree, tvb, curr_offset, len-(curr_offset-offset) , "Unknown type of list ( Not in 3GPP TS 24.301 version 8.1.0 Release 8 )");
  return len;
 }

 switch(tol){
  case 0:




   curr_offset = dissect_e212_mcc_mnc(tvb, gpinfo, tree, curr_offset, (!(0)));
# 1443 "packet-nas_eps.c"
   if (len < (guint)(4+(n_elem*2))){
    proto_tree_add_text(tree, tvb, curr_offset, len-1 , "[Wrong number of elements?]");
    return len;
   }
   for (i=0; i < n_elem; i++, curr_offset+=2)
    proto_tree_add_item(tree, hf_nas_eps_emm_tai_tac, tvb, curr_offset, 2, (0));
   break;
  case 1:






   curr_offset = dissect_e212_mcc_mnc(tvb, gpinfo, tree, curr_offset, (!(0)));
   proto_tree_add_item(tree, hf_nas_eps_emm_tai_tac, tvb, curr_offset, 2, (0));
   curr_offset+=2;
   break;
  case 2:
   if (len< (guint)(1+(n_elem*5))){
    proto_tree_add_text(tree, tvb, curr_offset, len-1 , "[Wrong number of elements?]");
    return len;
   }

   for (i=0; i < n_elem; i++){





    curr_offset = dissect_e212_mcc_mnc(tvb, gpinfo, tree, curr_offset, (!(0)));
    proto_tree_add_item(tree, hf_nas_eps_emm_tai_tac, tvb, curr_offset, 2, (0));
    curr_offset+=2;
   }
   break;
  default:

   break;
 }
 if (((len) > (curr_offset - offset))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (len) - (curr_offset - offset), "Extraneous Data"); curr_offset += ((len) - (curr_offset - offset)); };

 return(curr_offset-offset);
}




static const true_false_string nas_eps_emm_supported_flg_value = {
 "Supported",
 "Not Supported"
};
static const true_false_string nas_eps_emm_ucs2_supp_flg_value = {
 "The UE has no preference between the use of the default alphabet and the use of UCS2",
 "The UE has a preference for the default alphabet"
};

static const true_false_string nas_eps_emm_1xsrvcc_cap_flg = {
 "SRVCC from E-UTRAN to cdma2000  1xCS supported",
 "SRVCC from E-UTRAN to cdma2000 1x CS not supported"
};

guint16
de_emm_ue_net_cap(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;

 curr_offset = offset;




 proto_tree_add_item(tree, hf_nas_eps_emm_eea0, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_128eea1, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_128eea2, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eea3, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eea4, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eea5, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eea6, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eea7, tvb, curr_offset, 1, (0));
 curr_offset++;




 proto_tree_add_item(tree, hf_nas_eps_emm_eia0, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_128eia1, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_128eia2, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eia3, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eia4, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eia5, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eia6, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eia7, tvb, curr_offset, 1, (0));
 curr_offset++;



 if ((curr_offset - offset) >= len)
  return (len);





 proto_tree_add_item(tree, hf_nas_eps_emm_uea0, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uea1, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uea2, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uea3, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uea4, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uea5, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uea6, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uea7, tvb, curr_offset, 1, (0));
 curr_offset++;

 if ((curr_offset - offset) >= len)
  return (len);





 proto_tree_add_item(tree, hf_nas_eps_emm_ucs2_supp, tvb, curr_offset, 1, (0));


 proto_tree_add_item(tree, hf_nas_eps_emm_uia1, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uia2, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uia3, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uia4, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uia5, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uia6, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uia7, tvb, curr_offset, 1, (0));
 curr_offset++;

 if ((curr_offset - offset) >= len)
  return (len);


 proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, (curr_offset<<3), 6, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_1xsrvcc_cap, tvb, curr_offset, 1, (0));
 proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, (curr_offset<<3)+7, 1, (0));

 return(len);
}

static const true_false_string nas_eps_emm_ue_ra_cap_inf_upd_need_flg = {
 "UE radio capability information update needed",
 "UE radio capability information update not needed"
};





static guint16
de_emm_ue_ra_cap_inf_upd_need(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;

 curr_offset = offset;

 proto_tree_add_item(tree, hf_nas_eps_emm_ue_ra_cap_inf_upd_need_flg, tvb, curr_offset, 1, (0));

 return(len);
}




static guint16
de_emm_ue_sec_cap(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;

 curr_offset = offset;


 proto_tree_add_item(tree, hf_nas_eps_emm_eea0, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_128eea1, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_128eea2, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eea3, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eea4, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eea5, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eea6, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eea7, tvb, curr_offset, 1, (0));
 curr_offset++;




 proto_tree_add_item(tree, hf_nas_eps_emm_eia0, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_128eia1, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_128eia2, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eia3, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eia4, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eia5, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eia6, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_eia7, tvb, curr_offset, 1, (0));
 curr_offset++;





 if(len==2)
  return(len);





 proto_tree_add_item(tree, hf_nas_eps_emm_uea0, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uea1, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uea2, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uea3, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uea4, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uea5, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uea6, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uea7, tvb, curr_offset, 1, (0));
 curr_offset++;


 proto_tree_add_item(tree, hf_nas_eps_emm_uia0, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uia1, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uia2, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uia3, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uia4, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uia5, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uia6, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_uia7, tvb, curr_offset, 1, (0));
 curr_offset++;

 if(len==4)
  return(len);

 proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, (curr_offset<<3), 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_gea1, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_gea2, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_gea3, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_gea4, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_gea5, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_gea6, tvb, curr_offset, 1, (0));

 proto_tree_add_item(tree, hf_nas_eps_emm_gea7, tvb, curr_offset, 1, (0));
 curr_offset++;

 return(len);
}
# 1770 "packet-nas_eps.c"
static guint16
de_emm_ss_code(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;

 curr_offset = offset;






 proto_tree_add_item(tree, hf_nas_eps_emm_ss_code, tvb, curr_offset, 1, (0));

 return(len);
}





static const value_string nas_eps_emm_lcs_ind_vals[] = {
 { 0, "Normal, unspecified"},
 { 1, "MT-LR"},
 { 0, ((void *)0) }
};


static guint16
de_emm_lcs_ind(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;

 curr_offset = offset;


 proto_tree_add_item(tree, hf_nas_eps_emm_lcs_ind, tvb, curr_offset, 1, (0));

 return(len);
}



static guint16
de_emm_lcs_client_id(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;
 tvbuff_t *new_tvb;

 curr_offset = offset;





 new_tvb = tvb_new_subset(tvb, curr_offset, len, len );
 dissect_gsm_map_lcs_LCS_ClientID_PDU( new_tvb, gpinfo, tree );

 return(len);
}





static guint16
de_emm_gen_msg_cont_type(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;

 curr_offset = offset;

 proto_tree_add_text(tree, tvb, offset, len, "Not dissected yet");

 return(len);
}



static guint16
de_emm_gen_msg_cont(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;

 curr_offset = offset;

 proto_tree_add_text(tree, tvb, offset, len, "Not dissected yet");

 return(len);
}



static guint16
de_emm_gen_voice_dmn_pref(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;

 curr_offset = offset;

 proto_tree_add_text(tree, tvb, offset, len, "Not dissected yet");

 return(len);
}
# 1886 "packet-nas_eps.c"
static guint16
de_esm_apn_aggr_max_br(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;
 guint8 octet;
 guint32 dl_total = 0;
 guint32 ul_total = 0;
 guint32 bitrate = 0;

 curr_offset = offset;

 octet = tvb_get_guint8(tvb,curr_offset);
 if(octet==0){
  proto_tree_add_uint_format(tree, hf_nas_eps_emm_apn_ambr_dl, tvb, curr_offset, 1, octet,
           "Reserved");
 }else{
  bitrate = calc_bitrate(octet);
  dl_total += bitrate;
  proto_tree_add_uint_format(tree, hf_nas_eps_emm_apn_ambr_dl, tvb, curr_offset, 1, octet,
           "APN-AMBR for downlink : %u kbps", bitrate);
 }
 curr_offset++;


 octet = tvb_get_guint8(tvb,curr_offset);
 if(octet==0){
  proto_tree_add_uint_format(tree, hf_nas_eps_emm_apn_ambr_ul, tvb, curr_offset, 1, octet,
           "Reserved");
 }else{
  bitrate = calc_bitrate(octet);
  ul_total += bitrate;
  proto_tree_add_uint_format(tree, hf_nas_eps_emm_apn_ambr_ul, tvb, curr_offset, 1, octet,
           "APN-AMBR for uplink : %u kbps", bitrate);
 }
 curr_offset++;
 if ((curr_offset - offset) >= len)
  return(len);

 octet = tvb_get_guint8(tvb,curr_offset);
 if(octet==0){
  proto_tree_add_uint_format(tree, hf_nas_eps_emm_apn_ambr_dl_ext, tvb, curr_offset, 1, octet,
           "Use the value indicated by the APN-AMBR for downlink");
 }else{
  bitrate = calc_bitrate_ext(octet);
  dl_total += (octet > 0x4a) ? bitrate*1000 : bitrate;
  proto_tree_add_uint_format(tree, hf_nas_eps_emm_apn_ambr_dl_ext, tvb, curr_offset, 1, octet,
           "APN-AMBR for downlink (extended) : %u %s",
        bitrate,
        (octet > 0x4a) ? "Mbps" : "kbps");
 }
 if (len < 5) {

  if (octet != 0) {

   dl_total = (octet > 0x4a) ? bitrate*1000 : bitrate;
  }
  if (dl_total >= 1000) {
   proto_tree_add_text(tree, tvb, curr_offset, 1,"Total APN-AMBR for downlink : %.3f Mbps", (gfloat)dl_total / 1000);
   } else {
   proto_tree_add_text(tree, tvb, curr_offset, 1,"Total APN-AMBR for downlink : %u kbps", dl_total);
  }
 }
 curr_offset++;
 if ((curr_offset - offset) >= len)
  return(len);

 octet = tvb_get_guint8(tvb,curr_offset);
 if(octet==0){
  proto_tree_add_uint_format(tree, hf_nas_eps_emm_apn_ambr_ul_ext, tvb, curr_offset, 1, octet,
           "Use the value indicated by the APN-AMBR for uplink");
 }else{
  bitrate = calc_bitrate_ext(octet);
  ul_total += (octet > 0x4a) ? bitrate*1000 : bitrate;
  proto_tree_add_uint_format(tree, hf_nas_eps_emm_apn_ambr_ul_ext, tvb, curr_offset, 1, octet,
           "APN-AMBR for uplink (extended) : %u %s",
        bitrate,
        (octet > 0x4a) ? "Mbps" : "kbps");
 }
 if (len < 6) {

  if (octet != 0) {

   ul_total = (octet > 0x4a) ? bitrate*1000 : bitrate;
  }
  if (ul_total >= 1000) {
   proto_tree_add_text(tree, tvb, curr_offset, 1,"Total APN-AMBR for uplink : %.3f Mbps", (gfloat)ul_total / 1000);
   } else {
   proto_tree_add_text(tree, tvb, curr_offset, 1,"Total APN-AMBR for uplink : %u kbps", ul_total);
  }
 }
 curr_offset++;
 if ((curr_offset - offset) >= len)
  return(len);

 octet = tvb_get_guint8(tvb,curr_offset);
 if((octet==0)||(octet==0xff)){
  proto_tree_add_uint_format(tree, hf_nas_eps_emm_apn_ambr_dl_ext2, tvb, curr_offset, 1, octet,
           "Use the value indicated by the APN-AMBR for downlink and APN-AMBR for downlink (extended)");
 }else{
  dl_total += octet*256*1000;
  proto_tree_add_uint_format(tree, hf_nas_eps_emm_apn_ambr_dl_ext2, tvb, curr_offset, 1, octet,
           "APN-AMBR for downlink (extended-2) : %u Mbps",
        (octet* 256));
 }
 proto_tree_add_text(tree, tvb, curr_offset, 1,"Total APN-AMBR for downlink : %.3f Mbps", (gfloat)dl_total / 1000);
 curr_offset++;
 if ((curr_offset - offset) >= len)
  return(len);

 octet = tvb_get_guint8(tvb,curr_offset);
 if((octet==0)||(octet==0xff)){
  proto_tree_add_uint_format(tree, hf_nas_eps_emm_apn_ambr_ul_ext2, tvb, curr_offset, 1, octet,
           "Use the value indicated by the APN-AMBR for uplink and APN-AMBR for downlink (extended)");
 }else{
  ul_total += octet*256*1000;
  proto_tree_add_uint_format(tree, hf_nas_eps_emm_apn_ambr_ul_ext2, tvb, curr_offset, 1, octet,
           "APN-AMBR for uplink (extended-2) : %u Mbps",
        (octet* 256));
 }
 proto_tree_add_text(tree, tvb, curr_offset, 1,"Total APN-AMBR for uplink : %.3f Mbps", (gfloat)ul_total / 1000);
 curr_offset++;

 return(len);
}





static const value_string nas_eps_qci_vals[] = {
 { 0, "UE -> NW Network selects the QCI / NW -> UE Reserved"},
 { 1, "QCI 1"},
 { 2, "QCI 2"},
 { 3, "QCI 3"},
 { 4, "QCI 4"},
 { 5, "QCI 5"},
 { 6, "QCI 6"},
 { 7, "QCI 7"},
 { 8, "QCI 8"},
 { 9, "QCI 9"},
 { 0, ((void *)0) }
};



static guint16
de_esm_qos(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;
 guint8 octet;

 curr_offset = offset;


 proto_tree_add_item(tree, hf_nas_eps_qci, tvb, curr_offset, 1, (0));
 curr_offset++;
 if ((curr_offset - offset) >= len)
  return(len);

 octet = tvb_get_guint8(tvb,curr_offset);
 if(octet==0){
  proto_tree_add_uint_format(tree, hf_nas_eps_mbr_ul, tvb, curr_offset, 1, octet,
           "UE->NW Subscribed maximum bit rate for uplink/ NW->UE Reserved");
 }else{
  proto_tree_add_uint_format(tree, hf_nas_eps_mbr_ul, tvb, curr_offset, 1, octet,
           "Maximum bit rate for uplink : %u kbps", calc_bitrate(octet));
 }
 curr_offset++;
 if ((curr_offset - offset) >= len)
  return(len);

 octet = tvb_get_guint8(tvb,curr_offset);
 if(octet==0){
  proto_tree_add_uint_format(tree, hf_nas_eps_mbr_dl, tvb, curr_offset, 1, octet,
           "UE->NW Subscribed maximum bit rate for downlink/ NW->UE Reserved");
 }else{
  proto_tree_add_uint_format(tree, hf_nas_eps_mbr_dl, tvb, curr_offset, 1, octet,
           "Maximum bit rate for downlink : %u kbps", calc_bitrate(octet));
 }
 curr_offset++;
 if ((curr_offset - offset) >= len)
  return(len);

 octet = tvb_get_guint8(tvb,curr_offset);
 proto_tree_add_uint_format(tree, hf_nas_eps_gbr_ul, tvb, curr_offset, 1, octet,
          "Guaranteed bit rate for uplink : %u kbps", calc_bitrate(octet));

 curr_offset++;
 if ((curr_offset - offset) >= len)
  return(len);

 octet = tvb_get_guint8(tvb,curr_offset);
 proto_tree_add_uint_format(tree, hf_nas_eps_gbr_ul, tvb, curr_offset, 1, octet,
          "Guaranteed bit rate for downlink : %u kbps", calc_bitrate(octet));

 curr_offset++;
 if ((curr_offset - offset) >= len)
  return(len);

 octet = tvb_get_guint8(tvb,curr_offset);
 if(octet==0){
  proto_tree_add_uint_format(tree, hf_nas_eps_embr_ul, tvb, curr_offset, 1, octet,
           "Use the value indicated by the maximum bit rate for uplink in octet 4.");
 }else{
  proto_tree_add_uint_format(tree, hf_nas_eps_embr_ul, tvb, curr_offset, 1, octet,
           "Maximum bit rate for uplink(extended) : %u %s",
        calc_bitrate_ext(octet),
        (octet > 0x4a) ? "Mbps" : "kbps");
 }
 curr_offset++;
 if ((curr_offset - offset) >= len)
  return(len);

 octet = tvb_get_guint8(tvb,curr_offset);
 if(octet==0){
  proto_tree_add_uint_format(tree, hf_nas_eps_embr_ul, tvb, curr_offset, 1, octet,
           "Use the value indicated by the maximum bit rate for downlink in octet 5.");
 }else{
  proto_tree_add_uint_format(tree, hf_nas_eps_embr_ul, tvb, curr_offset, 1, octet,
           "Maximum bit rate for downlink(extended) : %u %s",
        calc_bitrate_ext(octet),
        (octet > 0x4a) ? "Mbps" : "kbps");
 }
 curr_offset++;
 if ((curr_offset - offset) >= len)
  return(len);

 octet = tvb_get_guint8(tvb,curr_offset);
 if(octet==0){
  proto_tree_add_uint_format(tree, hf_nas_eps_embr_ul, tvb, curr_offset, 1, octet,
           "Use the value indicated by the Guaranteed bit rate for uplink in octet 6.");
 }else{
  proto_tree_add_uint_format(tree, hf_nas_eps_embr_ul, tvb, curr_offset, 1, octet,
           "Guaranteed bit rate for uplink(extended) : %u %s",
        calc_bitrate_ext(octet),
        (octet > 0x4a) ? "Mbps" : "kbps");
 }
 curr_offset++;
 if ((curr_offset - offset) >= len)
  return(len);

 octet = tvb_get_guint8(tvb,curr_offset);
 if(octet==0){
  proto_tree_add_uint_format(tree, hf_nas_eps_embr_ul, tvb, curr_offset, 1, octet,
           "Use the value indicated by the Guaranteed bit rate for downlink in octet 7.");
 }else{
  proto_tree_add_uint_format(tree, hf_nas_eps_embr_ul, tvb, curr_offset, 1, octet,
           "Guaranteed bit rate for downlink(extended) : %u %s",
        calc_bitrate_ext(octet),
        (octet > 0x4a) ? "Mbps" : "kbps");
 }
 curr_offset++;

 return(len);
}




static const value_string nas_eps_esm_cause_vals[] = {
 { 0x08, "Operator Determined Barring"},
 { 0x1a, "Insufficient resources"},
 { 0x1b, "Unknown or missing APN"},
 { 0x1c, "Unknown PDN type"},
 { 0x1d, "User authentication failed"},
 { 0x1e, "Request rejected by Serving GW or PDN GW"},
 { 0x1f, "Request rejected, unspecified"},
 { 0x20, "Service option not supported"},
 { 0x21, "Requested service option not subscribed"},
 { 0x22, "Service option temporarily out of order"},
 { 0x23, "PTI already in use"},
 { 0x24, "Regular deactivation"},
 { 0x25, "EPS QoS not accepted"},
 { 0x26, "Network failure"},
 { 0x28, "Feature not supported"},
 { 0x29, "Semantic error in the TFT operation"},
 { 0x2a, "Syntactical error in the TFT operation"},
 { 0x2b, "Invalid EPS bearer identity"},
 { 0x2c, "Semantic errors in packet filter(s)"},
 { 0x2d, "Syntactical errors in packet filter(s)"},
 { 0x2e, "EPS bearer context without TFT already activated"},
 { 0x2f, "PTI mismatch"},
 { 0x31, "Last PDN disconnection not allowed"},
 { 0x32, "PDN type IPv4 only allowed"},
 { 0x33, "PDN type IPv6 only allowed"},
 { 0x34, "Single address bearers only allowed"},
 { 0x35, "ESM information not received"},
 { 0x36, "PDN connection does not exist"},
 { 0x37, "Multiple PDN connections for a given APN not allowed"},
 { 0x38, "Collision with network initiated request"},
 { 0x3b, "Unsupported QCI value"},
 { 0x51, "Invalid PTI value"},
 { 0x5f, "Semantically incorrect message"},
 { 0x60, "Invalid mandatory information"},
 { 0x61, "Message type non-existent or not implemented"},
 { 0x62, "Message type not compatible with the protocol state"},
 { 0x63, "Information element non-existent or not implemented"},
 { 0x64, "Conditional IE error"},
 { 0x65, "Message not compatible with the protocol state"},
 { 0x6f, "Protocol error, unspecified"},
 { 0x70, "APN restriction value incompatible with active EPS bearer context"},
 { 0, ((void *)0) }
};

static guint16
de_esm_cause(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;

 curr_offset = offset;

 proto_tree_add_item(tree, hf_nas_eps_esm_cause, tvb, curr_offset, 1, (0));
 curr_offset++;

 return(curr_offset - offset);
}




static const true_false_string nas_eps_emm_eit_vals = {
 "Security protected ESM information transfer required",
 "Security protected ESM information transfer not required"
};
static guint16
de_esm_inf_trf_flg(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;

 curr_offset = offset;


 proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, (curr_offset<<3)+4, 3, (0));
 proto_tree_add_item(tree, hf_nas_eps_esm_eit, tvb, curr_offset, 1, (0));
 curr_offset++;
 return(curr_offset-offset);
}







static const value_string nas_eps_esm_linked_bearer_id_vals[] = {
 { 0x0, "Reserved"},
 { 0x1, "Reserved"},
 { 0x2, "Reserved"},
 { 0x3, "Reserved"},
 { 0x4, "Reserved"},
 { 0x5, "EPS bearer identity value 5"},
 { 0x6, "EPS bearer identity value 6"},
 { 0x7, "EPS bearer identity value 7"},
 { 0x8, "EPS bearer identity value 8"},
 { 0x9, "EPS bearer identity value 9"},
 { 0xa, "EPS bearer identity value 10"},
 { 0xb, "EPS bearer identity value 11"},
 { 0xc, "EPS bearer identity value 12"},
 { 0xd, "EPS bearer identity value 13"},
 { 0xe, "EPS bearer identity value 14"},
 { 0xf, "EPS bearer identity value 15"},
 { 0, ((void *)0) }
};



static guint16
de_esm_lnkd_eps_bearer_id(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;

 curr_offset = offset;

 proto_tree_add_item(tree, hf_nas_eps_esm_lnkd_eps_bearer_id, tvb, curr_offset, 1, (0));

 return(len);
}
# 2274 "packet-nas_eps.c"
static guint16
de_esm_pdn_addr(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len __attribute__((unused)), gchar *add_string __attribute__((unused)), int string_len __attribute__((unused)))
{
 guint32 curr_offset;
 guint8 pdn_type;

 curr_offset = offset;


 pdn_type = tvb_get_guint8(tvb, offset) & 0x7;
 proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, curr_offset<<3, 5, (0));
 proto_tree_add_item(tree, hf_nas_eps_esm_pdn_type, tvb, curr_offset, 1, (0));
 curr_offset++;

 switch(pdn_type){
  case 1:

   proto_tree_add_item(tree, hf_nas_eps_esm_pdn_ipv4, tvb, curr_offset, 4, (0));
   curr_offset+=4;
   break;
  case 2:





   proto_tree_add_item(tree, hf_nas_eps_esm_pdn_ipv6_if_id, tvb, curr_offset, 8, (0));
   offset+=8;
   break;
  case 3:







   proto_tree_add_item(tree, hf_nas_eps_esm_pdn_ipv6_if_id, tvb, curr_offset, 8, (0));
   curr_offset+=8;
   proto_tree_add_item(tree, hf_nas_eps_esm_pdn_ipv4, tvb, curr_offset, 4, (0));
   curr_offset+=4;
   break;
  default:
   break;
 }

 return(curr_offset-offset);
}





static const value_string nas_eps_esm_pdn_type_values[] = {
 { 0x1, "IPv4" },
 { 0x2, "IPv6" },
 { 0x3, "IPv4v6" },
 { 0, ((void *)0) }
};
# 2368 "packet-nas_eps.c"
guint16 (*emm_elem_fcn[])(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len) = {

 de_emm_add_upd_res,
 de_emm_add_upd_type,
 ((void *)0),
 ((void *)0),
 ((void *)0),
 de_emm_auth_resp_par,
 de_emm_csfb_resp,
 ((void *)0),
 ((void *)0),
 ((void *)0),
 de_emm_cause,
 ((void *)0),
 ((void *)0),
 de_emm_eps_mid,
 de_emm_eps_net_feature_sup,
 ((void *)0),
 ((void *)0),
 de_emm_esm_msg_cont,
 ((void *)0),
 ((void *)0),
 de_emm_nas_imeisv_req,
 de_emm_nas_ksi_and_seq_no,
 ((void *)0),
 de_emm_nas_key_set_id,
 de_emm_nas_msg_cont,
 de_emm_nas_sec_alsgs,
 ((void *)0),
 de_emm_nonce,
 de_emm_paging_id,
 ((void *)0),
 ((void *)0),
 de_emm_nas_short_mac,
 ((void *)0),
 ((void *)0),
 ((void *)0),
 de_emm_trac_area_id,
 de_emm_trac_area_id_lst,
 de_emm_ue_net_cap,
 de_emm_ue_ra_cap_inf_upd_need,
 de_emm_ue_sec_cap,
 ((void *)0),
 ((void *)0),
 de_emm_ss_code,
 de_emm_lcs_ind,
 de_emm_lcs_client_id,
 de_emm_gen_msg_cont_type,
 de_emm_gen_msg_cont,
 de_emm_gen_voice_dmn_pref,
 ((void *)0),
};


const value_string nas_esm_elem_strings[] = {
 { 0x00, "Access point name" },
 { 0x00, "APN aggregate maximum bit rate" },
 { 0x00, "EPS quality of service" },
 { 0x00, "ESM cause" },
 { 0x00, "ESM information transfer flag" },
 { 0x00, "Linked EPS bearer identity" },
 { 0x00, "LLC service access point identifier" },
 { 0x00, "Packet flow identifier" },
 { 0x00, "PDN address" },
 { 0x00, "PDN type" },
 { 0x00, "Protocol configuration options" },
 { 0x00, "Quality of service" },
 { 0x00, "Radio priority" },
 { 0x00, "Request type" },
 { 0x00, "Traffic flow aggregate description" },
 { 0x00, "Traffic flow templat" },
 { 0x00, "Transaction identifier" },
 { 0, ((void *)0) }
};



gint ett_nas_eps_esm_elem[(sizeof(nas_esm_elem_strings)/sizeof(value_string))];

typedef enum
{
 DE_ESM_APN,
 DE_ESM_APN_AGR_MAX_BR,
 DE_ESM_EPS_QOS,
 DE_ESM_CAUSE,
 DE_ESM_INF_TRF_FLG,
 DE_ESM_LNKED_EPS_B_ID,
 DE_ESM_LLC_SAPI,
 DE_ESM_P_FLW_ID,
 DE_ESM_PDN_ADDR,
 DE_ESM_PDN_TYPE,
 DE_ESM_PROT_CONF_OPT,
 DE_ESM_QOS,
 DE_ESM_RA_PRI,
 DE_ESM_REQ_TYPE,
 DE_ESM_TRAF_FLOW_AGR_DESC,
 DE_ESM_TRAF_FLOW_TEMPL,
 DE_ESM_TID,
 DE_ESM_NONE
}

nas_esm_elem_idx_t;

guint16 (*esm_elem_fcn[])(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len, gchar *add_string, int string_len) = {
 ((void *)0),
 de_esm_apn_aggr_max_br,
 de_esm_qos,
 de_esm_cause,
 de_esm_inf_trf_flg,
 de_esm_lnkd_eps_bearer_id,
 ((void *)0),
 ((void *)0),
 de_esm_pdn_addr,
 ((void *)0),
 ((void *)0),
 ((void *)0),
 ((void *)0),
 ((void *)0),
 ((void *)0),
 ((void *)0),
 ((void *)0),
 ((void *)0),
};







static void
nas_emm_attach_acc(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset, bit_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 bit_offset = curr_offset<<3;
 proto_tree_add_bits_item(tree, hf_nas_eps_emm_spare_half_octet, tvb, bit_offset, 4, (0));
 bit_offset+=4;

 proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, bit_offset, 1, (0));
 bit_offset++;
 proto_tree_add_bits_item(tree, hf_nas_eps_emm_EPS_attach_result, tvb, bit_offset, 3, (0));
 bit_offset+=3;

 curr_len--;
 curr_offset++;

 { if ((consumed = elem_v(tvb, tree, 5, DE_GPRS_TIMER, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_lv(tvb, tree, 10, DE_EMM_TRAC_AREA_ID_LST, curr_offset, curr_len, " - TAI list")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_lv_e(tvb, tree, 10, DE_EMM_ESM_MSG_CONT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x50, 10, DE_EMM_EPS_MID, curr_offset, curr_len, " - GUTI")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x13, 9, DE_EPS_CMN_LOC_AREA_ID, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x23, 9, DE_EPS_CMN_MOB_ID, curr_offset, curr_len, " - MS identity")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x53, 10, DE_EMM_CAUSE, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x17, 5, DE_GPRS_TIMER, curr_offset, " - T3402 value")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x59, 5, DE_GPRS_TIMER, curr_offset, " - T3423 value")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x4a, 9, DE_EPS_CMN_PLM_LST, curr_offset, curr_len, " - Equivalent PLMNs")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x34, 1, DE_EMERGENCY_NUM_LIST, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x64, 10, DE_EMM_EPS_NET_FEATURE_SUP, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv_short(tvb, tree, 0xF0, 10, DE_EMM_ADD_UPD_RES, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_emm_attach_comp(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_lv_e(tvb, tree, 10, DE_EMM_ESM_MSG_CONT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };

}




static void
nas_emm_attach_rej(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_v(tvb, tree, 10, DE_EMM_CAUSE, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv_e(tvb, tree, (guint8) 0x78, 10, DE_EMM_ESM_MSG_CONT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };

}



static void
nas_emm_attach_req(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset, bit_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;

 bit_offset = curr_offset<<3;


 de_emm_nas_key_set_id_bits(tvb, tree, bit_offset, ((void *)0));
 bit_offset+=4;




 proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, bit_offset, 1, (0));
 bit_offset++;
 proto_tree_add_bits_item(tree, hf_nas_eps_emm_eps_att_type, tvb, bit_offset, 3, (0));
 bit_offset+=3;


 curr_len--;
 curr_offset++;

 { if ((consumed = elem_lv(tvb, tree, 10, DE_EMM_EPS_MID, curr_offset, curr_len, " - Old GUTI or IMSI")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_lv(tvb, tree, 10, DE_EMM_UE_NET_CAP, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_lv_e(tvb, tree, 10, DE_EMM_ESM_MSG_CONT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x19, 5, DE_P_TMSI_SIG, curr_offset, " - Old P-TMSI Signature")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x50, 10, DE_EMM_EPS_MID, curr_offset, curr_len, " - Additional GUTI")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x52, 10, DE_EMM_TRAC_AREA_ID, curr_offset, " - Last visited registered TAI")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x5c, 5, DE_DRX_PARAM, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x31, 5, DE_MS_NET_CAP, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x13, 9, DE_EPS_CMN_LOC_AREA_ID, curr_offset, " - Old location area identification")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv_short(tvb, tree, 0x90, 5, DE_TMSI_STAT, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x11, 9, DE_EPS_MS_CM_2, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x20, 9, DE_EPS_MS_CM_3, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x40, 1, DE_SUP_CODEC_LIST, curr_offset, curr_len, " - Supported Codecs")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv_short(tvb, tree, 0xF0, 10, DE_EMM_ADD_UPD_TYPE, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };




 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_emm_attach_fail(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_v(tvb, tree, 10, DE_EMM_CAUSE, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x30, 1, DE_AUTH_FAIL_PARAM, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}
# 2682 "packet-nas_eps.c"
static void
nas_emm_auth_req(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset, bit_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;

 bit_offset = curr_offset<<3;


 proto_tree_add_bits_item(tree, hf_nas_eps_emm_spare_half_octet, tvb, bit_offset, 4, (0));
 bit_offset+=4;




 de_emm_nas_key_set_id_bits(tvb, tree, bit_offset, " ASME");
 bit_offset+=4;


 curr_len--;
 curr_offset++;




 { if ((consumed = elem_v(tvb, tree, 1, DE_AUTH_PARAM_RAND, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };



 { if ((consumed = elem_lv(tvb, tree, 1, DE_AUTH_PARAM_AUTN, curr_offset, curr_len, " - EPS challenge")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };

}



static void
nas_emm_auth_resp(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;




 { if ((consumed = elem_lv(tvb, tree, 10, DE_EMM_AUTH_RESP_PAR, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}





static void
nas_emm_cs_serv_not(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;

 consumed = 0;


 { if ((consumed = elem_v(tvb, tree, 10, DE_EMM_PAGING_ID, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x60, 1, DE_CLD_PARTY_BCD_NUM, curr_offset, curr_len, " - CLI")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x61, 10, DE_EMM_SS_CODE, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x62, 10, DE_EMM_LCS_IND, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x63, 10, DE_EMM_LCS_CLIENT_ID, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}
# 2782 "packet-nas_eps.c"
static void
nas_emm_detach_req_UL(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset,bit_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;

 proto_tree_add_text(tree, tvb, curr_offset, len,"Up link");

 bit_offset = curr_offset<<3;
 de_emm_nas_key_set_id_bits(tvb, tree, bit_offset, ((void *)0));
 bit_offset+=4;

 proto_tree_add_bits_item(tree, hf_nas_eps_emm_switch_off, tvb, bit_offset, 1, (0));
 bit_offset++;
 proto_tree_add_bits_item(tree, hf_nas_eps_emm_detach_type_UL, tvb, bit_offset, 3, (0));
 bit_offset+=3;


 curr_len--;
 curr_offset++;


 { if ((consumed = elem_lv(tvb, tree, 10, DE_EMM_EPS_MID, curr_offset, curr_len, " - GUTI or IMSI")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 return;
}



static void
nas_emm_detach_req_DL(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset, bit_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;

 proto_tree_add_text(tree, tvb, curr_offset, len,"Down link");

 bit_offset = curr_offset<<3;
 proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, bit_offset, 4, (0));
 bit_offset+=4;


 proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, bit_offset, 1, (0));
 bit_offset++;
 proto_tree_add_bits_item(tree, hf_nas_eps_emm_detach_type_DL, tvb, bit_offset, 3, (0));
 bit_offset+=3;


 curr_len--;
 curr_offset++;


 if (curr_len==0)
  return;


 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x53, 10, DE_EMM_CAUSE, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };

 return;
}
static void
nas_emm_detach_req(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;

 if (gpinfo){
  if(gpinfo->link_dir==0){
   nas_emm_detach_req_UL(tvb, tree, offset, len);
   return;
  }else if(gpinfo->link_dir==1){
   nas_emm_detach_req_DL(tvb, tree, offset, len);
   return;
  }
 }
 proto_tree_add_text(tree, tvb, curr_offset, len,"UL/DL not known, can't properly dissect");
 proto_tree_add_text(tree, tvb, curr_offset, len,"Trying to dissect as UE terminated detach");
 nas_emm_detach_req_DL(tvb, tree, offset, len);
 proto_tree_add_text(tree, tvb, curr_offset, len,"Trying to dissect as UE originating detach");
 nas_emm_detach_req_UL(tvb, tree, offset, len);

 return;

}




static void
nas_emm_dl_nas_trans(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_lv(tvb, tree, 10, DE_EMM_NAS_MSG_CONT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_emm_emm_inf(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x43, 1, DE_NETWORK_NAME, curr_offset, curr_len, " - Full name for network")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x45, 1, DE_NETWORK_NAME, curr_offset, curr_len, " - Short Name")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x46, 1, DE_TIME_ZONE, curr_offset, " - Local")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x47, 1, DE_TIME_ZONE_TIME, curr_offset, " - Universal Time and Local Time Zone")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x49, 1, DE_DAY_SAVING_TIME, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}





static void
nas_emm_emm_status(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_v(tvb, tree, 10, DE_EMM_CAUSE, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}




static void
nas_emm_ext_serv_req(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset,bit_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;

 bit_offset = curr_offset<<3;


 de_emm_nas_key_set_id_bits(tvb, tree, bit_offset, ((void *)0));
 bit_offset+=4;

 proto_tree_add_bits_item(tree, hf_nas_eps_service_type, tvb, bit_offset, 4, (0));
 bit_offset+=4;

 curr_len--;
 curr_offset++;


 { if ((consumed = elem_lv(tvb, tree, 9, DE_EPS_CMN_MOB_ID, curr_offset, curr_len, " - M-TMSI")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv_short(tvb, tree, 0xb0, 10, DE_EMM_CSFB_RESP, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x57, 9, DE_EPS_CMN_EPS_BE_CTX_STATUS, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_emm_guti_realloc_cmd(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_lv(tvb, tree, 10, DE_EMM_EPS_MID, curr_offset, curr_len, " - GUTI")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };


 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x54, 10, DE_EMM_TRAC_AREA_ID_LST, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}
# 3009 "packet-nas_eps.c"
static void
nas_emm_id_req(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset, bit_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 bit_offset=curr_offset<<3;


 proto_tree_add_bits_item(tree, hf_nas_eps_emm_spare_half_octet, tvb, bit_offset, 4, (0));
 bit_offset+=4;


 proto_tree_add_bits_item(tree, hf_nas_eps_emm_id_type2, tvb, bit_offset, 4, (0));
 bit_offset+=4;
 consumed = 1;



 curr_len--;
 curr_offset++;

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_emm_id_res(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_lv(tvb, tree, 9, DE_EPS_CMN_MOB_ID, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}






static void
nas_emm_sec_mode_cmd(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset, bit_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_v(tvb, tree, 10, DE_EMM_NAS_SEC_ALGS, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 bit_offset = curr_offset<<3;

 proto_tree_add_bits_item(tree, hf_nas_eps_emm_spare_half_octet, tvb, bit_offset, 4, (0));
 bit_offset+=4;

 de_emm_nas_key_set_id_bits(tvb, tree, bit_offset, " ASME");
 bit_offset+=4;


 curr_len--;
 curr_offset++;


 { if ((consumed = elem_lv(tvb, tree, 10, DE_EMM_UE_SEC_CAP, curr_offset, curr_len, " - Replayed UE security capabilities")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv_short(tvb, tree, 0xC0, 10, DE_EMM_IMEISV_REQ, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x55, 5, DE_EMM_NONCE, curr_offset, " - Replayed NonceUE")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x56, 5, DE_EMM_NONCE, curr_offset, " - NonceMME")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_emm_sec_mode_comp(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;

 if (curr_len == 0)
  return;


 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x23, 9, DE_EPS_CMN_MOB_ID, curr_offset, curr_len, " - IMEISV")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_emm_sec_mode_rej(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_v(tvb, tree, 10, DE_EMM_CAUSE, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}
# 3181 "packet-nas_eps.c"
static void
nas_emm_serv_rej(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_v(tvb, tree, 10, DE_EMM_CAUSE, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };


 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x5b, 5, DE_GPRS_TIMER, curr_offset, " - T3442 value")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}
# 3211 "packet-nas_eps.c"
static void
nas_emm_service_req(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_v(tvb, tree, 10, DE_EMM_KSI_AND_SEQ_NO, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };


 { if ((consumed = elem_v(tvb, tree, 10, DE_EMM_SHORT_MAC, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}




static void
nas_emm_trac_area_upd_acc(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset, bit_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 bit_offset = curr_offset<<3;
 proto_tree_add_bits_item(tree, hf_nas_eps_emm_spare_half_octet, tvb, bit_offset, 4, (0));
 bit_offset+=4;

 proto_tree_add_bits_item(tree, hf_nas_eps_spare_bits, tvb, bit_offset, 1, (0));
 bit_offset++;
 proto_tree_add_bits_item(tree, hf_nas_eps_eps_update_result_value, tvb, bit_offset, 3, (0));
 bit_offset+=3;

 curr_len--;
 curr_offset++;

 if (curr_len==0)
  return;

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x5a, 5, DE_GPRS_TIMER, curr_offset, " - T3412 value")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x50, 10, DE_EMM_EPS_MID, curr_offset, curr_len, " - GUTI")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x54, 10, DE_EMM_TRAC_AREA_ID_LST, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x57, 9, DE_EPS_CMN_EPS_BE_CTX_STATUS, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x13, 9, DE_EPS_CMN_LOC_AREA_ID, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x23, 9, DE_EPS_CMN_MOB_ID, curr_offset, curr_len, " - MS identity")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x53, 10, DE_EMM_CAUSE, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x17, 5, DE_GPRS_TIMER, curr_offset, " - T3402 value")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x59, 5, DE_GPRS_TIMER, curr_offset, " - T3423 value")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x4a, 9, DE_EPS_CMN_PLM_LST, curr_offset, curr_len, " - PLMN list")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x34, 1, DE_EMERGENCY_NUM_LIST, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x64, 10, DE_EMM_EPS_NET_FEATURE_SUP, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv_short(tvb, tree, 0xF0, 10, DE_EMM_ADD_UPD_RES, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}







static void
nas_emm_trac_area_upd_rej(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_v(tvb, tree, 10, DE_EMM_CAUSE, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_emm_trac_area_upd_req(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{

 guint32 curr_offset, bit_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;

 bit_offset = curr_offset<<3;


 de_emm_nas_key_set_id_bits(tvb, tree, bit_offset, " ASME");
 bit_offset+=4;


 proto_tree_add_bits_item(tree, hf_nas_eps_active_flg, tvb, bit_offset, 1, (0));
 bit_offset++;
 proto_tree_add_bits_item(tree, hf_nas_eps_eps_update_type_value, tvb, bit_offset, 3, (0));
 bit_offset+=3;


 curr_len--;
 curr_offset++;

 { if ((consumed = elem_lv(tvb, tree, 10, DE_EMM_EPS_MID, curr_offset, curr_len, " - Old GUTI")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 if (curr_len==0)
  return;

 { if ((consumed = elem_tv_short(tvb, tree, 0xb0, 10, DE_EMM_NAS_KEY_SET_ID, curr_offset, " - Non-current native NAS key set identifier")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv_short(tvb, tree, 0x80, 4, DE_CIPH_KEY_SEQ_NUM, curr_offset, " - GPRS ciphering key sequence number")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x19, 5, DE_P_TMSI_SIG, curr_offset, " - Old P-TMSI Signature")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x50, 10, DE_EMM_EPS_MID, curr_offset, curr_len, " - Additional GUTI")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x55, 5, DE_EMM_NONCE, curr_offset, " - NonceUE")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x58, 10, DE_EMM_UE_NET_CAP, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x52, 10, DE_EMM_TRAC_AREA_ID, curr_offset, " - Last visited registered TAI")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x5c, 5, DE_DRX_PARAM, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv_short(tvb, tree, 0xA0, 10, DE_EMM_UE_RA_CAP_INF_UPD_NEED, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x57, 9, DE_EPS_CMN_EPS_BE_CTX_STATUS, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x31, 5, DE_MS_NET_CAP, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x13, 9, DE_EPS_CMN_LOC_AREA_ID, curr_offset, " - Old location area identification")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv_short(tvb, tree, 0x90, 5, DE_TMSI_STAT, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x11, 9, DE_EPS_MS_CM_2, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x20, 9, DE_EPS_MS_CM_3, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x40, 1, DE_SUP_CODEC_LIST, curr_offset, curr_len, " - Supported Codecs")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv_short(tvb, tree, 0xF0, 10, DE_EMM_ADD_UPD_TYPE, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };



 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}




static void
nas_emm_ul_nas_trans(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_lv(tvb, tree, 10, DE_EMM_NAS_MSG_CONT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}




static void
nas_emm_ul_gen_nas_trans(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_v(tvb, tree, 11, DE_EMM_GEN_MSG_CONT_TYPE, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_lv_e(tvb, tree, 10, DE_EMM_GEN_MSG_CONT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; }

}




static void
nas_emm_dl_gen_nas_trans(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_v(tvb, tree, 11, DE_EMM_GEN_MSG_CONT_TYPE, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_lv_e(tvb, tree, 10, DE_EMM_GEN_MSG_CONT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; }


}
# 3450 "packet-nas_eps.c"
static void
nas_esm_act_ded_eps_bearer_ctx_acc(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 if(len==0)
  return;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}




static void
nas_esm_act_ded_eps_bearer_ctx_rej(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_v(tvb, tree, 11, DE_ESM_CAUSE, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_esm_act_ded_eps_bearer_ctx_req(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset, bit_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 bit_offset = curr_offset<<3;
 proto_tree_add_bits_item(tree, hf_nas_eps_emm_spare_half_octet, tvb, bit_offset, 4, (0));
 bit_offset+=4;

 proto_tree_add_bits_item(tree, hf_nas_eps_esm_linked_bearer_id, tvb, bit_offset, 4, (0));
 bit_offset+=4;

 curr_len--;
 curr_offset++;


 { if ((consumed = elem_lv(tvb, tree, 11, DE_ESM_EPS_QOS, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_lv(tvb, tree, 5, DE_TRAFFIC_FLOW_TEMPLATE, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x5d, 5, DE_LINKED_TI, curr_offset, curr_len, " - Transaction identifier")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x30, 5, DE_QOS, curr_offset, curr_len, " - Negotiated QoS")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x32, 5, DE_LLC_SAPI, curr_offset, " - Negotiated LLC SAPI")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv_short(tvb, tree, 0x80, 5, DE_RAD_PRIO, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x34, 5, DE_PACKET_FLOW_ID, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}




static void
nas_esm_act_def_eps_bearer_ctx_acc(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;

 if(len==0)
  return;


 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}




static void
nas_esm_act_def_eps_bearer_ctx_rej(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_v(tvb, tree, 11, DE_ESM_CAUSE, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}




static void
nas_esm_act_def_eps_bearer_ctx_req(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_lv(tvb, tree, 11, DE_ESM_EPS_QOS, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_lv(tvb, tree, 5, DE_ACC_POINT_NAME, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_lv(tvb, tree, 11, DE_ESM_PDN_ADDR, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x5d, 5, DE_LINKED_TI, curr_offset, curr_len, " - Transaction identifier")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x30, 5, DE_QOS, curr_offset, curr_len, " - Negotiated QoS")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x32, 5, DE_LLC_SAPI, curr_offset, " - Negotiated LLC SAPI")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv_short(tvb, tree, 0x80, 5, DE_RAD_PRIO, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x34, 5, DE_PACKET_FLOW_ID, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x5e, 11, DE_ESM_APN_AGR_MAX_BR, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x58, 11, DE_ESM_CAUSE, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}




static void
nas_esm_bearer_res_all_rej(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_v(tvb, tree, 11, DE_ESM_CAUSE, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}




static void
nas_esm_bearer_res_all_req(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset, bit_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 bit_offset = curr_offset<<3;
 proto_tree_add_bits_item(tree, hf_nas_eps_emm_spare_half_octet, tvb, bit_offset, 4, (0));
 bit_offset+=4;

 proto_tree_add_bits_item(tree, hf_nas_eps_esm_linked_bearer_id, tvb, bit_offset, 4, (0));
 bit_offset+=4;

 curr_len--;
 curr_offset++;


 { if ((consumed = elem_lv(tvb, tree, 5, DE_TRAFFIC_FLOW_TEMPLATE, curr_offset, curr_len, " - Traffic flow aggregate")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_lv(tvb, tree, 11, DE_ESM_EPS_QOS, curr_offset, curr_len, " - Required traffic flow QoS")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_esm_bearer_res_mod_rej(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_v(tvb, tree, 11, DE_ESM_CAUSE, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_esm_bearer_res_mod_req(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset, bit_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 bit_offset = curr_offset<<3;
 proto_tree_add_bits_item(tree, hf_nas_eps_emm_spare_half_octet, tvb, bit_offset, 4, (0));
 bit_offset+=4;

 proto_tree_add_bits_item(tree, hf_nas_eps_esm_linked_bearer_id, tvb, bit_offset, 4, (0));
 bit_offset+=4;

 curr_len--;
 curr_offset++;

 { if ((consumed = elem_lv(tvb, tree, 5, DE_TRAFFIC_FLOW_TEMPLATE, curr_offset, curr_len, " - Traffic flow aggregate")) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x5B, 11, DE_ESM_EPS_QOS, curr_offset, curr_len, " - Required traffic flow QoS")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x58, 11, DE_ESM_CAUSE, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_esm_deact_eps_bearer_ctx_acc(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;

 if(len==0)
  return;


 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_esm_deact_eps_bearer_ctx_req(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_v(tvb, tree, 11, DE_ESM_CAUSE, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}





static void
nas_esm_inf_req(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_esm_inf_resp(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;

 if(len==0)
  return;


 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x28, 5, DE_ACC_POINT_NAME, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_esm_status(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_v(tvb, tree, 11, DE_ESM_CAUSE, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_esm_mod_eps_bearer_ctx_acc(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;

 if(len==0)
  return;


 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_esm_mod_eps_bearer_ctx_rej(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_v(tvb, tree, 11, DE_ESM_CAUSE, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_esm_mod_eps_bearer_ctx_req(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;

 if(len==0)
  return;

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x5B, 11, DE_ESM_EPS_QOS, curr_offset, curr_len, " - New EPS QoS")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x36, 5, DE_TRAFFIC_FLOW_TEMPLATE, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x30, 5, DE_QOS, curr_offset, curr_len, " - New QoS")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv(tvb, tree, (guint8) 0x32, 5, DE_LLC_SAPI, curr_offset, " - Negotiated LLC SAPI")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tv_short(tvb, tree, 0x80, 5, DE_RAD_PRIO, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x34, 5, DE_PACKET_FLOW_ID, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x5E, 11, DE_ESM_APN_AGR_MAX_BR, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_esm_notification(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 proto_tree_add_text(tree, tvb, offset, len, "Not dissected yet");
}




static void
nas_esm_pdn_con_rej(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_v(tvb, tree, 11, DE_ESM_CAUSE, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}




static void
nas_esm_pdn_con_req(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 proto_tree_add_bits_item(tree, hf_nas_eps_esm_pdn_type, tvb, (curr_offset<<3), 4, (0));


 { if ((consumed = elem_v(tvb, tree, 5, DE_REQ_TYPE, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };



 if (curr_len==0)
  return;


 { if ((consumed = elem_tv_short(tvb, tree, 0xd0, 11, DE_ESM_INF_TRF_FLG, curr_offset, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x28, 5, DE_ACC_POINT_NAME, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_esm_pdn_disc_rej(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 { if ((consumed = elem_v(tvb, tree, 11, DE_ESM_CAUSE, curr_offset)) > 0) { curr_offset += consumed; curr_len -= consumed; } else { } if ((signed)curr_len <= 0) return; };

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static void
nas_esm_pdn_disc_req(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len)
{
 guint32 curr_offset, bit_offset;
 guint32 consumed;
 guint curr_len;

 curr_offset = offset;
 curr_len = len;


 bit_offset = curr_offset<<3;
 proto_tree_add_bits_item(tree, hf_nas_eps_emm_spare_half_octet, tvb, bit_offset, 4, (0));
 bit_offset+=4;

 proto_tree_add_bits_item(tree, hf_nas_eps_esm_linked_bearer_id, tvb, bit_offset, 4, (0));
 bit_offset+=4;

 curr_len--;
 curr_offset++;
 if (curr_len == 0)
  return;

 { if ((consumed = elem_tlv(tvb, tree, (guint8) 0x27, 5, DE_PRO_CONF_OPT, curr_offset, curr_len, "")) > 0) { curr_offset += consumed; curr_len -= consumed; } if ((signed)curr_len <= 0) return; };

 if (((curr_len) > (0))||lower_nibble) { proto_tree_add_text(tree, tvb, curr_offset, (curr_len) - (0), "Extraneous Data"); curr_offset += ((curr_len) - (0)); };
}



static gint ett_nas_msg_esm[(sizeof(nas_msg_esm_strings)/sizeof(value_string))];
static void (*nas_msg_esm_fcn[])(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len) = {
 nas_esm_act_def_eps_bearer_ctx_req,
 nas_esm_act_def_eps_bearer_ctx_acc,
 nas_esm_act_def_eps_bearer_ctx_rej,
 nas_esm_act_ded_eps_bearer_ctx_req,
 nas_esm_act_ded_eps_bearer_ctx_acc,
 nas_esm_act_ded_eps_bearer_ctx_rej,
 nas_esm_mod_eps_bearer_ctx_req,
 nas_esm_mod_eps_bearer_ctx_acc,
 nas_esm_mod_eps_bearer_ctx_rej,
 nas_esm_deact_eps_bearer_ctx_req,
 nas_esm_deact_eps_bearer_ctx_acc,
 nas_esm_pdn_con_req,
 nas_esm_pdn_con_rej,
 nas_esm_pdn_disc_req,
 nas_esm_pdn_disc_rej,
 nas_esm_bearer_res_all_req,
 nas_esm_bearer_res_all_rej,
 nas_esm_bearer_res_mod_req,
 nas_esm_bearer_res_mod_rej,
 nas_esm_inf_req,
 nas_esm_inf_resp,
 nas_esm_notification,
 nas_esm_status,

 ((void *)0),
};

static void
get_nas_esm_msg_params(guint8 oct, const gchar **msg_str, int *ett_tree, int *hf_idx, msg_fcn *msg_fcn_p)
{
 gint idx;

 *msg_str = match_strval_idx((guint32) (oct & 0xff), nas_msg_esm_strings, &idx);
 *ett_tree = ett_nas_msg_esm[idx];
 *hf_idx = hf_nas_eps_msg_esm_type;
 *msg_fcn_p = nas_msg_esm_fcn[idx];

 return;
}




static gint ett_nas_msg_emm[(sizeof(nas_msg_emm_strings)/sizeof(value_string))];
static void (*nas_msg_emm_fcn[])(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len) = {
 nas_emm_attach_req,
 nas_emm_attach_acc,
 nas_emm_attach_comp,
 nas_emm_attach_rej,
 nas_emm_detach_req,
 ((void *)0),

 nas_emm_trac_area_upd_req,
 nas_emm_trac_area_upd_acc,
 ((void *)0),
 nas_emm_trac_area_upd_rej,

 nas_emm_ext_serv_req,
 nas_emm_serv_rej,

 nas_emm_guti_realloc_cmd,
 ((void *)0),
 nas_emm_auth_req,
 nas_emm_auth_resp,
 ((void *)0),
 nas_emm_attach_fail,
 nas_emm_id_req,
 nas_emm_id_res,
 nas_emm_sec_mode_cmd,
 nas_emm_sec_mode_comp,
 nas_emm_sec_mode_rej,

 nas_emm_emm_status,
 nas_emm_emm_inf,
 nas_emm_dl_nas_trans,
 nas_emm_ul_nas_trans,
 nas_emm_cs_serv_not,
 nas_emm_ul_gen_nas_trans,
 nas_emm_dl_gen_nas_trans,
 ((void *)0),

};

static void
get_nas_emm_msg_params(guint8 oct, const gchar **msg_str, int *ett_tree, int *hf_idx, msg_fcn *msg_fcn_p)
{
 gint idx;

 *msg_str = match_strval_idx((guint32) (oct & 0xff), nas_msg_emm_strings, &idx);
 *ett_tree = ett_nas_msg_emm[idx];
 *hf_idx = hf_nas_eps_msg_emm_type;
 *msg_fcn_p = nas_msg_emm_fcn[idx];

 return;
}





static void
disect_nas_eps_esm_msg(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, int offset)
{
 const gchar *msg_str;
 guint32 len;
 gint ett_tree;
 int hf_idx;
 void (*msg_fcn_p)(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len);
 guint8 oct;

 len = tvb_length(tvb);



 proto_tree_add_item(tree, hf_nas_eps_bearer_id, tvb, offset, 1, (0));

 proto_tree_add_item(tree, hf_gsm_a_L3_protocol_discriminator, tvb, offset, 1, (0));
 offset++;




 proto_tree_add_item(tree, hf_nas_eps_esm_proc_trans_id, tvb, offset, 1, (0));
 offset++;


 oct = tvb_get_guint8(tvb,offset);
 msg_fcn_p = ((void *)0);
 ett_tree = -1;
 hf_idx = -1;
 msg_str = ((void *)0);

 get_nas_esm_msg_params(oct, &msg_str, &ett_tree, &hf_idx, &msg_fcn_p);

 if(msg_str){
  if (check_col(pinfo->cinfo, COL_INFO)){
   col_append_fstr(pinfo->cinfo, COL_INFO, " %s ", msg_str);
  }
 }else{
  proto_tree_add_text(tree, tvb, offset, 1,"Unknown message 0x%x",oct);
  return;
 }




 proto_tree_add_item(tree, hf_idx, tvb, offset, 1, (0));
 offset++;





 if (msg_fcn_p == ((void *)0))
 {
  proto_tree_add_text(tree, tvb, offset, len - offset,
   "Message Elements");
 }
 else
 {

  gsm_a_dtap_pinfo = pinfo;
  (*msg_fcn_p)(tvb, tree, offset, len - offset);
 }

}



static void
dissect_nas_eps_emm_msg(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, int offset, gboolean second_header)
{
 const gchar *msg_str;
 guint32 len;
 gint ett_tree;
 int hf_idx;
 void (*msg_fcn_p)(tvbuff_t *tvb, proto_tree *tree, guint32 offset, guint len);
 guint8 security_header_type, oct;

 len = tvb_length(tvb);


 if(second_header){
  security_header_type = tvb_get_guint8(tvb,offset)>>4;
  proto_tree_add_item(tree, hf_nas_eps_security_header_type, tvb, offset, 1, (0));
  proto_tree_add_item(tree, hf_gsm_a_L3_protocol_discriminator, tvb, offset, 1, (0));
  offset++;
  if (security_header_type !=0){

   proto_tree_add_item(tree, hf_nas_eps_msg_auth_code, tvb, offset, 4, (0));
   offset+=4;

   proto_tree_add_item(tree, hf_nas_eps_seq_no, tvb, offset, 1, (0));
   offset++;
   if ((security_header_type==2)||(security_header_type==4))

    return;
   proto_tree_add_item(tree, hf_nas_eps_security_header_type, tvb, offset, 1, (0));
   proto_tree_add_item(tree, hf_gsm_a_L3_protocol_discriminator, tvb, offset, 1, (0));
   offset++;
  }
 }

 oct = tvb_get_guint8(tvb,offset);
 msg_fcn_p = ((void *)0);
 ett_tree = -1;
 hf_idx = -1;
 msg_str = ((void *)0);

 get_nas_emm_msg_params(oct, &msg_str, &ett_tree, &hf_idx, &msg_fcn_p);

 if(msg_str){
  if (check_col(pinfo->cinfo, COL_INFO)){
   col_append_fstr(pinfo->cinfo, COL_INFO, " %s ", msg_str);
  }
 }else{
  proto_tree_add_text(tree, tvb, offset, 1,"Unknown message 0x%x",oct);
  return;
 }




 proto_tree_add_item(tree, hf_idx, tvb, offset, 1, (0));
 offset++;





 if (msg_fcn_p == ((void *)0))
 {
  proto_tree_add_text(tree, tvb, offset, len - offset,
   "Message Elements");
 }
 else
 {

  gsm_a_dtap_pinfo = pinfo;
  (*msg_fcn_p)(tvb, tree, offset, len - offset);
 }

}
# 4295 "packet-nas_eps.c"
static void
dissect_nas_eps(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree)
{
 proto_item *item;
 proto_tree *nas_eps_tree;
 guint8 pd, security_header_type;
 int offset = 0;
 guint32 len;
 guint32 msg_auth_code;


 gpinfo = pinfo;
 len = tvb_length(tvb);


 col_append_str(pinfo->cinfo, COL_PROTOCOL, "/NAS-EPS");

 item = proto_tree_add_item(tree, proto_nas_eps, tvb, 0, -1, (0));
 nas_eps_tree = proto_item_add_subtree(item, ett_nas_eps);


 security_header_type = tvb_get_guint8(tvb,offset)>>4;
 proto_tree_add_item(nas_eps_tree, hf_nas_eps_security_header_type, tvb, 0, 1, (0));

 proto_tree_add_item(nas_eps_tree, hf_gsm_a_L3_protocol_discriminator, tvb, 0, 1, (0));
 pd = tvb_get_guint8(tvb,offset)&0x0f;
 offset++;

 if (security_header_type == 0){
  if(pd==7){

   dissect_nas_eps_emm_msg(tvb, pinfo, nas_eps_tree, offset, (0));
   return;
  }else{
   proto_tree_add_text(tree, tvb, offset, len, "All ESM messages should be integrity protected");
   return;
  }
 }else{

  if (security_header_type == 12){
   nas_emm_service_req(tvb, nas_eps_tree, offset, len-offset);
   return;
  }

  proto_tree_add_item(nas_eps_tree, hf_nas_eps_msg_auth_code, tvb, offset, 4, (0));
  msg_auth_code = tvb_get_ntohl(tvb, offset);
  offset+=4;
  if ((security_header_type==2)||(security_header_type==4)){

   if(msg_auth_code!=0){

    proto_tree_add_item(nas_eps_tree, hf_nas_eps_seq_no, tvb, offset, 1, (0));
    offset++;

    pd = tvb_get_guint8(tvb,offset)&0x0f;

    if((pd!=7)&&(pd!=2)&&(pd!=15)){
     proto_tree_add_text(nas_eps_tree, tvb, offset, len-6,"Ciphered message");
     return;
    }
   }else{


    proto_tree_add_item(nas_eps_tree, hf_nas_eps_seq_no, tvb, offset, 1, (0));
    offset++;
   }
  }else{

   proto_tree_add_item(nas_eps_tree, hf_nas_eps_seq_no, tvb, offset, 1, (0));
   offset++;
  }
 }


 pd = tvb_get_guint8(tvb,offset)&0x0f;
 switch (pd){
  case 2:



   disect_nas_eps_esm_msg(tvb, pinfo, nas_eps_tree, offset);
   break;
  case 7:



   dissect_nas_eps_emm_msg(tvb, pinfo, nas_eps_tree, offset, (!(0)));
   break;
  case 15:



   if (gsm_a_dtap_handle){
    tvbuff_t *new_tvb = tvb_new_subset(tvb, offset, -1, -1);
    gsm_a_dtap_pinfo = pinfo;
    call_dissector(gsm_a_dtap_handle, new_tvb, gsm_a_dtap_pinfo, nas_eps_tree);
    break;
   }
  default:
   proto_tree_add_text(nas_eps_tree, tvb, offset, -1, "Not a NAS EPS PD %u(%s)",pd,val_to_str(pd, protocol_discriminator_vals,"unknown"));
   break;
 }

}

static void
dissect_nas_eps_plain(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree)
{
 proto_item *item;
 proto_tree *nas_eps_tree;
 guint8 pd;
 int offset = 0;
 guint32 len;


 gpinfo = pinfo;
 len = tvb_length(tvb);


 col_append_str(pinfo->cinfo, COL_PROTOCOL, "/NAS-EPS");

 item = proto_tree_add_item(tree, proto_nas_eps, tvb, 0, -1, (0));
 nas_eps_tree = proto_item_add_subtree(item, ett_nas_eps);

 pd = tvb_get_guint8(tvb,offset)&0x0f;
 switch (pd){
  case 2:



   disect_nas_eps_esm_msg(tvb, pinfo, nas_eps_tree, offset);
   break;
  case 7:



   dissect_nas_eps_emm_msg(tvb, pinfo, nas_eps_tree, offset, (!(0)));
   break;
  case 15:



   if (gsm_a_dtap_handle){
    tvbuff_t *new_tvb = tvb_new_subset(tvb, offset, -1, -1);
    gsm_a_dtap_pinfo = pinfo;
    call_dissector(gsm_a_dtap_handle, new_tvb, gsm_a_dtap_pinfo, nas_eps_tree);
    break;
   }
  default:
   proto_tree_add_text(nas_eps_tree, tvb, offset, -1, "Not a NAS EPS PD %u(%s)",pd,val_to_str(pd, protocol_discriminator_vals,"unknown"));
   break;
 }

}

void proto_register_nas_eps(void) {
 guint i;
 guint last_offset;



  static hf_register_info hf[] = {
 { &hf_nas_eps_msg_emm_type,
  { "NAS EPS Mobility Management Message Type", "nas_eps.nas_msg_emm_type",
  FT_UINT8, BASE_HEX, (const struct _value_string*)(nas_msg_emm_strings), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_common_elem_id,
  { "Element ID", "nas_eps.common.elem_id",
  FT_UINT8, BASE_DEC, ((void *)0), 0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_elem_id,
  { "Element ID", "nas_eps.emm.elem_id",
  FT_UINT8, BASE_DEC, ((void *)0), 0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_bearer_id,
  { "EPS bearer identity", "nas_eps.bearer_id",
  FT_UINT8, BASE_HEX, ((void *)0), 0xf0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_spare_bits,
  { "Spare bit(s)", "nas_eps.spare_bits",
  FT_UINT8, BASE_HEX, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_security_header_type,
  { "Security header type","nas_eps.security_header_type",
  FT_UINT8,BASE_DEC, (const struct _value_string*)(security_header_type_vals), 0xf0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_msg_auth_code,
  { "Message authentication code","nas_eps.msg_auth_code",
  FT_UINT32,BASE_HEX, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_seq_no,
  { "Sequence number","nas_eps.seq_no",
  FT_UINT8,BASE_DEC, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_seq_no_short,
  { "Sequence number (short)","nas_eps.seq_no_short",
  FT_UINT8,BASE_DEC, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ebi0,
  { "EBI(0) spare","nas_eps.emm.ebi0",
  FT_BOOLEAN, 8, ((void *)0), 0x01,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ebi1,
  { "EBI(1) spare","nas_eps.emm.ebi1",
  FT_BOOLEAN, 8, ((void *)0), 0x02,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ebi2,
  { "EBI(2) spare","nas_eps.emm.ebi2",
  FT_BOOLEAN, 8, ((void *)0), 0x04,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ebi3,
  { "EBI(3) spare","nas_eps.emm.ebi3",
  FT_BOOLEAN, 8, ((void *)0), 0x08,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ebi4,
  { "EBI(4) spare","nas_eps.emm.ebi4",
  FT_BOOLEAN, 8, ((void *)0), 0x10,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ebi5,
  { "EBI(5)","nas_eps.emm.ebi5",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_ebi_vals), 0x20,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ebi6,
  { "EBI(6)","nas_eps.emm.ebi6",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_ebi_vals), 0x40,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ebi7,
  { "EBI(7)","nas_eps.emm.ebi7",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_ebi_vals), 0x80,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ebi8,
  { "EBI(8)","nas_eps.emm.ebi8",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_ebi_vals), 0x01,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ebi9,
  { "EBI(9)","nas_eps.emm.ebi9",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_ebi_vals), 0x02,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ebi10,
  { "EBI(10)","nas_eps.emm.ebi10",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_ebi_vals), 0x04,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ebi11,
  { "EBI(11)","nas_eps.emm.ebi11",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_ebi_vals), 0x08,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ebi12,
  { "EBI(12)","nas_eps.emm.ebi12",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_ebi_vals), 0x10,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ebi13,
  { "EBI(13)","nas_eps.emm.ebi13",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_ebi_vals), 0x20,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ebi14,
  { "EBI(14)","nas_eps.emm.ebi14",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_ebi_vals), 0x40,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ebi15,
  { "EBI(15)","nas_eps.emm.ebi15",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_ebi_vals), 0x80,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_dl_nas_cnt,
  { "DL NAS COUNT value","nas_eps.emm.dl_nas_cnt",
  FT_UINT8,BASE_DEC, ((void *)0), 0x0f,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 {&hf_nas_eps_emm_nounce_mme,
  { "NonceMME","nas_eps.emm.nounce_mme",
  FT_UINT32,BASE_HEX, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_eps_att_type,
  { "EPS attach type","nas_eps.emm.eps_att_type",
  FT_UINT8,BASE_DEC, (const struct _value_string*)(nas_eps_emm_eps_att_type_vals), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_cs_lcs_type,
  { "CS-LCS","nas_eps.emm.cs_lcs",
  FT_UINT8, BASE_DEC, (const struct _value_string*)(nas_eps_emm_cs_lcs_vals), 0x0,
  "Location services indicator in CS", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_epc_lcs_type,
  { "EPC-LCS","nas_eps.emm.epc_lcs",
  FT_BOOLEAN ,BASE_NONE, (const struct true_false_string*)(&nas_eps_emm_epc_lcs_value), 0x0,
  "Location services indicator in EPC", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_emc_bs_type,
  { "EMC BS","nas_eps.emm.emc_bs",
  FT_BOOLEAN, BASE_NONE, (const struct true_false_string*)(&nas_eps_emm_emc_bs_value), 0x0,
  "Emergency bearer services indicator", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ims_vops_type,
  { "IMS VoPS","nas_eps.emm.ims_vops",
  FT_BOOLEAN, BASE_NONE, (const struct true_false_string*)(&nas_eps_emm_ims_vops_value), 0x0,
  "IMS voice over PS session indicator", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_tsc,
  { "Type of security context flag (TSC)","nas_eps.emm.tsc",
  FT_UINT8,BASE_DEC, (const struct _value_string*)(nas_eps_tsc_vals), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_nas_key_set_id,
  { "NAS key set identifier","nas_eps.emm.nas_key_set_id",
  FT_UINT8,BASE_DEC, (const struct _value_string*)(nas_eps_emm_NAS_key_set_identifier_vals), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_odd_even,
  { "odd/even indic","nas_eps.emm.odd_even",
  FT_UINT8,BASE_DEC, ((void *)0), 0x8,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_type_of_id,
  { "Type of identity","nas_eps.emm.type_of_id",
  FT_UINT8,BASE_DEC, (const struct _value_string*)(nas_eps_emm_type_of_id_vals), 0x07,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_mme_grp_id,
  { "MME Group ID","nas_eps.emm.mme_grp_id",
  FT_UINT16, BASE_DEC, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_imsi,
        { "IMSI", "nas_eps.emm.imsi",
          FT_STRING, BASE_NONE, ((void *)0), 0,
          ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_imei,
        { "IMEI", "nas_eps.emm.imei",
          FT_STRING, BASE_NONE, ((void *)0), 0,
          ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_mme_code,
  { "MME Code","nas_eps.emm.mme_code",
  FT_UINT8, BASE_DEC, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_m_tmsi,
  { "M-TMSI","nas_eps.emm.m_tmsi",
  FT_UINT32, BASE_HEX, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_esm_msg_cont,
  { "ESM message container contents","nas_eps.emm.esm_msg_cont",
  FT_BYTES, BASE_NONE, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_esm_imeisv_req,
  { "IMEISV request","nas_eps.emm.imeisv_req",
  FT_UINT8, BASE_DEC, (const struct _value_string*)(nas_eps_emm_imeisv_req_vals), 0x07,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_toi,
  { "Type of integrity protection algorithm","nas_eps.emm.toi",
  FT_UINT8, BASE_DEC, (const struct _value_string*)(nas_eps_emm_toi_vals), 0x07,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_toc,
  { "Type of ciphering algorithm","nas_eps.emm.toc",
  FT_UINT8, BASE_DEC, (const struct _value_string*)(nas_eps_emm_toc_vals), 0x70,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_EPS_attach_result,
  { "Attach result","nas_eps.emm.EPS_attach_result",
  FT_UINT8,BASE_DEC, (const struct _value_string*)(nas_eps_emm_EPS_attach_result_values), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_spare_half_octet,
  { "Spare half octet","nas_eps.emm.EPS_attach_result",
  FT_UINT8,BASE_DEC, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_add_upd_res,
  { "AURV","nas_eps.emm.add_upd_res",
  FT_UINT8, BASE_DEC, (const struct _value_string*)(nas_eps_emm_add_upd_res_vals), 0x0,
  "Additional update result value", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_add_upd_type,
  { "AUTV","nas_eps.emm.add_upd_type",
  FT_UINT8, BASE_DEC, (const struct _value_string*)(nas_eps_emm_add_upd_type_vals), 0x0,
  "Additional update type value", 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_res,
  { "RES","nas_eps.emm.res",
  FT_BYTES, BASE_NONE, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_csfb_resp,
  { "CSFB response","nas_eps.emm.csfb_resp",
  FT_UINT8, BASE_DEC, (const struct _value_string*)(nas_eps_emm_csfb_resp_vals), 0x03,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_cause,
  { "Cause","nas_eps.emm.cause",
  FT_UINT8, BASE_DEC, (const struct _value_string*)(nas_eps_emm_cause_values), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_id_type2,
  { "Identity type 2","nas_eps.emm.id_type2",
  FT_UINT8, BASE_DEC, (const struct _value_string*)(nas_eps_emm_id_type2_vals), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_short_mac,
  { "Message authentication code (short)","nas_eps.emm.short_mac",
  FT_UINT16, BASE_HEX, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_tai_tol,
  { "Type of list","nas_eps.emm.tai_tol",
  FT_UINT8, BASE_DEC, (const struct _value_string*)(nas_eps_emm_tai_tol_vals), 0x60,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_tai_n_elem,
  { "Number of elements","nas_eps.emm.tai_n_elem",
  FT_UINT8, BASE_DEC, ((void *)0), 0x1f,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_tai_tac,
  { "Tracking area code(TAC)","nas_eps.emm.tai_tac",
  FT_UINT16, BASE_HEX, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_eea0,
  { "EEA0","nas_eps.emm.eea0",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x80,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_128eea1,
  { "128-EEA1","nas_eps.emm.128eea1",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x40,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_128eea2,
  { "128-EEA2","nas_eps.emm.128eea2",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x20,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_eea3,
  { "EEA3","nas_eps.emm.eea3",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x10,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_eea4,
  { "EEA4","nas_eps.emm.eea4",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x08,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_eea5,
  { "EEA5","nas_eps.emm.eea5",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x04,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_eea6,
  { "EEA6","nas_eps.emm.eea6",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x02,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_eea7,
  { "EEA7","nas_eps.emm.eea7",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x01,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_eia0,
  { "EIA0","nas_eps.emm.eia0",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x80,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_128eia1,
  { "128-EIA1","nas_eps.emm.128eia1",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x40,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_128eia2,
  { "128-EIA2","nas_eps.emm.128eia2",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x20,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_eia3,
  { "EIA3","nas_eps.emm.eia3",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x10,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_eia4,
  { "EIA4","nas_eps.emm.eia4",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x08,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_eia5,
  { "EIA5","nas_eps.emm.eia5",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x04,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_eia6,
  { "EIA6","nas_eps.emm.eia6",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x02,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_eia7,
  { "EIA7","nas_eps.emm.eia7",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x01,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },


 { &hf_nas_eps_emm_uea0,
  { "UEA0","nas_eps.emm.uea0",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x80,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_uea1,
  { "UEA1","nas_eps.emm.uea1",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x40,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_uea2,
  { "UEA2","nas_eps.emm.uea2",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x20,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_uea3,
  { "UEA3","nas_eps.emm.uea3",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x10,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_uea4,
  { "UEA4","nas_eps.emm.uea4",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x08,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_uea5,
  { "UEA5","nas_eps.emm.uea5",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x04,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_uea6,
  { "UEA6","nas_eps.emm.uea6",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x02,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_uea7,
  { "UEA7","nas_eps.emm.uea7",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x01,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ucs2_supp,
  { "UCS2 support (UCS2)","nas_eps.emm.emm_ucs2_supp",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_ucs2_supp_flg_value), 0x80,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_uia0,
  { "UMTS integrity algorithm UIA0","nas_eps.emm.uia0",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x80,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_uia1,
  { "UMTS integrity algorithm UIA1","nas_eps.emm.uia1",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x40,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_uia2,
  { "UMTS integrity algorithm UIA2","nas_eps.emm.uia2",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x20,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_uia3,
  { "UMTS integrity algorithm UIA3","nas_eps.emm.uia3",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x10,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_uia4,
  { "UMTS integrity algorithm UIA4","nas_eps.emm.uia4",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x08,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_uia5,
  { "UMTS integrity algorithm UIA5","nas_eps.emm.uia5",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x04,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_uia6,
  { "UMTS integrity algorithm UIA6","nas_eps.emm.uia6",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x02,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_uia7,
  { "UMTS integrity algorithm UIA7","nas_eps.emm.uia7",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x01,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_gea1,
  { "GPRS encryption algorithm GEA1","nas_eps.emm.gea1",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x40,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_gea2,
  { "GPRS encryption algorithm GEA2","nas_eps.emm.gea2",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x20,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_gea3,
  { "GPRS encryption algorithm GEA3","nas_eps.emm.gea3",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x10,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_gea4,
  { "GPRS encryption algorithm GEA4","nas_eps.emm.gea4",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x08,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_gea5,
  { "GPRS encryption algorithm GEA5","nas_eps.emm.gea5",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x04,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_gea6,
  { "GPRS encryption algorithm GEA6","nas_eps.emm.gea6",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x02,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_gea7,
  { "GPRS encryption algorithm GEA7","nas_eps.emm.gea7",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_supported_flg_value), 0x01,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },

 { &hf_nas_eps_emm_1xsrvcc_cap,
  { "1xSRVCC capability","nas_eps.emm.1xsrvcc_cap",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_1xsrvcc_cap_flg), 0x02,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ue_ra_cap_inf_upd_need_flg,
  { "1xSRVCC capability","nas_eps.emm.ue_ra_cap_inf_upd_need_flg",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_ue_ra_cap_inf_upd_need_flg), 0x01,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_ss_code,
  { "SS Code","nas_eps.emm.eps_update_result_value",
  FT_UINT8,BASE_DEC, (const struct _value_string*)(ssCode_vals), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_lcs_ind,
  { "LCS indicator","nas_eps.emm.emm_lcs_ind",
  FT_UINT8,BASE_DEC, (const struct _value_string*)(nas_eps_emm_lcs_ind_vals), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_apn_ambr_ul,
  { "APN-AMBR for uplink","nas_eps.emm.apn_ambr_ul",
  FT_UINT8,BASE_DEC, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_apn_ambr_dl,
  { "APN-AMBR for downlink","nas_eps.emm.apn_ambr_dl",
  FT_UINT8,BASE_DEC, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_apn_ambr_ul_ext,
  { "APN-AMBR for uplink(Extended)","nas_eps.emm.apn_ambr_ul_ext",
  FT_UINT8,BASE_DEC, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_apn_ambr_dl_ext,
  { "APN-AMBR for downlink(Extended)","nas_eps.emm.apn_ambr_dl_ext",
  FT_UINT8,BASE_DEC, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_apn_ambr_ul_ext2,
  { "APN-AMBR for uplink(Extended-2)","nas_eps.emm.apn_ambr_ul_ext2",
  FT_UINT8,BASE_DEC, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_apn_ambr_dl_ext2,
  { "APN-AMBR for downlink(Extended-2)","nas_eps.emm.apn_ambr_dl_ext2",
  FT_UINT8,BASE_DEC, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_switch_off,
  { "Switch off","nas_eps.emm.switch_off",
  FT_UINT8,BASE_DEC, (const struct _value_string*)(nas_eps_emm_switch_off_vals), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_detach_type_UL,
  { "Detach Type","nas_eps.emm.detach_type_ul",
  FT_UINT8,BASE_DEC, (const struct _value_string*)(nas_eps_emm_type_of_dtatch_UL_vals), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_emm_detach_type_DL,
  { "Detach Type","nas_eps.emm.detach_type_dl",
  FT_UINT8,BASE_DEC, (const struct _value_string*)(nas_eps_emm_type_of_dtatch_DL_vals), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_qci,
  { "Quality of Service Class Identifier (QCI)","nas_eps.emm.qci",
  FT_UINT8,BASE_DEC, (const struct _value_string*)(nas_eps_qci_vals), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_mbr_ul,
  { "Maximum bit rate for uplink","nas_eps.emm.mbr_ul",
  FT_UINT8,BASE_DEC, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_mbr_dl,
  { "Maximum bit rate for downlink","nas_eps.emm.mbr_dl",
  FT_UINT8,BASE_DEC, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_gbr_ul,
  { "Guaranteed bit rate for uplink","nas_eps.emm.gbr_ul",
  FT_UINT8,BASE_DEC, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_gbr_dl,
  { "Guaranteed bit rate for downlink","nas_eps.emm.gbr_dl",
  FT_UINT8,BASE_DEC, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_embr_ul,
  { "Maximum bit rate for uplink(ext)","nas_eps.emm.embr_ul",
  FT_UINT8,BASE_DEC, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_embr_dl,
  { "Maximum bit rate for downlink(ext)","nas_eps.emm.embr_dl",
  FT_UINT8,BASE_DEC, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_egbr_ul,
  { "Guaranteed bit rate for uplink(ext)","nas_eps.emm.egbr_ul",
  FT_UINT8,BASE_DEC, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_egbr_dl,
  { "Guaranteed bit rate for downlink(ext)","nas_eps.emm.egbr_dl",
  FT_UINT8,BASE_DEC, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_esm_cause,
  { "Cause","nas_eps.esm.cause",
  FT_UINT8,BASE_DEC, (const struct _value_string*)(nas_eps_esm_cause_vals), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_esm_eit,
  { "EIT (ESM information transfer)", "nas_eps.emm.eit",
  FT_BOOLEAN, 8, (const struct true_false_string*)(&nas_eps_emm_active_flg_value), 0x01,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_esm_lnkd_eps_bearer_id,
  { "Linked EPS bearer identity","nas_eps.esm.lnkd_eps_bearer_id",
  FT_UINT8,BASE_DEC, (const struct _value_string*)(nas_eps_esm_linked_bearer_id_vals), 0x0f,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_esm_pdn_ipv4,
  {"PDN IPv4", "nas_eps.esm.pdn_ipv4",
  FT_IPv4, BASE_NONE, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0)}
 },
 { &hf_nas_eps_esm_pdn_ipv6_if_id,
  {"PDN IPv6 if id", "nas_eps.esm.pdn_ipv6_if_id",
  FT_BYTES, BASE_NONE, ((void *)0), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0)}
 },
 { &hf_nas_eps_esm_linked_bearer_id,
  { "Linked EPS bearer identity","nas_eps.esm.linked_bearer_id",
  FT_UINT8,BASE_DEC, (const struct _value_string*)(nas_eps_esm_linked_bearer_id_vals), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_active_flg,
  { "Active flag", "nas_eps.emm.active_flg",
  FT_BOOLEAN, BASE_NONE, (const struct true_false_string*)(&nas_eps_emm_active_flg_value), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_eps_update_result_value,
  { "EPS update result value","nas_eps.emm.eps_update_result_value",
  FT_UINT8,BASE_DEC, (const struct _value_string*)(nas_eps_emm_eps_update_result_vals), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_eps_update_type_value,
  { "EPS update type value", "nas_eps.emm.update_type_value",
  FT_UINT8,BASE_DEC, (const struct _value_string*)(nas_eps_emm_eps_update_type_vals), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_service_type,
  { "Service type", "nas_eps.emm.service_type",
  FT_UINT8,BASE_DEC, (const struct _value_string*)(nas_eps_service_type_vals), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },

 { &hf_nas_eps_msg_esm_type,
  { "NAS EPS session management messages", "nas_eps.nas_msg_esm_type",
  FT_UINT8, BASE_HEX, (const struct _value_string*)(nas_msg_esm_strings), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_esm_elem_id,
  { "Element ID", "nas_eps.esm.elem_id",
  FT_UINT8, BASE_DEC, ((void *)0), 0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_esm_proc_trans_id,
  { "Procedure transaction identity", "nas_eps.esm.proc_trans_id",
  FT_UINT8, BASE_DEC, ((void *)0), 0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
 { &hf_nas_eps_esm_pdn_type,
  { "PDN type", "nas_eps.nas_eps_esm_pdn_type",
  FT_UINT8, BASE_DEC, (const struct _value_string*)(nas_eps_esm_pdn_type_values), 0x0,
  ((void *)0), 0, 0, HF_REF_TYPE_NONE, 0, ((void *)0), ((void *)0) }
 },
  };



 gint *ett[2 +
    (sizeof(nas_eps_common_elem_strings)/sizeof(value_string)) +
    (sizeof(nas_msg_emm_strings)/sizeof(value_string)) + (sizeof(nas_emm_elem_strings)/sizeof(value_string))+
    (sizeof(nas_msg_esm_strings)/sizeof(value_string)) + (sizeof(nas_esm_elem_strings)/sizeof(value_string))];

 ett[0] = &ett_nas_eps;
 ett[1] = &ett_nas_eps_esm_msg_cont;

 last_offset = 2;

 for (i=0; i < (sizeof(nas_eps_common_elem_strings)/sizeof(value_string)); i++, last_offset++)
 {
  ett_nas_eps_common_elem[i] = -1;
  ett[last_offset] = &ett_nas_eps_common_elem[i];
 }


 for (i=0; i < (sizeof(nas_msg_emm_strings)/sizeof(value_string)); i++, last_offset++)
 {
  ett_nas_msg_emm[i] = -1;
  ett[last_offset] = &ett_nas_msg_emm[i];
 }

 for (i=0; i < (sizeof(nas_emm_elem_strings)/sizeof(value_string)); i++, last_offset++)
 {
  ett_nas_eps_emm_elem[i] = -1;
  ett[last_offset] = &ett_nas_eps_emm_elem[i];
 }

 for (i=0; i < (sizeof(nas_msg_esm_strings)/sizeof(value_string)); i++, last_offset++)
 {
  ett_nas_msg_esm[i] = -1;
  ett[last_offset] = &ett_nas_msg_esm[i];
 }

 for (i=0; i < (sizeof(nas_esm_elem_strings)/sizeof(value_string)); i++, last_offset++)
 {
  ett_nas_eps_esm_elem[i] = -1;
  ett[last_offset] = &ett_nas_eps_esm_elem[i];
 }


 proto_nas_eps = proto_register_protocol("Non-Access-Stratum (NAS)PDU", "NAS-EPS", "nas-eps");

 proto_register_field_array(proto_nas_eps, hf, (sizeof hf / sizeof hf[0]));
 proto_register_subtree_array(ett, (sizeof ett / sizeof ett[0]));


 register_dissector("nas-eps", dissect_nas_eps, proto_nas_eps);


 register_dissector("nas-eps_plain", dissect_nas_eps_plain, proto_nas_eps);
}

void
proto_reg_handoff_nas_eps(void)
{

 gsm_a_dtap_handle = find_dissector("gsm_a_dtap");

}
