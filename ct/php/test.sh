#!/bin/bash
here_dir=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
test_id=$1
test_num=-1
num_pos=$(wc -l passes.txt | cut -d' ' -f1)
num_neg=$(wc -l fails.txt | cut -d' ' -f1)
num_all=[[${num_pos} + ${num_neg}]]

case ${test_id}
  p*)
    offset=$(cut -d'p' -f2 "${test_id}")
    test_num=tail -n+${offset} passes.txt | head -n1;;
  n*)
    offset=$(cut -d'n' -f2 "${test_id}")
    test_num=tail -n+${offset} fails.txt | head -n1;;
  # missing case
esac

if [[ ${test_num} -lt 0]] || [[ ${test_num} -gt ${num_all} ]]; then
  echo "ERROR: failed to find test with given id (${test_id})"
  exit 1
fi

test_name=$(tail -n+${test_num} tests.txt | head -n1)
pushd "${here_dir}/source"
timeout ${TEST_TIMEOUT} php run-tests.php -q -p sapi/cli/php "${test_name}" \
  |& grep -q "FAIL " && exit 1 || exit 0
