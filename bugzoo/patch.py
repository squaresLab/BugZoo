from copy import copy
from typing import List, Iterator


class Hunk(object):
    @classmethod
    def from_unidiff(cls, diff: str) -> 'Hunk':
        """
        Constructs a hunk from a supplied fragment of a unified format diff.
        """
        raise NotImplementedError

    def __str__(self) -> str:
        """
        Returns the contents of this hunk as part of a unified format diff.
        """
        raise NotImplementedError


class FilePatch(object):
    """
    Represents a set of changes to a single text-based file.
    """
    @classmethod
    def from_unidiff(cls, diff: str) -> 'FilePatch':
        raise NotImplementedError


class Patch(object):
    """
    Represents a set of changes to one-or-more text-based files.
    """
    @classmethod
    def from_unidiff(cls, diff: str) -> 'Patch':
        """
        Constructs a Patch from a provided unified format diff.
        """
        # split the patch by file
        file_diffs = TODO
        file_patches = \
            {fn: FileDiff.from_unidiff(d) for (fn, d) in file_patches}
        return Patch(file_patches)


    def __init__(self, file_patches: Dict[str, FilePatch]) -> None:
        self.__file_patches = copy(file_patches)


    def __iter__(self) -> Iterator[Hunk]:
        """
        Returns an iterator over the hunks contained within this patch.
        """
        for hunk in self.__hunks:
            yield hunk

    def __str__(self) -> str:
        """
        Returns the contents of this patch as a unified format diff.
        """
        raise NotImplementedError

    diff = __str__
