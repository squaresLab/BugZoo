#!/bin/bash
if [ ! -d php ]; then
  tar -xf php.tar.gz
  pushd php
  ./configure --build=i686-pc-linux-gnu "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  popd
fi
