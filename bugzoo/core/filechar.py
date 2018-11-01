__all__ = ['FileChar', 'FileCharRange']

import attr


@attr.s(frozen=True)
class FileChar(object):
    """
    Encodes the location of a given character in a source code file.
    """

    """The name of the file to which this character belongs."""
    filename = attr.ib(type=str)

    """The number of characters that precede this character in the file."""
    offset = attr.ib(type=int)

    def __str__(self) -> str:
        return "{}[{}]".format(self.filename, self.offset)


@attr.s(frozen=True)
class FileCharRange(object):
    """
    Describes a contiguous range of characters in a single file.
    """

    """The location of the character at which this range begins."""
    start = attr.ib(type=FileChar)

    """The location of the character at which this range ends."""
    stop = attr.ib(type=FileChar)

    def __str__(self) -> str:
        return "{}[{}..{}]".format(self.filename,
                                   self.start.offset,
                                   self.stop.offset)

    @property
    def filename(self) -> str:
        """
        The name of the file that this character range covers.
        """
        return self.start.filename

    def __len__(self) -> int:
        """
        Returns the length of this range, as measured by the number of
        characters that it spans.
        """
        return self.stop.offset - self.start.offset
