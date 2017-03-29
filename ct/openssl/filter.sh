#!/bin/bash
while read t; do
  pushd source/test &> /dev/null
  perl run_tests.pl "$t" |& grep -q "PASS" && echo "$t"
  popd &> /dev/null
done < ${1}
