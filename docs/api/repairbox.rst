RepairBox
=========
.. py:module:: repairbox.manager

API Reference
-------------

.. autoclass:: RepairBox()

  .. automethod:: __init__

  .. autoattribute:: path
  .. autoattribute:: sources
  .. autoattribute:: artefacts


.. autoclass:: SourceManager() 

  .. automethod:: add
  .. automethod:: remove
  .. automethod:: update
  .. automethod:: reload

  .. automethod:: __getitem__
  .. automethod:: __iter__



.. autoclass:: ArtefactManager() 

  .. automethod:: __getitem__
  .. automethod:: __iter__
