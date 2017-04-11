#!/bin/bash
ulimit -m 1000000

here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
name=$1

#pushd "${here_dir}/source" > /dev/null
pushd "${here_dir}/source/Lib/test" > /dev/null
outcome=$(timeout ${TEST_TIMEOUT} ${here_dir}/source/python regrtest.py "${name}" 2> /dev/null)
#outcome=$(timeout ${TEST_TIMEOUT} ./python -m test "${name}" 2> /dev/null)

if (echo "${outcome}" | grep -q "OK"); then
  if (echo "${outcome}" | grep -q "omitted"); then
    exit 200
  else
    exit 0
  fi
fi
exit 1
