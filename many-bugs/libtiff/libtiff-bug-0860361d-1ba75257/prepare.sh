#!/bin/bash
if [ ! -d src ]; then
  tar -xf src.tar.gz
  pushd src
  make distclean
  rm -f aclocal.m4
  sed -i "s#ACLOCAL_AMFLAGS = -I ./m4#ACLOCAL_AMFLAGS = -I m4#g" Makefile.in
  sed -i "s#ACLOCAL_AMFLAGS = -I ./m4#ACLOCAL_AMFLAGS = -I m4#g" Makefile.am
  aclocal
  libtoolize --force --copy
  automake --add-missing
  autoreconf
  ./configure
  make
  popd
  #./compile.sh preprocessed/libtiff 
fi
