/* pathdef.c */
/* This file is automatically created by Makefile
 * DO NOT EDIT!  Change Makefile only. */
#include "vim.h"
char_u *default_vim_dir = (char_u *)"/vim/source/share/vim";
char_u *all_cflags = (char_u *)"gcc -c -I. -Iproto -DHAVE_CONFIG_H  -DUSE_GUI_MOTIF  -I. -O -DUNIX  -D_REENTRANT -D_GNU_SOURCE -fwrapv -fno-strict-aliasing -pipe -fstack-protector-strong -I/usr/local/include -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64  -I/usr/lib/perl5/core_perl/CORE   ";
char_u *all_lflags = (char_u *)"gcc -Wl,-E -Wl,-rpath,/usr/lib/perl5/core_perl/CORE   -o vim -L/lib   -lXmu -lXext -lXm -lXt -lSM -lICE -lXpm -lX11 -lXdmcp -lelf -lncurses -Wl,-E -Wl,-rpath,/usr/lib/perl5/core_perl/CORE -Wl,-O1,--sort-common,--as-needed,-z,relro -fstack-protector-strong -L/usr/local/lib  -L/usr/lib/perl5/core_perl/CORE -lperl -lpthread -lnsl -ldl -lm -lcrypt -lutil -lc   ";
