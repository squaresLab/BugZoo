from .api import APIClient

__all__ = ['DockerManager']


class DockerManager(object):
    """
    Provides access to the underlying Docker server used by a BugZoo server.
    """
    def __init__(self, api: APIClient) -> None:
        self.__api = api

    def delete_image(self, name: str) -> None:
        """
        Deletes a Docker image with a given name.

        Parameters:
            name: the name of the Docker image.
        """
        path = "/docker/images/{}".format(name)
        response = self.__api.delete(path)
        if response.status_code != 204:
            self.__api.handle_erroneous_response(response)
