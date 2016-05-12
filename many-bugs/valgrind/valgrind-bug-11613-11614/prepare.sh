#!/bin/bash
if [ ! -d valgrind ]; then
  tar -xvf valgrind.tar.gz
  cd valgrind
  aclocal
  autoconf
  ./configure --build=i686-linux-gnu "CFLAGS=-m32" "LDFLAGS=-m32" "CXXFLAGS=-m32"
fi
