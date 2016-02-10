#!/bin/bash

export SRC=$3
export DIR=$OPENLDAP_PARENT_DIR/openldap-2.3.41/libraries/liblber/
cp $SRC $DIR/io.c
pushd $OPENLDAP_PARENT_DIR/openldap-2.3.41
make
make install
popd