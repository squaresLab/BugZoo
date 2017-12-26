#!/usr/bin/env python
import unittest
import bugzoo
from textwrap import dedent
from bugzoo.patch import Hunk


class ManyBugsTestCase(unittest.TestCase):
    def test_parse_hunk(self):
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


if __name__ == '__main__':
    unittest.main()
