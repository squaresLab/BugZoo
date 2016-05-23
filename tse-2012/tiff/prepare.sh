#!/bin/bash
if [ ! -d src ]; then
  tar -xf src.tar.gz
  mkdir -p local-root
  pushd src
  ./configure --prefix="$PWD/local-root" --host=i686-linux-gnu
  popd
fi
