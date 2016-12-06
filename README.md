# RepairBox

RepairBox is an ongoing effort to provide a series of controlled environments
for performing experiments on automated program repair of C programs. RepairBox
provides a number of bug scenarios, adapted from existing publicly-available
datasets, including [ManyBugs](http://repairbenchmarks.cs.umass.edu/),
[GenProg's earlier benchmarks](http://dijkstra.cs.virginia.edu/genprog/), and
several datasets from the
[Software Infrastructure Repository](http://sir.unl.edu/).

As well as providing the files necessary to study each bug,
RepairBox also provides a minimal, isolated environment for execution, in the
form of an accompanying Docker container. By providing a container for
each bug, rather than a single, monolithic virtual machine for a group of bugs,
RepairBox incurs fewer overheads (resulting in a much higher performance; crucial
for rigorous experimental trials), makes dependencies easier to manage, and
results in a smaller disk footprint.

In the future, we plan to host the associated Docker images for each of bug
scenario on DockerHub, allowing researchers to quickly download and use an
image via a single terminal command, without needing to build the images
themselves.

## Installation

**Warning:** Please **do not** try to fully clone this repository. If you're
only interested in using these benchmarks, then download a zipped release (or
a zipped form of the latest repo state). If you wish to contribute (you're
awesome), then please clone the repository using the following command:

```
git clone git://github.com/ChrisTimperley/AutomatedRepairBenchmarks.c --depth 1
```

Producing a shallow clone takes far less time, and the git protocol both
reduces that further and helps to prevent any hangs you might otherwise
experience using https.

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
