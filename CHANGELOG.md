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
