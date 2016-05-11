#!/bin/bash
if [ ! -d gmp ]; then
  tar -xf gmp.tar.gz
  pushd gmp
  make clean
  ./configure --build=i686-pc-linux-gnu "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  popd
fi

if [ ! -d tests ]; then
  tar -xf tests.tar.gz
fi
