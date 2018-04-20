from .bug import BugManager
from ..core.container import Container


class FileManager(object):
    def __init__(self, mgr_bug: BugManager) -> None:
        self.__mgr_bug = mgr_bug

    def read(self, container: Container, filepath: str) -> str:
        bug = self.__mgr_bug[container.bug]

        if not os.path.isabs(filepath):
            filepath = os.path.join(bug.source_dir, filepath)
