import operator

from cement.ext.ext_argparse import ArgparseController, expose

from ...core.source import RemoteSource
from ...exceptions import NameInUseError


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

    @expose(
        help='registers a given source with this BugZoo installation',
        arguments=[
            (['name'], {'help': 'a unique name for the source',
                        'type': str}),
            (['url_or_path'], {'help': 'the URL or path to the source',
                        'type': str})]
    )
    def add(self) -> None:
        bz = self.app.daemon
        name = self.app.pargs.name
        url_or_path = self.app.pargs.url_or_path
        try:
            bz.sources.add(name, url_or_path)
            print('added source: {} -> {}'.format(name, url_or_path))
        except NameInUseError:
            print('source already registered with name: {}'.format(name))

    @expose(help='downloads any updates for registered sources')
    def update(self) -> None:
        print('updating sources...')
        bz = self.app.daemon
        bz.sources.update()
