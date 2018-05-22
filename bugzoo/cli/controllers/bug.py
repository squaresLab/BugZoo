from cement.ext.ext_argparse import ArgparseController, expose


class BugController(ArgparseController):
    class Meta:
        label = 'bug'
        description = 'install, remove, and interact with historical bugs'
        stacked_on = 'base'
        stacked_type = 'nested'
        output_handler = 'tabulate'
        extensions = ['tabulate']
        arguments = [
        ]

    @expose(
        help='produces a list of registered bugs',
        arguments=[
            (['-q'], {'help': 'prints an unannotated list of the names of all registered bugs',  # noqa: pycodestyle
                      'action': 'store_true'})
        ]
    )
    def list(self) -> None:
        headers = ['Bug', 'Program', 'Dataset', 'Source', 'Installed?']
        data = []
        bugs = self.app.daemon.bugs
        for bug in bugs:
            row = [
                bug.name,
                bug.program if bug.program else '-',
                bug.dataset if bug.dataset else '-',
                bug.source if bug.source else '-',
                'Yes' if bugs.is_installed(bug) else 'No'
            ]
            data.append(row)
        if self.app.pargs.q:
            print('\n'.join([r[0] for r in data]))
        else:
            self.app.render(data, headers=headers)
