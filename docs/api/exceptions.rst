Exceptions
==========
.. py:module:: bugzoo.exceptions

All of BugZoo's exceptions inherit from the :class:`BugZooException` class,
making it easier to catch errors that are related to BugZoo within your
application.

.. code-block:: python

  from bugzoo.exceptions import BugZooException

  try:
    an_operation_involving_bugzoo()
  except BugZooException:
    print("an error occurred in BugZoo")
    raise
  except Exception:
    print("an error occurred that was unrelated to BugZoo")
    raise


Reference
---------

.. autoclass:: BugZooException()

.. autoclass:: ConnectionFailure()

.. autoclass:: NameInUseError()
.. autoclass:: ImageBuildFailed()
.. autoclass:: ImageNotInstalled()
.. autoclass:: ImageAlreadyExists()
.. autoclass:: FileNotFound()
.. autoclass:: ArgumentNotSpecified()

.. autoclass:: BadManifestFile()

.. autoclass:: UnexpectedResponse()
.. autoclass:: UnexpectedServerError()
.. autoclass:: UnexpectedStatusCode()

.. autoclass:: BugNotFound()
.. autoclass:: BugAlreadyExists()
.. autoclass:: BugAlreadyBuilt()
.. autoclass:: BugNotInstalledError()

.. autoclass:: SourceNotFoundWithURL()
.. autoclass:: SourceNotFoundWithName()
.. autoclass:: SourceAlreadyRegisteredWithURL()

.. autoclass:: FailedToComputeCoverage()

.. autoclass:: ContainerNotFound()

.. autoclass:: TestNotFound()
