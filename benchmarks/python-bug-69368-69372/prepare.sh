#!/bin/bash
if [ ! -d python ]; then
  tar -xf python.tar.gz
  pushd python
  ./configure --build=i686-pc-linux-gnu "CFLAGS=-m32 -std=gnu99 -fgnu89-inline" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  popd
fi
