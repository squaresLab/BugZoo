#ifndef _MOD_PROXY_CORE_REWRITES_H_
#define _MOD_PROXY_CORE_REWRITES_H_

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef HAVE_PCRE_H
#include <pcre.h>
#endif
#include "array-static.h"
#include "buffer.h"

#ifndef HAVE_PCRE_H
#define pcre void
#endif

typedef struct {
	buffer *header;

	pcre *regex; /* regex compiled from the <match> */

	buffer *match;
	buffer *replace;
} proxy_rewrite;

ARRAY_STATIC_DEF(proxy_rewrites, proxy_rewrite,);

proxy_rewrite *proxy_rewrite_init(void);
void proxy_rewrite_free(proxy_rewrite *rewrite);
int proxy_rewrite_set_regex(proxy_rewrite *rewrite, buffer *regex);

proxy_rewrites *proxy_rewrites_init(void);
void proxy_rewrites_add(proxy_rewrites *rewrites, proxy_rewrite *rewrite);
void proxy_rewrites_free(proxy_rewrites *rewrites);

int pcre_replace(pcre *match, buffer *replace, buffer *match_buf, buffer *result);

#endif

