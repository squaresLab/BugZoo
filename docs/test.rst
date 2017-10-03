Test
====
.. py:module:: repairbox.test


Test reference
-------------------

.. autoclass:: TestCase()

  .. autoattribute:: identifier

  .. automethod:: __eq__
  .. automethod:: __repr__

.. autoclass:: TestOutcome()

  .. autoattribute:: response
  .. autoattribute:: passed
  .. autoattribute:: duration

.. autoclass:: TestHarness()

  .. automethod:: from_dict

  .. autoattribute:: tests
