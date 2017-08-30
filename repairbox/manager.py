import os
import git
import sources

# source list
# source update [s]
# source add https://github.com/ChrisTimperley/ManyBugs
# source remove [s]

class RepairBoxManager(object):

    @staticmethod
    def load():
        # TODO support windows
        default_path = os.path.join(os.environ.get('HOME'),
                                    '.repairbox')
        path = os.environ.get('REPAIRBOX_PATH', default_path)
        if not os.path.exists(path): # ensure dir exists
            os.makedirs(path)

        mgr = RepairBoxManager(path)
        mgr.sources.reload()
        return mgr


    def __init__(self, path: str) -> None:
        self.__path = path
        self.__sources = sources.SourceManager(self)


    @property
    def path(self):
        return self.__path


    def rescan(self):
        print("rescanning...")

    @property
    def sources(self):
        return self.__sources


RepairBoxManager = RepairBoxManager.load()
