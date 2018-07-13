Obtaining Coverage
==================
.. py:module:: bugzoo.core.coverage

BugZoo's Python API provides a number of uniform, language-independent
interfaces for collecting line coverage information for individual test cases,
entire test suites, and arbitrary executions.

Complete test suite coverage information for a given bug can be obtained in
the form of a :class:`TestSuiteCoverage` object by using
:meth:`client.bugs.coverage`, as shown below. :meth:`client.bugs.coverage`
will attempt to load precomputed coverage data for the given bug from its
on-disk cache; if no coverage data can be found, it will be recomputed from
scratch and saved to disk for future requests.

.. code-block:: python

  bug = client.bugs['manybugs:python:69223-69224']
  coverage = client.bugs.coverage(bug)


API Reference
-------------

.. autoclass:: TestSuiteCoverage()

  .. autoattribute:: files

  .. automethod:: __getitem__
  .. automethod:: file
