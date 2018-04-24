from docker import DockerClient

__all__ = ['DockerManager']


class DockerManager(object):
    def __init__(self, client: DockerClient) -> None:
        """
        Constructs a new Docker server manager.

        Parameters:
            client: a client for communicating with the Docker server.
        """
        self.__client = client

    @property
    def client(self) -> DockerClient:
        """
        The Docker client that is being used by this manager to communicate
        with the Docker server.
        """
        return self.__client

    def delete_image(self, name: str, prune: bool = True) -> None:
        """
        Deletes a Docker image with a given name and optionally prunes untagged
        parents.

        Parameters:
            name: the name of the Docker image.
            prune: specifies whether or not untagged parents should also
                be destroyed.

        Raises:
            KeyError: if there exists no image with the given name.
        """
        raise NotImplementedError
