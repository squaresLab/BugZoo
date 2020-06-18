Applying Patches
================
.. py:module:: bugzoo.core.patch

Patches can be applied to the source code for particular snapshots via the
:meth:`patch` method provided by :obj:`client`. Patches are represented by
the :class:`Patch` class and can be constructed by providing unified-format diffs
to :meth:`Patch.from_unidiff`.


.. code-block:: python

  from bugzoo import Patch, Client


  def example_patch_application(client: Client, container: Container) -> None:
    # first, we build a Patch object using a unified-format diff
    unidiff = """
    diff --git a/ArduCopter/control_auto.cpp b/ArduCopter/control_auto.cpp
    index 0798efc..8109d2a 100644
    --- a/ArduCopter/control_auto.cpp
    +++ b/ArduCopter/control_auto.cpp
    @@ -119,10 +119,6 @@ void Copter::auto_takeoff_start(const Location& dest_loc)
	     alt_target = current_loc.alt + dest.alt;
	 }

    -    // sanity check target
    -    if (alt_target < current_loc.alt) {
    -        dest.set_alt_cm(current_loc.alt, Location_Class::ALT_FRAME_ABOVE_HOME);
    -    }
	 // Note: if taking off from below home this could cause a climb to an unexpectedly high altitude
	 if (alt_target < 100) {
	     dest.set_alt_cm(100, Location_Class::ALT_FRAME_ABOVE_HOME);
    """.strip()
    patch = Patch.from_unidiff(unidiff)

    # we then attempt to apply the patch to the source code
    client.containers.patch(container, patch)

    # finally, we rebuild the program inside the container
    client.containers.build(container)


This ability to apply patches can be used to, for example, evaluate candidate
repairs when performing automated program repair, or to apply source-code
mutations when conducting mutation testing. In the case of the latter,
:meth:`client.containers.persist` can be used to persist the state of the
mutated container as a Docker image.


API Reference
-------------

.. autoclass:: Patch()
  :members:
