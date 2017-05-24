# RepairBox

[![Join the chat at https://gitter.im/RepairBox/Lobby](https://badges.gitter.im/RepairBox/Lobby.svg)](https://gitter.im/RepairBox/Lobby?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)

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
RepairBox incurs fewer overheads (resulting in a much higher performance, crucial
for rigorous experimental trials), makes dependencies easier to manage, and
results in a smaller disk footprint.

For more information on [Docker](https://www.docker.com/), the interested user is
referred to
[https://docs.docker.com/learn/](https://docs.docker.com/learn/).

## Installation

To install the RepairBox platform, we advise that
users produce a shadow clone of this repository using the command below:

```
$ git clone git://github.com/squaresLab/RepairBox --depth 0
```

Producing a shallow clone takes far less time, and the git protocol both
reduces that further and helps to prevent any hangs you might otherwise
experience using the HTTPS protocol.

## Usage

RepairBox provides a simple, self-documenting command line interface, via the
`repairbox` executable. Below, we briefly explain and illustrate each of the
commands provided by this interface.

### `repairbox -h`

Provides a detailed list of available commands.

```
$ repairbox -h

usage: repairbox [-h] [--version]
                 {build,upload,download,install,uninstall,list,launch} ...

______                 _     ______           
| ___ \               (_)    | ___ \          
| |_/ /___ _ __   __ _ _ _ __| |_/ / _____  __
|    // _ \ '_ \ / _` | | '__| ___ \/ _ \ \/ /
| |\ \  __/ |_) | (_| | | |  | |_/ / (_) >  < 
\_| \_\___| .__/ \__,_|_|_|  \____/ \___/_/\_\
          | |                                 
          |_|                                 

A platform for reproducible empirical studies of program repair

Download at: https://github.com/squaresLab/RepairBox

positional arguments:
  {build,upload,download,install,uninstall,list,launch}

optional arguments:
  -h, --help            show this help message and exit
  --version             show program's version number and exit

$ repairbox -h build

TODO: add description!
```

### `repairbox list`

### `repairbox install`

### `repairbox uninstall`

### `repairbox download`

### `repairbox build`

### `repairbox launch`

## Anatomy of a Repair Box

A unique repair box, in the form of a Docker container, is supplied for each bug
within this repository. Each of these repair boxes provide a minimal environment
for replicating the bug, containing only the packages required to build and run
the program, and no more.

The associated program and files for each box are located within its `/experiment`
directory, which contains the following files for each bug:

* `problem.json`, a JSON file describing parameters specific to this particular
  bug scenario, including the size of its test suite, the commands that should
  be used for compilation and running tests, and whether the tests within the
  suite may be executed within parallel.
* `source/`, a directory containing the original source code for the scenario.
* `test.sh`, a bash script responsible for determining the success or failure
  of a given test case for a provided executable. This script accepts three
  arguments: the path to the executable within the repair candidate's
  directory; the identifier for the test case, following the GenProg naming
  convention (e.g. `p1`, `n7`); and a random port number to be used for
  performing the test (which is optional for bugs that do not require port
  access).
* `compile.sh`, a bash script responsible for compiling a variant of the
  associated program, using the files provided within the directory of the
  single argument passed.

For the ManyBugs benchmarks, `test.sh` invokes the original (or a slightly
modified version) of the original test harness for the bug scenaro. For
SIR and the TSE 2012 dataset, this file dispatches the test case execution
request onto [Pythia](https://github.com/ChrisTimperley/Pythia), which helps
to ensure candidates that pass all tests within the suite meet a minimal set
of quality requirements.

Where a human repair for the bug was provided by the original dataset, those
files can be found in the `fixed` directory. Additionally, a `diffs` directory
is provided, giving a `diff` for each of the files changed by the human
developer.

For historical reasons, where possible, certain repair boxes also supply a
`configuration-default` file, used to provide the necessary settings required
to perform automated repair of the bug using GenProg 2.

## Future Additions

* continuous integration, with automatic construction and pushing of
  (modified) Docker images to DockerHub.
* automatic Docker image flattening
