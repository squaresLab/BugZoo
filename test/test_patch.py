#!/usr/bin/env python
import unittest
import bugzoo
from bugzoo.patch import Hunk, FilePatch, Patch


def dedent(s: str) -> str:
    def num_leading_spaces(s: str) -> int:
        n = len(s) - len(s.lstrip(' '))
        return n

    offset = 1 if s[0] == '\n' else 0
    lines = s.split('\n')
    spaces = min(num_leading_spaces(ss) for ss in lines[offset:])
    dedented = '\n'.join(l[spaces:] for l in lines)
    return dedented


class HunkTestCase(unittest.TestCase):
    def test_read_next(self):
        from_s = """
        @@ -1 +1 @@
        -The Way that can be told of is not the eternal Way;
        -The name that can be named is not the eternal name.
         The Nameless is the origin of Heaven and Earth;
        -The Named is the mother of all things.
        +The named is the mother of all things.
        +
         Therefore let there always be non-being,
           so we may see their subtlety,
         And let there always be being,
        """
        from_s = dedent(from_s)[1:-1]
        lines = from_s.split('\n')

        hunk = Hunk._read_next(lines)

        self.assertEqual(lines, [])
        self.assertEqual(str(hunk), from_s)


class FilePatchTestCase(unittest.TestCase):
    def test_read_next(self):
        from_s = """
        diff --git a/file-two.txt b/file-two.txt
        new file mode 100644
        index 0000000..2990e5b
        --- /dev/null
        +++ b/file-two.txt
        @@ -0 +1 @@
        +This is file two.
        +How do you do?
        diff --git a/testfile.c b/testfile.c
        index f50a1fc..60ed6ff 100644
        --- a/testfile.c
        +++ b/testfile.c
        @@ -6 +6 @@ int testfun(int a, int b)
           x = a + b;
           x *= x;
         
        +  int z = 10000;
        +
           int y;
           y = x * 2;
        """
        from_s = dedent(from_s)[1:-1]
        lines = from_s.split('\n')

        expected_l1 = lines[8:]
        expected_s1 = '\n'.join(lines[3:-12])
        expected_s2 = '\n'.join(lines[10:])

        patch = FilePatch._read_next(lines)

        self.assertEqual(str(patch), expected_s1)
        self.assertEqual(lines, expected_l1)

        patch = FilePatch._read_next(lines)

        self.assertEqual(str(patch), expected_s2)
        self.assertEqual(lines, [])


class PatchTestCase(unittest.TestCase):
    def test_from_unidiff(self):
        from_s = """
        diff --git a/file-two.txt b/file-two.txt
        new file mode 100644
        index 0000000..2990e5b
        --- /dev/null
        +++ b/file-two.txt
        @@ -0 +1 @@
        +This is file two.
        +How do you do?
        diff --git a/testfile.c b/testfile.c
        index f50a1fc..60ed6ff 100644
        --- a/testfile.c
        +++ b/testfile.c
        @@ -6 +6 @@ int testfun(int a, int b)
           x = a + b;
           x *= x;
         
        +  int z = 10000;
        +
           int y;
           y = x * 2;
        """
        from_s = dedent(from_s)[1:-1]
        lines = from_s.split('\n')
        expected_s = \
            '\n'.join(lines[3:8] + lines[10:])

        patch = Patch.from_unidiff(from_s)
        self.assertEqual(str(patch), expected_s)


if __name__ == '__main__':
    unittest.main()
