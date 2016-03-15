#!/bin/bash

# configure --prefix="$VARIANT_PROJECT_DIR"
make(){
  VARIANT_PROJECT_DIR=$1

  pushd $VARIANT_PROJECT_DIR

  # uninstall existing FBC (this is kind of dodgy)
  ./install.sh -u 

  # compile the compiler
  pushd src/compiler/obj/linux && \
  #../../configure --prefix="$LOCALFBC" && \
  make && \
  make install && \
  popd && \

  # compile rtlib
  pushd src/rtlib/obj/linux && \
  #../../configure --prefix="$LOCALFBC" CFLAGS=-O2 && \
  export MULTITHREADED= && \
  make  && \
  make MULTITHREADED=1 && \
  make install && \
  popd && \

  # compile gfxlib2
  pushd src/gfxlib2/obj/linux && \
  #../../configure --prefix="$LOCALFBC" CFLAGS=-O2 && \
  make && \
  make install && \
  popd && \

  # perform the installation
  ./install.sh -i

  popd $VARIANT_PROJECT_DIR
}

make $1
