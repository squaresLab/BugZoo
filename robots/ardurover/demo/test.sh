#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test=$1

# find the name of the test
case ${test} in
  p1) t="arm";;
  p2) t="mission_rover1";;
  p3) t="left_circuit";;
  default) exit 1
esac

# execute the test
"${here_dir}/test-harness.py" "${t}" &> /dev/null
exit $?
