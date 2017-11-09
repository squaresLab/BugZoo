`source` commands
.................

The `source` commands are used to add, remove, and list sources of artefacts
that are known to RepairBox.

`source list`
-------------

Produces a pretty-printed list of all sources registered with RepairBox.

.. code-block:: bash

  $ repairbox source list

  - https://github.com/squaresLab/ArduBugs
  - https://github.com/ChrisTimperley/ManyBugs
  ...


The :code:`-q` flag can be used to disable pretty printing, allowing the output
to be piped to other commands.

.. code-block:: bash

  $ repairbox source list
  https://github.com/squaresLab/ArduBugs
  https://github.com/ChrisTimperley/ManyBugs
  ...


`source add {url}`
------------------

Registers a source, given by the URL of a remote Git repository, with the local
machine. All artefacts associated with the source will be registered with the
machine, allowing them to be installed and executed.

.. code-block:: bash

  $ repairbox source add https://github.com/squaresLab/ArduBugs
  added source: https://github.com/squaresLab/ArduBugs
  ...


`source remove {url}`
---------------------

Deregisters a source, given by the URL of its remote Git repository, with the
local machine. After executing this command, all artefacts associated with the
source will be uninstalled and delisted.

.. code-block:: bash

  $ repairbox source remove https://github.com/squaresLab/ArduBugs
  removed source: https://github.com/squaresLab/ArduBugs
  ...


`source update [url]`
---------------------

This command can be used to update the manifest files for all artefacts
provided by all sources registered with RepairBox, as shown below. Note that
this command does not attempt to install any updated versions of its
artefacts.

.. code-block:: bash

  $ repairbox source update

  TODO
  ...

Optionally, the URL associated with a given source can be provided to
restrict the update to the artefacts associated with that source.

.. code-block:: bash

  $ repairbox source update https://github.com/squaresLab/ArduBugs

  TODO
  ...
