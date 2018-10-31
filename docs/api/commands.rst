Executing Commands
==================
.. py:module:: bugzoo.client.container

The :class:`ContainerManager` may also be used to send arbitrary shell
commands to its containers via its :code:`exec` method, shown below.

.. code:: python

  outcome = client_bugzoo.containers.exec(container,
                                          command,
                                          context,
                                          stdout=True,
                                          stderr=False,
                                          time_limit=300)

A concise description of the outcome of the command execution is returned
in the form of a :class:`ExecResponse` object.


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
