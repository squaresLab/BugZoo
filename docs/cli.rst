Command-Line Interface
======================

`list-artefacts`
----------------

Produces a list of all artefacts provided by sources registered with your
local RepairBox installation. Optional flags can be used to filter the contents
of the list (e.g., :code:`--installed`, :code:`--uninstalled`), or to produce an unannotated
list of artefacts (:code:`-q`).

.. code-block:: bash

  $ repairbox list-artefacts

  Artefact                                        Dataset    Source                                      Installed?
  ----------------------------------------------  ---------  ------------------------------------------  ------------
  ardubugs:copter:2e6b6e4                         ardubugs   https://github.com/squaresLab/ArduBugs      No
  ardubugs:copter:cb1b9b6                         ardubugs   https://github.com/squaresLab/ArduBugs      No
  ardubugs:copter:766ccea                         ardubugs   https://github.com/squaresLab/ArduBugs      No
  ardubugs:copter:bd0229b                         ardubugs   https://github.com/squaresLab/ArduBugs      No
  ardubugs:copter:aa98531                         ardubugs   https://github.com/squaresLab/ArduBugs      No
  ardubugs:copter:9f59f27                         ardubugs   https://github.com/squaresLab/ArduBugs      No
  ...

  $ repairbox list-artefacts -q
  ardubugs:copter:2e6b6e4
  ardubugs:copter:cb1b9b6
  ardubugs:copter:766ccea
  ardubugs:copter:bd0229b
  ardubugs:copter:aa98531
  ardubugs:copter:9f59f27
