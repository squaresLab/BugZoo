#ifndef _SYS_STRINGS_H_
#define _SYS_STRINGS_H_

#ifdef _WIN32
#define strcasecmp stricmp
#define strncasecmp strnicmp
#define strtoll(p, e, b) _strtoi64(p, e, b)
#define strtoull _strtoui64
#endif

#endif

