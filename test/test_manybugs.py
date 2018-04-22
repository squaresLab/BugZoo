import unittest

import bugzoo
import bugzoo.cli
from bugzoo.exceptions import *


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
        self.run_command(['source', 'add', 'manybugs', manybugs_url])

        # check that the source has been registered
        try:
            bz.sources.refresh()
            bz.sources['manybugs']
        except KeyError:
            self.fail("Failed to find registered source.")

        # remove the source
        self.run_command(['source', 'remove', 'manybugs'])
        bz.sources.refresh()

        with self.assertRaises(KeyError):
            bz.sources['manybugs']

        # re-add ManyBugs!
        self.run_command(['source', 'add', 'manybugs', manybugs_url])
        try:
            bz.sources.refresh()
            bz.sources['manybugs']
        except KeyError:
            self.fail("Failed to find registered source.")


if __name__ == '__main__':
    unittest.main()
