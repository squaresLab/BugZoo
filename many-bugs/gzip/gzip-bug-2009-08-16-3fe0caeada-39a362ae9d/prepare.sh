#!/bin/bash
if [ ! -d gzip ]; then
  tar -xf gzip.tar.gz
  pushd gzip
  make clean
  ./configure --build=i686-pc-linux-gnu "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  popd
  patch gzip/lib/stdio.h < stdio.patch
  rm -f stdio.patch
fi

if [ ! -d tests ]; then
  tar -xf tests.tar.gz
fi
