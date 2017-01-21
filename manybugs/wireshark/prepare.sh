#!/bin/bash
# Generic prepare script for Wireshark benchmarks
if [ ! -d wireshark ]; then
  tar -xf wireshark.tar.gz
  pushd wireshark
  ./configure --build=i686-pc-linux-gnu "CFLAGS=-m32" "CXXFLAGS=-m32" "LDFLAGS=-m32"
  popd
fi

if [ ! -d test ]; then
  tar -xf test.tar.gz
fi
