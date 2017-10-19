Adding a dataset to RepairBox
=============================

In this section, we describe how to integrate your own dataset of software
artefacts with RepairBox.
**But wait -- why would I want to add my dataset to RepairBox?**
Integrating your dataset allows yourself and others
to use RepairBox to write elegant, reproducible, executable experiment designs
for your empirical studies.


Git Repository
--------------

RepairBox uses a *decentralised* approach to manage its datasets, akin to the
approach used by package management software (e.g., `apt`, `yum`, `pip`).
Artefacts are supplied by remote *sources*, implemented as Git repositories [#]_.

For instance, the `ArduBugs` dataset is provided by the following repository:
https://github.com/squaresLab/ArduBugs. Users can add new datasets and
artefacts to their machine by using the command-line interfaces' `source add`
command.

.. code-block:: yaml

  version: '1.0'

Declaring the dataset (`*.dataset.yaml`)
----------------------------------------

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
