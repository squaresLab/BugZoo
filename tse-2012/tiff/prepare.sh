#!/bin/bash
if [ ! -d src ]; then
  tar -xf src.tar.gz
  mkdir -p local-root
  pushd src
  ./configure --prefix="$PWD/local-root" --host=i686-linux-gnu "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  popd
fi
