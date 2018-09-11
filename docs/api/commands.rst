Executing Commands
==================
.. py:module:: bugzoo.client.container


API Reference
-------------

.. autoclass:: ContainerManager()

  .. automethod:: exec

.. py:module:: bugzoo.cmd

.. autoclass:: ExecResponse()

  .. autoattribute:: code() -> int
  .. autoattribute:: duration() -> float
  .. autoattribute:: output() -> str

  .. automethod:: to_dict
  .. automethod:: from_dict
