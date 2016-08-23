#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
fake_root="$here_dir/fake-root"
mkdir -p $fake_root

if [ ! -d src ]; then
  tar -xf src.tar.gz
  cp blob.c.fixed src/magick/blob.c
  pushd src
  ./configure --build=i386-pc-linux-gnu --prefix="$fake_root" --with-perl=no CFLAGS="-m32 -std=c99" CXXFLAGS="-m32" LDFLAGS="-m32" && \
   make && make install
  popd
fi

if [ ! -d images ]; then
  tar -xf images.tar.gz
fi
