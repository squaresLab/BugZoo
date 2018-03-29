from typing import Iterator

from .api import APIClient
from .errors import UnexpectedAPIResponse
from ..core.bug import Bug
from ..core.coverage import TestSuiteCoverage


class BugManager(object):
    def __init__(self, api: APIClient) -> None:
        self.__api = api

    def __getitem__(self, name: str) -> Bug:
        r = self.__api.get(['bug', name])

        if r.status_code == 200:
            return Bug.from_dict(r.json())
        if r.status_code == 404:
            raise KeyError("no bug found with given name: {}".format(name))

        raise UnexpectedAPIResponse(r)

    def __iter__(self) -> Iterator[str]:
        """
        Returns an iterator over the names of the bugs registered with
        the server.
        """
        r = self.__api.get(['bugs'])

        if r.status_code == 200:
            names = r.json()
            assert isinstance(names, list)
            assert all(isinstance(n, str) for n in names)
            return names.__iter__()

        raise UnexpectedAPIResponse(r)

    def is_installed(self, bug: Bug) -> bool:
        """
        """
        r = self.__api.get(['bug', bug.name, 'installed'])

    def coverage(self, bug: Bug) -> TestSuiteCoverage:
        r = self.__api.post(['bug', bug.name, 'coverage'])

    def uninstall(self, bug: Bug) -> bool:
        r = self.__api.post(['bug', bug.name, 'uninstall'])

    def upload(self, bug: Bug) -> bool:
        r = self.__api.post(['bug', bug.name, 'upload'])

    def download(self, bug: Bug) -> bool:
        r = self.__api.post(['bug', bug.name, 'download'])

    def build(self, bug: Bug):
        r = self.__api.post(['bug', bug.name, 'build'])

        # TODO: implement ImageBuildFailed.from_dict
        if r.status_code == 200:
            raise errors.ImageBuildFailed.from_dict(r.json())

        if r.status_code == 400:
            raise errors.BugAlreadyBuilt(bug_id)

        # FIXME this looks wrong?
        if r.status_code == 404:
            return BuildOutcome.from_dict(r.json())
