#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

# Unextract the source code, configure, and compile
if [ ! -d src ]; then
  tar -xf src.tar.gz
  cp libxml.patch src
  pushd src
  ./configure --host=i386-pc-linux-gnu "CFLAGS=-m32"
  cat libxml.patch | patch -p0 && make
fi

# Generate expected test outputs for positive tests
#php_exe="$here_dir/"
