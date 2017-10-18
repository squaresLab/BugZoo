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

  $ repairbox list-artefacts

  Artefact                                        Dataset    Source                                      Installed?
  ----------------------------------------------  ---------  ------------------------------------------  ------------
  ardubugs:copter:2e6b6e4                         ardubugs   https://github.com/squaresLab/ArduBugs      No
  ardubugs:copter:cb1b9b6                         ardubugs   https://github.com/squaresLab/ArduBugs      No
  ardubugs:copter:766ccea                         ardubugs   https://github.com/squaresLab/ArduBugs      No
  ardubugs:copter:bd0229b                         ardubugs   https://github.com/squaresLab/ArduBugs      No
  ardubugs:copter:aa98531                         ardubugs   https://github.com/squaresLab/ArduBugs      No
  ardubugs:copter:9f59f27                         ardubugs   https://github.com/squaresLab/ArduBugs      No
  ...

  $ repairbox list-artefacts -q
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

  $ repairbox install-artefact ardubugs:copter:2e6b6e4
  ...

Produces exit code zero if the bug is successfully installed or
was already installed, or exit code one if the installation failed.

`artefact uninstall [-f] {identifier}`
--------------------------------------

.. code-block:: bash

  $ repairbox uninstall-artefact ardubugs:copter:2e6b6e4
  ...

The :code:`-f` flag can be used to force the uninstallation of an artefact,
regardless of whether or not it is running, causing any containers using
that artefact to abruptly terminate -- **use at your own risk**.
