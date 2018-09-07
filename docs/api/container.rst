Creating Containers
===================
.. py:module:: bugzoo.core.container

BugZoo uses Docker containers to provide a controlled, sandbox for interacting
with historical software bugs. Individual containers in BugZoo are represented
as :class:`Container` instances. All interaction with containers, including
their creation and destruction, is managed through the :class:`ContainerManager`
class, exposed by the client's :code:`containers` property
(e.g., :code:`client.containers`).

Discuss need to destroy containers.


API Container
-------------

.. autoclass:: Container()

  .. autoattribute:: id() -> str
  .. autoattribute:: bug() -> str
  .. autoattribute:: tools() -> List[str]

  .. automethod:: to_dict
  .. automethod:: from_dict
