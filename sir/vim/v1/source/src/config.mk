#
# config.mk.in -- autoconf template for Vim on Unix		vim:ts=8:sw=8:
#
# DO NOT EDIT config.mk!! Do not edit config.mk.in!! Edit Makefile and run
# configure again. config.mk will be overwritten by configure.
#
# Configure does not edit the makefile directly. This method is not the
# standard use of GNU autoconf, but it has two advantages:
#   a) The user can override every choice made by configure.
#   b) Modifications to the makefile are not lost when configure is run.
#
# I hope this is worth being nonstandard. jw.


CC		= gcc
DEFS		= -DHAVE_CONFIG_H
CFLAGS		= -g -O2 -Wall -Wshadow
srcdir		= .
LDFLAGS		=  -Wl,-E -Wl,-rpath,/usr/lib/perl5/core_perl/CORE  
LIBS		= -lelf -lncurses -Wl,-E -Wl,-rpath,/usr/lib/perl5/core_perl/CORE -Wl,-O1,--sort-common,--as-needed,-z,relro -fstack-protector-strong -L/usr/local/lib  -L/usr/lib/perl5/core_perl/CORE -lperl -lpthread -lnsl -ldl -lm -lcrypt -lutil -lc 
TAGPRG		= 

CPP		= gcc -E
CPP_MM		= M
X_CFLAGS	=  
X_LIBS_DIR	=  
X_PRE_LIBS	=  -lSM -lICE -lXpm
X_EXTRA_LIBS	=  -lXdmcp
X_LIBS		= -lX11

PERL		= /usr/bin/perl
PERLLIB		= /usr/share/perl5/core_perl
SHRPENV		= 
PERL_SRC	= if_perl.c if_perlsfio.c
PERL_OBJ	= if_perl.o if_perlsfio.o
PERL_PRO	= if_perl.pro if_perlsfio.pro
PERL_CFLAGS	=  -D_REENTRANT -D_GNU_SOURCE -fwrapv -fno-strict-aliasing -pipe -fstack-protector-strong -I/usr/local/include -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64  -I/usr/lib/perl5/core_perl/CORE 

PYTHON_SRC	= 
PYTHON_OBJ	= 
PYTHON_CFLAGS	= 
PYTHON_LIBS	= 
PYTHON_CONFDIR	= 
PYTHON_GETPATH_CFLAGS = 

AWK		= gawk

STRIP		= strip

### Top directory for everything
prefix		= /usr/local

### Top directory for the binary
exec_prefix	= ${prefix}

### Prefix for location of data files
BINDIR		= ${exec_prefix}/bin

### Prefix for location of data files
DATADIR		= ${prefix}/share

### Prefix for location of man pages
MANDIR		= ${prefix}/man

### Do we have a GUI
GUI_INC_LOC	= .
GUI_LIB_LOC	= /lib
GUI_INCL	= $(MOTIF_INCL)
GUI_SRC		= $(MOTIF_SRC)
GUI_OBJ		= $(MOTIF_OBJ)
GUI_DEFS	= $(MOTIF_DEFS)
GUI_IPATH	= $(MOTIF_IPATH)
GUI_LIBS_DIR	= $(MOTIF_LIBS_DIR)
GUI_LIBS1	= $(MOTIF_LIBS1)
GUI_LIBS2	= $(MOTIF_LIBS2)
GUI_TARGETS	= $(MOTIF_TARGETS)
GUI_MAN_TARGETS	= $(MOTIF_MAN_TARGETS)
GUI_TESTTARGET	= $(MOTIF_TESTTARGET)
NARROW_PROTO	= 
GUI_X_LIBS	= -lXmu -lXext

### Any OS dependent extra source and object file
OS_EXTRA_SRC	= 
OS_EXTRA_OBJ	= 
