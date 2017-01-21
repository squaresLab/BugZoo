#!/bin/sh
rm -f ./ascii-log && make ascii-log && ./ascii-log && exit 0 || exit 1
