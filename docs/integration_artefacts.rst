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

Once you've created a Git repository for your dataset, go ahead and register
the repository as a source with your local RepairBox installation:


.. code-block:: bash

  $ repairbox source add https://your-repo-url-goes-here.git


2. Declaring the dataset (`*.dataset.yaml`)
-------------------------------------------



.. code-block:: yaml

  version: '1.0'



3. Defining the artefacts (`*.artefact.yaml`)
---------------------------------------------

4. Defining the dependencies (`*.dep.yaml`)
-------------------------------------------

Finally: registering the dataset with RepairBox
-----------------------------------------------

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
