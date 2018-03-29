import requests
import urllib.parse
import logging


class APIClient(object):
    def __init__(self, base_url: str):
        logging.basicConfig(level=logging.DEBUG)
        self.__logger = logging.getLogger('api')
        self.__base_url = base_url

    def _url(self, path: str) -> str:
        """
        Computes the URL for a resource located at a given path on the server.
        """
        return urllib.parse.urljoin(self.__base_url, path)

    def get(self, path: str) -> requests.Response:
        url = self._url(path)
        self.__logger.info('GET: %s', url)
        return requests.get(url)

    def post(self, path: str) -> requests.Response:
        url = self._url(path)
        self.__logger.info('POST: %s', url)
        return requests.post(url)
