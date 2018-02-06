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
        bz = bugzoo.BugZoo()
        manybugs_url = 'https://github.com/squaresLab/ManyBugs'

        # attempt to install ManyBugs
        self.run_command(['source', 'add', manybugs_url])

        # check that the source has been registered
        try:
            bz.rescan()
            bz.sources.get_by_url(manybugs_url)
        except:
            self.fail("Failed to find registered source.")

        # remove the source
        self.run_command(['source', 'remove', manybugs_url])

        bz.rescan()
        with self.assertRaises(bugzoo.errors.SourceNotFoundWithURL):
            bz.sources.get_by_url(manybugs_url)

        # re-add ManyBugs!
        self.run_command(['source', 'add', manybugs_url])
        try:
            bz.rescan()
            bz.sources.get_by_url(manybugs_url)
        except:
            self.fail("Failed to find registered source.")


if __name__ == '__main__':
    unittest.main()
