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
* The :code:`build-stage` property optionally specifies the name of the Docker
  build stage that should be used to construct the image.

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
    languages:
      - C
    source-location: /experiment/src
    test-harness:
      ...
    compiler:
      ...
    coverage:
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
* The :code:`coverage` property gives instructions for collecting line coverage
  information for the program. More details are provided below.

Test Harness
............

The :code:`test-harness` property describes the test suite for the
program under test (PUT). Below is an example of a simple test harness
that contains a single test.


.. code-block:: yaml

  test-harness:
    time-limit: 5
    kill-after:
    context: /ros_ws
    tests:
      - name: bfl.complete_filter
        command: /ros_ws/build/bfl/tests/test_complete_filter
        time-limit: 15
        kill-after: 5
        expected-outcome: True
      ...

A test harness description may accept the following top-level properties:

* :code:`time-limit`: specifies a default time limit on test execution that
  will be enforced if an individual test does not specify its own `time-limit`.
  More concretely, :code:`time-limit` specifies the number of seconds that the
  test harness should wait before terminating an unresponsive test
  execution and declaring the test to have failed. Upon reaching the
  time-limit, a :code:`SIGTERM` is sent to the process responsible for
  executing the test.
* :code:`kill-after`: the number of seconds to wait before sending
  :code:`SIGKILL` to a non-responsive test execution that has already
  received a :CODE:`SIGTERM`. If unspecified, :code:`SIGKILL` will default to
  1 second. *For most purposes, there is no need to set this property.*
* :code:`context`: the absolute path of the working directory (inside the
  container) from which the test should be executed. If left unspecified,
  :code:`context` will default to the source directory of the program under
  test.
* :code:`command`: provides an optional command template for building
  the shell commands for individual tests. The template is used to create
  a shell command for any test that does not specify its own
  :code:`command`. The shell command for a given test is created by replacing
  all instances of :code:`__ID__` with the name of the test (given by its
  :code:`name` property).

  For example, the following command template:

  .. code-block:: shell

    run_test --verbose __ID__

  will be transformed into the following for the a test named :code:`foo`:

  .. code-block:: shell

    run_test --verbose foo

  Note that a command template is not required if all tests specify their
  own :code:`command`.

* :code:`tests`: gives a list of tests that belong to the test harness.
  Details on the structure of each of the test descriptions are given
  below.

Each test description within the :code:`tests` property is described by the
following properties:

* :code:`name`: a unique name for the test.
* :code:`command`: the shell command that should be used to
  execute the test.
* :code:`context`: the absolute path of the working directory (inside the
  container) that should be used for the command execution. If unspecified,
  the :code:`context` specified by the test harness will be used instead.
* :code:`time-limit`: the number of seconds before a non-responsive
  execution of this test is terminated and the test is determined to have
  failed. If unspecified, the :code:`time-limit` for the test harness will be
  used instead.
* :code:`kill-after`: overrides the :code:`kill-after` property specified
  by the test harness.
* :code:`expected-outcome`: used to optionally state whether or not the test
  is expected to pass. If set to :code:`True`, the test should pass; if
  :code:`False`, it should fail.
* :code:`oracle`: describes an oracle for the test case. This is used to
  check whether a test execution exhibits the intended behaviour. Values for
  this property are provided as an object composed of the following fields:

    * :code:`code`: the expected exit code of the shell command used to
      execute the test. Defaults to :code:`0` if unspecified.
    * :code:`output`: adds constraints on the output produced by the shell
      command (via stdout) that was used to execute the test. Currently,
      :code:`output` accepts a single property, :code:`contains`, which
      provides a string that should occur as a substring within the output
      of the test execution.

  An example of a test oracle that requires that the test execution should
  produce an exit code of :code:`0` and should contain the word :code:`PASS`
  is given below.

    .. code-block:: yaml

      oracle:
        code: 0
        output:
          contains: "PASS"

  If no :code:`oracle` property is given for a test, the following oracle
  will be used as a default:

    .. code-block:: yaml

      oracle:
        code: 0

:code:`genprog`
**************

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


Compiler
........

The :code:`compiler` section of a bug description provides instructions for
building the faulty program. Below we give an example of a :code:`simple`
compiler for a bug in ArduPilot, which uses the
`waf <https://waf.io/>`_ build system.

.. code-block:: yaml

  compiler:
    type: simple
    time-limit: 300
    context: /opt/ardupilot
    command: >
      ./waf build -j4
    command_with_instrumentation: >
         ./waf configure CXXFLAGS='--coverage' LDFLAGS='--coverage'
      && ./waf build -j4
    command_clean: >
      ./waf clean

The following properties are used to provide build instructions:

* The :code:`time-limit` property specifies the maximum number of seconds that
  the build is given before it is aborted and declared to have failed.
* The :code:`command` property gives a shell command for building the program.
* The :code:`command_with_instrumentation` property gives a shell command for
  building the program with coverage instrumentation enabled.
* The :code:`command_clean` property gives a shell command for cleaning the
  artifacts of the build process.
* The :code:`context` property specifies the absolute path of the working
  directory inside the container that should be used when executing the build
  commands. If left unspecified, :code:`context` will default to the source
  directory for the program.

BugZoo also provides convenient support for particular build systems via
the :code:`type` property. One of the most useful build systems is
:code:`configure-and-make`, which behaves in the same manner as :code:`simple`,
except that :code:`command`, :code:`command_with_instrumentation`, and
:code:`command_clean` are replaced with fixed values that use :code:`make`
and :code:`configure`. Below is an example of a :code:`configure-and-make`
compiler definition.

.. code-block:: yaml

  compiler:
    type: configure-and-make
    time-limit: 300


Coverage
........

BugZoo uses language-dependent *coverage extractors* to compute line coverage
information for faulty programs. The :code:`coverage` section of the manifest
file provides BugZoo with the information that it needs to construct a
coverage extractor for the program. Below is an example of a :code:`coverage`
section for a C program that uses the :code:`gcov` extractor.

.. code-block:: yaml

  coverage:
    type: gcov
    files-to-instrument:
      - foo.c

The :code:`type` property instructs BugZoo to use :code:`gcov` to compute
coverage information for the program under test. If no :code:`type` property
is provided, BugZoo will attempt to use the default coverage extractor for the
language used by the program under test. (If the program under test uses more
than one language, uses are required to specify a :code:`type`, else coverage
information cannot be computed.)

The rest of the :code:`coverage` section is parsed according to the
:code:`type` of coverage extractor that is being used.

* :code:`gcov`: To obtain coverage under crashing conditions, :type:`gcov`
  injects a set of signal handlers into certain files in the program to ensure
  that line coverage information is flushed to disk at the end of program
  execution, even if the program is terminated abruptly (e.g., due to a
  segmentation fault).
  Instrumentation should be added to each source file that provides an
  entrypoint (i.e., `main`) to the binaries used by the program.
  Users are required to specify which files should be instrumented via the
  :code:`files-to-instrument` property, as shown below.

  .. code-block:: yaml

    coverage:
      type: gcov
      files-to-instrument:
        - foo.c


Plugins
-------

The :code:`plugins` section of a manifest file is used to register particular
plugins with BugZoo. This section is given as a list of *plugin descriptions*.
Below we give a simple example of a :code:`plugins` section that is used to
register a plugin for GenProg.

.. code-block:: yaml

  plugins:
    - name: genprog
      image: squareslab/genprog
      environment:
        PATH: "/opt/genprog/bin:${PATH}"

The plugin is described by the following properties:

* :code:`name`: a unique name for the plugin.
* :code:`image`: the Docker image that should be used to provide static files
  for the plugin (i.e., binaries, libraries, configuration files).
* :code:`environment`: a dictionary that is used to override environment
  variables inside a container upon loading the plugin. Each entry is used to
  override a single environment variable, given by the key of the entry
  (e.g., :code:`PATH`). The value of the entry is evaluated upon loading the
  plugin inside the container, and so standard bash variable interpolation may
  be used. In the example above, the GenProg binaries are added to the
  :code:`PATH`.
