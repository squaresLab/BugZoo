Running Tests
=============
.. py:module:: bugzoo.core.test


BugZoo's Python API provides an interface for executing the individual test
cases belonging to the test suite for a particular bug.
The :code:`tests` property of a :class:`Bug` provides access to its
:class:`TestSuite`. The code snippet below provides an example of executing
each of the tests contained within a :class:`TestSuite`.


.. code-block:: python

  outcomes = {}  # type: Dict[TestCase, TestOutcome]
  for test in snapshot.tests:
    outcomes[test] = client.containers.test(container, test)


Individual tests can also be fetched using :class:`TestSuite`'s :code:`[]`
operator:


.. code-block:: python

  client.containers.test(container, snapshot.tests["test-foo"])


API Reference
-------------

.. autoclass:: TestCase()
  :members:

.. autoclass:: TestOutcome()

  .. autoattribute:: passed
  .. autoattribute:: duration

.. autoclass:: TestSuite()

  .. autoattribute:: tests
