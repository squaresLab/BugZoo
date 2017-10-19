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


Declaring the dataset (`*.dataset.yaml`)
----------------------------------------

.. code-block:: yaml

  version: '1.0'



Defining the artefacts (`*.artefact.yaml`)
------------------------------------------

Defining the dependencies (`*.dep.yaml`)
----------------------------------------

Finally: registering the dataset with RepairBox
-----------------------------------------------

.. [#]  An earlier version of RepairBox used a *centralised* approach to provide
        artefacts. Artefact files were included as part of RepairBox itself,
        and adding new datasets required issuing a pull request to the
        RepairBox Git repository. Our current, *decentralised* approach removes
        this bottleneck and allows users to control their dataset directly.
