Adding a bug
============

In this section, we provide instructions for adding a new historical bug
to the BugZoo platform.

.. note::

  Before adding a bug, you must first `create a source that will
  provide it <source.html>`_. Note that a source may provide multiple bugs
  and tools. Typically, a source is used to provide a dataset of bugs.

Creating a manifest file
------------------------

To begin with, we need to create a YAML-formatted
`manifest file <../file-format.html>`_ to provide the bug.
Alternatively, we can extend an existing manifest file with the necessary
information for the bug. For the rest of this example, we will create a new
manifest file, named :code:`mybug.bugzoo.yml`. The top of the file should
specify the version of the BugZoo Manifest File Format that was used to
write the file. For this example, we will be using version :code:`1.0`:

.. code-block:: yaml

  version: '1.0'

Writing a Dockerfile
--------------------

Next, we need to write a :code:`Dockerfile` that will be used to
provide a Docker container image for the buggy program. The Docker container
for the buggy program is responsible for providing a minimal execution
environment for building the program and running its tests. For general
tips on writing Dockerfiles, see **LINK**.

Below, we give an example of a :code:`Dockerfile` for the :code:`gcd` bug
from the GenProg TSE 2012 dataset.

.. code-block:: docker

  FROM cool

Registering a blueprint
-----------------------

Registering a bug
-----------------

