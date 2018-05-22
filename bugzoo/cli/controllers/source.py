import operator

from cement.ext.ext_argparse import ArgparseController, expose

from ...core.source import RemoteSource


class SourceController(ArgparseController):
    class Meta:
        label = 'source'
        description = 'add, remove, and list sources of bugs'
        stacked_on = 'base'
        stacked_type = 'nested'
        output_handler = 'tabulate'
        extensions = ['tabulate']

    @expose(
        help='produces a list of all registered sources',
        arguments=[
            (['-q'],
             {'help': 'prints an unannotated list of the names of all registered bugs',  # noqa: pycodestyle
              'action': 'store_true'})]
    )
    def list(self) -> None:
        bz = self.app.daemon
        headers = ['Source', 'Type', 'URL', 'Location', 'Version']
        data = []
        for src in bz.sources:
            typ = 'Remote' if isinstance(src, RemoteSource) else 'Local'
            version = src.version if isinstance(src, RemoteSource) else '-'
            url = src.url if isinstance(src, RemoteSource) else '-'
            data.append([src.name, typ, url, src.location, version])
        data = sorted(data, key=operator.itemgetter(1,))
        if self.app.pargs.q:
            print('\n'.join([r[0] for r in data]))
        else:
            self.app.render(data, headers=headers)
