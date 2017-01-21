#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
pushd "$here_dir"

if [ ! -d src ]; then
  tar -xf src.tar.gz
  cp configure.patched src/configure
  pushd src 
  make clean
  aclocal
  autoconf
  ./configure "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  popd
fi

if [ ! -d tests ]; then
  tar -xf tests.tar.gz
fi
