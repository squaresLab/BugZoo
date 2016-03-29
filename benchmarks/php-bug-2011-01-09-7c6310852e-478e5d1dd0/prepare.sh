#!/bin/bash
if [ ! -d php ]; then
  tar -xf php.tar.gz
  pushd php
  ./configure --disable-phar
  popd
fi
