from .version import __version__
from .client import Client
from .manager import BugZoo
from .core import Language, Patch
from .core.container import Container
from .core.bug import Bug

import logging
logging.getLogger(__name__).addHandler(logging.NullHandler())
logging.getLogger(__name__).setLevel(logging.DEBUG)
