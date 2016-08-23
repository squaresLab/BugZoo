#!/bin/bash
local_root="$PWD/local-root"
if [ ! -d src ]; then
  tar -xf src.tar.gz
  mkdir -p local-root
  pushd src
  ./configure --prefix="$local_root" --host=i686-linux-gnu "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  make
  make install
  popd
fi

if [ ! -d tests ]; then
  tar -xf tests.tar.gz
fi
