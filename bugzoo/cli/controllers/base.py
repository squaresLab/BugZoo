from cement.core.controller import CementBaseController
from ...version import __version__ as VERSION

BANNER = """



_|_|_|                        _|_|_|_|_|                      
_|    _|  _|    _|    _|_|_|        _|      _|_|      _|_|    
_|_|_|    _|    _|  _|    _|      _|      _|    _|  _|    _|  
_|    _|  _|    _|  _|    _|    _|        _|    _|  _|    _|  
_|_|_|      _|_|_|    _|_|_|  _|_|_|_|_|    _|_|      _|_|    
                          _|                                  
                      _|_|                                    


A platform for reproducible studies of software versions

URL: 	 https://github.com/squaresLab/BugZoo
Docs: 	 https://squareslab.github.io/BugZoo
Version: {}
""".format(VERSION)

__all__ = ['BaseController']


class BaseController(CementBaseController):
    class Meta:
        label = 'base'
        description = 'A platform for studying historical software versions.'
        arguments = [
            (['--version'], dict(action='version', version=BANNER))
        ]
