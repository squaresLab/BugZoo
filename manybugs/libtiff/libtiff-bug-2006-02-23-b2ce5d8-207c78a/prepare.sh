#!/bin/bash
if [ ! -d src ]; then
  tar -xf src.tar.gz
  pushd src
  ./configure #--host=i686-pc-linux-gnu "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  popd
fi

# install tests
cp ../tests/* src/test -rf
