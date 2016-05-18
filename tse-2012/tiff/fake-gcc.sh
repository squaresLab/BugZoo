#!/bin/sh
dir=$TIFFSRCROOT/tiff-3.8.2/
cp $3 $dir/libtiff/tif_lzw.c
pushd $dir/libtiff/
make install && exit 0
exit 1
