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

  with bugzoo.server.ephemeral(port=8080) as client_bugzoo:
    # do cool things


API Reference
-------------
