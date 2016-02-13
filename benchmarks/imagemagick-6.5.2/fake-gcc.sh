#!/bin/bash
ulimit -t 600
export SRC=$3
export DIR=/home/claire/imagemagick/ImageMagick-6.5.2

cp $SRC $DIR/magick/fx.c
pushd $DIR
make install && popd && exit 0
popd
exit 1
