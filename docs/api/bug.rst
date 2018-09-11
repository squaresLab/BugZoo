Managing Bugs
=============
.. py:module:: bugzoo.core.bug

BugZoo packages historical software versions as lightweight, immutable
`Docker <https://www.docker.com>`_ container images. The bugs registered with
a BugZoo server may be accessed via the the BugZoo client's :code:`bugs`
property, which exposes a :class:`BugManager`. Each bug is represented by an
immutable :class:`Bug` instance. The :code:`[]` operator may be used to fetch
a :class:`Bug` instance for a bug with a given name.
The names of all of the bugs registered with the server can be accessed by
iterating over the :class:`BugManager`, as shown below.

.. code-block:: python

  for name in client_bugzoo.bugs:
    bug = client_bugzoo.bugs[name]  # type: Bug

The :class:`BugManager` can be used to build Docker images for bugs according
to the instructions provided in the bug's manifest:

.. code-block:: python

  bug = client_bugzoo.bugs['manybugs:python:69223-69224']
  client_bugzoo.bugs.build(bug)

Alternatively, prebuilt images may be downloaded from DockerHub via the
:code:`download` method:

.. code-block:: python

  client_bugzoo.bugs.download(bug)

The :class:`BugManager` may also be used to instruct the BugZoo server to
uploaded the Docker image for a given scenario to DockerHub:

.. code-block:: python

  client_bugzoo.bugs.upload(bug)

Docker images may be removed from the server by using the :code:`uninstall`
method:

.. code-block:: python

  client_bugzoo.bugs.uninstall(bug)

The :code:`is_installed` method may be used to determine whether the Docker
image for a given bug has been installed onto the server:

.. code-block:: python

  if client_bugzoo.bugs.is_installed(bug):
    print("the image is installed! :-)")
  else:
    print("the image is not installed :'(")

The :class:`BugManager` may also be used to dynamically register ephemeral
:class:`Bug` descriptions. Once the server is closed, these descriptions will
be destroyed. In general, we suggest that users register bugs with the server
via the command-line interface. However, there are cases where a dynamic
bug registration is preferable, such as mutation testing, where a new
:class:`Bug` instance can be created for every mutation.

.. code-block:: python

  bug = Bug(name="mytemporarybug", ...)
  client_bugzoo.bugs.register(bug)

Bugs may also be dynamically deregistered via the :code:`del` operator, as
shown below. Note that the :code:`del` operator will not permanently remove
bugs that are associated with a source (i.e., bugs that have been added via
the command line). In the case of such bugs, the :code:`del` operator will
hide their existence for the remaining lifetime of the server.

.. code-block:: python

  del client_bugzoo.bugs["mytemporarybug"]


API Reference
-------------

.. autoclass:: Bug()

  .. autoattribute:: name() -> str
  .. autoattribute:: image() -> str
  .. autoattribute:: source_dir() -> str
  .. autoattribute:: harness() -> TestSuite
  .. autoattribute:: tests() -> List[TestCase]
  .. autoattribute:: languages() -> List[Language]

  .. autoattribute:: dataset() -> Optional[str]
  .. autoattribute:: program() -> Optional[str]
  .. autoattribute:: source() -> Optional[str]

  .. autoattribute:: files_to_instrument() -> List[str]


.. py:module:: bugzoo.client.bug

.. autoclass:: BugManager()

  .. automethod:: __getitem__
  .. automethod:: __iter__

  .. automethod:: is_installed
  .. automethod:: build
  .. automethod:: download
  .. automethod:: uninstall
  .. automethod:: upload

  .. automethod:: register
