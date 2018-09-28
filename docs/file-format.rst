File Format (v1.0)
==================

In this section, we describe the file format of BugZoo manifest files, which
are used by sources to describe snapshots (i.e., historical, and possibly
defective, software versions), datasets of snapshots (e.g., ManyBugs and
IntroClass), and plugins.

Manifest files must be written in YAML, and should be named with a
:code:`.bugzoo.yml` suffix (e.g., :code:`my-manifest.bugzoo.yml`).

At the top level, manifest files should look as follows:

.. code-block:: yaml

  version: "1.0"

  blueprints:
    ...

  bugs:
    ...

  plugins:
    ...

where :code:`version` specifies the version of the manifest file format
that was used to write the file, :code:`blueprints` provides instructions for
building individual Docker images, :code:`bugs` defines snapshots, and
:code:`plugins` defines plugins. :code:`blueprints`, :code:`bugs`,
and :code:`plugins` are optional sections and each is described as a list.

Blueprints
----------

The :code:`blueprints` section provides a list of *blueprints*, each of which
encodes instructions for building an individual Docker image. Below, we give an
example of a :code:`blueprints` section containing a single blueprint for
building the Docker image for a PHP scenario from the ManyBugs dataset.


.. code-block:: yaml

  - tag: squareslab/manybugs:php-2011-04-06-18d71a6f59-187eb235fe
    file: Dockerfile
    context: .
    depends-on: squareslab/manybugs:php
    arguments:
      autoconf: "2.59"
      bison: "2.4.3"
      bug_revision: "18d71a6f59"
      fix_revision: "187eb235fe"
      scenario: "php-bug-2011-04-06-18d71a6f59-187eb235fe"


Below, we discuss each of the properties used to describe a blueprint:

* The :code:`tag` property gives the fully qualified name of the Docker image.
* The :code:`file` property gives the path of the :code:`Dockerfile` that
  should be used to construct the Docker image, relative to the location of
  the manifest file. If omitted, :code:`file` will default to
  :code:`Dockerfile`.
* The :code:`context` property specifies the directory that should be used to
  provide the build context to Docker. If omitted, :code:`context` will
  default to :code:`.` (i.e., the directory that provides the manifest file).
* The :code:`arguments` property optionally provides a dictionary of
  build-time arguments that are supplied to Docker when constructing the
  image.
* The :code:`depends-on` property optionally specifies the name of the Docker
  image, if any, that the Docker image described by the blueprint relies on.

Bugs
----

The :code:`bugs` section details a list of *bugs*. Below is an example of a
:code:`bugs` section containing a single bug definition belonging to a PHP
bug scenario from the ManyBugs dataset.

.. code-block:: yaml

  - name: "manybugs:php:2011-04-06-18d71a6f59-187eb235fe"
    image: "squareslab/manybugs:php-2011-04-06-18d71a6f59-187eb235fe"
    dataset: manybugs
    program: php
    compiler:
      ...
    languages:
      - C
    source-location: /experiment/src
    test-harness:
      ...


Each bug is described by the following properties:

* The :code:`name` property gives a name that is used to uniquely identify
  the bug.
* The :code:`image` property gives the name of the Docker image that is used
  to provide the bug. BugZoo assumes that either the Docker image is already
  installed on the server, or that there is a blueprint that provides
  instructions for building the image.
* The :code:`dataset` property optionally specifies the name of the dataset
  that the bug belongs to, if any.
* The :code:`program` property optionally specifies the name of the program
  that the bug belongs to.
* The :code:`languages` property specifies a list of the languages that are
  involved in the bug. BugZoo uses this information to direct the collection
  of line coverage information. At the time of writing, the following languages
  are recognised by BugZoo: :code:`C`, :code:`C++`, :code:`Java`,
  :code:`Python`.
* The :code:`source-location` property states the directory containing the
  source code for the buggy program.
* The :code:`test-harness` property describes a test suite for the buggy program.
  More details are provided below.
* The :code:`compiler` property provides instructions for building the buggy
  program. More details are provided below.

Test Harness
............

The :code:`genprog`-type test harness is used to provide convenient support for
GenProg-style test scripts used by ManyBugs, IntroClass, and the GenProg TSE
2012 benchmarks. GenProg-style test scripts accept a single argument specifying
the name of the positive or negative test case that should be executed.
Positive tests correspond to tests that pass on the original, unmodified
program, whereas negative tests correpond to tests that fail on the original
program. The positive tests are named using the form :code:`p{k}`, where
:code:`{k}` is replaced by the number of the positive test (starting from
:code:`1`). Similarly, negative tests are named :code:`n{k}`, where
:code:`{k}` is replaced by the number of the negative test (starting from
:code:`1`).

Below is an example of a :code:`genprog` test harness.

.. code-block:: yaml

  test-harness:
    type: genprog
    time-limit: 600
    passing: 7932
    failing: 2

The :code:`time-limit` property specifies the maximum number of seconds that
may elapse before a test execution is aborted and declared a failure.
The :code:`passing` and :code:`failing` properties states the number of
passing and failing tests.


Plugins
-------
