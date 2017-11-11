`tool` commands
...................

The `tool` commands are used to manage the installation of tools
on the local machine.


`tool list [-q] [--installed|--uninstalled]`
--------------------------------------------

Produces a list of all tools that are registered with the local RepairBox
installation. Optional flags can be used to filter out (un)installed tools
(i.e.., :code:`--installed`, :code:`--uninstalled`), or to produce an
unannotated list of artefacts (:code:`-q`).

.. code-block:: bash

  $ repairbox tool list


  Tool     Source                                    Installed?
  -------  ----------------------------------------  ------------
  genprog  https://bitbucket.org/ChrisTimperley/GP3  Yes


`tool install [-q] {name}`
--------------------------

Installs a given tool to the local machine by installing its Docker image
and the Docker images for its dependencies, if any. This command will
attempt to install the tool by downloading a prebuilt image from DockerHub;
if no such image is available, the image will be built locally instead.

If the tool has already been installed to the machine, this command will
simply do nothing and exit with code :code:`0`. Newer versions of the tool
can be installed using :code:`tool build -f` or :code:`tool download -f`.
**(TODO: versioning is still a bit tricky -- it's not super important for now.)**

.. code-block:: bash

  $ repairbox tool install genprog
  ...

By default, this command produces detailed information when downloading or
building the tool; this behaviour can be disabled by supplying the :code:`-q`
flag.


`tool uninstall [-f] {name}`
----------------------------

Uninstalls the Docker image associated with a given tool.

.. code-block:: bash

  $ repairbox tool uninstall genprog
  ...

The :code:`-f` flag can be used to force the uninstallation of a tool,
regardless of whether or not it is running, causing any containers using
that artefact to abruptly terminate -- **use at your own risk**.


`tool build [-f] {name}`
------------------------

Attempts to build the Docker image associated with a given tool. If an image
for the tool is already installed to the local machine, the request to build
will simply be ignored. Passing the `-f` flag will force the image to be
rebuilt.

.. code-block:: bash

  $ repairbox tool build genprog
  ...


`tool download [-f] {name}`
---------------------------

Attempts to download a prebuilt Docker image from DockerHub for a given tool.
If an image for the tool already exists on the local machine, then,
by default, the download request will be ignored (regardless of whether the
remote image is older or newer than the local image). Passing the `-f` flag will
override this default behaviour and force RepairBox to download the image
from DockerHub, overwriting the existing image.

.. code-block:: bash

  $ repairbox tool download genprog
  ...


`tool upload {name}`
--------------------

Uploads the Docker image for a given tool from the local machine to DockerHub.
Requires that the image has been built, and that the user is logged into
DockerHub (via :code:`docker login`) and has the necessary permissions to push
to the DockerHub repository for the image.

.. code-block:: bash

  $ repairbox tool upload genprog
  ...

This command should be used by tools maintainers to conveniently push the
images for their tools to DockerHub, allowing others to quickly and
conveniently download them using :code:`tool download`.
