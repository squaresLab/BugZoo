#!/bin/bash
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
INSTALL_TO="$DIR/local-root"

if [ ! -d php ]; then
  mkdir -p local-root/bin
  tar -xf php.tar.gz
  cp libxml.patch php
  gcc php-run-tests.c -o php-run-tests
  pushd php
  cat libxml.patch | patch -p0
  rm libxml.patch
  ./configure --prefix=$INSTALL_TO --build=i686-pc-linux-gnu "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  popd
fi
