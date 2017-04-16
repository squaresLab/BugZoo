#!/bin/bash
#
# This script simply forwards a test execution command onto Pythia, along
# with the --coverage flag where appropriate
candidate_exe=$1
test_id=$2

if [[ $(dirname "$candidate_exe") = "coverage" ]]; then
  cov_flag="--coverage" 
else
  cov_flag="" 
fi

pythia run-by-id $cov_flag "${candidate_exe}" "${test_id}"
exit $? # is this implicit?
