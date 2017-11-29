#!/usr/bin/env python3
import unittest
import bugzoo.cli
import bugzoo


class CLITestCase(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.parser = bugzoo.cli.build_parser()

    def run_command(self, args):
        args = self.parser.parse_args(args)
        args.func(args)


class ManyBugsTestCase(CLITestCase):
    def test_add_source(self):
        manybugs_url = 'https://github.com/ChrisTimperley/ManyBugs'

        # attempt to install ManyBugs
        self.run_command(['source', 'add', manybugs_url])

        # check that the source has been registered
        bz = bugzoo.BugZoo()
        try:
            bz.sources.get_by_url(manybugs_url)
        except:
            self.fail("Failed to find registered source.")

        # remove the source
        self.run_command(['source', 'remove', manybugs_url])


if __name__ == '__main__':
    unittest.main()
