#!/bin/bash
if [ ! -d src ]; then
  tar -xf src.tar.gz
  pushd src
  make clean
  aclocal
  autoconf
  ./configure --host=i686-pc-linux-gnu "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  popd
fi

if [ ! -d tests ]; then
  tar -xf tests.tar.gz
fi
