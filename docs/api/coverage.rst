Obtaining Coverage
==================

BugZoo's Python API provides a number of uniform, language-independent
interfaces for collecting line coverage information for individual test cases,
entire test suites, and arbitrary executions.


Obtaining Coverage for Bugs
---------------------------
.. py:module:: bugzoo.core.coverage

Complete test suite coverage information for a given bug can be obtained in
the form of a :class:`TestSuiteCoverage` object by using
:meth:`client.bugs.coverage`, as shown below. :meth:`client.bugs.coverage`
will attempt to load precomputed coverage data for the given bug from its
on-disk cache; if no coverage data can be found, it will be recomputed from
scratch and saved to disk for future requests.

.. code-block:: python

  bug = client.bugs['manybugs:python:69223-69224']
  coverage = client.bugs.coverage(bug)

Coverage information for a particular test is represented as a
:class:`TestCoverage` object, and can be retrieved from a
:class:`TestSuiteCoverage` object by supplying the name of a test to its
:code:`[]` operator:

.. code-block:: python

  coverage_for_suite = client.bugs.coverage(bug)
  coverage_for_test = coverage_for_suite["p1"]

:class:`TestSuiteCoverage` also provides an iterator over the names of the
tests included within its report:

.. code-block:: python

  for test_name in coverage_for_suite:
    coverage_for_test = coverage_for_suite[test_name]

Discuss test outcomes and file lines.


Obtaining Coverage for Containers
---------------------------------

Like :meth:`client.bugs.coverage`, :meth:`client.containers.coverage` is used
to compute coverage information for an entire test suite. (Note that, unlike
:meth:`client.bugs.coverage`, :meth:`client.containers.coverage` does not
cache coverage information to disk as containers are ephemeral.)

.. code-block:: python

  coverage_for_suite = client.containers.coverage(container)

Coverage information for individual test executions (and executions of
arbitrary shell commands) can also be obtained by first instrumenting the
the container, then executing the test (or shell command) for which coverage
shoud be collected, before finally extracting a report of the source code
lines that were executed:

.. code-block:: python

  client.containers.instrument(container)
  outcome = client.containers.test(container, test)
  lines = client.containers.extract_coverage(container)
  coverage = TestCoverage(test.name, outcome, lines)


Computing Fault Spectra using Coverage
--------------------------------------

Fault spectra, represented as :class:`Spectra` objects, are used to provide a
concise summary of the number of passing and failing tests that touch (or do
not touch) each line in the program. Each entry, or row, in a fault spectra
is encoded as a :class:`LineSpectra` object, and represents a line in the
program, and is represented by four numbers: :code:`ep`, :code:`np`,
:code:`ef`, and :code:`nf`.



API Reference
-------------

.. py:module:: bugzoo.core.fileline
.. autoclass:: FileLine()

  .. py:attribute:: num() -> int

    The one-indexed number of the line.

  .. py:attribute:: filename() -> str

    The name of the file to which the line belongs.

.. autoclass:: FileLineSet()

  .. automethod:: __contains__
  .. automethod:: __iter__

.. py:module:: bugzoo.core.coverage
.. autoclass:: TestCoverage()

.. autoclass:: TestSuiteCoverage()

  .. autoattribute:: files

  .. automethod:: __getitem__
  .. automethod:: file

.. py:module:: bugzoo.core.spectra
.. autoclass:: Spectra()

  .. automethod:: __iter__
  .. automethod:: __getitem__

.. autoclass:: LineSpectra()

  .. py:attribute:: ep() -> int
  .. py:attribute:: np() -> int
  .. py:attribute:: ef() -> int
  .. py:attribute:: nf() -> int
