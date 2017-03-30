#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
name=$1
pushd "${here_dir}/source/test" > /dev/null
timeout ${TEST_TIMEOUT} perl run_tests.pl "${name}" |& grep -q "PASS" || exit 1
exit 0
