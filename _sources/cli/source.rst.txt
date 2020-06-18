`source` commands
.................

The `source` commands are used to add, remove, and list *sources* that are
known to BugZoo. Sources are used to represent remote Git repositories
that are responsible for providing a particular dataset of bugs, or
a tool that is compatible with the BugZoo platform.


`source list`
-------------

Produces a pretty-printed list of all sources registered with BugZoo.

.. code-block:: bash

  $ bugzoo source list

  Source                                      Version
  ------------------------------------------  ---------
  https://github.com/squaresLab/ManyBugs      597b917f
  https://github.com/squaresLab/genprog-code  0c5d9255
  ...


The :code:`-q` flag can be used to disable pretty printing, allowing the output
to be piped to other commands.

.. code-block:: bash

  $ bugzoo source list -q
  https://github.com/squaresLab/ManyBugs
  https://github.com/squaresLab/genprog-code
  ...


`source add {url}`
------------------

Registers a source, given by the URL of a remote Git repository, with the local
machine. The dataset of artefacts or the tool associated with the source will
be registered with the machine, allowing it to be installed and executed.

.. code-block:: bash

  $ bugzoo source add https://github.com/squaresLab/ArduBugs
  added source: https://github.com/squaresLab/ArduBugs
  ...


`source remove {url}`
---------------------

Deregisters a source, given by the URL of its remote Git repository, with the
local machine. After executing this command, the dataset of bugs or the
tool associated with the source will be uninstalled and delisted.

.. code-block:: bash

  $ bugzoo source remove https://github.com/squaresLab/ArduBugs
  removed source: https://github.com/squaresLab/ArduBugs
  ...


`source update`
---------------------

This command can be used to update the files used to specify and construct the
the bugs or tool, provided by their associated sources, as shown below.
Note that this command does not attempt to install/rebuild the bugs
or tool associated with each source -- it is the user's responsibility to call
`tool install` or `bug install` where appropriate.

.. code-block:: bash

  $ bugzoo source update
  updating sources...
  ...
