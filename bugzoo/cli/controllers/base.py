import cement

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


class BaseController(cement.Controller):
    class Meta:
        label = 'base'
        description = 'A platform for studying historical software versions.'
        arguments = [
            (['--version'], {'action': 'version', 'version': BANNER})
        ]

    def default(self) -> None:
        self.app.args.print_help()
