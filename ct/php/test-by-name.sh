#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_name="$1"
pushd "${here_dir}/source" > /dev/null
timeout ${TEST_TIMEOUT} php run-tests.php -q -p sapi/cli/php "${test_name}" \
  |& grep -q "FAIL " && exit 1
exit 0
