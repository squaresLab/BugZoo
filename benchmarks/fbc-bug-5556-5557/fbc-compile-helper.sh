#!/bin/bash



./install.sh -u 

pushd src/compiler/obj/linux && \
#../../configure --prefix="$LOCALFBC" && \
make && \
make install && \
popd && \

pushd src/rtlib/obj/linux && \
#../../configure --prefix="$LOCALFBC" CFLAGS=-O2 && \
export MULTITHREADED= && \
make  && \
make MULTITHREADED=1 && \
make install && \
popd && \

pushd src/gfxlib2/obj/linux && \
#../../configure --prefix="$LOCALFBC" CFLAGS=-O2 && \
make && \
make install && \
popd && \
./install.sh -i
