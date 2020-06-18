Adding a source
===============

Sources are used to provide a BugZoo installation with plugins and bugs
in a decentralised manner.
Each source is given a unique name and is supplied to BugZoo as either a local
directory or a remote Git repository. Sources are added via the CLI using the
:code:`bugzoo source add` command. Below is an example of creating a new
source named :code:`my-plugin-source` for a local directory, :code:`dir-foo`.

.. code:: bash

  $ mkdir dir-foo
  $ bugzoo source add my-plugin-source dir-foo

Sources can also be provided to BugZoo in the form of remote Git repositories.
Below is an example of how we create a new source named :code:`ManyBugs` for
the ManyBugs repository on GitHub.

.. code:: bash

  $ bugzoo source add manybugs https://github.com/squaresLab/ManyBugs

Internally, BugZoo will clone the given Git repository to the `sources`
subdirectory of the BugZoo directory (specified by
:code:`$BUGZOO_PATH`, and located at :code:`${HOME}/.bugzoo` by default).
The state of all registered remote repositories can be updated to reflect
changes to the remote repo using :code:`bugzoo source update`:

.. code:: bash

  $ bugzoo source update

To obtain the contents (i.e., bugs and tools) of a source, BugZoo
recursively scans the directory for the source for all of its manifest files,
which are recognised as files that end with :code:`.bugzoo.yml`.
