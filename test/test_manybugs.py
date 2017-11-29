#!/usr/bin/env python3
import unittest
import bugzoo.cli

class CLITestCase(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.parser = bugzoo.cli.build_parser()

    def run_command(self, args):
        args = self.parser.parse_args(args)
        args.func(args)


class ManyBugsTestCase(CLITestCase):
    def test_add_source(self):
        self.run_command(['source', 'add', 'https://github.com/ChrisTimperley/ManyBugs'])
        self.assertTrue(True)


if __name__ == '__main__':
    unittest.main()
