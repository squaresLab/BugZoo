## 2.1.14 (2018-07-08)

### Changes

* Updated `bugzood` to write version information for most of its dependencies
  to its logs.
* Reduced number of false warnings that are produced when computing coverage
  reports.
* Included `.cxx`, `.cc`, `.h`, `.hh`, and `.hpp` in coverage reports for C++.
* Added defensive checks to `report_system_resources` to handle environments
  in which `psutil` fails to report certain information.


## 2.1.13 (2018-07-05)

### Features

* added `shutdown` method to client.
* added `report_system_resources` and `report_resource_limits` to `util`
  module. Both functions describe the available system resources and write
  a description to a provided logger.
* updated `bugzood` to report available resources upon launch.


### Changes

* Docker image deletion endpoint now uses `force=True` to ensure that images
  are destroyed.


## 2.1.12 (2018-06-25)

### Features

* Added ability to compute line coverage reports to client container
  manager.
* All containers are now destroyed when the server is closed.
* Added ability to specify custom (albeit limited) oracles for individual
  test cases.

### Bug Fixes

* Fixed a bug in `Spectra.from_coverage` that incorrectly prevented
  `ep` or `ef` for a given line from being greater than one.
* Fixed an incorrect path in `client.dockerm` that prevented the client from
  deleting Docker images on the server.


## 2.1.11 (2018-06-19)

### Features

* Extended manifest file format to allow more detailed instructions for
  individual test cases (e.g., specific time limits, commands, and
  contexts). Also added `expected-outcome` as a new test case property,
  allowing the expected behaviour of the test to be specified and checked
  by `bugzoo validate`.

### Changes

* Removed `testing` module and refactored its contents into a simpler
  module, `core.test`.


## 2.1.10 (2018-06-15)

### Features

* Added `--log-level` option to `bugzood`.
* Added ability to suppress `werkzeug` logs produced by `bugzood`.

### Changes

* Removed `localization` module that has since been made redundant by
  `darjeeling`'s `localization` module.
* Removed `numpy` dependency.
* Reduced size of `Dockerfile`.
* Added `--no-status` and `--override-build-tool-check` flags to catkin
  compiler to reduce output verbosity.


## 2.1.9 (2018-06-12)

### Features

* Added `instrument` method to client's container module: allows users to
  instrument a given container for the purposes of computing coverage at
  some point in the future.

### Changes

* Added `threaded=True` option to server to ensure that `bugzood` can handle
  multiple clients simultaneously.


## 2.1.8 (2018-06-10)

### Features

* Added Dockerfile for `bugzood`.
* Updated README and various parts of the documentation.
* Added `instrument` parameter to container coverage methods.


## 2.1.7 (2018-05-20)

### Features

* `bugzood` now allows users to log to a given file.
* Added `**kwargs` to all HTTP methods in low-level API client; allows more
  information to be forwarded onto `requests`.
* Added `build` method as an alias of `compile` in both client- and
  server-side container managers.
* Added more detailed logging to client file manager.
* Added `__repr__` to `Spectra`.
* Added check to `BugZoo` to ensure that the Docker server is responsive.
* Added slightly better error handling to `mktemp` in server-side container
  manager.
* Added better logging and error reporting to `command` in server-side
  container manager.
* Added `POST /containers/<uid>/build` endpoint to server.

### Bug Fixes

* Fixed a bug in logging that prevented `DEBUG` level calls from being written
  to file or passed to the stdout.
* Fixed a bug in URL generation method in client module that prevented certain
  URLs from being reached.
* Fixed HTTP method used by `coverage` method in `client.container`.
* Fixed bug in `CompilationOutcome.from_dict` that prevented serialised
  compilation outcomes from being parsed.


## 2.1.6 (2018-05-15)

### Features

* Added ability to compute coverage for a given container to the client and
  server.
* Added coverage method to container manager: acts as an alias for the
  coverage method in the coverage manager.
* Added extra logging statements across the codebase.

### Bug Fixes

* Fixed compatibility breaking bug that was caused by attempting to import
  NoReturn from the typing module. Added a workaround to attempt to import
  NoReturn from mypy_extensions if it isn't found in typing.


## 2.1.5 (2018-05-07)

### Bug Fixes

* Fixed a regression introduced in 2.1.4 that caused BugZoo to crash when
  executing a command with a given time limit.


## 2.1.4 (2018-05-07)

### Bug Fixes

* Removed duplicate route in HTTP server for bug coverage.
* Fixed HTTP endpoint for bug coverage to use GET rather than POST.
* Added missing package, mypy-extensions, to setup.py.
* Fixed misuses of logger in various server-side managers.
* Updated waf compiler to use `--no-submodule-update` argument.


## 2.1.3 (2018-05-06)

### Bug Fixes

* Fixed bug that caused BugZoo to interfere with logging of other packages by
  removing all calls to `logging.basicConfig`. Also, refactored loggers to use
  `logging.getLogger(__name__)` for each module, rather than passing `Logger`
  instances between components.


## 2.1.2 (2018-04-30)

### Features

* Added method `bugzoo.server.ephemeral` to allow ephemeral servers to be
  provisioned. Launches a server and returns a context-bound client that is
  connected to that server. As soon as the context is closed, the server is
  safely destroyed.

### Bug Fixes

* Fixed a bug in `bugzoo.client.Client` that caused the connection timeout to
  abort the connection attempt prematurely.


## 2.1.1 (2018-04-27)

### Features

* Added `--debug`, `-p|--port`, and `--host` to `bugzood` executable.
* Implemented `GET /bugs/:id/coverage` endpoint on client and server.

### Bug Fixes

* Fixed bug in server module that was caused by incorrectly handling parameters
  in the construction of error responses.


## 2.1.0 (2018-04-26)

### Features

* Client now blocks until a connection to the server is established or a
  maximum timeout has been reached, in which case, it raises a
  ConnectionFailure exception.
* added ability to delete Docker images on the server to client
  (via `DELETE /docker/:image`).
* added to the client the ability to register ephemeral bug descriptions with
  the server (via `PUT /bugs/:id`).
* added `containers.patch` to `Client`, allowing patches to be sent from client
  and applied to containers running on the server.
* added ability to persist containers as Docker images on the server.
