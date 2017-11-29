`container` commands
....................

The `container` command group can be used to manage the creation and
destruction of containers, and to inspect and interact with running containers.


`container launch [--name NAME] [-v HOST:CONTAINER] [--with TOOL] {bugs}`
-----------------------------------------------------------------------------

Provisions an ephemeral container for a given bug and drops the user into
an interactive shell (bash) inside that container. After exiting the shell, the
container will be destroyed.

.. code-block:: bash

  $ bugzoo container launch manybugs:python:69223-69224

The :code:`--name` flag is used to assign an optional name to the container,
making it easier to refer to and interact with using the other commands within
the :code:`container` group.

.. code-block:: bash

  $ bugzoo container launch  --name pybug \
                             manybugs:python:69223-69224

The :code:`-v` flag is used to share and persist files between the host
and the container (using Docker's volume mounting feature). To share files,
users should pass :code:`host_path:container_path` to the :code:`-v` flag,
where :code:`host_path` is the (absolute) path of the file (or directory) on
the host machine, and :code:`container_path` is the (absolute) path of the
file (or directory) at which the host's file should be mounted. If the given
directory does not exist (for either the host or the container), an empty
directory will be automatically created.

.. code-block:: bash

  $ bugzoo container launch  -v ${PWD}/db:/opt/db \
                             manybugs:python:69223-69224

Multiple directories may be mounted inside a single container by passing
multiple instances of the :code:`-v` flag.

The :code:`--with` flag is used to mount a named tool into the container.
For example, the following command mounts the :code:`genprog` tool inside
a container for one of the ManyBugs bugs:

.. code-block:: bash

  $ bugzoo container launch --with genprog \
                            manybugs:python:69223-69224

Like the :code:`-v` flag, the :code:`--with` flag can be used multiple times
to mount more than one tool inside the container as shown below.

.. code-block:: bash

  $ bugzoo container launch  --with genprog \
                             --with gcovr \
                             manybugs:python:69223-69224


`container list [-q]`
---------------------

**(TODO: This command has yet to be implemented.)**

Produces a pretty-printed list of all running BugZoo containers:

.. code-block:: bash

  $ bugzoo container list

Passing the optional :code:`-q` flag will produce an unannotated list of
unique identifiers used by running BugZoo containers, as shown below.

.. code-block:: bash

  $ bugzoo container list -q
  my-custom-named-container
  f153bda0
