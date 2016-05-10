#!/bin/bash
LOCAL_ROOT=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd ) . "/local-root"

pushd fbc

./install.sh -u $LOCAL_ROOT

pushd src/compiler/obj/linux && \
../../configure --prefix="$LOCAL_ROOT" --build=i686-linux-gnu "CFLAGS=-m32" "LDFLAGS=-m32" "CXXFLAGS=-m32" && \
make && \
make install && \
popd && \

pushd src/rtlib/obj/linux && \
../../configure --prefix="$LOCAL_ROOT" --build=i686-linux-gnu "CFLAGS=-m32 -O2" "LDFLAGS=-m32" "CXXFLAGS=-m32" && \
export MULTITHREADED= && \
make  && \
make MULTITHREADED=1 && \
make install && \
popd && \

pushd src/gfxlib2/obj/linux && \
../../configure --prefix="$LOCAL_ROOT" --build=i686-linux-gnu "CFLAGS=-m32 -O2" "LDFLAGS=-m32" "CXXFLAGS=-m32" && \
make && \
make install && \
popd && \

./install.sh -i $LOCAL_ROOT

popd
