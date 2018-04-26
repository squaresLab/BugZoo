from typing import Optional, Any, NoReturn
import logging

import requests
import urllib.parse

from ..exceptions import *


class APIClient(object):
    def __init__(self,
                 base_url: str,
                 *,
                 timeout_connection: int = 60
                 ) -> None:
        """
        Constructs a new client for low-level API communications with a BugZoo
        server.

        Parameters:
            base_url: the base URL of the BugZoo server.
            timeout_connection: the maximum number of seconds to wait whilst
                attempting to connect to the server before declaring the
                connection to have failed.

        Raises:
            ConnectionFailure: if a connection to the server could not be
                established within the timeout window.
        """
        logging.basicConfig(level=logging.DEBUG)
        self.__logger = logging.getLogger('api')
        self.__base_url = base_url

        # FIXME attempt to establish a connection

    def _url(self, path: str) -> str:
        """
        Computes the URL for a resource located at a given path on the server.
        """
        return urllib.parse.urljoin(self.__base_url, path)

    def handle_erroneous_response(self,
                                  response: requests.Response
                                  ) -> NoReturn:
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

    def put(self, path: str, **kwargs) -> requests.Response:
        url = self._url(path)
        self.__logger.info('PUT: %s', url)
        return requests.put(url, **kwargs)

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
