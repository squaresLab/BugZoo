#!/bin/bash
if [ ! -d php ]; then
  tar -xf php.tar.gz
  cp libxml.patch php
  pushd php
  cat libxml.patch | patch -p0
  rm libxml.patch
  ./configure --build=i686-pc-linux-gnu "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  popd
fi
