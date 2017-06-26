#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test=$1

# find the name of the test
case ${test} in
  p1) t="good1";;
  p2) t="good2";;
  p3) t="good3";;
  n1) t="bad1";;
  n2) t="bad2";;
  default) exit 1
esac

# execute the test
"${here_dir}/test-harness.py" "${t}" &> /dev/null
exit $?
