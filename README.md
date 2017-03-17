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
RepairBox incurs fewer overheads (resulting in a much higher performance; crucial
for rigorous experimental trials), makes dependencies easier to manage, and
results in a smaller disk footprint.

For more information on [Docker](https://www.docker.com/), the interested user is
referred to
[https://docs.docker.com/learn/](https://docs.docker.com/learn/).

## Installation

There are two ways to install a particular repair box provided by this repository.
The preferred method, is to download a pre-built repair box from DockerHub, using
the command given below (using a PHP bug from the ManyBugs dataset as an example):

```
$ docker pull christimperley/repairbox:manybugs-php-bug-2011-03-11-d890ece3fc-6e74d95f34
```

Alternatively, you may build each of the repair boxes from source by cloning
this repository and calling `make`:

```
$ git clone git://github.com/ChrisTimperley/RepairBox --depth 1
$ cd RepairBox
$ make
```

Producing a shallow clone takes far less time, and the git protocol both
reduces that further and helps to prevent any hangs you might otherwise
experience using the HTTPS protocol. Be warned, constructing all of the boxes
within this repository can take over an hour and consumes tens of GBs.

## Usage

There are a number of ways of interacting with repair boxes. Below we give
a few examples of the most common forms of interaction, and where those
might be appropriate.

### Replicating the Bug

To simply inspect a particular repair box and to replicate the bug it contains,
the user may create a container for that bug using the command below:

```
$ docker run --rm -it christimperley/repairbox:manybugs-php-bug-2011-03-11-d890ece3fc-6e74d95f34
```

Note, the `--rm` flag ensures that the container for this bug is ephemeral, and
will be destroyed once the user exits the `/bin/bash` instance. The `it` flag is
used to attach the Docker container to the user's `tty`, allowing him or her to
interact with the container as if it were their own machine.

Once inside, the user may install any necessary software (you will need to run
`apt-get update` before this, as package lists are not present in the image in
order to reduce their size) and interact with the program how they please. This
is a great way to quickly get to grips with the structure of a repair box, and
so users new to Docker are advised to try this before advancing onto more
advanced ways of using repair boxes.

### Performing Automated Repair

The preferred way to apply a particular automated repair or program analysis
technique to a given repair box is to carefully create a separate, portable
container for that program. This container should install all of its binaries
and run-time dependencies to a named directory within `/opt` (e.g.
`/opt/genprog`). To allow the binaries within this container to be shared with
the repair box, this directory (e.g. `/opt/genprog`) should be declared as a
volume within the associated `Dockerfile` for the repair technique.

An except from the GenProg Dockerfile is given below, showing how binaries
are installed to a mountable volume.

```
# compile GenProg binary to a shareable directory
RUN mkdir /opt/genprog && \
    make && \
    mv genprog /opt/genprog
# mark the directory as a volume, allowing it to be mounted by other containers
VOLUME /opt/genprog
```

More general details on the approach can be found at:
https://blog.replicated.com/engineering/refactoring-a-dockerfile-for-image-size/

### Getting Data from a Container

Since containers are completely isolated from their host environment (by default), sharing
files (whether supplying them or extracting them) with containers takes a bit of
configuration. If you're using RepairBox to perform experiments, you'll want to use
one of either of these approaches.

#### Docker `cp` command

If you're only interesting in copying files from a running container (repair box)
to your host machine, the docker `cp` command can be used to copy a file at given
location from a running, named container. In order to take advantage of this,
you'll need to supply a name for your container when using the `docker run`
command.

In the example below, we copy the `problem.json` file for a bug scenario from
a running container into the current working directory on the host machine.

```
$ docker run --rm --name rbox -it christimperley/repairbox:manybugs-php-bug-2011-03-11-d890ece3fc-6e74d95f34 /bin/bash
...

$ docker cp rbox:/experiment/problem.json .
```

#### Volume Mounting

If you want to maintain a shared directory (or multiple directories) between the
repair box and the host, you may take advantage of Docker's volume mounting feature.
When executing `docker run`, you may specify a mapping between local directories
(that will be created if they don't exist) and the location at which they should be
shared on the container.

```
$ docker run --rm -v /home/chris/foo:/experiment/foo -it christimperley/repairbox:manybugs-php-bug-2011-03-11-d890ece3fc-6e74d95f34 /bin/bash
```

**Note**, you may encounter permissions problems using the following approach if
the `uid` of the user on the host machine differs from the `uid` of the `docker`
user on the RepairBox (1000). There are a number of solutions to this issue, but
the simplest is to run `sudo chown -R docker /experiment/foo` within the container
upon launch, and `sudo chown -R $(whoami) /home/chris/foo` on the host machine
when the container has terminated.

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
