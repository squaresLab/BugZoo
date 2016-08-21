#!/bin/bash
if [ ! -d src ]; then
  tar -xf src.tar.gz
  cp blob.c.fixed src/magick/blob.c
  pushd src
  ./configure --build=i386-pc-linux-gnu
  make
  popd
fi
