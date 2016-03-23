#ifndef _SYS_FILES_H_
#define _SYS_FILES_H_

#define DIR_SEPERATOR_UNIX      '/'
#define DIR_SEPERATOR_UNIX_STR  "/"
#define DIR_SEPERATOR_WIN       '\\'
#define DIR_SEPERATOR_WIN_STR   "\\"

#include "settings.h"

#ifdef _WIN32
#include <windows.h>
#include <io.h>     /* open */
#include <direct.h> /* chdir */

#include "buffer.h"

#define DIR_SEPERATOR     DIR_SEPERATOR_WIN
#define DIR_SEPERATOR_STR DIR_SEPERATOR_WIN_STR

#define __S_ISTYPE(mode, mask)  (((mode) & _S_IFMT) == (mask))

#define S_ISDIR(mode)    __S_ISTYPE((mode), _S_IFDIR)
#define S_ISCHR(mode)    __S_ISTYPE((mode), _S_IFCHR)
#define S_ISBLK(mode)    __S_ISTYPE((mode), _S_IFBLK)
#define S_ISREG(mode)    __S_ISTYPE((mode), _S_IFREG)
/* we don't support symlinks */
#define S_ISLNK(mode)    0

#define lstat stat
#define mkstemp(x) open(mktemp(x), O_RDWR)
#define mkdir(x, y) mkdir(x)

/* retrieve the most recent network, or general libc error */
#define light_sock_errno() (WSAGetLastError())

struct dirent {
    const char *d_name;
};

typedef struct {
    HANDLE h;
    WIN32_FIND_DATA finddata;
    struct dirent dent;
} DIR;

LI_EXPORT DIR * opendir(const char *dn);
LI_EXPORT struct dirent * readdir(DIR *d);
LI_EXPORT void closedir(DIR *d);

LI_EXPORT buffer * filename_unix2local(buffer *b);
LI_EXPORT buffer * pathname_unix2local(buffer *b);

#else
#include <unistd.h>
#include <dirent.h>

#define DIR_SEPERATOR     DIR_SEPERATOR_UNIX
#define DIR_SEPERATOR_STR DIR_SEPERATOR_UNIX_STR

#define light_sock_errno() (errno)

#define filename_unix2local(x) /* (x) */
#define pathname_unix2local(x) /* (x) */
#endif

#define PATHNAME_APPEND_SLASH(x) \
	if (x->used > 1 && x->ptr[x->used - 2] != DIR_SEPERATOR) { \
        char sl[2] = { DIR_SEPERATOR, 0 }; \
        BUFFER_APPEND_STRING_CONST(x, sl); \
    }

#ifndef O_LARGEFILE
# define O_LARGEFILE 0
#endif

#ifndef O_NOATIME
# define O_NOATIME 0
#endif

#endif


