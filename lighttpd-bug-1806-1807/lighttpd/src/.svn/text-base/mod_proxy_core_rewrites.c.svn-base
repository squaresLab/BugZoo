#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "mod_proxy_core_rewrites.h"
#include "log.h"

proxy_rewrite *proxy_rewrite_init(void) {
	STRUCT_INIT(proxy_rewrite, rewrite);

	rewrite->header = buffer_init();
	rewrite->match = buffer_init();
	rewrite->replace = buffer_init();

	return rewrite;

}
void proxy_rewrite_free(proxy_rewrite *rewrite) {
	if (!rewrite) return;
#ifdef HAVE_PCRE_H
	if (rewrite->regex) pcre_free(rewrite->regex);
#endif

	buffer_free(rewrite->header);
	buffer_free(rewrite->match);
	buffer_free(rewrite->replace);

	free(rewrite);
}

int proxy_rewrite_set_regex(proxy_rewrite *rewrite, buffer *regex) {
	const char *errptr;
	int erroff;

#ifdef HAVE_PCRE_H
	if (NULL == (rewrite->regex = pcre_compile(BUF_STR(regex),
		  0, &errptr, &erroff, NULL))) {

		TRACE("regex compilation for %s failed at %s", BUF_STR(regex), errptr);

		return -1;
	}
#endif

	return 0;
}


proxy_rewrites *proxy_rewrites_init(void) {
	STRUCT_INIT(proxy_rewrites, rewrites);

	return rewrites;
}

void proxy_rewrites_add(proxy_rewrites *rewrites, proxy_rewrite *rewrite) {
	ARRAY_STATIC_PREPARE_APPEND(rewrites);

	rewrites->ptr[rewrites->used++] = rewrite;
}

void proxy_rewrites_free(proxy_rewrites *rewrites) {
	if (!rewrites) return;

	FOREACH(rewrites, proxy_rewrite, rewrite, proxy_rewrite_free(rewrite))

	if (rewrites->ptr) free(rewrites->ptr);

	free(rewrites);
}

int pcre_replace(pcre *match, buffer *replace, buffer *match_buf, buffer *result) {
#ifdef HAVE_PCRE_H
	const char *pattern = replace->ptr;
	size_t pattern_len = replace->used - 1;

# define N 10
	int ovec[N * 3];
	int n;

	if ((n = pcre_exec(match, NULL, match_buf->ptr, match_buf->used - 1, 0, 0, ovec, 3 * N)) < 0) {
		if (n != PCRE_ERROR_NOMATCH) {
			return n;
		}
	} else {
		const char **list;
		size_t start, end;
		size_t k;

		/* it matched */
		pcre_get_substring_list(match_buf->ptr, ovec, n, &list);

		/* search for $[0-9] */

		buffer_reset(result);

		start = 0; end = pattern_len;
		for (k = 0; k < pattern_len; k++) {
			if ((pattern[k] == '$') &&
			    isdigit((unsigned char)pattern[k + 1])) {
				/* got one */

				size_t num = pattern[k + 1] - '0';

				end = k;

				buffer_append_string_len(result, pattern + start, end - start);

				/* n is always > 0 */
				if (num < (size_t)n) {
					buffer_append_string(result, list[num]);
				}

				k++;
				start = k + 1;
			}
		}

		buffer_append_string_len(result, pattern + start, pattern_len - start);

		pcre_free(list);
	}

	return n;
#else
	return -1;
#endif
}


