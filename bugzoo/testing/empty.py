from typing import Dict, Any
from bugzoo.testing.base import TestSuite


class EmptyTestSuite(TestSuite):
    """
    Used to conveniently represent an empty test suite.
    """
    def __init__(self):
        super().__init__([])

    def to_dict(self) -> Dict[str, Any]:
        return {'type': 'empty'}
