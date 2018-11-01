__all__ = ['CoverageExtractor']

from typing import FrozenSet, Optional, Iterable, Dict
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


class CoverageExtractor(object):
    """
    Used to compute coverage information for a given container according to a
    provided set of instructions.
    """
    @staticmethod
    def build(installation: 'BugZoo',
              container: Container,
              instructions: CoverageInstructions
              ) -> 'CoverageExtractor':
        # FIXME use registry
        from .gcov import GcovExtractor

        extractor = GcovExtractor(installation, container, instructions)
        return extractor
