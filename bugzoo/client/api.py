from typing import Optional, Any
import logging

import requests
import urllib.parse

from ..exceptions import *


class APIClient(object):
    def __init__(self, base_url: str) -> None:
        logging.basicConfig(level=logging.DEBUG)
        self.__logger = logging.getLogger('api')
        self.__base_url = base_url

    def _url(self, path: str) -> str:
        """
        Computes the URL for a resource located at a given path on the server.
        """
        return urllib.parse.urljoin(self.__base_url, path)

    def handle_erroneous_response(self, response: requests.Response) -> None:
        """
        Attempts to decode an erroneous response into an exception, and to
        subsequently throw that exception.

        Raises:
            BugZooException: the exception described by the error response.
            UnexpectedResponse: if the response cannot be decoded to an
                exception.
        """
        try:
            err = BugZooException.from_dict(response.json())
        except Exception:
            err = UnexpectedResponse(response)
        raise err

    def get(self,
            path: str,
            *,
            json: Optional[Any] = None
            ) -> requests.Response:
        url = self._url(path)
        self.__logger.info('GET: %s', url)
        return requests.get(url, json=json)

    def post(self,
             path: str,
             *,
             json: Optional[Any] = None
             ) -> requests.Response:
        url = self._url(path)
        self.__logger.info('POST: %s', url)
        return requests.post(url, json=json)

    def patch(self,
              path: str,
              data,
              **kwargs
              ) -> requests.Response:
        url = self._url(path)
        self.__logger.info('PATCH: %s', url)
        return requests.patch(url, data=data, **kwargs)

    def delete(self,
               path: str,
               *,
               json: Optional[Any] = None
               ) -> requests.Response:
        url = self._url(path)
        self.__logger.info('DELETE: %s', url)
        return requests.delete(url, json=json)
