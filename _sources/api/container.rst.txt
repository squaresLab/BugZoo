Creating Containers
===================
.. py:module:: bugzoo.core.container

BugZoo uses Docker containers to provide a controlled, sandbox for interacting
with historical software bugs. Individual containers in BugZoo are represented
as :class:`Container` instances. All interaction with containers, including
their creation and destruction, is managed through the :class:`ContainerManager`
class, exposed by the client's :code:`containers` property
(e.g., :code:`client.containers`).

To provision (i.e., create) a container for a given bug:

.. code-block:: python

  bug = client.bugs['manybugs:python:69223-69224']
  container = client.containers.provision(bug)

To iterate over the unique identifiers (UIDs) of the containers associated with
a given BugZoo instance and to fetch a container by its UID:

.. code-block:: python

  for uid in client.containers:
    container = client.containers[uid]

To check whether the underlying Docker container for a given :class:`Container`
is still alive:

.. code-block:: python

  client.containers.is_alive(container)

Note that containers will not be automatically destroyed when their
corresponding :class:`Container` instance goes out of scope. Containers must
be explicitly destroyed via the :class:`ContainerManager` as follows:

.. code-block:: python

  del client.containers[container.uid]

All containers created by a BugZoo server will be automatically destroyed when
the server closes.


API Reference
-------------

.. autoclass:: Container()

  .. autoattribute:: id() -> str
  .. autoattribute:: bug() -> str
  .. autoattribute:: tools() -> List[str]

  .. automethod:: to_dict
  .. automethod:: from_dict

.. py:module:: bugzoo.client.container
.. autoclass:: ContainerManager()

  .. automethod:: __getitem__
  .. automethod:: __delitem__
  .. automethod:: __contains__
  .. automethod:: __iter__

  .. automethod:: provision
  .. automethod:: is_alive
