#ifndef _BASE_H_
#define _BASE_H_

#include <sys/types.h>
#include <sys/stat.h>

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <limits.h>
#ifdef HAVE_STDINT_H
# include <stdint.h>
#endif
#ifdef HAVE_INTTYPES_H
# include <inttypes.h>
#endif

#include "settings.h"

/* include glib.h before our buffer.h and array.h to make sure their parameter-names
 * don't clash with our type-names */
#include <glib.h>

#include "buffer.h"
#include "array.h"
#include "chunk.h"
#include "filter.h"
#include "keyvalue.h"
#include "settings.h"
#include "fdevent.h"
#include "sys-socket.h"
#include "http_req.h"

#if defined HAVE_LIBSSL && defined HAVE_OPENSSL_SSL_H
# define USE_OPENSSL
# include <openssl/ssl.h>
#endif

#ifdef HAVE_SYS_INOTIFY_H
# include <sys/inotify.h>
#endif

#ifdef USE_LINUX_AIO_SENDFILE
# include <libaio.h>
#endif

#ifdef USE_POSIX_AIO
# include <aio.h>
#endif

/** some compat */
#ifndef O_BINARY
# define O_BINARY 0
#endif

#ifndef SIZE_MAX
# ifdef SIZE_T_MAX
#  define SIZE_MAX SIZE_T_MAX
# else
#  define SIZE_MAX ((size_t)~0)
# endif
#endif

#ifndef SSIZE_MAX
# define SSIZE_MAX ((size_t)~0 >> 1)
#endif

#ifdef __APPLE__
#include <crt_externs.h>
#define environ (* _NSGetEnviron())
#elif !defined(_WIN32)
extern char **environ;
#endif

/* for solaris 2.5 and NetBSD 1.3.x */
#ifndef HAVE_SOCKLEN_T
typedef int socklen_t;
#endif

/* solaris and NetBSD 1.3.x again */
#if (!defined(HAVE_STDINT_H)) && (!defined(HAVE_INTTYPES_H)) && (!defined(uint32_t))
/* # define uint32_t u_int32_t */
typedef unsigned __int32 uint32_t;
#endif


#ifndef SHUT_WR
# define SHUT_WR 1
#endif

#include "settings.h"

typedef enum {
	TIME_CONNECTION_ACCEPT,
	TIME_REQUEST_START,
	TIME_BACKEND_CONNECT,

	TIME_BACKEND_SEND_HEADER_START,
	TIME_BACKEND_SEND_HEADER_END,
	TIME_BACKEND_SEND_CONTENT_START,
	TIME_BACKEND_SEND_CONTENT_END,

	TIME_BACKEND_RECV_HEADER_START,
	TIME_BACKEND_RECV_HEADER_END,
	TIME_BACKEND_RECV_CONTENT_START,
	TIME_BACKEND_RECV_CONTENT_END,

	TIME_BACKEND_DISCONNECT,

	TIME_SEND_HEADER_START,
	TIME_SEND_HEADER_END,

	TIME_SEND_CONTENT_START,
	
	TIME_SEND_ASYNC_READ_QUEUED, /* for async-io read */
	TIME_SEND_ASYNC_READ_START, /* for async-io read */
	TIME_SEND_ASYNC_READ_END, /* for async-io read */
	TIME_SEND_ASYNC_READ_END_QUEUED, /* for async-io read */

	TIME_SEND_WRITE_START,
	TIME_SEND_WRITE_END,
	
	TIME_SEND_CONTENT_END,

	TIME_REQUEST_END,
	TIME_CONNECTION_CLOSE,

	TIME_LAST_ELEMENT
} connection_time_field_t;

typedef enum { T_CONFIG_UNSET,
		T_CONFIG_STRING,
		T_CONFIG_SHORT,
		T_CONFIG_INT,
		T_CONFIG_BOOLEAN,
		T_CONFIG_ARRAY,
		T_CONFIG_LOCAL,
		T_CONFIG_DEPRECATED,
		T_CONFIG_UNSUPPORTED
} config_values_type_t;

typedef enum { T_CONFIG_SCOPE_UNSET,
		T_CONFIG_SCOPE_SERVER,
		T_CONFIG_SCOPE_CONNECTION
} config_scope_type_t;

typedef struct {
	const char *key;
	void *destination;

	config_values_type_t type;
	config_scope_type_t scope;
} config_values_t;

typedef enum { DIRECT, EXTERNAL } connection_type;

typedef struct {
	char *key;
	connection_type type;
	char *value;
} request_handler;

typedef struct {
	char *key;
	char *host;
	unsigned short port;
	int used;
	short factor;
} fcgi_connections;

typedef struct {
	/** HEADER */
	/* the request-line */
	buffer *request;
	buffer *uri;

	buffer *orig_uri;

	http_method_t  http_method;
	http_version_t http_version;

	buffer *http_host;

	array  *headers;

	/* CONTENT */
	off_t   content_length; /* returned by strtoul() */

	/* internal representation */
	int     accept_encoding;

	/* internal */
	buffer *pathinfo;
} request;

typedef struct {
	off_t   content_length;
	int     keep_alive;               /* used by the subrequests in proxy, cgi and fcgi to say whether the subrequest was keep-alive or not */

	array  *headers;

	enum {
		HTTP_TRANSFER_ENCODING_IDENTITY, HTTP_TRANSFER_ENCODING_CHUNKED
	} transfer_encoding;
} response;

typedef struct {
	buffer *scheme;
	buffer *authority;
	buffer *path;
	buffer *path_raw;
	buffer *query;
} request_uri;

typedef struct {
	buffer *path;
	buffer *basedir; /* path = "(basedir)(.*)" */

	buffer *doc_root; /* path = doc_root + rel_path */
	buffer *rel_path;

	buffer *etag;
} physical;

typedef struct {
	buffer *name;
	buffer *etag;

	struct stat st;

	time_t stat_ts;

	enum {
		STAT_CACHE_ENTRY_UNSET, 
		STAT_CACHE_ENTRY_ASYNC_STAT, 
		STAT_CACHE_ENTRY_STAT_FINISHED
	} state;

#ifdef HAVE_LSTAT
	char is_symlink;
#endif

#if defined(HAVE_SYS_INOTIFY_H)
	int    dir_version; /* when this entry was created the dir had this version */
	int    dir_ndx;
#endif

	buffer *content_type;
} stat_cache_entry;

typedef struct {
	GHashTable *files; /* a HashTable of stat_cache_entries for the files */
	GHashTable *dirs;  /* a HashTable of stat_cache_entries for the dirs */

	buffer *dir_name;  /* for building the dirname from the filename */
	buffer *hash_key;  /* tmp-buf for building the hash-key */

#if defined(HAVE_SYS_INOTIFY_H)
	iosocket *sock;    /* socket to the inotify fd (this should be in a backend struct */
#endif
} stat_cache;

typedef struct {
	array *mimetypes;

	/* virtual-servers */
	buffer *document_root;
	buffer *server_name;
	buffer *error_handler;
	buffer *server_tag;
	buffer *dirlist_encoding;
	buffer *errorfile_prefix;

	unsigned short max_keep_alive_requests;
	unsigned short max_keep_alive_idle;
	unsigned short max_read_idle;
	unsigned short max_write_idle;
	unsigned short max_connection_idle;
	unsigned short use_xattr;
	unsigned short follow_symlink;
	unsigned short range_requests;

	/* debug */

	unsigned short log_file_not_found;
	unsigned short log_request_header;
	unsigned short log_request_handling;
	unsigned short log_response_header;
	unsigned short log_condition_handling;
	unsigned short log_condition_cache_handling;


	/* server wide */
	buffer *ssl_pemfile;
	buffer *ssl_ca_file;
	unsigned short use_ipv6;
	unsigned short is_ssl;
	unsigned short allow_http11;
	unsigned short force_lowercase_filenames; /* if the FS is case-insensitive, force all files to lower-case */
	unsigned int max_request_size;

	unsigned short kbytes_per_second; /* connection kb/s limit */

	/* configside */
	unsigned short global_kbytes_per_second; /*  */

	off_t  global_bytes_per_second_cnt;
	/* server-wide traffic-shaper
	 *
	 * each context has the counter which is inited once
	 * per second by the global_kbytes_per_second config-var
	 *
	 * as soon as global_kbytes_per_second gets below 0
	 * the connected conns are "offline" a little bit
	 *
	 * the problem:
	 * we somehow have to lose our "we are writable" signal
	 * on the way.
	 *
	 */
	off_t *global_bytes_per_second_cnt_ptr; /*  */

#ifdef USE_OPENSSL
	SSL_CTX *ssl_ctx;
#endif
} specific_config;

/* the order of the items should be the same as they are processed
 * read before write as we use this later */
typedef enum {
	CON_STATE_CONNECT,         /** we are wait for a connect */
	CON_STATE_REQUEST_START,   /** after the connect, the request is initialized, keep-alive starts here again */
	CON_STATE_READ_REQUEST_HEADER,   /** loop in the read-request-header until the full header is received */
	CON_STATE_VALIDATE_REQUEST_HEADER,   /** validate the request-header */
	CON_STATE_HANDLE_REQUEST_HEADER, /** find a handler for the request */
	CON_STATE_READ_REQUEST_CONTENT,  /** forward the request content to the handler */
	CON_STATE_HANDLE_RESPONSE_HEADER, /** the backend bounces the response back to the client */
	CON_STATE_WRITE_RESPONSE_HEADER,
	CON_STATE_WRITE_RESPONSE_CONTENT,
	CON_STATE_RESPONSE_END,
	CON_STATE_ERROR,
	CON_STATE_CLOSE
} connection_state_t;

typedef enum { COND_RESULT_UNSET, COND_RESULT_FALSE, COND_RESULT_TRUE } cond_result_t;
typedef struct {
	cond_result_t result;
	int patterncount;
	int matches[3 * 10];
	buffer *comp_value; /* just a pointer */
} cond_cache_t;

typedef struct {
	connection_state_t state;

	/* timestamps */
	time_t read_idle_ts;
	time_t close_timeout_ts;
	time_t write_request_ts;

	time_t connection_start;
	time_t request_start;

	struct timeval start_tv;

	size_t request_count;        /* number of requests handled in this connection */
	size_t loops_per_request;    /* to catch endless loops in a single request
				      *
				      * used by mod_rewrite, mod_fastcgi, ... and others
				      * this is self-protection
				      */

	iosocket *sock;
	int ndx;                     /* reverse mapping to server->connection[ndx] */

	/* fd states */
	int is_readable;
	int is_writable;

	int     keep_alive;          /* only request.c can enable it, all others just disable */

	int file_started;

	chunkqueue *send;            /* the response-content before filters are applied */
	chunkqueue *recv;            /* the request-content, without encoding */

	filter_chain *send_filters;  /* the chain of filters to apply to response-content. */
	chunkqueue *send_raw;        /* the full response (HTTP-Header + compression + chunking ) */
	chunkqueue *recv_raw;        /* the full request (HTTP-Header + chunking ) */

	int traffic_limit_reached;

	off_t bytes_written;          /* used by mod_accesslog, mod_rrd */
	off_t bytes_written_cur_second; /* used by mod_accesslog, mod_rrd */
	off_t bytes_read;             /* used by mod_accesslog, mod_rrd */
	off_t bytes_header;

	int http_status;

	sock_addr dst_addr;
	buffer *dst_addr_buf;

	/* request */
	buffer *parse_request;

	http_req *http_req;
	request  request;
	request_uri uri;
	physical physical;
	response response;

	size_t header_len;

	buffer *authed_user;
	array  *environment; /* used to pass lighttpd internal stuff to the FastCGI/CGI apps, setenv does that */

	/* response */
	int    got_response;

	int    in_joblist;

	connection_type mode;

	void **plugin_ctx;           /* plugin connection specific config */

	specific_config conf;        /* global connection specific config */
	cond_cache_t *cond_cache;

	buffer *server_name;

	/* error-handler */
	buffer *error_handler;
	int error_handler_saved_status;
	int in_error_handler;

	void *srv_socket;   /* reference to the server-socket (typecast to server_socket) */

	/**/

	GTimeVal timestamps[TIME_LAST_ELEMENT];

	int conditional_is_valid[COMP_LAST_ELEMENT];
} connection;

typedef struct {
	connection **ptr;
	size_t size;
	size_t used;
} connections;


#ifdef HAVE_IPV6
typedef struct {
	int family;
	union {
		struct in6_addr ipv6;
		struct in_addr  ipv4;
	} addr;
	char b2[INET6_ADDRSTRLEN + 1];
	time_t ts;
} inet_ntop_cache_type;
#endif


typedef struct {
	buffer *uri;
	time_t mtime;
	int http_status;
} realpath_cache_type;

typedef struct {
	time_t  mtime;  /* the key */
	buffer *str;    /* a buffer for the string represenation */
} mtime_cache_type;

typedef struct {
	void  *ptr;
	size_t used;
	size_t size;
} buffer_plugin;

typedef enum {
	NETWORK_STATUS_UNSET,
	NETWORK_STATUS_SUCCESS,
	NETWORK_STATUS_FATAL_ERROR,
	NETWORK_STATUS_CONNECTION_CLOSE,
	NETWORK_STATUS_WAIT_FOR_EVENT,
	NETWORK_STATUS_WAIT_FOR_AIO_EVENT,
	NETWORK_STATUS_WAIT_FOR_FD,
	NETWORK_STATUS_INTERRUPTED
} network_status_t;

typedef struct {
	unsigned short port;
	buffer *bindhost;

	unsigned short dont_daemonize;
	unsigned short daemonize_on_shutdown;
	buffer *changeroot;
	buffer *username;
	buffer *groupname;

	buffer *pid_file;

	buffer *event_handler;

	buffer *modules_dir;
	buffer *network_backend;
	array *modules;
	array *upload_tempdirs;

	unsigned short use_noatime;

	unsigned short max_worker;
	unsigned short max_fds;
	unsigned short max_conns;
	unsigned int max_request_size;

	unsigned short log_request_header_on_error;
	unsigned short log_state_handling;
	unsigned short log_timing;

	enum { STAT_CACHE_ENGINE_UNSET,
			STAT_CACHE_ENGINE_NONE,
			STAT_CACHE_ENGINE_SIMPLE,
			STAT_CACHE_ENGINE_FAM,
			STAT_CACHE_ENGINE_INOTIFY
	} stat_cache_engine;
	unsigned short enable_cores;

	buffer *errorlog_file;
	unsigned short errorlog_use_syslog;

	unsigned short max_stat_threads;
	unsigned short max_read_threads;
} server_config;

typedef enum {
	NETWORK_BACKEND_UNSET,

	NETWORK_BACKEND_WRITE,
	NETWORK_BACKEND_WRITEV,

	NETWORK_BACKEND_LINUX_SENDFILE,
	NETWORK_BACKEND_LINUX_AIO_SENDFILE,
	NETWORK_BACKEND_POSIX_AIO,
	NETWORK_BACKEND_GTHREAD_AIO,
	NETWORK_BACKEND_GTHREAD_SENDFILE,

	NETWORK_BACKEND_FREEBSD_SENDFILE,
	NETWORK_BACKEND_SOLARIS_SENDFILEV,

	NETWORK_BACKEND_WIN32_SEND,
	NETWORK_BACKEND_WIN32_TRANSMITFILE,

} network_backend_t;


typedef struct {
	sock_addr addr;
	iosocket *sock;

	buffer *ssl_pemfile;
	buffer *ssl_ca_file;
	unsigned short use_ipv6;
	unsigned short is_ssl;

	buffer *srv_token;

#ifdef USE_OPENSSL
	SSL_CTX *ssl_ctx;
#endif
} server_socket;

typedef struct {
	server_socket **ptr;

	size_t size;
	size_t used;
} server_socket_array;

typedef struct server {
	server_socket_array srv_sockets;

	fdevents *ev, *ev_ins;

	buffer_plugin plugins;
	void *plugin_slots;

	/* counters */
	int con_opened;
	int con_read;
	int con_written;
	int con_closed;

	int ssl_is_init;

	int max_fds;    /* max possible fds */
	int sockets_disabled;

	size_t max_conns;

	/* buffers */
	buffer *parse_full_path;
	buffer *response_header;
	buffer *response_range;
	buffer *tmp_buf;

	buffer *tmp_chunk_len;

	buffer *empty_string; /* is necessary for cond_match */

	buffer *cond_check_buf;

	/* caches */
#ifdef HAVE_IPV6
	inet_ntop_cache_type inet_ntop_cache[INET_NTOP_CACHE_MAX];
#endif
	mtime_cache_type mtime_cache[FILE_CACHE_MAX];

	array *split_vals;

	/* Timestamps */
	time_t cur_ts;
	time_t last_generated_date_ts;
	time_t last_generated_debug_ts;
	time_t startup_ts;

	buffer *ts_debug_str;
	buffer *ts_date_str;

	/* config-file */
	array *config;
	array *config_touched;

	array *config_context;
	specific_config **config_storage;

	server_config  srvconf;

	short unsigned config_deprecated;
	short unsigned config_unsupported;

	connections *conns;
	connections *joblist;
	connections *joblist_prev;
	connections *fdwaitqueue;

	stat_cache  *stat_cache;

	fdevent_handler_t event_handler;

	network_status_t (* network_backend_write)(struct server *srv, connection *con, iosocket *sock, chunkqueue *cq);
	network_status_t (* network_backend_read)(struct server *srv, connection *con, iosocket *sock, chunkqueue *cq);
#ifdef USE_OPENSSL
	network_status_t (* network_ssl_backend_write)(struct server *srv, connection *con, iosocket *sock, chunkqueue *cq);
	network_status_t (* network_ssl_backend_read)(struct server *srv, connection *con, iosocket *sock, chunkqueue *cq);
#endif

#ifdef HAVE_PWD_H
	uid_t uid;
	gid_t gid;
#endif
#ifdef USE_GTHREAD
#ifdef USE_LINUX_AIO_SENDFILE
	io_context_t linux_io_ctx;

	struct iocb *linux_io_iocbs;

#endif
#ifdef USE_POSIX_AIO
	struct aiocb *posix_aio_iocbs;
#endif

	GAsyncQueue *stat_queue; /* send a stat_job into this queue and joblist_queue will get a wakeup when the stat is finished */
	GAsyncQueue *joblist_queue;
	GAsyncQueue *aio_write_queue;
#endif
	network_backend_t network_backend;
	int is_shutdown;
} server;

int server_out_of_fds(server *srv, connection *con);

#endif
