#!/bin/bash
if [ ! -d lighttpd ]; then
  tar -xf lighttpd.tar.gz
  pushd lighttpd
  make clean
  ./configure --build=i686-pc-linux-gnu "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  popd
fi
