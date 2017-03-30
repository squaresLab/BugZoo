#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
name=$1

pushd "${here_dir}/source" > /dev/null
outcome=$(timeout ${TEST_TIMEOUT} ./python -m test "${name}" 2> /dev/null)

if (echo "${outcome}" | grep -q "SUCCESS"); then
  if (echo "${outcome}" | grep -q "skipped"); then
    exit 200
  else
    exit 0
  fi
fi
exit 1
