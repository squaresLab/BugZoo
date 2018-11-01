__all__ = ['Bug']

from typing import List, Dict, Optional, Any, Tuple
import os

import attr

from .language import Language
from .test import TestSuite
from ..compiler import Compiler


@attr.s(frozen=True)
class Bug(object):
    """
    Bugs provide an immutable snapshot of a software system at a given
    point in time, allowing it to be empirically studied and inspected in a
    transparent and reproducible manner.
    """
    name = attr.ib(type=str)
    image = attr.ib(type=str)
    dataset = attr.ib(type=Optional[str])
    program = attr.ib(type=Optional[str])
    source = attr.ib(type=Optional[str])
    source_dir = attr.ib(type=str)
    languages = attr.ib(type=Tuple[Language], converter=tuple)
    harness = attr.ib(type=TestSuite)
    compiler = attr.ib(type=Compiler)
    files_to_instrument = \
        attr.ib(type=Tuple[str], converter=tuple, default=tuple())

    @staticmethod
    def from_dict(d: Dict[str, Any]) -> 'Bug':
        # TODO refactor
        languages = [Language[lang] for lang in d['languages']]
        harness = TestSuite.from_dict(d['test-harness'])
        compiler = Compiler.from_dict(d['compiler'])

        if 'coverage' in d and 'files-to-instrument' in d['coverage']:
            files_to_instrument = d['coverage']['files-to-instrument']
        else:
            files_to_instrument = None

        return Bug(name=d['name'],
                   image=d['image'],
                   dataset=d['dataset'],
                   program=d['program'],
                   source=d['source'],
                   source_dir=d['source-location'],
                   languages=languages,
                   harness=harness,
                   compiler=compiler,
                   files_to_instrument=files_to_instrument)

    def to_dict(self) -> Dict[str, Any]:
        """
        Produces a dictionary-based description of this bug, ready to be
        serialised in a JSON or YAML format.
        """
        jsn = {
            'name': self.name,
            'image': self.image,
            'program': self.program,
            'dataset': self.dataset,
            'source': self.source,
            'source-location': self.source_dir,
            'languages': [l.name for l in self.languages],
            'compiler': self.compiler.to_dict(),
            'test-harness': self.harness.to_dict(),
            'coverage': {
                'files-to-instrument': list(self.files_to_instrument)
            }
        }
        return jsn
