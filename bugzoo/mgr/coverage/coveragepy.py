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
    class Instructions(CoverageInstructions):
        @staticmethod
        def from_dict(d: Dict[str, Any]) -> 'CoverageInstructions':
            return CoveragePyExtractor.Instructions()

        def to_dict(self) -> Dict[str, Any]:
            return {}

    @staticmethod
    def from_instructions(installation: 'BugZoo',
                          container: Container,
                          instructions: Instructions
                          ) -> None:
        return CoveragePyExtractor(installation, container)

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

        raise NotImplementedError
