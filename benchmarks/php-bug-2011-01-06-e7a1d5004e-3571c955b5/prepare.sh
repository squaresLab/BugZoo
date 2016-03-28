#!/bin/bash
if [ ! -d php ]; then
  tar -xf php.tar.gz
  cp php-helper.php php
  chmod +x php/php-helper.php
  pushd php
  ./configure --disable-phar
  popd
fi
