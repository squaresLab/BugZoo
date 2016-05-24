#!/bin/bash
if [ ! -d src ]; then
  tar -xf src.tar.gz
  pushd src
  make clean
  ./configure --host=i686-pc-linux-gnu --with-dbmliborder=gdbm --with-threads "CFLAGS=-m32 -std=gnu99 -fgnu89-inline" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  popd
fi

#if [ ! -d test ]; then
#  tar -xf tests.tar.gz
#  mv test python
#fi
