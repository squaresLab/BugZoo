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

Below is a simplified example of a :code:`Dockerfile` that is used to provide
a Docker container for the :code:`gcd` bug scenario.

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


.. note::

  In practice, it's common to add a :code:`docker` user with sudo privileges
  to the container to prevent the buggy program from misbehaving. A more
  detailed example of a :code:`Dockerfile` for the :code:`gcd` scenario can
  be found at
  https://github.com/ChrisTimperley/genprog-tse-2012-bugs/blob/master/gcd/Dockerfile.


Registering a blueprint
-----------------------

Now that we have written a :code:`Dockerfile` for our bug scenario, we need to
register a *blueprint* for constructing the Docker image for our scenario.
A blueprint is used to provide instructions for building a named Docker image.
For this example, we will name the Docker image :code:`gcd`.

To add a blueprint for the bug scenario, we need to create a
:code:`blueprints` section in the manifest file (if one doesn't already
exist), before adding an entry for the :code:`gcd` blueprint to it,
as shown below. For more details on the properties that can be used to
describe a (more advanced) blueprint please refer to the
`manifest file format documentation <../file-format.html>`_.

.. code-block:: yaml

  version: '1.0'

  blueprints:
    - tag: gcd
      file: Dockerfile

The :code:`file` property of the blueprint gives BugZoo the path of the
file that should be used to build the Docker container image, relative
to the location of the manifest file.

.. note::

  When writing your own blueprints, it's good practice to use a fully qualified
  tag for your Docker image. For example, :code:`squareslab/tse2012:gcd` is
  tag used by the manifest file in the TSE 2012 dataset repository.


Registering a bug
-----------------

Finally, we need to add the bug scenario to the manifest file. To do so,
first we must create a :code:`bugs` section in the file. Next, we add an
entry to the :code:`bugs` section for the :code:`gcd` bug scenario,
shown below.
Details about each of the properties used to describe bugs can be found
in the `Manifest File Format description <../file-format.html>`_.

.. code-block:: yaml

  version: '1.0'

  blueprints:
    - tag: gcd
      file: Dockerfile

  bugs:
    - name: tse2012:gcd
      dataset: tse2012
      program: gcd
      image: gcd
      languages:
      - c
      source-location: /experiment/source
      compiler:
        time-limit: 20
        type: simple
        context: /experiment/source
        command: |
          gcc gcd.c -o gcd
        command_with_instrumentation: |
          gcc gcd.c -o gcd --coverage
      coverage:
        files-to-instrument:
          - gcd.c
      test-harness:
        context: /experiment
        command: ./test.sh __ID__
        time-limit: 5
        tests:
          - name: p1
          - name: p2
          - name: p3
          - name: p4
          - name: p5
          - name: p6
          - name: p7
          - name: p8
          - name: p9
          - name: p10
          - name: n1
