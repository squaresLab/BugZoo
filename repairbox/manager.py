import os
import git
import sources

# source list
# source update [s]
# source add https://github.com/ChrisTimperley/ManyBugs
# source remove [s]

class RepairBox(object):

    @staticmethod
    def load():
        # TODO support windows
        default_path = os.path.join(os.environ.get('HOME'),
                                    '.repairbox')
        path = os.environ.get('REPAIRBOX_PATH', default_path)
        if not os.path.exists(path): # ensure dir exists
            os.makedirs(path)

        return RepairBox(path)


    def __init__(self, location: str) -> None:
        self.__location = location
        self.__sources = sources.SourceManager(self)
        self.rescan()


    def path(self):
        return self.__location


    def rescan(self):
        print("rescanning...")


    def sources(self):
        return self.__sources


RepairBox = RepairBox.load()
