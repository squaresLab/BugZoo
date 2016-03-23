#ifndef _IOSOCKET_H_
#define _IOSOCKET_H_

/**
 * make sure we know about OPENSSL all the time
 *
 * if we don't include config.h here we run into different sizes
 * for the iosocket-struct depending on config.h include before
 * iosocket.h or not
 */

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#if defined HAVE_LIBSSL && defined HAVE_OPENSSL_SSL_H
# define USE_OPENSSL
# include <openssl/ssl.h>
#endif

#include "settings.h"

typedef enum {
	IOSOCKET_TYPE_UNSET,
	IOSOCKET_TYPE_SOCKET,
	IOSOCKET_TYPE_PIPE
} iosocket_t;

/**
 * a non-blocking fd
 */
typedef struct {
	int fd;
	int fde_ndx;

#ifdef USE_OPENSSL
	SSL *ssl;
#endif

	iosocket_t type; /**< sendfile on solaris doesn't work on pipes */
} iosocket;

LI_API iosocket * iosocket_init(void);
LI_API void iosocket_free(iosocket *sock);

#endif
