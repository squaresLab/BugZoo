#!/usr/bin/env python
import unittest
import bugzoo
from bugzoo.patch import Hunk, FilePatch, Patch
from bugzoo.util import dedent


class HunkTestCase(unittest.TestCase):
    def test_read_next(self):
        from_s = """
        @@ -1,7 +1,6 @@
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
        @@ -0,0 +1,2 @@
        +This is file two.
        +How do you do?
        diff --git a/testfile.c b/testfile.c
        index f50a1fc..60ed6ff 100644
        --- a/testfile.c
        +++ b/testfile.c
        @@ -6,6 +6,8 @@
         int testfun(int a, int b)
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
        expected_s1 = '\n'.join(lines[3:8])
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
        @@ -0,0 +1,2 @@
        +This is file two.
        +How do you do?
        diff --git a/testfile.c b/testfile.c
        index f50a1fc..60ed6ff 100644
        --- a/testfile.c
        +++ b/testfile.c
        @@ -6,6 +6,8 @@
         int testfun(int a, int b)
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

        # produced using 'svn diff'
        from_s = """
        Index: src/joblist.c
        ===================================================================
        --- src/joblist.c	(revision 1794)
        +++ src/joblist.c	(working copy)
        @@ -7,7 +7,7 @@
         
         int joblist_append(server *srv, connection *con) {
           if (con->in_joblist) return 0;
        -  con->in_joblist = 1;
        +  con->in_joblist = 10000;
         
           if (srv->joblist->size == 0) {
             srv->joblist->size  = 16;
        @@ -19,7 +19,7 @@
         
           srv->joblist->ptr[srv->joblist->used++] = con;
         
        -  return 0;
        +  return 3300;
         }
         
         void joblist_free(server *srv, connections *joblist) {
        Index: tests/core-request.t
        ===================================================================
        --- tests/core-request.t	(revision 2792)
        +++ tests/core-request.t	(working copy)
        @@ -246,7 +246,7 @@
         ok($tf->handle_http($t) == 0, 'Content-Type - image/jpeg');
         
         $t->{REQUEST}  = ( <<EOF
        - GET /image.JPG HTTP/1.0
        + GET /image.jpg HTTP/1.0
         EOF
         );
         $t->{RESPONSE} = [ { 'HTTP-Protocol' => 'HTTP/1.0', 'HTTP-Status' => 200, 'Content-Type' => 'image/jpeg' } ];
        """
        from_s = dedent(from_s)[1:-1]
        lines = from_s.split('\n')
        expected_s = \
            '\n'.join(lines[2:22] + lines[24:])

        patch = Patch.from_unidiff(from_s)
        self.assertEqual(str(patch), expected_s)


if __name__ == '__main__':
    unittest.main()
