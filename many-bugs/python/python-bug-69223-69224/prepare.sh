#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

pushd "$here_dir"
if [ ! -d src ]; then
  tar -xf src.tar.gz
  pushd src
  make clean
  ./configure --host=i686-pc-linux-gnu --with-dbmliborder=gdbm --with-threads "CFLAGS=-m32 -std=gnu99 -fgnu89-inline" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  make
  popd
fi
