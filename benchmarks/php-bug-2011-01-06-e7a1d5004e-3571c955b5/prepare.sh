#!/bin/bash
if [ ! -d php ]; then
  tar -xf php.tar.gz
  cp php-helper.php php
  pushd php
  ./configure --disable-phar
  popd
fi
if [ ! -f php-run-tests ]; then
  gcc php-run-tests.c -o php-run-tests
  chmod +x php-run-tests
fi
