Adding a bug
============

In this section, we provide instructions for adding a new historical bug
to the BugZoo platform.

.. note::

  Before adding a bug, you must first `create a source that will
  provide it <source.html>`_. Note that a source may provide multiple bugs
  and tools. Typically, a source is used to provide a dataset of bugs.

Creating a manifest file
------------------------

To begin with, we need to create a YAML-formatted
`manifest file <../file-format.html>`_ to provide the bug.
Alternatively, we can extend an existing manifest file with the necessary
information for the bug. For the rest of this example, we will create a new
manifest file, named :code:`gcd.bugzoo.yml`. The top of the file should
specify the version of the BugZoo Manifest File Format that was used to
write the file. For this example, we will be using version :code:`1.0`:

.. code-block:: yaml

  version: '1.0'

Writing a Dockerfile
--------------------

Next, we need to write a :code:`Dockerfile` that will be used to
provide a Docker container image for the buggy program. The Docker container
for the buggy program is responsible for providing a minimal execution
environment for building the program and running its tests. For general
tips on writing Dockerfiles, see
https://docs.docker.com/get-started/part2/#dockerfile
and
https://docs.docker.com/develop/develop-images/dockerfile_best-practices/.

For the remainder of this guide, we will add the :code:`gcd` bug from
the
`GenProg TSE 2012 dataset <https://github.com/ChrisTimperley/genprog-tse-2012-bugs>`_
to BugZoo. To begin with, we place all of the
necessary files for the bug scenario somewhere in our source directory
(so that BugZoo can find them), as shown below.

.. code-block:: shell

  $ ls -R gcd
  gcd:
  Dockerfile  gcd.bugzoo.yml  gcd.c  test  test.sh

  gcd/test:
  output.0.55  output.1071.1029  output.112.135  output.16.4  output.16777216.512  output.310.55  output.315.831  output.513332.91583315  output.555.666  output.678.987  output.8767.65


The contents of the directory are as follows:

* :code:`gcd.bugzoo.yml`: a manifest file that registers the bug
  (and its associated Docker container) with BugZoo.
* :code:`Dockerfile`: used to provide a Docker container for interacting
  with the program under test.
* :code:`gcd.c`: source code for the program under test,
* :code:`test.sh`: a simple test harness
* :code:`test`: supplementary files used by :code:`test.sh`.

.. code-block:: docker

  FROM ubuntu:16.04

  # install dependencies
  # sudo and gcovr are required by BugZoo
  RUN apt-get update \
   && apt-get install -y --no-install-recommends \
        gcc \
        sudo \
        gcovr \
        libc6-dev

  # create a directory to hold the program under test (PUT)
  WORKDIR /experiment

  # add the source code for the PUT
  ADD gcd.c /experiment/source/

  # add the test harness and supplementary files
  ADD test.sh /experiment
  ADD test /experiment/test


Registering a blueprint
-----------------------

Registering a bug
-----------------

