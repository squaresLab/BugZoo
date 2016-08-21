#!/bin/bash
if [ -d src ]; then
  tar -xf src.tar.gz
  pushd src
  ./configure --host=i386-pc-linux-gnu "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32" 
fi
