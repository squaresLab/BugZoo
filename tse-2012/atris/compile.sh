#!/bin/bash
TIME_LIMIT=2
target_exe=$1
target_dir=$(dirname $target_exe)

pushd $target_dir
timeout $TIME_LIMIT gcc ./atris_comb.c -o ./atris -lSDL -lpthread -lSDL_ttf -m32
