#!/bin/bash
if [ ! -d src ]; then
  tar -xf src.tar.gz
  pushd src
  ./autogen.sh
  ./configure#"CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  make clean
  popd
  ./compile.sh preprocessed/libtiff 
fi
