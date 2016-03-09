# Makefile.  Generated from Makefile.in by configure.
# Makefile for the FB GFX Library. 
# Run 'configure' to generate Makefile from Makefile.in

##################################################################



AR = ar
ARFLAGS = cru
ACLOCAL = @ACLOCAL@
AUTOCONF = @AUTOCONF@
AUTOHEADER = @AUTOHEADER@
CC = /usr/bin/gcc   
CFLAGS = -O2
DEFS = -DHAVE_CONFIG_H
WARN_CFLAGS = @WARN_CFLAGS@ @WARN_PEDANTIC@ @WERROR@
CPP = /usr/bin/gcc    -E
CPPFLAGS = 
EXEEXT = 
INSTALL = @INSTALL@
INSTALL_DATA = @INSTALL_DATA@
INSTALL_PROGRAM = @INSTALL_PROGRAM@
LDFLAGS = 
LIBICONV = @LIBICONV@
PACKAGE = @PACKAGE@
RANLIB = ranlib
SHELL = /bin/sh
ifneq (,unix)
    VPATH = ../.. ../../x11 ../../unix ../../linux ../../x86
else
    VPATH = ../.. ../../x11 ../../linux ../../x86
endif

ifeq (,opengl)
VPATH += ../../opengl ../../opengl/x11 ../../opengl/linux
endif

datadir = ${prefix}/share
exec_prefix = /root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/fbc-root
libdir = ${exec_prefix}/lib
localedir = $(datadir)/locale
prefix = /root/mountpoint-genprog/genprog-many-bugs/fbc-bug-5556-5557/fbc-root
srcdir = ../..
top_builddir = .

##################################################################

ifdef DEBUG
    DEFS += -DDEBUG
endif

INCLUDES = -I$(srcdir)
ifneq (x11,)
    INCLUDES += -I$(srcdir)/x11
endif
ifneq (unix,)
    INCLUDES += -I$(srcdir)/unix
endif
INCLUDES += -I$(srcdir)/linux -I$(srcdir)/x86 -I.

INCLUDES += 

# config.h must be always included before any system header in *nix
INCLUDES += -include config.h


FBRT_LIB = libfbgfx.a
FBRT_OBJDEST = .

ifeq (linux,xbox)
    DEFS += -DENABLE_XBOX -DDISABLE_CDROM
    CFLAGS += -std=gnu99 -ffreestanding -nostdlib -nostdinc -fno-builtin -fno-exceptions -mno-cygwin -march=i386 
    INCLUDES += -I$(OPENXDK)/i386-pc-xbox/include -I$(OPENXDK)/include -I$(OPENXDK)/include/SDL
endif

ALL_CFLAGS = $(CFLAGS) $(CPPFLAGS) $(INCLUDES) # $(WARN_CFLAGS) 

##################################################################

FBRT_OBJS := $(patsubst ../../%.c,$(FBRT_OBJDEST)/%.o,$(wildcard ../../*.c))
FBRT_OBJS += $(patsubst ../../%.s,$(FBRT_OBJDEST)/%.o,$(wildcard ../../*.s))
FBRT_OBJS += $(FBRT_OBJDEST)/libfb_gfx_data.o
FBRT_BASEDEPOBJS := $(patsubst ../../x11/%.c,$(FBRT_OBJDEST)/%.o,$(wildcard ../../x11/*.c))
FBRT_BASEDEPOBJS += $(patsubst ../../x11/%.s,$(FBRT_OBJDEST)/%.o,$(wildcard ../../x11/*.s))
FBRT_OSDEPOBJS := $(patsubst ../../linux/%.c,$(FBRT_OBJDEST)/%.o,$(wildcard ../../linux/*.c))
FBRT_OSDEPOBJS += $(patsubst ../../linux/%.s,$(FBRT_OBJDEST)/%.o,$(wildcard ../../linux/*.s))
FBRT_CPUDEPOBJS := $(patsubst ../../x86/%.c,$(FBRT_OBJDEST)/%.o,$(wildcard ../../x86/*.c))
FBRT_CPUDEPOBJS += $(patsubst ../../x86/%.s,$(FBRT_OBJDEST)/%.o,$(wildcard ../../x86/*.s))
FBRT_HEADERS := $(wildcard ../../*.h)
FBRT_HEADERS += $(wildcard ../../linux/*.h)

ifeq (,opengl)
    FBRT_OPENGLDEPOBJS := $(patsubst ../../opengl/%.c,$(FBRT_OBJDEST)/%.o,$(wildcard ../../opengl/*.c))
    FBRT_OPENGLDEPOBJS += $(patsubst ../../opengl/%.s,$(FBRT_OBJDEST)/%.o,$(wildcard ../../opengl/*.s))
    FBRT_OPENGLDEPOBJS += $(patsubst ../../opengl/x11/%.c,$(FBRT_OBJDEST)/%.o,$(wildcard ../../opengl/x11/*.c))
    FBRT_OPENGLDEPOBJS += $(patsubst ../../opengl/x11/%.s,$(FBRT_OBJDEST)/%.o,$(wildcard ../../opengl/x11/*.s))
    FBRT_OPENGLDEPOBJS += $(patsubst ../../opengl/linux/%.c,$(FBRT_OBJDEST)/%.o,$(wildcard ../../opengl/linux/*.c))
    FBRT_OPENGLDEPOBJS += $(patsubst ../../opengl/linux/%.s,$(FBRT_OBJDEST)/%.o,$(wildcard ../../opengl/linux/*.s))
endif

FBRT_TOOLSOBJS := $(patsubst ../../tools/%.c,$(FBRT_OBJDEST)/%.o,$(wildcard ../../tools/*.c))
FBRT_TOOLS     := $(patsubst $(FBRT_OBJDEST)/%.o,$(FBRT_OBJDEST)/%$(EXEEXT),$(FBRT_TOOLSOBJS))
FBRT_DATAFILES := $(wildcard ../../data/*.fnt) $(wildcard ../../data/*.pal)

##################################################################

all: $(FBRT_TOOLS) $(FBRT_LIB)

.SUFFIXES:
.SUFFIXES: .c .s .o $(EXEEXT)

$(FBRT_OBJDEST)/%.o : %.c $(FBRT_HEADERS)
ifeq (linux,dos)
	echo $(DEFS) $(ALL_CFLAGS) -c $< -o $@ > longopt.tmp
	echo $(CC) @longopt.tmp | sh
else
	$(CC) $(DEFS) $(ALL_CFLAGS) -c $< -o $@
endif

$(FBRT_OBJDEST)/%.o : %.s fb_gfx_mmx.h
ifeq (linux,dos)
	echo $(ALL_CFLAGS) $(DEFS) -x assembler-with-cpp -c $< -o $@ > longopt.tmp
	echo $(CC) @longopt.tmp | sh
else
	$(CC) $(ALL_CFLAGS) $(DEFS) -x assembler-with-cpp -c $< -o $@
endif

$(FBRT_LIB) : $(FBRT_OBJS) $(FBRT_BASEDEPOBJS) $(FBRT_OSDEPOBJS) $(FBRT_CPUDEPOBJS) $(FBRT_OPENGLDEPOBJS)
ifeq (linux,dos)
	echo $(ARFLAGS) $(FBRT_LIB) $(FBRT_OBJS) $(FBRT_BASEDEPOBJS) $(FBRT_OSDEPOBJS) $(FBRT_CPUDEPOBJS) $(FBRT_OPENGLDEPOBJS) > longopt.tmp
	echo $(AR) @longopt.tmp | sh
	echo $(RANLIB) $(FBRT_LIB) | sh
else
	$(AR) $(ARFLAGS) $(FBRT_LIB) $(FBRT_OBJS) $(FBRT_BASEDEPOBJS) $(FBRT_OSDEPOBJS) $(FBRT_CPUDEPOBJS) $(FBRT_OPENGLDEPOBJS)
	$(RANLIB) $(FBRT_LIB)
endif

../../libfb_gfx_data.c: $(FBRT_OBJDEST)/mk_dat$(EXEEXT) ../../data/data.lst $(FBRT_DATAFILES)
ifeq (linux,dos)
	echo $(FBRT_OBJDEST)/mk_dat$(EXEEXT) -o $@ -I ../../data | sh
else
	$(FBRT_OBJDEST)/mk_dat$(EXEEXT) -o $@ -I ../../data
endif

$(FBRT_OBJDEST)/mk_dat$(EXEEXT): $(FBRT_OBJDEST)/mk_dat.o $(FBRT_OBJDEST)/libfb_gfx_lzw.o $(FBRT_OBJDEST)/libfb_gfx_lzw_enc.o $(FBRT_OBJDEST)/libfb_gfx_vars.o

$(FBRT_OBJDEST)/%$(EXEEXT): $(FBRT_OBJDEST)/%.o
ifeq (linux,dos)
	echo $(CFLAGS) -o $@ $^ > longopt.tmp
	echo $(CC) @longopt.tmp | sh
else
	$(CC) $(CFLAGS) -o $@ $^
endif


$(FBRT_OBJDEST)/%.o: ../../tools/%.c
ifeq (linux,dos)
	echo $(DEFS) $(ALL_CFLAGS) -c $< > longopt.tmp
	echo $(CC) @longopt.tmp | sh
else
	$(CC) $(DEFS) $(ALL_CFLAGS) -c -o $@ $<
endif


##################################################################

# Rules to rebuild the configuration

Makefile: $(srcdir)/Makefile.in config.status config.h
	$(SHELL) ./config.status Makefile

config.status: $(srcdir)/configure
	$(SHELL) ./config.status --recheck

$(srcdir)/configure: # $(srcdir)/aclocal.m4
	cd $(srcdir) && $(AUTOCONF)

$(srcdir)/aclocal.m4: # $(srcdir)/../config/acx.m4 \
	$(srcdir)/../config/warnings.m4 \
	$(srcdir)/configure.ac
	cd $(srcdir) && $(ACLOCAL) -I ../config

config.h: stamp-h1
	@test -f config.h || (rm -f stamp-h1 && $(MAKE) stamp-h1)

stamp-h1: $(srcdir)/config.in config.status
	-rm -f stamp-h1
	$(SHELL) ./config.status config.h

$(srcdir)/config.in: # $(srcdir)/configure
	cd $(srcdir) && $(AUTOHEADER)
	-rm -f stamp-h1

# Other miscellaneous targets.

mostlyclean:
	-rm -rf $(FBRT_OBJS) $(FBRT_BASEDEPOBJS) $(FBRT_OSDEPOBJS) $(FBRT_CPUDEPOBJS) $(FBRT_OBJDEST)/mk_dat$(EXEEXT) $(FBRT_OBJDEST)/mk_dat.o $(FBRT_OPENGLDEPOBJS)
	-rm -f $(srcdir)/data/data.dat $(srcdir)/libfb_gfx_data.c
ifeq (linux,dos)
	-rm -f longopt.tmp
endif

clean: mostlyclean
	-rm -rf makedepend$(EXEEXT) $(FBRT_LIB) $(srcdir)/autom4te.cache

distclean: clean
	-rm -f config.h stamp-h1 config.status config.cache config.log \
	  configure.lineno configure.status.lineno Makefile localedir.h \
	  localedir.hs

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
	-rm -f $(srcdir)/configure $(srcdir)/aclocal.m4

check:
installcheck:
dvi:
html:
info:
install-info:
install-man:

install:
	cp libfb*.a ../../../../lib/linux/

.PHONY: installdirs install install-strip mostlyclean clean distclean \
  maintainer-clean check installcheck dvi html info install-info \
  install-man update-po

.c.o:
ifeq (linux,dos)
	echo $(DEFS) $(ALL_CFLAGS) -c $< > longopt.tmp
	echo $(CC) @longopt.tmp | sh
else
	$(CC) $(DEFS) $(ALL_CFLAGS) -c $<
endif

.NOEXPORT:
