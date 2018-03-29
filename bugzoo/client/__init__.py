from .api import APIClient
from .bug import BugManager
import bugzoo.core.errors as errors


class Client(object):
    def __init__(self,
                 base_url: str = None):
        if base_url is None:
            base_url = "http://127.0.0.1:6060"
        self.__api = APIClient(base_url)
        self.__bugs = BugManager(self.__api)

    @property
    def bugs(self) -> BugManager:
        return self.__bugs
