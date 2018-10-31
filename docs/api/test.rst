Running Tests
=============
.. py:module:: bugzoo.core.test


BugZoo's Python API provides an interface for executing the individual test
cases belonging to the test suite for a particular bug.
The :code:`tests` property of a :class:`Bug` provides access to its
:class:`TestSuite`. The code snippet below provides an example of executing
each of the tests contained within a :class:`TestSuite`. The outcome of a
test execution is provided as a :class:`TestOutcome` object.


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

  .. py:attribute:: name() -> str

      The unique name of the test case.

  .. py:attribute:: oracle() -> TestCaseOracle

      The oracle used by this test case.

  .. py:attribute:: time_limit() -> int

      The maximum number of seconds that an execution of this test case is
      allowed before it is terminated and considered a failure.

  .. py:attribute:: command() -> str

      The shell command that is used to execute this test case.

  .. py:attribute:: context() -> str

      The absolute path of the directory in which the shell command for this
      test case should be executed.

  .. py:attribute:: expected_outcome() -> Optional[bool]

      An optional flag that specifies whether or not an execution of this test
      case is expected to succeed for its corresponding bug. Used to indicate
      test cases that are expected to fail. Set to :code:`True` if the test
      case is expected to pass, :code:`False` if it is expected, and
      :code:`None` if its expected outcome is unknown.

  .. py:attribute:: kill_after() -> int

      Upon reaching the time limit, the process inside the container that is
      responsible for a particular test execution is sent to a :code:`SIGTERM`
      signal to instruct it to terminate cleanly. :code:`kill_after` specifes
      the number of seconds that may pass before a :code:`SIGKILL` signal is
      sent to the process. Note that :code:`SIGTERM` is used to ensure that
      any coverage information is flushed to disk before the command is
      terminated.

.. autoclass:: TestCaseOracle()

  .. automethod:: check

.. autoclass:: TestOutcome()

  .. py:attribute:: passed() -> bool

    A flag indicating whether or not the test execution succeeded (as
    determined by its oracle).

  .. py:attribute:: duration() -> float

    The duration of the test execution, measured in seconds.

.. autoclass:: TestSuite()
  :members:

  .. automethod:: __iter__
  .. automethod:: __getitem__
