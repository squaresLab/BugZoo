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

  $ mkdir dir-foo
  $ bugzoo source add my-plugin-source dir-foo

Describe how Git repos are stored and updated locally.

How sources are scanned for contents
------------------------------------
