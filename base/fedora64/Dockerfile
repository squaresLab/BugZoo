#
# Docker configuration for a stable, consistent automated repair environment,
# based on Fedora. Comes with the AutomatedRepairBenchmarks.c suite pre-loaded,
# together with OCaml, OPAM, and GenProg.
#
FROM fedora:latest
USER root
MAINTAINER Chris Timperley "christimperley@gmail.com"

# Create user and add to sudoers list
RUN useradd --password repair repair
RUN dnf install -y sudo
RUN gpasswd wheel -a repair
RUN echo 'repair  ALL=(ALL) NOPASSWD:ALL' >> /etc/sudoers

# Install basic package requirements
RUN dnf install -y gcc \
  make \
  git \
  m4 \
  jq \
  ncurses-devel \
  pkgconfig \
  perl-devel \
  perl-CPAN \
  glibc-devel \
  libstdc++-devel \
  glibc-static \
  psmisc \
  nc \
  gcc-c++

RUN dnf install -y glibc-devel.i686
RUN dnf install -y cloc
RUN dnf install -y vim-minimal vim
RUN dnf install -y ElectricFence.x86_64 ElectricFence.i686
RUN dnf install -y automake autoconf
RUN dnf install -y wget patch tar unzip

# Install SDL packages
# Do we need the 64-bit packages?
RUN dnf install -y SDL-devel.i686 \
  SDL-devel.x86_64 \
  SDL_ttf.i686 \
  SDL_ttf.x86_64 \
  SDL_ttf-devel.i686 \
  SDL_ttf-devel.x86_64

# Install PHP requirements
# Do we need the 64-bit packages?
RUN dnf install -y libxml2.i686 \
  libxml2.x86_64 \
  libxml2-devel.i686 \
  libxml2-devel.x86_64 \
  libxml.i686 \
  libxml.x86_64 \
  libxml-devel.i686 \
  libxml-devel.x86_64

# Python requirements
RUN dnf install -y ncurses-static.i686 \
  ncurses-libs.i686 \
  ncurses-devel.i686 \
  sqlite.i686 sqlite-devel.i686 \
  gdbm.i686 gdbm-devel.i686 \
  openssl-devel.i686 \
  tcl.i686 tcl-devel.i686 \
  tix.i686 tix-devel.i686 \
  tk.i686 tk-devel.i686 \
  readline.i686 readline-devel.i686 \
  bzip2-devel.i686 bzip2-libs.i686 \
  libffi.i686 libffi-devel.i686 \
  libX11.i686 libX11-devel.i686

# libtiff
RUN dnf install -y libstdc++-devel.x86_64

# FBC
RUN dnf install -y libXpm.i686 libXpm-devel.i686

# lighttpd
RUN dnf install -y glib2-devel.x86_64 gtk2-devel.x86_64 \
  pcre-devel.i686 \
  php

# openldap
RUN dnf install -y libdb-devel.i686 libdb-devel.x86_64

# wuftpd
RUN dnf install -y ftp

# imagemagick
RUN dnf install -y fontconfig-devel.x86_64 \
  fontconfig-devel.i686 \
  freetype-devel.x86_64 \
  freetype-devel.i686

# Switch to the repair user to install OCaml and OPAM; doesn't seem to work as
# I thought it would. Still need to execute commands using sudo -u.
USER repair
WORKDIR /home/repair
ENV HOME /home/repair
ENV OPAMYES 1

RUN sudo -u repair sh -c "sudo dnf install -y ocaml"
RUN sudo -u repair sh -c "wget https://raw.github.com/ocaml/opam/master/shell/opam_installer.sh -q -O - | sh -s /usr/local/bin"
RUN opam init -a -y /home/repair/.opam

# Update the environmental variables to those otherwise produced by calling:
# eval $(opam config env)
# This feels like a hideous hack, but without it, the environmental variables
# within Docker are otherwise unaffected
ENV CAML_LD_LIBRARY_PATH home/repair/.opam/4.02.1/lib/stublibs
ENV MANPATH /home/repair/.opam/4.02.1/man:$MANPATH
ENV PERL5LIB /home/repair/.opam/4.02.1/lib/perl5
ENV OCAML_TOPLEVEL_PATH /home/repair/.opam/4.02.1/lib/toplevel
ENV PATH /home/repair/.opam/4.02.1/bin:$PATH

# Install the prerequisite OPAM packages
RUN opam update
RUN opam install -y depext
RUN opam install -y ocamlfind
RUN opam install -y yojson
RUN opam install -y cil
RUN opam install -y core

# Download and configure the ManyBugs and ICSE benchmarks
#RUN git clone git://github.com/ChrisTimperley/AutomatedRepairBenchmarks.c \
#  benchmarks --depth 1

# gzip
RUN sudo dnf install -y cvs findutils gettext gettext-devel texinfo libtool hg
RUN sudo dnf install -y perl --best --allowerasing

# Imagemagick
RUN sudo dnf install -y file

# PHP
RUN sudo dnf install -y bison flex

# ps
RUN sudo dnf install -y procps-ng

# Required by Python
RUN sudo dnf install -y mesa-libGLU-devel.i686

# Install CCache
RUN sudo dnf install -y ccache
ENV PATH /usr/lib/ccache:$PATH

# fbc
RUN sudo dnf install -y gpm-devel.i686 binutils-devel.i686

# Download and install GenProg 3, before ensuring it is in its most up-to-date
# form
ENV GenProgVersion 7407a62199afbcd312b0702c724a4dacb3c13df9
RUN git clone https://bitbucket.org/ChrisTimperley/GP3 genprog --depth 1 && \
  pushd genprog/src && make && sudo make install && popd && \
  rm -rf /repair/genprog/src; exit 0
