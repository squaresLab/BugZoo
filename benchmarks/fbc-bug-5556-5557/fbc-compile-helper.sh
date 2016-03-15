#!/bin/bash

# Installs FBC variant contained within a given directory.
# All files are written to the directory that the variant belongs to.
make(){
  VARIANT_PROJECT_DIR=$1

  pushd $VARIANT_PROJECT_DIR

  # uninstall any existing installation of FBC in the project
  # directory (is this necessary?)
  ./install.sh -u $VARIANT_PROJECT_DIR

  # compile the compiler
  pushd src/compiler/obj/linux && \
  ../../configure --prefix="$VARIANT_PROJECT_DIR" && \
  make && \
  make install && \
  popd && \

  # compile rtlib
  pushd src/rtlib/obj/linux && \
  ../../configure --prefix="$VARIANT_PROJECT_DIR" CFLAGS=-O2 && \
  export MULTITHREADED= && \
  make  && \
  make MULTITHREADED=1 && \
  make install && \
  popd && \

  # compile gfxlib2
  pushd src/gfxlib2/obj/linux && \
  ../../configure --prefix="$VARIANT_PROJECT_DIR" CFLAGS=-O2 && \
  make && \
  make install && \
  popd && \

  # perform the installation
  ./install.sh -i $VARIANT_PROJECT_DIR

  popd $VARIANT_PROJECT_DIR
}

make $1
