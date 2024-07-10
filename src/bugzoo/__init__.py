import logging

from .client import Client
from .core import Language, Patch
from .core.bug import Bug
from .core.container import Container
from .manager import BugZoo
from .version import __version__

logging.getLogger(__name__).addHandler(logging.NullHandler())
logging.getLogger(__name__).setLevel(logging.DEBUG)
