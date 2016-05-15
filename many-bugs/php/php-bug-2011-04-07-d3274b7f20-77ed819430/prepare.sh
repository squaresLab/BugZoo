#!/bin/bash
dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

if [ ! -d src ]; then
  tar -xf src.tar.gz
  cp libxml.patch src
  pushd src
  cat libxml.patch | patch -p0
  rm libxml.patch
  ./configure --build=i686-pc-linux-gnu --disable-phar "CFLAGS=-m32 -std=gnu99" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  popd
fi
