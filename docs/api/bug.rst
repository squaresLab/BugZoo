Bug
===
.. py:module:: bugzoo.core.bug


Artefacts are used to provide a snapshot of a given piece of
software at a fixed point in time (e.g., a tagged release, a version-control
revision). Outside of BugZoo, artefacts are sometimes referred to as
software objects (see Software-artifact Infrastructure Repository [X]), or
program versions (see XYZ).

In the context of fault localisation, automated program repair, and to some
extent, software testing, artefacts are used to represent buggy versions of
a program (i.e., bugs). For other purposes, such as studies on
(non-functional) performance, artefacts needn't represent a version of the
program that is known to buggy.

Bugs are provided as lightweight, immutable
`Docker <https://www.docker.com>`_ container images. To interact with a
bug, users' must provision an ephemeral `container <container.html>`_
using the bug's :code:`provision` method.


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
