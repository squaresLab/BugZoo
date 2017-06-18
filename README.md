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
users produce a shallow clone of this repository using the command below:

```
$ git clone git://github.com/squaresLab/RepairBox --depth 0
```

Producing a shallow clone takes far less time, and the git protocol both
reduces that further and helps to prevent any hangs you might otherwise
experience using the HTTPS protocol.

## Requirements

To use RepairBox, the following packages must be installed:

* Python 2.7+
* Docker

Additionally, RepairBox requires the following Python packages:

* tabulate
* requests
* yaml

These may be installed via the following `pip` command:

```
$ pip install tabulate requests yaml
```

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

Produces a list of all repair boxes, programs, datasets and tools within
RepairBox.

```
$ repairbox list bugs

Bug                                            Latest    Installed    Remote
---------------------------------------------  --------  -----------  --------
manybugs:libtiff:2005-12-14-6746b87-0d3d51d    0.0.0.0   0.0.0.0      0.0.0.0
manybugs:libtiff:2005-12-21-3b848a7-3edb9cd    0.0.0.0   0.0.0.0      0.0.0.0
manybugs:libtiff:2005-12-27-6f76e76-5dac30f    0.0.0.0   0.0.0.0      0.0.0.0
manybugs:libtiff:2006-02-23-b2ce5d8-207c78a    0.0.0.0   0.0.0.0      0.0.0.0
manybugs:libtiff:2006-02-27-6074705-e6d0c32    0.0.0.0   0.0.0.0      0.0.0.0
manybugs:libtiff:2006-03-03-a72cf60-0a36d7f    0.0.0.0   0.0.0.0      0.0.0.0
manybugs:libtiff:2006-03-03-eec4c06-ee65c74    0.0.0.0   0.0.0.0      0.0.0.0
manybugs:libtiff:2007-07-08-bd2f947-ccc10c7    0.0.0.0   0.0.0.0      0.0.0.0
manybugs:libtiff:2007-07-08-c766cb7-0cc95fb    0.0.0.0   0.0.0.0      0.0.0.0
...
```

```
$ repairbox list programs

Program              Bugs
-----------------  ------
manybugs:php          103
robots:arducopter       1
manybugs:libtiff       24
manybugs:python        15
...
```

```
$ repairbox list datasets


Dataset      Programs    Bugs
---------  ----------  ------
manybugs            3     142
robots              1       1
tse-2012            0       1
...
```

```
$ repairbox list tools


Tool          Image                           Installed
------------  ------------------------------  -----------
genprog       christimperley/genprog:latest   True
searchrepair  searchrepair:latest             True
shuriken      christimperley/shuriken:latest  True
smallcov      squareslab/smallcov:latest      True
...
```

### `repairbox install bug`

Installs a given repair box by first attempting to download it, if the remote
version is up-to-date, before resorting to building the repair box locally:

```
$ repairbox install bug manybugs:libtiff:2005-12-14-6746b87-0d3d51d

downloading bug: manybugs:libtiff:2005-12-14-6746b87-0d3d51d
...
downloaded bug: manybugs:libtiff:2005-12-14-6746b87-0d3d51d
```

This command may also be used to install all bugs belonging to a given dataset:

```
$ repairbox install bug manybugs

downloading bug: manybugs:libtiff:2005-12-14-6746b87-0d3d51d
...
```

Or it may be used to install bugs belonging to a given program in a dataset:

```
$ repairbox install manybugs:python

downloading bug: manybugs:python:69223-69224
...
```

### `repairbox install tool`

Installs a registered tool by attempting to download its associated image
from DockerHub.

```
$ repairbox install tool genprog
...
```

### `repairbox uninstall`

Uninstalls a given repair box, a group of repair boxes belonging to a
dataset or program, or a registered tool from the local machine:

```
$ repairbox uninstall bug manybugs:libtiff:2005-12-14-6746b87-0d3d51d
$ repairbox uninstall bug manybugs:python
$ repairbox uninstall bug manybugs
$ repairbox uninstall bug genprog
```

### `repairbox download`

Downloads a given repair box onto the local machine, provided that the
currently installed version is out of date or not installed. As with
the `install` and `uninstall` commands, `download` may accept the name of a
single bug, a program, or a dataset:

```
$ repairbox download manybugs:libtiff:2005-12-14-6746b87-0d3d51d
...
$ repairbox download manybugs:python
...
$ repairbox download manybugs
...
```

### `repairbox build`

Builds a repair box from scratch, provided that repair box isn't already
installed on the local machine. Once again, this command may accept the name
of a bug, program, or dataset.

```
$ repairbox build manybugs:libtiff:2005-12-14-6746b87-0d3d51d
...
$ repairbox build manybugs:python
...
$ repairbox build manybugs

```

### `repairbox launch`

To interact with a minimal repair box, the following command can be used:

```
host> repairbox launch manybugs:libtiff:2005-12-14-6746b87-0d3d51d
docker> echo $PWD
/experiment
```

By itself, this ability isn't particularly interesting. Let's import some
tools into the repair box! Supported tools (found via the `list tools`
command) can be imported via the `--with` commmand:

```
host> repairbox launch manybugs:libtiff:2005-12-14-6746b87-0d3d51d --with genprog daikon
docker> genprog problem.json
```

## Integration

### Adding a tool to RepairBox

Discuss how one goes about adding a new tool.

```yaml
version: 0
tool: genprog
image: christimperley/genprog:latest
path-extensions:
  - /opt/genprog3
```

Discuss how one constructs a compatible Docker container.

Add a link to a page in the Wiki explaining how all of this works under the hood.

### Adding a bug scenario to RepairBox

Discuss how one might go about adding a bug scenario.

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
  convention (e.g., `p1`, `n7`); and a random port number to be used for
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
