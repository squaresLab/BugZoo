#!/bin/bash
HERE_DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd ) 
SRC_DIR="$HERE_DIR/src"
BENCHMARK_NAME=$(basename "$HERE_DIR")

pushd "$HERE_DIR"
if [ ! -d src ]; then
  # Unextract and compile source
  tar -xf src.tar.gz
  pushd src
  make clean
  ./configure --build=i686-pc-linux-gnu "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  make
  popd
  #cp ../stdio.patch .
  #patch gzip/lib/stdio.h < stdio.patch
  #rm -f stdio.patch

  # Unextract the tests, move into the source directory, and fix all references
  # to any previous absolute paths to the source directory
  #tar -xf tests.tar.gz
  #mv tests $SRC_DIR
  pushd src/tests
  make clean
  sed -i.bk "s#/root/mountpoint-genprog/genprog-many-bugs/$BENCHMARK_NAME/gzip#$SRC_DIR#g" "$SRC_DIR/tests/Makefile"
  popd
fi
