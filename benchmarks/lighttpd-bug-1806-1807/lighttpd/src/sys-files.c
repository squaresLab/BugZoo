#include "sys-files.h"

#ifdef _WIN32
#include "buffer.h"
DIR *opendir(const char *dn) {
    DIR *d = malloc(sizeof(*d));

    if (INVALID_HANDLE_VALUE == (d->h = FindFirstFile(dn, &(d->finddata)))) {
        return NULL;
    }

    return d;
}

struct dirent *readdir(DIR *d) {
    if (!d->dent.d_name) {
        /* opendir has set a finddata already, push it out */

        d->dent.d_name = d->finddata.cFileName;
        return &(d->dent);
    }
    if (FindNextFile(d->h, &(d->finddata))) {
        d->dent.d_name = d->finddata.cFileName;
        return &(d->dent);
    } else {
        return NULL;
    }
}

void closedir(DIR *d) {
    FindClose(d);

    free(d);
}

buffer *pathname_unix2local(buffer *fn) {
    size_t i;

    for (i = 0; i < fn->used; i++) {
        if (fn->ptr[i] == '/') {
            fn->ptr[i] = '\\';
        }
    }

    return fn;
}

buffer *filename_unix2local(buffer *fn) {
    size_t i;

    for (i = 0; i < fn->used; i++) {
        if (fn->ptr[i] == '/') {
            fn->ptr[i] = '\\';
        }
    }
#if 0
    buffer_prepare_append(fn, 4);
    memmove(fn->ptr + 4, fn->ptr, fn->used);
    memcpy(fn->ptr, "\\\\?\\", 4);
    fn->used += 4;
#endif
    return fn;
}
#endif

