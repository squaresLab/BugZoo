#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test=$1

case ${test} in
  p1) "${here_dir}/test-harness.py" CMAC-VTOL-ccw.txt &> /dev/null && exit 0
esac
exit 1
