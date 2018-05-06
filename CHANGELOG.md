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
