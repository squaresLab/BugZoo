#!/bin/bash
if [ ! -d python ]; then
  tar -xf python.tar.gz
  pushd python
  ./configure
  popd
fi
