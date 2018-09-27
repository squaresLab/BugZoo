File Format (v1.0)
==================

In this section, we describe the file format of BugZoo manifest files, which
are used by sources to describe snapshots (i.e., historical, and possibly
defective, software versions), datasets of snapshots (e.g., ManyBugs and
IntroClass), and plugins.

Manifest files must be written in YAML, and should be named with a
:code:`.bugzoo.yml` suffix (e.g., :code:`my-manifest.bugzoo.yml`).

At the top level, manifest files should look as follows:

.. code-block:: yaml

  version: "1.0"

  blueprints:
    ...

  bugs:
    ...

  plugins:
    ...

where :code:`version` specifies the version of the manifest file format
that was used to write the file, :code:`blueprints` provides instructions for
building individual Docker images, :code:`bugs` defines snapshots, and
:code:`plugins` defines plugins. :code:`blueprints`, :code:`bugs`,
and :code:`plugins` are optional sections and each is described as a list.

Blueprints
----------

The :code:`blueprints` section provides a list of *blueprints*, each of which
encodes instructions for building an individual Docker image. Below, we give an
example of a :code:`blueprints` section containing a single blueprint for
building the Docker image for a PHP scenario from the ManyBugs dataset.


.. code-block:: yaml

  - tag: squareslab/manybugs:php-2011-04-06-18d71a6f59-187eb235fe
    file: Dockerfile
    context: .
    depends-on: squareslab/manybugs:php
    arguments:
      autoconf: "2.59"
      bison: "2.4.3"
      bug_revision: "18d71a6f59"
      fix_revision: "187eb235fe"
      scenario: "php-bug-2011-04-06-18d71a6f59-187eb235fe"


Below, we discuss each of the properties used to describe a blueprint:

* The :code:`tag` property gives the fully qualified name of the Docker image.
* The :code:`file` property gives the path of the :code:`Dockerfile` that
  should be used to construct the Docker image, relative to the location of
  the manifest file. If omitted, :code:`file` will default to
  :code:`Dockerfile`.
* The :code:`context` property specifies the directory that should be used to
  provide the build context to Docker. If omitted, :code:`context` will
  default to :code:`.` (i.e., the directory that provides the manifest file).
* The :code:`arguments` property optionally provides a dictionary of
  build-time arguments that are supplied to Docker when constructing the
  image.
* The :code:`depends-on` property optionally specifies the name of the Docker
  image, if any, that the Docker image described by the blueprint relies on.

Bugs
----


Plugins
-------
