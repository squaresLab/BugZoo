#!/bin/bash
if [ ! -d src ]; then
  tar -xf src.tar.gz
  pushd src
  ./autogen.sh
  ./configure#"CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  popd
  ./compile.sh preprocessed/libtiff 
fi
