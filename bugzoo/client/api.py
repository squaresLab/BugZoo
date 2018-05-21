from typing import Optional, Any
try:
    from typing import NoReturn
except ImportError:
    from mypy_extensions import NoReturn
from timeit import default_timer as timer
import logging
import time

import requests
import urllib3.exceptions
import urllib.parse

from ..exceptions import ConnectionFailure, UnexpectedResponse, BugZooException

logger = logging.getLogger(__name__)  # type: logging.Logger

__all__ = ['APIClient']


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
        assert timeout_connection > 0

        self.__base_url = base_url

        # attempt to establish a connection
        logger.info("Attempting to establish connection to %s within %d seconds",  # noqa: pycodestyle
                    base_url, timeout_connection)
        url = self._url("status")
        time_started = timer()
        connected = False
        while not connected:
            time_running = timer() - time_started
            time_left = timeout_connection - time_running
            if time_left <= 0.0:
                logger.error("Failed to establish connection to server: %s",
                             base_url)
                raise ConnectionFailure
            try:
                r = requests.get(url, timeout=time_left)
                connected = r.status_code == 204
            except requests.exceptions.ConnectionError:
                time.sleep(1.0)
            except requests.exceptions.Timeout:
                logger.error("Failed to establish connection to server: %s",
                             base_url)
                raise ConnectionFailure
            time.sleep(0.05)
        logger.info("Established connection to server: %s", base_url)

    def _url(self, path: str) -> str:
        """
        Computes the URL for a resource located at a given path on the server.
        """
        url = "{}/{}".format(self.__base_url, path)
        logger.debug("transformed path [%s] into url: %s", path, url)
        return url

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
        logger.debug("handling erroneous response: %s", response)
        try:
            err = BugZooException.from_dict(response.json())
        except Exception:
            err = UnexpectedResponse(response)
        raise err

    def get(self, path: str, **kwargs) -> requests.Response:
        url = self._url(path)
        logger.debug('GET: %s', url)
        return requests.get(url, **kwargs)

    def post(self, path: str, **kwargs) -> requests.Response:
        url = self._url(path)
        logger.debug('POST: %s', url)
        return requests.post(url, **kwargs)

    def put(self, path: str, **kwargs) -> requests.Response:
        url = self._url(path)
        logger.debug('PUT: %s', url)
        return requests.put(url, **kwargs)

    def patch(self, path: str, data, **kwargs ) -> requests.Response:
        url = self._url(path)
        logger.debug('PATCH: %s', url)
        return requests.patch(url, data=data, **kwargs)

    def delete(self, path: str, **kwargs) -> requests.Response:
        url = self._url(path)
        logger.debug('DELETE: %s', url)
        return requests.delete(url, **kwargs)
