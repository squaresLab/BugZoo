# AutomatedRepairBenchmarks.c

This repository contains a series of benchmark problems for automated program
repair, written in C, tailored to be solved using GenProg.

## Benchmark Structure
Each benchmark, contained within its own sub-directory of the
`benchmarks` directory, contains the following:

* `setup.json`, a JSON file specifying parameters specific to the benchmark,
  such as the number of positive and negative test cases. This file should
  only contain parameters describing the details of the problem, and not
  details of how it should be solved. Usable as a partial GenProg 3
  configuration file.
* `program/`, a directory containing the source code for the given problem.
* `program.txt`, a file specifying the location of each of the source files,
  relative to the directory of that particular benchmark.
* `test.sh`, a bash script responsible for evaluating the success or failure of
  a given test case for a provided executable.
* `test/`, a directory containing any additional files needed to run the test
  cases. Such files may specify the expected output of the program on a given
  test case.
* `.gitignore`, a Git ignore file, set-up to ensure that no search artifacts,
  such as coverage information or path files, are introduced into the
  repository.
