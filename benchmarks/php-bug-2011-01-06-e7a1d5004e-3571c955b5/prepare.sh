#!/bin/bash
if [ ! -d php ]; then
  tar -xf php.tar.gz
  pushd php
  ./configure
fi
if [ ! -f php-run-tests ]; then
  gcc php-run-tests.c -o php-run-tests
  chmod +x php-run-tests
fi
