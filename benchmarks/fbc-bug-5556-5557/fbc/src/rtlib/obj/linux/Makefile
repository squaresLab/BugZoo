# Makefile.  Generated from Makefile.in by configure.
# Makefile for the FB Run-Time Library. 
# Run 'configure' to generate Makefile from Makefile.in

##################################################################



AR = ar
ARFLAGS = cru
ACLOCAL = aclocal
AUTOCONF = autoconf
AUTOHEADER = autoheader
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
    VPATH = ../.. ../../linux ../../unix ../../x86 ../../static
else
    VPATH = ../.. ../../linux ../../x86 ../../static
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

ifneq (,unix)
    INCLUDES = -I$(srcdir) -I$(srcdir)/linux -I$(srcdir)/unix -I$(srcdir)/x86 -I.
else
    INCLUDES = -I$(srcdir) -I$(srcdir)/linux -I$(srcdir)/x86 -I.
endif

INCLUDES += 

# config.h must be always included before any system header in *nix
INCLUDES += -include config.h

ifdef MULTITHREADED
	FBRT_LIB = libfbmt.a
	DEFS += -DMULTITHREADED
	FBRT_OBJDEST = mt
else
	FBRT_LIB = libfb.a
	FBRT_OBJDEST = .
endif

ifeq (linux,xbox)
    DEFS += -DENABLE_XBOX -DDISABLE_CDROM
    CFLAGS += -std=gnu99 -ffreestanding -nostdlib -nostdinc -fno-builtin -fno-exceptions -mno-cygwin -march=i386 
    INCLUDES += -I$(OPENXDK)/i386-pc-xbox/include -I$(OPENXDK)/include -I$(OPENXDK)/include/SDL
endif

ALL_CFLAGS = $(CFLAGS) $(CPPFLAGS) $(INCLUDES) # $(WARN_CFLAGS) 

##################################################################

FBRT_OBJS := $(patsubst ../../%.c,$(FBRT_OBJDEST)/%.o,$(wildcard ../../*.c))
FBRT_OBJS += $(patsubst ../../%.s,$(FBRT_OBJDEST)/%.o,$(wildcard ../../*.s))
FBRT_OSDEPOBJS := $(patsubst ../../linux/%.c,$(FBRT_OBJDEST)/%.o,$(wildcard ../../linux/*.c))
FBRT_OSDEPOBJS += $(patsubst ../../linux/%.s,$(FBRT_OBJDEST)/%.o,$(wildcard ../../linux/*.s))
FBRT_CPUDEPOBJS := $(patsubst ../../x86/%.c,$(FBRT_OBJDEST)/%.o,$(wildcard ../../x86/*.c))
FBRT_CPUDEPOBJS += $(patsubst ../../x86/%.s,$(FBRT_OBJDEST)/%.o,$(wildcard ../../x86/*.s))
FBRT_STATICOBJS := $(patsubst ../../static/%.c,$(FBRT_OBJDEST)/%.o,$(wildcard ../../static/*.c))
FBRT_HEADERS := $(wildcard ../../*.h)
FBRT_HEADERS += $(wildcard ../../linux/*.h)
FBRT_HEADERS += $(wildcard ../../x86/*.h)
FBRT_BASEDEPOBJS :=

ifneq (,unix)
    FBRT_BASEDEPOBJS += $(patsubst ../../unix/%.c,$(FBRT_OBJDEST)/%.o,$(wildcard ../../unix/*.c))
    FBRT_BASEDEPOBJS += $(patsubst ../../unix/%.s,$(FBRT_OBJDEST)/%.o,$(wildcard ../../unix/*.s))
    FBRT_HEADERS += $(wildcard ../../unix/*.h)
endif

##################################################################

all: $(FBRT_LIB) $(FBRT_STATICOBJS)

.SUFFIXES:
.SUFFIXES: .c .s .o

$(FBRT_OBJDEST)/%.o : %.c $(FBRT_HEADERS)
ifeq (linux,dos)
	echo $(DEFS) $(ALL_CFLAGS) -c $< -o $@ > longopt.tmp
	echo $(CC) @longopt.tmp | sh
else
	$(CC) $(DEFS) $(ALL_CFLAGS) -c $< -o $@
endif

$(FBRT_OBJDEST)/%.o : %.s
ifeq (linux,dos)
	echo -x assembler-with-cpp -c $(CFLAGS) $< -o $@ > longopt.tmp
	echo $(CC) @longopt.tmp | sh
else
	$(CC) -x assembler-with-cpp -c $(CFLAGS) $< -o $@
endif

$(FBRT_LIB) : $(FBRT_OBJS) $(FBRT_OSDEPOBJS) $(FBRT_BASEDEPOBJS) $(FBRT_CPUDEPOBJS)
ifeq (linux,dos)
	echo  $(ARFLAGS) $(FBRT_LIB) $(FBRT_OBJS) $(FBRT_OSDEPOBJS) $(FBRT_BASEDEPOBJS) $(FBRT_CPUDEPOBJS) > longopt.tmp
	echo $(AR) @longopt.tmp | sh
	echo $(RANLIB) $(FBRT_LIB) | sh
else
	$(AR) $(ARFLAGS) $(FBRT_LIB) $(FBRT_OBJS) $(FBRT_OSDEPOBJS) $(FBRT_BASEDEPOBJS) $(FBRT_CPUDEPOBJS)
	$(RANLIB) $(FBRT_LIB)
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
	-rm -rf $(FBRT_OBJS) $(FBRT_OSDEPOBJS) $(FBRT_CPUDEPOBJS) $(FBRT_BASEDEPOBJS) $(FBRT_STATICOBJS)
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
	cp $(FBRT_STATICOBJS) ../../../../lib/linux/

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
