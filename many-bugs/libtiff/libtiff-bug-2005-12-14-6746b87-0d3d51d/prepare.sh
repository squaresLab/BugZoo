#!/bin/bash
if [ ! -d src ]; then
  tar -xf src.tar.gz
  pushd src
  ./configure
  popd
fi

# Install test scripts
tar -xf tests.tar.gz
cp tests/* src/test -r
rm tests -rf
