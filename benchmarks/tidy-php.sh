#!/bin/bash
rm coverage.path.pos coverage.path.neg
rm configuration-oracle
rm -rf coverage
rm default.cache
rm fault.lines fix.lines
rm fix-failures
rm limit*
rm bugged-program.txt fixed-program.txt
rm compile.pl compile.pl~
rm test.sh~
rm -rf sanity
rm -rf diff
mv bugged-program.txt preprocessed/manifest.txt
rm -rf php
rm repair.cache
