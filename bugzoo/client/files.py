from typing import Iterator, Optional
import logging

from .api import APIClient


class FileManager(object):
    def __init__(self, api: APIClient) -> None:
        logging.basicConfig(level=logging.DEBUG)
        self.__logger = logging.getLogger('files')
        self.__api = api
