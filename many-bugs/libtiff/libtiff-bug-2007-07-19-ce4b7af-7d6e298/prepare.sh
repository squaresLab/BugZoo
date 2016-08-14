#!/bin/bash
if [ ! -d src ]; then
  tar -xf src.tar.gz
  pushd src
  #aclocal
  #autoconf
  #./configure --host=i686-pc-linux-gnu "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  ./configure
  popd
fi
