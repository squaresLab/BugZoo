__all__ = ['CoverageExtractor']

from typing import FrozenSet, Optional, Iterable, Dict, Type
from timeit import default_timer as timer
import xml.etree.ElementTree as ET
import os
import logging
import tempfile
import logging

from ...core import FileLineSet, Container, TestSuiteCoverage, TestCoverage, \
    CoverageInstructions, TestCase
from ... import exceptions

logger = logging.getLogger(__name__)  # type: logging.Logger
logger.setLevel(logging.DEBUG)


_NAME_TO_EXTRACTOR = {}  # type: Dict[str, Type[CoverageExtractor]]
_EXTRACTOR_TO_NAME = {}  # type: Dict[Type[CoverageExtractor], str]


def register(name: str):
    def decorator(cls: Type['CoverageExtractor']):
        cls.register(name)
        return cls
    return decorator


class CoverageExtractor(object):
    """
    Used to compute coverage information for a given container according to a
    provided set of instructions.
    """
    @classmethod
    def register(cls, name: str) -> None:
        if name in _NAME_TO_EXTRACTOR:
            raise exceptions.NameInUseError(name)
        if cls in _EXTRACTOR_TO_NAME:
            m = "coverage extractor is already registered under name: {}"
            m = m.format(_EXTRACTOR_TO_NAME[cls])
            raise Exception(m)

        try:
            instructions = cls.Instructions
        except UnboundLocalError:
            m = "coverage extractor doesn't provide an 'Instructions' class"
            raise Exception(m)
        if not issubclass(instructions, CoverageInstructions):
            m = "'Instructions' class should subclass 'CoverageInstructions'"
            raise Exception(m)

        instructions.register(name)
        _NAME_TO_EXTRACTOR[name] = cls
        _EXTRACTOR_TO_NAME[cls] = name
        return cls

    @staticmethod
    def build(installation: 'BugZoo',
              container: Container,
              instructions: CoverageInstructions
              ) -> 'CoverageExtractor':
        name = instructions.__class__.registered_under_name()
        extractor_cls = _NAME_TO_EXTRACTOR[name]
        extractor = extractor_cls(installation, container, instructions)
        return extractor
