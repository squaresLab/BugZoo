`container` commands
....................

The `container` command group can be used to manage the creation and
destruction of containers, and to inspect and interact with running containers.


`container launch [-v HOST:CONTAINER] [--with TOOL] {artefact}`
---------------------------------------------------------------

Provisions an ephemeral container for a given artefact and drops the user into
an interactive shell (bash) inside that container. After exiting the shell, the
container will be destroyed.

.. code-block:: bash

  $ repairbox container launch manybugs:python:69223-69224

The :code:`-v` flag is used to share and persist files between the host
and the container (using Docker's volume mounting feature).

The :code:`--with` flag is used to mount a named tool into the container.
For example, the following command mounts the :code:`genprog` tool inside
a container for one of the ManyBugs artefacts:

.. code-block:: bash

  $ repairbox container launch --with genprog manybugs:python:69223-69224

Like the :code:`-v` flag, the :code:`--with` flag can be used multiple times
to mount more than one tool inside the container as shown below.

.. code-block:: bash

  $ repairbox container launch --with genprog --with gcovr manybugs:python:69223-69224


`container list [-q]`
---------------------

**(TODO: This command has yet to be implemented.)**

Produces a pretty-printed list of all running RepairBox containers:

.. code-block:: bash

  $ repairbox container list

Passing the optional :code:`-q` flag will produce an unannotated list of
unique identifiers used by running RepairBox containers, as shown below.

.. code-block:: bash

  $ repairbox container list -q
  my-custom-named-container
  f153bda0
