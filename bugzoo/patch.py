class Patch(object):
    """
    Used to abstractly represent a change to the source code of an bug.
    All subclasses of Patch implement their own `to_diff` method, responsible
    for transforming their own internal representation to a diff.
    """

    def to_diff(self) -> str:
        """
        Returns the contents of this patch as a diff.
        """
        raise NotImplementedError
