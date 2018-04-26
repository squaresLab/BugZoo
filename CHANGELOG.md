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
