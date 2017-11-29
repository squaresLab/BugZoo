`bug` commands
...................

The `bug` command group is used to manage the installation of bugs
on the local machine.


`bug list [-q] [--installed|--uninstalled]`
------------------------------------------------

Produces a list of all bugs provided by sources registered with your
local RepairBox installation. Optional flags can be used to filter the contents
of the list (e.g., :code:`--installed`, :code:`--uninstalled`), or to produce an unannotated
list of bugs (:code:`-q`).

.. code-block:: bash

  $ bugzoo bug list

  Artefact                   Dataset    Installed?
  -------------------------  ---------  ------------
  ardubugs:copter:2e6b6e4    ardubugs   No
  ardubugs:copter:cb1b9b6    ardubugs   No
  ardubugs:copter:766ccea    ardubugs   No
  ardubugs:copter:bd0229b    ardubugs   No
  ardubugs:copter:aa98531    ardubugs   No
  ardubugs:copter:9f59f27    ardubugs   No
  ...

  $ bugzoo bug list -q
  ardubugs:copter:2e6b6e4
  ardubugs:copter:cb1b9b6
  ardubugs:copter:766ccea
  ardubugs:copter:bd0229b
  ardubugs:copter:aa98531
  ardubugs:copter:9f59f27


`bug install [--upgrade] [-q] {identifier}`
------------------------------------------------

Installs a given bug, specified by its identifier.
Internally, this command installs the Docker image for the given bug,
along with any of its dependencies.

To install the bug, this command will attempt to download a
prebuilt Docker for the bug, if one is publicly available on DockerHub; if
no such image is available, the command will build the image (and its
dependencies) locally.

If the bug has already been installed to the machine, this command will
simply do nothing. To force the installation of the latest version of the
bug, either supply the :code:`--upgrade` flag or use the
:code:`bug upgrade` command.

By default, this command produces detailed information when downloading or
building the bug, as shown below. This behaviour can be disabled by
supplying the :code:`-q` flag.

.. code-block:: bash

  $ bugzoo bug install manybugs:python:69934-69935
  installing bug: manybugs:python:69934-69935
  Building image: squareslab/manybugs:python-69934-69935
  Step 1/9 : FROM squareslab/manybugs:python
   ---> 9f2dd23f670c
  Step 2/9 : ARG scenario
   ---> Using cache
   ---> 98c9fcf95b1c
  Step 3/9 : ENV SCENARIO_NAME ${scenario}
  ...

`bug uninstall [-f] {identifier}`
--------------------------------------

Uninstalls the Docker image for a given identifier from the local machine.

.. code-block:: bash

  $ bugzoo bug uninstall ardubugs:copter:2e6b6e4
  ...

The :code:`-f` flag can be used to force the uninstallation of an bug,
regardless of whether or not it is running, causing any containers using
that bug to abruptly terminate -- **use at your own risk**.


`bug build [-f] {identifier}`
----------------------------------

Attempts to locally build the Docker image for a given bug.

.. code-block:: bash

  $ bugzoo bug build ardubugs:copter:2e6b6e4
  ...

By default, this command will be ignored if a version of the image already
exists on the local machine. The :code:`-f` flag can be used to override
this behaviour, forcing RepairBox to rebuild the image for the bug
and to overwrite the existing image.


`bug download [-f] {identifier}`
-------------------------------------

Downloads a prebuilt Docker image from DockerHub for a given bug if such
an image exists. If the bug is already installed to the local machine,
this command will do nothing, by default. Supplying a :code:`-f` flag will
force RepairBox to download the bug's image from DockerHub regardless of
whether the image is already installed or the remote image is older than the
image installed to the local machine.

.. code-block:: bash

  $ bugzoo bug download manybugs:python:69223-69224
  ...

If your internet connection is good, this command is great for quickly fetching
images for bugs, but in some cases, where internet connectivity is poor
or the prebuilt image is particularly large, it may be faster to use the
:code:`bug build` command.


`bug upload {identifier}`
------------------------------

Attempts to upload the image for a given bug from the local machine to
DockerHub. Requires that the user is logged into DockerHub
(via :code:`docker login`) and has permission to push to the DockerHub
repository for that bug, and that the image is installed on the local
machine.

.. code-block:: bash

  $ bugzoo bug upload manybugs:python:69223-69224
  ...

This command should only be used by bug maintainers to conveniently
upload their images (instead of having to manually perform hundreds of
:code:`docker push` commands.


`bug validate {identifier}`
--------------------------------

Validates the quality of a given bug by ensuring thats
associated Docker image can be built from scratch successfully, that the source
code for the software contained within the bug compiles successfully, and
that its test suite produces an expected set of outcomes.

.. code-block:: bash

  $ bugzoo bug validate manybugs:python:69223-69224
  Compiling...                                                                [OK]
  Running test: p1...                                                         [OK]
  Running test: p2...                                                         [OK]
  Running test: p3...                                                         [OK]
  Running test: p4...                                                         [OK]
  Running test: p5...                                                         [OK]
  Running test: p6...                                                         [OK]
  Running test: p7...                                                         [OK]
  ...
  PASS
