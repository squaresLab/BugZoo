Creating Containers
===================
.. py:module:: bugzoo.core.container


Discuss manager interaction.

Discuss need to destroy containers.


API Container
-------------

.. autoclass:: Container()

  .. autoattribute:: id() -> str
  .. autoattribute:: bug() -> str
  .. autoattribute:: tools() -> List[str]

  .. automethod:: to_dict
  .. automethod:: from_dict
