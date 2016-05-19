#!/bin/bash
if [ ! -d src ]; then
  tar -xf src.tar.gz
  pushd src
  make clean
  ./configure --build=i686-pc-linux-gnu "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  popd
  cp ../stdio.patch .
  patch src/lib/stdio.in.h < stdio.patch
  rm -f stdio.patch
fi

if [ ! -d tests ]; then
  tar -xf tests.tar.gz
fi
