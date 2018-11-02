import operator

import cement

from ... import exceptions


class BugController(cement.Controller):
    class Meta:
        label = 'bug'
        description = 'install, remove, and interact with historical bugs'
        stacked_on = 'base'
        stacked_type = 'nested'
        output_handler = 'tabulate'
        extensions = ['tabulate']

    @cement.ex(
        help='produces a list of registered bugs',
        arguments=[
            (['-q'], {'help': 'prints an unannotated list of the names of all registered bugs',  # noqa: pycodestyle
                      'action': 'store_true'}),
#            (['--installed'],
#             {'help': 'restricts list of bugs to only those that are installed.',
#              'action': 'store_true',
#              'dest': 'installed'}),
#            (['--uninstalled'],
#             {'help': 'restricts list of bugs to only those that are not installed.',
#              'action': 'store_false',
#              'dest': 'installed'})
        ]
    )
    def list(self) -> None:
        headers = ['Bug', 'Program', 'Dataset', 'Source', 'Installed?']
        data = []
        bugs = self.app.daemon.bugs
        for bug in bugs:
            # if hasattr(self.app.pargs, 'installed'):
            #     if bugs.is_installed(bug) != self.app.pargs.installed:
            #         continue
            row = [
                bug.name,
                bug.program if bug.program else '-',
                bug.dataset if bug.dataset else '-',
                bug.source if bug.source else '-',
                'Yes' if bugs.is_installed(bug) else 'No'
            ]
            data.append(row)
        data = sorted(data, key=operator.itemgetter(3, 2, 1, 0))
        if self.app.pargs.q:
            print('\n'.join([r[0] for r in data]))
        else:
            self.app.render(data, headers=headers)

    @cement.ex(
        help='downloads the Docker image for a given bug',
        arguments=[
            (['bug'], {'help': 'the name of the bug', 'type': str})
        ]
    )
    def download(self) -> None:
        name_bug = self.app.pargs.bug
        print('downloading bug: {}'.format(name_bug))
        bugs = self.app.daemon.bugs
        try:
            bug = bugs[name_bug]
        except KeyError:
            raise exceptions.BugNotFound(name_bug)
        bugs.download(bug)

    @cement.ex(
        help='uploads the Docker image for a given bug',
        arguments=[
            (['bug'], {'help': 'the name of the bug', 'type': str})
        ]
    )
    def upload(self) -> None:
        name_bug = self.app.pargs.bug
        print('uploading bug: {}'.format(name_bug))
        bugs = self.app.daemon.bugs
        try:
            bug = bugs[name_bug]
        except KeyError:
            raise exceptions.BugNotFound(name_bug)
        bugs.upload(bug)

    @cement.ex(
        help='builds the Docker image for a given bug',
        arguments=[
            (['bug'], {'help': 'the name of the bug', 'type': str})
        ]
    )
    def build(self) -> None:
        name_bug = self.app.pargs.bug
        print('building bug: {}'.format(name_bug))
        bugs = self.app.daemon.bugs
        try:
            bug = bugs[name_bug]
        except KeyError:
            raise exceptions.BugNotFound(name_bug)
        bugs.build(bug)

    @cement.ex(
        help='removes the Docker image for a given bug',
        aliases=['rm'],
        arguments=[
            (['bug'], {'help': 'the name of the bug', 'type': str}),
            (['-f', '--force'],
             {'help': 'does not report an error if image is not installed.',
              'action': 'store_true'})
        ]
    )
    def remove(self) -> None:
        name_bug = self.app.pargs.bug
        print('removing bug: {}'.format(name_bug))
        bugs = self.app.daemon.bugs
        try:
            bug = bugs[name_bug]
        except KeyError:
            raise exceptions.BugNotFound(name_bug)
        bugs.uninstall(bug, force=self.app.pargs.force)

    @cement.ex(
        help='validates that a given bug behaves as expected',
        arguments=[
            (['bug'], {'help': 'the name of the bug', 'type': str}),
            (['--verbose'],
             {'help': 'dumps the output of building and testing to the stdout',  # noqa: pycodestyle
              'action': 'store_true'})
        ]
    )
    def validate(self) -> None:
        name_bug = self.app.pargs.bug
        print('validating bug: {}'.format(name_bug))
        bz = self.app.daemon
        bug = bz.bugs[name_bug]
        if bz.bugs.validate(bug, verbose=self.app.pargs.verbose):
            print('OK')
        else:
            print('FAIL')

    @cement.ex(
        help='computes line coverage information for a given bug',
        arguments=[
            (['bug'], {'help': 'the name of the bug', 'type': str}),
            (['--no-cache'],
             {'help': 'forces coverage information to be recomputed by ignoring the cache',  # noqa: pycodestyle
              'dest': 'use_cache',
              'action': 'store_false'})
        ]
    )
    def coverage(self) -> None:
        name_bug = self.app.pargs.bug
        bz = self.app.daemon
        bugs = self.app.daemon.bugs
        try:
            bug = bugs[name_bug]
        except KeyError:
            raise exceptions.BugNotFound(name_bug)

        if self.app.pargs.use_cache:
            cov = bz.bugs.coverage(bug)
        else:
            container = bz.containers.provision(bug)
            try:
                cov = bz.coverage.coverage(container, bug.tests)
            finally:
                del bz.containers[container.uid]
        print(cov)
