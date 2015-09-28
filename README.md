# AutomatedRepairBenchmarks

This repository contains a series of benchmark problems for automated program
repair, tailored to be solved using GenProg.

## Benchmark Structure
Each benchmark, contained within its own sub-directory of the
`benchmarks` directory, contains the following:

* `configuration.base`, a partial GenProg configuration file, specifying
  benchmark-specific parameters, such as the number of positive and negative
  test cases. This file should only contain parameters describing the details
  of the problem, and not how it should be solved.
* `test.sh`, a bash script responsible for evaluating the success or failure of
  a given test case for a provided executable.
* `test/`, a directory containing any additional files needed to run the test
  cases. Such files may specify the expected output of the program on a given
  test case.
