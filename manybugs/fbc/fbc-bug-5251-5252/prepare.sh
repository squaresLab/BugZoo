#!/bin/bash
if [ ! -d fbc ]; then
  tar -xf fbc.tar.gz
fi

if [ ! -d tests ]; then
  tar -xf tests.tar.gz
fi
