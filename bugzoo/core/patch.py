from copy import copy
from typing import List, Iterator

# See following for details about unified diff format:
#   https://www.artima.com/weblogs/viewpost.jsp?thread=164293
#   https://www.gnu.org/software/diffutils/manual/html_node/Detailed-Unified.html#Detailed-Unified

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
        return "+{}".format(self.__line)


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
        return "-{}".format(self.__line)


class ContextLine(HunkLine):
    def __init__(self, line: str) -> None:
        """
        Constructs a new ContextLine instance.

        Params:
            line:   The contents of the line.
        """
        self.__line = line

    def __str__(self) -> str:
        return " {}".format(self.__line)


class Hunk(object):
    @classmethod
    def _read_next(cls, lines: List[str]) -> 'Hunk':
        """
        Constructs a hunk from a supplied fragment of a unified format diff.
        """
        header = lines[0]
        assert header.startswith('@@ -')

        # sometimes the first line can occur on the same line as the header.
        # in that case, we inject a new line into the buffer
        end_header_at = header.index(' @@')
        bonus_line = header[end_header_at+3:]
        if bonus_line != "":
            lines.insert(1, bonus_line)

        header = header[4:end_header_at]
        left, _, right = header.partition(' +')
        old_start_at = int(left.split(',')[0])
        new_start_at = int(right.split(',')[0])

        old_line_num = old_start_at
        new_line_num = new_start_at
        last_insertion_at = old_start_at


        hunk_lines = [] # type: List[HunkLine]
        while True:
            # discarding the previous line ensures that we only consume lines
            # from the line buffer that belong to the hunk
            lines.pop(0)
            if not lines:
                break

            line = lines[0]

            # inserted line
            if line.startswith('+'):
                hunk_lines.append(InsertedLine(line[1:]))
                new_line_num += 1

            # deleted line
            elif line.startswith('-'):
                hunk_lines.append(DeletedLine(line[1:]))
                old_line_num += 1

            # context line
            elif line.startswith(' '):
                hunk_lines.append(ContextLine(line[1:]))
                new_line_num += 1
                old_line_num += 1

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
        num_deleted = \
            sum(1 for l in self.__lines if isinstance(l, DeletedLine))
        num_inserted = \
            sum(1 for l in self.__lines if isinstance(l, InsertedLine))
        num_context = \
            sum(1 for l in self.__lines if isinstance(l, ContextLine))

        num_old_lines = num_context + num_deleted
        num_new_lines = num_context + num_inserted

        header = '@@ -{},{} +{},{} @@'.format(self.__old_start_at,
                                              num_old_lines,
                                              self.__new_start_at,
                                              num_new_lines)
        body = [str(line) for line in self.__lines]
        return '\n'.join([header] + body)


class FilePatch(object):
    """
    Represents a set of changes to a single text-based file.
    """
    @classmethod
    def _read_next(cls, lines: List[str]) -> 'FilePatch':
        """
        Destructively extracts the next file patch from the line buffer.
        """
        # keep munching lines until we hit one starting with '---'
        while True:
            if not lines:
                raise Exception("illegal file patch format: couldn't find line starting with '---'")
            line = lines[0]
            if line.startswith('---'):
                break
            lines.pop(0)

        assert lines[0].startswith('---')
        assert lines[1].startswith('+++')
        old_fn = lines.pop(0)[4:].strip()
        new_fn = lines.pop(0)[4:].strip()

        hunks = []
        while lines:
            if not lines[0].startswith('@@'):
                break
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
        lines = [old_fn_line, new_fn_line] + [str(h) for h in self.__hunks]
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
        file_patches = []
        while lines:
            if lines[0] == '' or lines[0].isspace():
                lines.pop(0)
                continue
            file_patches.append(FilePatch._read_next(lines))

        return Patch(file_patches)

    def __init__(self, file_patches: List[FilePatch]) -> None:
        self.__file_patches = file_patches[:]

    def __str__(self) -> str:
        """
        Returns the contents of this patch as a unified format diff.
        """
        file_patches = [str(p) for p in self.__file_patches]
        return '\n'.join(file_patches + [''])
