#!/bin/bash
dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

if [ ! -d src ]; then
  tar -xf src.tar.gz
  cp libxml.patch php
  gcc php-run-tests.c -o php-run-tests
  pushd src
  cat libxml.patch | patch -p0
  rm libxml.patch
  ./configure --build=i686-pc-linux-gnu "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  popd
fi
