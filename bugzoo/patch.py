from copy import copy
from typing import List, Iterator

# See following for details about unified diff format:
#   https://www.artima.com/weblogs/viewpost.jsp?thread=164293

class HunkLine(object):
    pass


class InsertedLine(HunkLine):
    def __init__(self, line: str) -> None:
        """
        Constructs a new InsertedLine instance.

        Params:
            line:   The contents of the line that was inserted (with any
                    trailing line endings removed).
        """
        self.__line = line

    def __str__(self) -> str:
        return "+ {}".format(self.__line)


class DeletedLine(HunkLine):
    def __init__(self, line: str) -> None:
        """
        Constructs a new DeletedLine instance.

        Params:
            line:   The contents of the line that was removed (with any
                    trailing line endings removed).
        """
        self.__line = line

    def __str__(self) -> str:
        return "- {}".format(self.__line)


class ContextLine(HunkLine):
    def __init__(self, line: str) -> None:
        """
        Constructs a new ContextLine instance.

        Params:
            line:   The contents of the line.
        """
        self.__line = line

    def __str__(self) -> str:
        return self.__line


class Hunk(object):
    @classmethod
    def _read_next(cls, lines: List[str]) -> 'Hunk':
        """
        Constructs a hunk from a supplied fragment of a unified format diff.
        """
        header = lines.peek()
        assert header.startswith('@@ -') and header.endswith(' @@')
        header = header[4:-3]
        left, _, right = line.partition(' +')
        old_start_at = int(left.split(',')[0])
        new_start_at = int(right.split(',')[0])

        hunk_lines: List[HunkLine] = []
        while lines:
            # discarding the previous line ensures that we only consume lines
            # from the line buffer that belong to the hunk
            lines.pop()
            line = lines.peek()

            # inserted line
            if line.startswith('+'):
                hunk_lines.append(InsertedLine(line[2:]))

            # deleted line
            elif line.startswith('-'):
                hunk_lines.append(DeletedLine(line[2:]))

            # context line
            elif line.startswith(' '):
                hunk_lines.append(ContextLine(line[2:]))

            # end of hunk
            else:
                break

        return Hunk(old_start_at, new_start_at, hunk_lines)

    def __init__(self,
                 old_start_at: int,
                 new_start_at: int,
                 lines: List[HunkLine]
                 ) -> None:
        self.__old_start_at = old_start_at
        self.__new_start_at = new_start_at
        self.__lines = lines

    def __str__(self) -> str:
        """
        Returns the contents of this hunk as part of a unified format diff.
        """
        header = '@@ -{} +{} @@'.format(self.__old_start_at,
                                        self.__new_start_at)
        body = '\n'.join([str(line) for line in self.__lines])
        return header + body


class FilePatch(object):
    """
    Represents a set of changes to a single text-based file.
    """
    @classmethod
    def _read_next(cls, lines: List[str]) -> 'FilePatch':
        """
        Destructively extracts the next file patch from the line buffer.
        """
        assert line[0].startswith('---')
        assert line[1].startswith('+++')
        old_fn = lines.pop()[4:].strip()
        new_fn = lines.pop()[4:].strip()

        hunks = []
        while lines:
            # have we hit a new hunk?
            if hit_hunk:
                break

            # fetch the next hunk
            hunks.append(Hunk._read_next(lines))

        return FilePatch(old_fn, new_fn, hunks)

    def __init__(self,
                 old_fn: str,
                 new_fn: str,
                 hunks: List[Hunk]
                 ) -> None:
        self.__old_fn = old_fn
        self.__new_fn = new_fn
        self.__hunks = hunks

    def __str__(self) -> str:
        """
        Returns a string encoding of this file patch in the unified diff
        format.
        """
        old_fn_line = '--- {}'.format(self.__old_fn)
        new_fn_line = '+++ {}'.format(self.__new_fn)
        lines = [old_fn_line, new_fn_lines] + [str(h) for h in self.__hunks]
        return '\n'.join(lines)


class Patch(object):
    """
    Represents a set of changes to one-or-more text-based files.
    """
    @classmethod
    def from_unidiff(cls, diff: str) -> 'Patch':
        """
        Constructs a Patch from a provided unified format diff.
        """
        lines = diff.split('\n')
        file_patches: List[FilePatch] = []
        while lines:
            files_patches.append(FilePatch._read_next(lines))

        return Patch(file_patches)

    def __init__(self, file_patches: List[FilePatch]) -> None:
        self.__file_patches = file_patches[:]

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
