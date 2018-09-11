Adding a plugin
===============

In this section, we provide instructions for creating a new plugin for the
BugZoo platform. Plugins are used to dynamically provide binaries, libraries
and static data to containers at run-time. Plugins are packaged as Docker
container images and provided to BugZoo as part of a manifest file belonging
to a source. The manifest file provides instructions for building the Docker
image for the plugin and specifies how it should be imported into a running
bug container.

Creating a source
-----------------

Plugins and bugs are provided to BugZoo by *sources*. To add a new plugin (or
bug) to BugZoo, you'll first need to create a new source to provide that
plugin. To do so, you can create a new local directory for the source and
register it via the BugZoo CLI:

.. code:: bash

  $ mkdir my-plugin
  $ bugzoo source add my-plugin-source .


Writing a Dockerfile
--------------------


Writing a plugin manifest
-------------------------


Distributing the plugin
-----------------------

Discuss how tools can be distributed.
