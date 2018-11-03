__all__ = ['Bug']

from typing import List, Dict, Optional, Any, Tuple, Iterable
import os
import warnings
import logging

import attr

from .language import Language
from .test import TestSuite
from .coverage import CoverageInstructions
from ..compiler import Compiler

logger = logging.getLogger(__name__)  # type: logging.Logger
logger.setLevel(logging.DEBUG)


def _convert_languages(langs: Iterable[Language]) -> Tuple[Language, ...]:
    return tuple(langs)


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
    languages = attr.ib(type=Tuple[Language, ...], converter=_convert_languages)
    tests = attr.ib(type=TestSuite)
    compiler = attr.ib(type=Compiler)
    instructions_coverage = attr.ib(type=Optional[CoverageInstructions],
                                    default=None)

    @property
    def harness(self) -> TestSuite:
        warnings.warn("'harness' is being deprecated in favour of 'tests'",
                      DeprecationWarning)
        return self.tests

    @staticmethod
    def from_dict(d: Dict[str, Any]) -> 'Bug':
        name = d['name']
        languages = [Language[lang] for lang in d['languages']]
        tests = TestSuite.from_dict(d['test-harness'])
        compiler = Compiler.from_dict(d['compiler'])

        instructions_coverage = None  # type: Optional[CoverageInstructions]
        has_cov_ins = 'coverage' in d
        has_cov_ins_type = has_cov_ins and 'type' in d['coverage']
        if has_cov_ins_type:
            logger.debug("bug [%s]: using coverage instructions type [%s]",
                         name, d['coverage']['type'])
            instructions_coverage = \
                CoverageInstructions.from_dict(d['coverage'])
        elif len(languages) == 1:
            lang = languages[0]
            cls_cov_ins = CoverageInstructions.language_default(lang)
            if not cls_cov_ins:
                logger.debug("no default coverage instructions for language [%s]",
                             lang)
            else:
                logger.debug("bug [%s]: using default coverage instructions type [%s] for language [%s]",
                             name, cls_cov_ins, lang.name)
                instructions_coverage = \
                    cls_cov_ins.from_dict(d.get('coverage', {}))
        else:
            logger.warning("no coverage instructions for bug: %s", name)

        return Bug(name=name,
                   image=d['image'],
                   dataset=d['dataset'],
                   program=d['program'],
                   source=d['source'],
                   source_dir=d['source-location'],
                   languages=languages,
                   tests=tests,
                   compiler=compiler,
                   instructions_coverage=instructions_coverage)

    def to_dict(self) -> Dict[str, Any]:
        """
        Produces a dictionary-based description of this bug, ready to be
        serialised in a JSON or YAML format.
        """
        d = {
            'name': self.name,
            'image': self.image,
            'program': self.program,
            'dataset': self.dataset,
            'source': self.source,
            'source-location': self.source_dir,
            'languages': [l.name for l in self.languages],
            'compiler': self.compiler.to_dict(),
            'test-harness': self.tests.to_dict()
        }
        if self.instructions_coverage:
            d['coverage'] = self.instructions_coverage.to_dict()
        return d
