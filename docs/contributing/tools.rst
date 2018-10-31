Adding a plugin
===============

In this section, we provide instructions for creating a new plugin for the
BugZoo platform. Plugins are used to dynamically provide binaries, libraries
and static data to containers at run-time. Plugins are packaged as Docker
container images and provided to BugZoo as part of a manifest file belonging
to a source. The manifest file provides instructions for building the Docker
image for the plugin and specifies how it should be imported into a running
bug container.


.. note::

  Before adding your plugin, you must first `create a source that will
  provide it <source.html>`_.

Writing a Dockerfile
--------------------

Each plugin is accompanied by a Docker container image that is responsible for
providing the libraries, binaries and static data required to run the plugin
inside a separate container.
BugZoo uses a :code:`Dockerfile` to provide instructions for building the Docker
container image for your plugin. Below, we give an example :code:`Dockerfile`
that is used to provide a :code:`genprog` plugin for BugZoo, which is
explained in more detail below.

.. code:: docker

  FROM ubuntu:16.04

  RUN apt-get update && \
      apt-get install -y --no-install-recommends \
	opam \
	ocaml \
	build-essential \
	jq \
	aspcud \
	vim \
	m4 && \
      echo "yes" >> /tmp/yes.txt && \
      opam init -y < /tmp/yes.txt && \
      opam install -y cil

  # all files required to run genprog are written to /opt/genprog
  RUN mkdir -p /opt/genprog
  WORKDIR /opt/genprog
  ADD Makefile Makefile
  ADD src src

  RUN mkdir bin && \
      eval $(opam config env) && \
      make && \
      mv src/repair bin/genprog && \
      ln -s bin/genprog bin/repair && \
      mv src/distserver bin/distserver && \
      mv src/nhtserver bin/nhtserver

  VOLUME /opt/genprog

The process for writing a :code:`Dockerfile` for your plugin is almost the same
as writing another other :code:`Dockerfile`. The Dockerfile should provide
executable instructions for building the binaries and libraries for your
software. There are however, a number of important differences. Firstly, all of
the files that are required by your plugin must be stored inside a *volume*
that can be mounted inside another container. In the example above, all of the
files required to run GenProg are written to :code:`/opt/genprog`, which is
subsequently declared to be a volume:


.. code:: docker

  VOLUME /opt/genprog

In general, we recommend installing the files for your plugin to
:code:`/opt/myplugin`, where :code:`myplugin` is replaced by the name of your
plugin.

Simply installing the files for your plugin to :code:`/opt/myplugin` is
usually not enough, however. The binaries and libraries for your plugin may
be dynamically linked to system libraries that are not present in other
containers into which they may be mounted. (Worse yet, the container
may use an older, incompatible :code:`libc` or :code:`ld`.)
To ensure compatibility, you must package your plugin as a static binary.
Whilst some languages will automatically compile their programs to static
binaries by default (e.g., Go), others will require special build options
to produce a static binary (e.g., C and C++). Below we provide tips for
creating static binaries with minimal effort:

- **C/C++ and OCaml:**
    Whilst compilation options are the preferred way to create a static
    binary, `StaticX <https://github.com/JonathonReinhart/staticx>`_ can be
    used to transform a dynamically linked binary into a static one, allowing
    it to be used in any container.

- **Go:**
    Go produces static binaries by default.

- **Python:**
    `PyInstaller <https://pyinstaller.readthedocs.io/en/stable/operating-mode.html>`_
    can be used to package your application, including its dependencies and
    files, into a single executable file. The resulting binary will still be
    dynamically linked to :code:`libc` and :code:`ld`, however, so
    `StaticX <https://github.com/JonathonReinhart/staticx>`_ must be used to
    wrap the binary into a truly static one.


Writing a plugin manifest
-------------------------

Now that you've written a :code:`Dockerfile` for building a Docker image for
your plugin, you need to write a *manifest file* for your plugin in order to
register it with BugZoo. BugZoo automatically scans its source for all files
ending in :code:`.bugzoo.yml` and treats them as manifest files. Let's create
a new file named :code:`myplugin.bugzoo.yml` to serve as the manifest file for
the plugin.

The manifest file is written in YAML and should start with a :code:`version`
property, specifying the version of the BugZoo Manifest File Format that is
used by the file. For more details on the file format, `see here <../file-format.html>`_.

The :code:`blueprints` section of the file is used to provide instructions for
building an image. The :code:`tag` property specifies the qualified name of the
Docker image that should be built for the plugin. The :code:`file` property
gives the location of the :code:`Dockerfile` (relative to the location of the
manifest file) that should be used to build the Docker image.

The :code:`plugins` section of the file declares the plugin to BugZoo.
The :code:`name` property gives a unique name for the plugin.
The :code:`image` property specifies the Docker image that should be used to
provide the files for the plugin.
The :code:`environment` property is used to manipulate the values of
environment variables inside a container upon loading the plugin. This property
is commonly used to extend the :code:`PATH` to include the static binaries for
the plugin.

.. code:: yaml

  version: '1.1'

  blueprints:
    - tag: squareslab/genprog
      file: Dockerfile

  plugins:
    - name: genprog
      image: squareslab/genprog
      environment:
        PATH: "/opt/genprog/bin:${PATH}"


Example plugins
---------------

Below, we briefly describe a number of real-world plugins for BugZoo.

* `GenProg: <https://github.com/squaresLab/genprog-code>`_
  A search-based program repair tool, written in OCaml.
* `Kaskara: <https://github.com/ChrisTimperley/Kaskara>`_
  A static analysis tool for C++, written in C++. Depends on
  Clang/LLVM.
* `SOSRepair: <https://bitbucket.org/afsafzal/sosrepair>`_
  A semantics-based program repair tool, written in Python
  and C. Depends on two different versions of Clang/LLVM.
