Command-Line Interface
======================

`artefact` commands
...................

The `artefact` command group is used to manage the installation of artefacts
on the local machine.


`artefact list [-q] [--installed|--uninstalled]`
------------------------------------------------

Produces a list of all artefacts provided by sources registered with your
local RepairBox installation. Optional flags can be used to filter the contents
of the list (e.g., :code:`--installed`, :code:`--uninstalled`), or to produce an unannotated
list of artefacts (:code:`-q`).

.. code-block:: bash

  $ repairbox artefact list

  Artefact                                        Dataset    Source                                      Installed?
  ----------------------------------------------  ---------  ------------------------------------------  ------------
  ardubugs:copter:2e6b6e4                         ardubugs   https://github.com/squaresLab/ArduBugs      No
  ardubugs:copter:cb1b9b6                         ardubugs   https://github.com/squaresLab/ArduBugs      No
  ardubugs:copter:766ccea                         ardubugs   https://github.com/squaresLab/ArduBugs      No
  ardubugs:copter:bd0229b                         ardubugs   https://github.com/squaresLab/ArduBugs      No
  ardubugs:copter:aa98531                         ardubugs   https://github.com/squaresLab/ArduBugs      No
  ardubugs:copter:9f59f27                         ardubugs   https://github.com/squaresLab/ArduBugs      No
  ...

  $ repairbox artefact list -q
  ardubugs:copter:2e6b6e4
  ardubugs:copter:cb1b9b6
  ardubugs:copter:766ccea
  ardubugs:copter:bd0229b
  ardubugs:copter:aa98531
  ardubugs:copter:9f59f27


`artefact install [--upgrade] [-q] {identifier}`
------------------------------------------------

Installs a given artefact, specified by its identifier. For a list of artefacts
and their associated identifiers, use :code:`list-artefacts`. Internally, this
command installs the Docker image for the given artefact, along with any of its
dependencies.

To install the artefact, this command will attempt to download a
prebuilt Docker for the artefact, if one is publicly available on DockerHub; if
no such image is available, the command will build the image (and its
dependencies) locally.

If the artefact has already been installed to the machine, this command will
simply do nothing and exit with code :code:`0`. To force the installation of
the latest version of the artefact, either supply the :code:`--upgrade` flag
or use the :code:`artefact upgrade` command.


By default, this command produces detailed information when downloading or
building the artefact, as shown below. This behaviour can be disabled by
supplying the :code:`-q` flag.

.. code-block:: bash

  $ repairbox artefact install ardubugs:copter:2e6b6e4
  ...

Produces exit code zero if the bug is successfully installed or
was already installed, or exit code one if the installation failed.

`artefact uninstall [-f] {identifier}`
--------------------------------------

Uninstalls the Docker image for a given identifier from the local machine.

.. code-block:: bash

  $ repairbox artefact uninstall ardubugs:copter:2e6b6e4
  ...

The :code:`-f` flag can be used to force the uninstallation of an artefact,
regardless of whether or not it is running, causing any containers using
that artefact to abruptly terminate -- **use at your own risk**.

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
