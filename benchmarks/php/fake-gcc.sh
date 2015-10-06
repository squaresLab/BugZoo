#!/bin/bash
ulimit -t 600
export SRC=$3

cp $SRC $SRCDIR/ext/standard/string.c
pushd $SRCDIR
make
make install
popd