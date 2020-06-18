Creating a Client
=================

The :class:`Client` class acts as the means of communicating with a BugZoo
server over via its RESTlike API. The client provides a uniform interface
for accessing and interacting with the bugs, tools and containers running
on the server.

A :class:`Client` instance may be created to establish a connection to
a given server, as shown below. Note that the server needn't be local;
:class:`Client` can be used to connect to remote BugZoo servers (that may be
hosted on a cloud compute platform, such as Amazon EC2, for instance).

.. code-block:: python

  import bugzoo

  url = "http://127.0.0.1:6060"
  client = bugzoo.Client(url)

:class:`Client` instances can be used to access the resources provided by a
BugZoo server (i.e., bugs, containers, and tools). The :code:`bugs` property
exposes a :class:`BugManager`, which provides access to the bugs registered
on the server. The :code:`containers` property exposes a
:class:`ContainerManager`, which can be used to create, destroy, and interact
with containers on the server. The :code:`files` property exposes a
:class:`FilesManager`, which provides a simple interface for manipulating
container file systems (i.e., reading and writing files) and copying files
between the host and container.

API Reference
-------------

.. py:module:: bugzoo.client
.. autoclass:: Client()

  .. automethod:: __init__

  .. autoattribute:: bugs() -> BugManager
  .. autoattribute:: containers() -> ContainerManager
  .. autoattribute:: files() -> FileManager

  .. automethod:: shutdown
