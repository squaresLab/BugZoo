#!/bin/bash
HERE_DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd ) 
SRC_DIR="$HERE_DIR/src"
BENCHMARK_NAME=$(basename "$HERE_DIR")

if [ ! -d src ]; then
  tar -xf src.tar.gz
  pushd src
  #./autoconf
  ./configure
  make
  
  # Copy across the test harness and fix it
  #rm -rf test
  #tar -xf ../test.tar.gz
  sed -i.bk "s#/root/mountpoint-genprog/genprog-many-bugs/$BENCHMARK_NAME/libtiff#$SRC_DIR#g" "$SRC_DIR/test/Makefile"
  popd
fi

# Install test scripts
#cp ../tests/* src/test -rf
