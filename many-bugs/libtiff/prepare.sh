#!/bin/bash
if [ ! -d libtiff ]; then
  tar -xf libtiff.tar.gz
  pushd libtiff
  make clean
  aclocal
  autoconf
  ./configure --build=i686-pc-linux-gnu "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  popd
fi

if [ ! -d tests ]; then
  tar -xf tests.tar.gz
fi
