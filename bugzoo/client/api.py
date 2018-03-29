from typing import List
import requests
import urllib.parse


class APIClient(object):
    def __init__(self, base_url: str):
        self.__base_url = base_url

    def _url(self, path_components: List[str]) -> str:
        """
        Computes the URL for a resource located at a given path on the server.
        """
        return urllib.parse.urljoin(self.__base_url, *path_components)

    def get(self, path_components: List[str]) -> requests.Response:
        url = self._url(path_components)
        return requests.get(url)

    def post(self, path_components: List[str]) -> requests.Response:
        url = self._url(path_components)
        return requests.post(url)
