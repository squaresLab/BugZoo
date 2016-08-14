#!/bin/bash
if [ ! -d src ]; then
  tar -xf src.tar.gz
  pushd src
  ./configure
  popd
fi

# Install test scripts
cp ../tests/* src/test -rf
