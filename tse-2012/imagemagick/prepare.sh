#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
fake_root="$here_dir/fake-root"
mkdir -p $fake_root

if [ ! -d src ]; then
  tar -xf src.tar.gz
  cp blob.c.fixed src/magick/blob.c
  pushd src
  ./configure --build=i386-pc-linux-gnu --prefix="$fake_root" --with-perl=no && \
    make && make install
  popd
fi
