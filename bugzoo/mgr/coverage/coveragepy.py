__all__ = ('CoveragePyExtractor',)

from typing import FrozenSet, Optional, Iterable, Dict, Any, List
import json
import logging

import attr

from .extractor import CoverageExtractor, register, register_as_default
from ...core import FileLineSet, Container, CoverageInstructions, Language
from ... import exceptions

logger = logging.getLogger(__name__)  # type: logging.Logger
logger.setLevel(logging.DEBUG)


@register_as_default(Language.PYTHON)
@register('coverage.py')
class CoveragePyExtractor(CoverageExtractor):
    @attr.s(frozen=True)
    class Instructions(CoverageInstructions):
        """
        Attributes
        ----------
        filename: str
            The absolute path of the file to which coverage information is
            saved to by coverage.py.
        """
        filename = attr.ib(type=str)

        @staticmethod
        def from_dict(d: Dict[str, Any]) -> 'CoverageInstructions':
            assert 'filename' in d, 'expected "filename" property'
            filename = d['filename']
            assert os.path.isabs(filename), 'expected absolute filename'
            return CoveragePyExtractor.Instructions(filename)

        def to_dict(self) -> Dict[str, Any]:
            return {'filename': self.filename}

    @staticmethod
    def from_instructions(installation: 'BugZoo',
                          container: Container,
                          instructions: Instructions
                          ) -> None:
        assert isinstance(instructions, CoveragePyExtractor)
        return CoveragePyExtractor(installation,
                                   container,
                                   instructions.filename)

    def __init__(installation: 'BugZoo',
                 container: Container,
                 coverage_filename: str
                 ) -> None:
        super().__init__(installation, container)
        self.__coverage_filename = coverage_filename

    @property
    def coverage_filename(self) -> str:
        """The container filepath of the coverage.py file."""
        return self.__coverage_filename

    def prepare(self) -> None:
        return

    def cleanup(self) -> None:
        return

    def extract(self) -> FileLineSet:
        container = self.container
        installation = self.installation
        mgr_ctr = installation.containers
        mgr_bug = installation.bugs
        bug = mgr_bug[container.bug]

        # attempt to read the coverage file
        filename = self.coverage_absolute_filename

        raise NotImplementedError
