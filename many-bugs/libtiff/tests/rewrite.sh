#!/bin/sh
rm -f rewrite && make rewrite && ./rewrite && exit 0 || exit 1
