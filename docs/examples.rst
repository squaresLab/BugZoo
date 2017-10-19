Examples
========

Here, we provide a number of examples that show how the RepairBox API can be
used to perform various analyses of software artefacts.


Finding test suite results for an artefact
------------------------------------------

.. code-block:: python

  import repairbox

Obtaining line coverage information for an artefact
---------------------------------------------------

.. code-block:: python

  import repairbox
  from repairbox.plugins.gcovr import gcovr

  # provision a container for the artefact
  artefact = repairbox.Manager.artefacts['ardubugs:copter:2e6b6e4']
  container = artefact.provision()

  # attach the gcovr plugin to the artefact
  gcovr = gcovr()
  gcovr.attach(container)

  # obtain coverage information for each test
  coverage =  {}
  for test in artefact.tests:
    container.coverage(test)a


Determining likely invariants using Daikon
------------------------------------------

.. code-block:: python

  import repairbox
  from repairbox.plugin.daikon import Daikon


Performing mutation analysis
----------------------------

.. code-block:: python

  import repairbox
