#!/bin/bash

# Find the directory that this test script belongs to.
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

# Generate the output for P2
gcc $DIR/atris_comb.c -o $DIR/atris -lSDL -lpthread -lSDL_ttf &> /dev/null
./atris &> $DIR/test/p2.out
rm -f $DIR/atris
