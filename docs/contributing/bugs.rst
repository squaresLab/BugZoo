Adding a bug
============

In this section, we provide instructions for adding a new historical bug
to the BugZoo platform.

.. note::

  Before adding a bug, you must first `create a source that will
  provide it <source.html>`_. Note that a source may provide multiple bugs
  and tools. Typically, a source is used to provide a dataset of bugs.

3. Defining the artefacts
-------------------------

Artefacts are added to the dataset using artefact manifest files
(`*.artefact.yml`). Artefact manifest files are identified by a `.artefact.yml` suffix,
and provide instructions on how to build and interact with a particular
software artefact.

An example artefact manifest file is given below. For more details on the
manifest file format, see LINK.

.. code-block:: yaml

  version: '1.0'
  tag: 69223-69224
  program: python
  language: c
  source-location: /experiment/src
  test-harness:
    failing: 1
    passing: 284
    time-limit: 600
    type: genprog
  compilation:
    command: make -j$(nproc)
    context: /experiment/src
    time-limit: 300
  docker:
    tag: squareslab/manybugs:python-69223-69224
    file: Dockerfile.bug
    depends-on: squareslab/manybugs:python
    build-arguments:
      scenario: python-bug-69223-69224


Note that artefact manifest files are allowed to appear anywhere in the
repository. RepairBox will recursively scan the files in the repository to
locate its artefacts (after which it will cache the results, until the source
is updated). Paths provided as part of the `docker` property are assumed to be
relative to the location of the artefact manifest file.

4. Defining the dependencies
----------------------------

Dependency manifest files can be used to provide instructions for building
shared base images. Dependency manifest files are identified by a
`.dependency.yml` suffix, and, like artefact manifests, they may appear
anywhere in the repository.

An example dependency manifest file is given below.


.. code-block:: yaml

  version: '1.0'
  docker:
    tag: squareslab/ardubugs:base
    file: Dockerfile
    context: .


The example dependency manifest file above uses the `Dockerfile` located in
the same directory as the file to build a Docker image with the tag
`squareslab/ardubugs:base`.
