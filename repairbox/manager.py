import os
import git

# source update

# source add https://github.com/ChrisTimperley/ManyBugs
SOURCES = [
    'https://github.com/ChrisTimperley/ManyBugs'
] 

# TODO add support for Windows
DEFAULT_DATA_PATH = \
    os.path.join(os.environ.get('HOME'), '.repairbox')
DATA_PATH = os.environ.get('REPAIRBOX_DATA_PATH', DEFAULT_DATA_PATH)


# download the repo
