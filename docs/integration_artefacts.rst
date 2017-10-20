Adding a dataset to RepairBox
=============================

In this section, we describe how to integrate your own dataset of software
artefacts with RepairBox.
**But wait -- why would I want to add my dataset to RepairBox?**
Integrating your dataset allows yourself and others
to use RepairBox to write elegant, reproducible, executable experiment designs
for your empirical studies.


1. Creating a Git repository
----------------------------

RepairBox uses a *decentralised* approach to manage its datasets, akin to the
approach used by package management software (e.g., `apt`, `yum`, `pip`).
Artefacts are supplied by remote *sources*, implemented as Git repositories [#]_.

For instance, the `ArduBugs` dataset is provided by the following repository:
https://github.com/squaresLab/ArduBugs. Users can add new datasets and
artefacts to their machine by using the command-line interfaces'
:code:`source add` command.

So, to begin with, you'll need to create a publicly visible Git repository for your
dataset (if you don't have one already). For the rest of the tutorial, it's
assumed that you know how to create a Git repository. If this isn't the case,
we recommend that you check out some of the tutorials on `GitHub <https://github.com>`_
at https://guides.github.com/activities/hello-world/.


2. Declaring the dataset
------------------------

Now that you've registered your repository as a source, you can start adding
artefacts to it -- right? Not so fast. Before you add artefacts, you'll need to
declare your dataset to RepairBox using a `.repairbox.yml` file. This file is
responsible for giving your dataset a name and providing useful information
about it.

Below is a minimal example of a dataset manifest file (i.e., `.repairbox.yml`).

.. code-block:: yaml

  version: '1.0'
  dataset:
    name: tutorial-bugs


In the example above, the `dataset.name` attribute provides a name for the
model, and the `version` attribute specifies the manifest file version that is
used by the manifest file.


3. Defining the artefacts
-------------------------

Artefacts are added to the dataset using artefact manifest files
(`*.artefact.yml`). Manifest files are identified by a `.artefact.yml` suffix,
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

5. Registering with RepairBox
-----------------------------

Once you've created a Git repository for your dataset, go ahead and register
the repository as a source with your local RepairBox installation:


.. code-block:: bash

  $ repairbox source add https://your-repo-url-goes-here.git


.. [#]  An earlier version of RepairBox used a *centralised* approach to provide
        artefacts. Artefact files were included as part of RepairBox itself,
        and adding new datasets required issuing a pull request to the
        RepairBox Git repository. Our current, *decentralised* approach removes
        this bottleneck and allows users to control their dataset directly.


-------------------------------------------------------------------------------


Best Practices
--------------

* In general, we advise that each dataset uses its own repository (i.e., avoid
  providing multiple datasets in a single repository). Keeping datasets
  separate should also make it easier to report and track issues. There are
  rare cases where providing multiple datasets in a single source is
  preferable; use your discretion.
