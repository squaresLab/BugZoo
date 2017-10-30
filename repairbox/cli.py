import argparse
import tabulate
import typing

from operator import itemgetter
from repairbox.manager import RepairBox


def list_sources(rbox: 'RepairBox') -> None:
    """
    Produces a list of all the sources known to RepairBox.
    """
    hdrs = ['Source', 'URL', 'Version'] 
    tbl = []
    for src in rbox.sources.sources:
        tbl.append([src.name, src.url, src.version])

    # transform into a pretty table
    tbl = tabulate.tabulate(tbl, headers=hdrs, tablefmt='simple')
    print('')
    print(tbl)


def add_source(rbox: 'RepairBox', src: str) -> None:
    rbox.sources.add(src)
    print('added source: {}'.format(src))


def remove_source(rbox: 'RepairBox', src: str) -> None:
    rbox.sources.remove(src)
    print('removed source: {}'.format(src))


def update_sources(rbox: 'RepairBox', ) -> None:
    print('updating sources...')
    rbox.sources.update()


def install_artefact(rbox: 'RepairBox', name: str, update: bool) -> None:
    print('installing artefact: {}'.format(name))
    artefact = rbox.artefacts[name]
    artefact.install(upgrade=update)


def download_artefact(rbox: 'RepairBox', name: str, force: bool) -> None:
    print('downloading artefact: {}'.format(name))
    artefact = rbox.artefacts[name]
    artefact.download(force=force)


def uninstall_bug(rbox: 'RepairBox', name: str, force: bool) -> None:
    print('uninstalling artefact: {}'.format(name))
    artefact = rbox.artefacts[name]
    artefact.uninstall(force=force)


def launch(rbox: 'RepairBox', name: str) -> None:
    artefact = rbox.artefacts[name]
    artefact.install()
    try:
        c = None
        c = artefact.provision(tty=True)
        c.interact()
    finally:
        if c: # ensure the container is destroyed
            c.destroy()


def list_artefacts(rbox: 'RepairBox', show_installed=None) -> None:
    """
    Produces a list of all the artefacts registered with RepairBox.
    """
    tbl = []
    hdrs = ['Artefact', 'Source', 'Installed?']
    for artefact in rbox.artefacts:

        # apply filtering based on installation status
        if show_installed is not None:
            if show_installed != artefact.installed:
                continue

        installed = 'Yes' if artefact.installed else 'No'
        row = [artefact.identifier, artefact.source.name, installed]
        tbl.append(row)

    # sort by source then by artefact
    tbl = sorted(tbl, key=itemgetter(1,2))

    # transform into a pretty table
    tbl = tabulate.tabulate(tbl, headers=hdrs, tablefmt='simple')
    print('')
    print(tbl)


def main():
    #with open(os.path.join(os.path.dirname(__file__), "banner.txt"), "r") as f:
    #    desc = f.read()
    rbox = RepairBox()

    desc = ':-)'
    parser = argparse.ArgumentParser(description=desc,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    subparsers = parser.add_subparsers()
    parser.add_argument('--version', action='version', version='2.0.0')

    ###########################################################################
    # [source] group
    ###########################################################################
    g_src = subparsers.add_parser('source')
    g_subparsers = g_src.add_subparsers()

    # [source list]
    cmd = g_subparsers.add_parser('list')
    cmd.set_defaults(func=lambda args: list_sources(rbox))

    # [source add :src]
    cmd = g_subparsers.add_parser('add')
    cmd.add_argument('src')
    cmd.set_defaults(func=lambda args: add_source(rbox, args.src))

    # [source remove :src]
    cmd = g_subparsers.add_parser('remove')
    cmd.add_argument('src')
    cmd.set_defaults(func=lambda args: remove_source(rbox, args.src))

    # [source update]
    cmd = g_subparsers.add_parser('update')
    cmd.set_defaults(func=lambda args: update_sources())

    ###########################################################################
    # [artefact] group
    ###########################################################################
    g_artefact = subparsers.add_parser('artefact')
    g_subparsers = g_artefact.add_subparsers()

    # [artefact install (--update) :artefact]
    cmd = g_subparsers.add_parser('install')
    cmd.add_argument('artefact')
    cmd.add_argument('--update',
                     action='store_true')
    cmd.set_defaults(func=lambda args: install_artefact(rbox, args.artefact, args.update))

    # [artefact uninstall (--force) :artefact]
    cmd = g_subparsers.add_parser('uninstall')
    cmd.add_argument('artefact')
    cmd.add_argument('--force',
                     action='store_true')
    cmd.set_defaults(func=lambda args: uninstall_artefact(rbox, args.artefact, force=args.force))

    # [artefact download (--force) :artefact]
    cmd = g_subparsers.add_parser('download')
    cmd.add_argument('artefact')
    cmd.add_argument('--force',
                     action='store_true')
    cmd.set_defaults(func=lambda args: download_artefact(rbox, args.artefact, args.force))

    # TODO: to which group does this belong?
    # [artefact launch :artefact]
    cmd = g_subparsers.add_parser('launch')
    cmd.add_argument('artefact')
    cmd.set_defaults(func=lambda args: launch(rbox, args.artefact))

    # [artefact list]
    cmd = g_subparsers.add_parser('list')
    cmd.add_argument('--installed',
                     dest='installed',
                     action='store_true')
    cmd.add_argument('--uninstalled',
                     dest='installed',
                     action='store_false')
    cmd.set_defaults(feature=True)
    cmd.set_defaults(func=lambda args: list_artefacts(rbox,args.installed))


    # parse and process arguments
    args = parser.parse_args()
    if 'func' in vars(args):
        args.func(args)


if __name__ == "__main__":
    main()
