`container` commands
....................

The `container` command group can be used to manage the creation and
destruction of containers, and to inspect and interact with running containers.


`container launch [-v HOST:CONTAINER] {artefact}`
-------------------------------------------------

Provisions an ephemeral container for a given artefact and drops the user into
an interactive shell (bash) inside that container. After exiting the shell, the
container will be destroyed.

.. code-block:: bash

  $ repairbox container launch artefact manybugs:python:69223-69224


`container list [-q]`
---------------------

**(TODO: This command has yet to be implemented.)**

Produces a pretty-printed list of all running RepairBox containers:

.. code-block:: bash

  $ repairbox container list

Passing the optional `-q` flag will produce an unannotated list of
unique identifiers used by running RepairBox containers, as shown below.

.. code-block:: bash

  $ repairbox container list -q
  my-custom-named-container
  f153bda0
