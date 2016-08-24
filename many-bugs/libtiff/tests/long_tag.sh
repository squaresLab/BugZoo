#!/bin/sh
rm -f long_tag && make long_tag && ./long_tag && exit 0 || exit 1
