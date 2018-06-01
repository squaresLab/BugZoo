# BugZoo

[![Build Status](https://travis-ci.org/squaresLab/BugZoo.svg?branch=master)](https://travis-ci.org/squaresLab/BugZoo)
[![PyPI version](https://badge.fury.io/py/bugzoo.svg)](https://badge.fury.io/py/bugzoo)

BugZoo is a decentralised platform for distributing,
reproducing, and interacting with historical software bugs. BugZoo is designed
to support both software engineering researchers as well as developers of tools
for program testing, analysis and repair.

Under the hood, BugZoo uses [Docker](https://www.docker.com/) containers to
provide a controlled, sterile environment for safely interacting with
historical software bugs. BugZoo provides several advantages over
the use of monolithic virtual machines
(e.g., [ManyBugs VM](http://repairbenchmarks.cs.umass.edu/)):

* By using containerisation instead of virtualisation, BugZoo can ensure
  reproducibility with minimal sacrifice to performance, allowing you to run
  bigger experiments faster.
* Since containers can be spawned in under a second, a safe, idempotent
  execution environment can be realistically provided for every test suite
  evaluation.
* Each historical bug is provided as its own minimal Docker container image.
  There are no assumptions that bug containers should be capable of running
  other software, such as a testing or repair tool that is being evaluated as
  part of an experiment. BugZoo avoids the inevitable "DLL hell" that arises
  from attempting to mix bugs and tools by transforming tools into portable
  binaries and mounting them in the execution environment at run-time.
* Thanks to their minimal nature and Docker's layer-based image caching,
  prebuilt datasets of historical bugs can be downloaded quickly and
  easily.


## Features

* A simple but powerful command-line interface for building, downloading and
  interacting with historical bugs.
* A Python interface for complex, structured interactions with historical
  bugs: execute specific tests, compute line coverage, apply patches, compile
  with certain flags, and more.
* A powerful underlying RESTful API that can be used to add BugZoo bindings to your
  own favourite language.
* A decentralised architecture that lets you share your tools and datasets of
  historical bugs on the BugZoo platform without giving up ownership or control.
  Adding BugZoo support to your dataset of tool is as simple as adding a
  `.bugzoo.yml` file to your project.

## Installation

We recommend using [pipenv](http://pipenv.org/) to install BugZoo, although you
may simply use `pip3` instead:

```
$ pipenv install bugzoo
```

BugZoo supports Python >= 3.5.

## Getting Started

Since BugZoo is a decentralised platform for sharing and interacting with
historical bugs (*and not itself a dataset of bugs*), you'll need to add
several bugs and tools to your installation. Bugs and tools are usually
provided to BugZoo by remote, public Git repositories. Adding a *source* of
bugs or tools to your installation can be done via the `bugzoo source add
[name] [url]` command:

```
$ bugzoo source add manybugs https://github.com/squaresLab/ManyBugs
```

Note that sources do not necessarily have to be remote, public Git
repositories: they can also be provided by local directories.

```
$ git clone https://github.com/squaresLab/ManyBugs path/to/manybugs
$ bugzoo source add another-manybugs path/to/manybugs
```

The `bugzoo source list` command can be used to provide a list of registered
sources:

```
$ bugzoo source list

Source    Type    URL                                         Location                                                        Version
--------  ------  ------------------------------------------  --------------------------------------------------------------  ---------
robust    Local   -                                           /home/chris/bugs/robust                                         -
genprog   Remote  https://github.com/squaresLab/genprog-code  /home/chris/.bugzoo/sources/github_com_squaresLab_genprog-code  b4de21d7
manybugs  Remote  https://github.com/squaresLab/ManyBugs      /home/chris/.bugzoo/sources/github_com_squaresLab_ManyBugs      ad83bd9a
```

And `bugzoo bug list` and `bugzoo tool list` can be used to produce a list of
all bugs and tools that are provided by your registered sources:

```
$ bugzoo bug list

Bug                                             Program     Dataset    Source    Installed?
----------------------------------------------  ----------  ---------  --------  ------------
manybugs:gmp:13420-13421                        gmp         manybugs   manybugs  No
manybugs:gmp:14166-14167                        gmp         manybugs   manybugs  No
manybugs:gzip:2009-08-16-3fe0caeada-39a362ae9d  gzip        manybugs   manybugs  No
manybugs:gzip:2009-09-26-a1d3d4019d-f17cbd13a1  gzip        manybugs   manybugs  No
manybugs:gzip:2009-10-09-1a085b1446-118a107f2d  gzip        manybugs   manybugs  No
manybugs:gzip:2010-01-30-fc00329e3d-1204630c96  gzip        manybugs   manybugs  No
manybugs:gzip:2010-02-19-3eb6091d69-884ef6d16c  gzip        manybugs   manybugs  No
manybugs:libtiff:2005-12-14-6746b87-0d3d51d     libtiff     manybugs   manybugs  No
manybugs:libtiff:2005-12-21-3b848a7-3edb9cd     libtiff     manybugs   manybugs  No
manybugs:libtiff:2005-12-27-6f76e76-5dac30f     libtiff     manybugs   manybugs  No
manybugs:libtiff:2006-02-23-b2ce5d8-207c78a     libtiff     manybugs   manybugs  No
manybugs:libtiff:2006-02-27-6074705-e6d0c32     libtiff     manybugs   manybugs  No
manybugs:libtiff:2006-03-03-a72cf60-0a36d7f     libtiff     manybugs   manybugs  No
...
```

To interact with a particular bug or tool, you'll need to install it on your
machine. There are two ways to do this: (1) you can build the Docker image for
the bug or tool locally (via `bugzoo bug build` and `bugzoo tool build`), or
alternatively, you can download a prebuilt image (via `bugzoo bug download`
or `bugzoo tool download`).

```
$ bugzoo bug build manybugs:libtiff:2005-12-14-6746b87-0d3d51d
...
```

## Known Sources

Below is a list of sources that are known to provide datasets or tools that
are compatible with the BugZoo platform.

* [ManyBugs](https://github.com/squaresLab/ManyBugs)
* [GenProg](https://github.com/squaresLab/genprog-code)

To add one of these sources, simply execute the following from the command line:

```
$ bugzoo source add manybugs https://github.com/squaresLab/ManyBugs
$ bugzoo source add genprog https://github.com/squaresLab/genprog-code
```

## Citation

If you use BugZoo in your research work, we would highly appreciate it if you
cited the [following paper](http://www.cs.cmu.edu/~clegoues/docs/timperley-icse18-poster.pdf):

```
@inproceedings{bugzoo,
  author = {Timperley, Christopher and Stepney, Susan and {Le Goues}, Claire}
  title = {{Poster: BugZoo – A Platform for Studying Software Bugs}},
  booktitle = {{International Conference on Software Engineering}},
  series = {{ICSE '18}},
  year = {2018}
  note = {{To appear}}
}
```
