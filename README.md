# BugZoo

[![Build Status](https://travis-ci.org/squaresLab/BugZoo.svg?branch=master)](https://travis-ci.org/squaresLab/BugZoo)

BugZoo is a decentralised platform for distributing,
reproducing, and interacting with historical software bugs. BugZoo is designed
to support both software engineering researchers as well as developers of tools
for program testing, analysis and repair.

Under the hood, BugZoo uses [Docker](https://www.docker.com/) containers to
provide a controlled, sterile environment for safely interacting with
historical software bugs. BugZoo provides a number of distinct advantages over
the use of monolithic virtual machines
(e.g., [ManyBugs VM](http://repairbenchmarks.cs.umass.edu/)):

* by using containerisation instead of virtualisation, BugZoo can ensure
  reproducibility with minimal sacrifice to performance, allowing you to run
  bigger experiments faster.

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

Use ManyBugs and GenProg as an example.

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

If you wish to cite BugZoo in your work, please use the citation below.

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
