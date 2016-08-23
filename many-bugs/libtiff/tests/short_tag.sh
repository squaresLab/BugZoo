#!/bin/sh
rm -f short_tag && make short_tag && ./short_tag && exit 0 || exit 1
