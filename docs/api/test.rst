Test
====
.. py:module:: bugzoo.test


Give an example of how to run a test.


API reference
-------------

.. autoclass:: TestCase()

  .. autoattribute:: identifier

  .. automethod:: __eq__
  .. automethod:: __repr__

.. autoclass:: TestOutcome()

  .. autoattribute:: response
  .. autoattribute:: passed
  .. autoattribute:: duration

.. autoclass:: TestSuite()

  .. autoattribute:: tests


Test harnesses
--------------

.. autoclass:: SimpleTestSuite()

  .. automethod:: command

.. autoclass:: GenProgTestSuite()

  .. autoattribute:: num_passing
  .. autoattribute:: num_failing
  .. autoattribute:: time_limit
