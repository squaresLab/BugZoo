from typing import Optional, Any, Iterator
try:
    from typing import NoReturn
except ImportError:
    from mypy_extensions import NoReturn
from timeit import default_timer as timer
import contextlib
import logging
import time

import requests
import urllib3.exceptions
import urllib.parse

from ..exceptions import ConnectionFailure, UnexpectedResponse, BugZooException

logger = logging.getLogger(__name__)  # type: logging.Logger
logger.setLevel(logging.DEBUG)

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

            r = None
            try:
                r = requests.get(url, timeout=time_left)
                connected = r.status_code == 204
            except requests.exceptions.ConnectionError:
                time.sleep(1.0)
            except requests.exceptions.Timeout:
                logger.error("Failed to establish connection to server: %s",
                             base_url)
                raise ConnectionFailure
            finally:
                if r:
                    r.close()
            time.sleep(0.05)
        logger.info("Established connection to server: %s", base_url)

    def _url(self, path: str) -> str:
        """Computes the URL for a given resource on the server."""
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

    @contextlib.contextmanager
    def get(self, path: str, **kwargs) -> Iterator[requests.Response]:
        url = self._url(path)
        logger.debug('GET: %s', url)
        with contextlib.closing(requests.get(url, **kwargs)) as r:
            yield r

    @contextlib.contextmanager
    def post(self, path: str, **kwargs) -> Iterator[requests.Response]:
        url = self._url(path)
        logger.debug('POST: %s', url)
        with contextlib.closing(requests.post(url, **kwargs)) as r:
            yield r

    @contextlib.contextmanager
    def put(self, path: str, **kwargs) -> Iterator[requests.Response]:
        url = self._url(path)
        logger.debug('PUT: %s', url)
        with contextlib.closing(requests.put(url, **kwargs)) as r:
            yield r

    @contextlib.contextmanager
    def head(self, path: str, **kwargs) -> Iterator[requests.Response]:
        url = self._url(path)
        logger.debug('HEAD: %s', url)
        with contextlib.closing(requests.head(url, **kwargs)) as r:
            yield r

    @contextlib.contextmanager
    def patch(self, path: str, data, **kwargs ) -> Iterator[requests.Response]:
        url = self._url(path)
        logger.debug('PATCH: %s', url)
        with contextlib.closing(requests.patch(url, data=data, **kwargs)) as r:
            yield r

    @contextlib.contextmanager
    def delete(self, path: str, **kwargs) -> Iterator[requests.Response]:
        url = self._url(path)
        logger.debug('DELETE: %s', url)
        with contextlib.closing(requests.delete(url, **kwargs)) as r:
            yield r
