#!/bin/bash
TIME_LIMIT=60
HERE_DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
PATCH_EXE=$1
PATCH_DIR=$(dirname "$PATCH_EXE")
PROJECT_DIR="$HERE_DIR/src"

# Remove the object file for the affected source code file
cp "$PATCH_DIR/inflate.c" "$PROJECT_DIR/inflate.c" && \
cp "$PATCH_DIR/util.c" "$PROJECT_DIR/util.c" && \
pushd "$PROJECT_DIR" && \
rm -f gzip.o util.o && \

# Clear the results of any test executions for any previous patches
pushd tests && \
make clean && \
popd && \

# Rebuild the rest of the project
timeout $TIME_LIMIT make || exit 1
