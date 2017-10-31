`container` commands
....................

The `container` command group can be used to manage the creation and
destruction of containers, and to inspect and interact running containers.

`container launch {artefact}`
-----------------------------

`container list [-q]`
---------------------

Produces a pretty-printed list of all running RepairBox containers:

.. code-block:: bash

  $ repairbox container list

Passing the optional `-q` flag will produce an unannotated list of
unique identifiers used by running RepairBox containers, as shown below.

.. code-block:: bash

  $ repairbox container list -q
  my-custom-named-container
  f153bda0
