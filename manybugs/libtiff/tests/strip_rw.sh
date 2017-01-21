#!/bin/sh
rm -f strip_rw && make strip_rw && ./strip_rw && exit 0 || exit 1
