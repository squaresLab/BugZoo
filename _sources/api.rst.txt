Python API
----------

BugZoo provides a powerful set of Python bindings for its RESTlike API. The
Python API is intended to be used as a library when building your own tools
(e.g., for program repair, mutation testing, and test generation), or for
simply when a better, well-structured means of interacting with historical
software bugs is needed to conduct an empirical study.

The REST bindings provided in the Python API expect to connect to a running
BugZoo server. The BugZoo server can be launched from the command line using
the :code:`bugzood` executable, as shown below. For more information about the
options accepted by :code:`bugzood`, please consult :code:`bugzood --help`.

.. code-block:: bash

  $ bugzood -p 8080

An *ephemeral server* may also be launched from the Python API via
:meth:`bugzoo.server.ephemeral`, as shown below. The server will be closed
(and its associated resources deallocated) upon the destruction of the
context (i.e., after the :code:`with` statement).

.. code-block:: python

  with bugzoo.server.ephemeral(port=8080) as client_bugzoo:
    # do cool things

To learn more about connecting to and interacting a BugZoo server, please
see the links below.

.. toctree::
  :maxdepth: 1

  api/client
  api/bug
  api/container
  api/commands
  api/test
  api/patch
  api/coverage
  api/applications
  api/exceptions
