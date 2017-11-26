Installation
============

The latest stable release of BugZoo can be installed via `pip3` or
`easy_install3` using either of the commands given below.

.. code-block:: bash

  $ pip3 install bugzoo
  $ easy_install3 install bugzoo


Alternatively, users can install the latest development version of BugZoo
by cloning the BugZoo repository and executing `setup.py`, shown below.


.. code-block:: bash

  $ git clone https://github.com/squaresLab/BugZoo
  $ cd BugZoo
  $ python3 setup.py install


Note that cloning the entire history for the BugZoo repository can take hours.
To expedite the process, the `--depth` option can be passed to `git clone` to
produce a shallow clone containing the *n* most recent commits.

.. code-block:: bash

  $ git clone https://github.com/squaresLab/BugZoo --depth 50


Requirements
------------

* Python 3.x
* EasyInstall
* Docker version
