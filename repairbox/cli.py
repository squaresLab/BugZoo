#!/usr/bin/env python3
import argparse

from repairbox.manager import RepairBoxManager

def list_sources() -> None:
    for src in RepairBoxManager.sources.sources:
        print("- {}".format(src.url))


def add_source(src: str) -> None:
    RepairBoxManager.sources.add(src)
    print('added source: {}'.format(src))


def update_sources() -> None:
    print('updating sources...')
    RepairBoxManager.sources.update()


def install_bug(name: str) -> None:
    print('installing bug: {}'.format(name))
    bug = RepairBoxManager.bugs[name]
    bug.install()


def main():
    #with open(os.path.join(os.path.dirname(__file__), "banner.txt"), "r") as f:
    #    desc = f.read()

    src = RepairBoxManager.sources['https://github.com/squaresLab/ardubugs']
    # bug = src.bugs['ardubugs:copter:027552e']
    # bug.uninstall(force=True)
    # bug.build()

    desc = ':-)'
    parser = argparse.ArgumentParser(description=desc,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    subparsers = parser.add_subparsers()
    parser.add_argument('--version', action='version', version='2.0.0')

    # list-sources
    list_sources_parser = subparsers.add_parser('list-sources')
    list_sources_parser.set_defaults(func=lambda args: list_sources())

    # add-source [src]
    add_source_parser = subparsers.add_parser('add-source')
    add_source_parser.add_argument('src')
    add_source_parser.set_defaults(func=lambda args: add_source(args.src))

    # install-bug [src]
    install_bug_parser = subparsers.add_parser('install-bug')
    install_bug_parser.add_argument('bug')
    install_bug_parser.set_defaults(func=lambda args: install_bug(args.bug))

    # update-sources
    update_sources_parser = subparsers.add_parser('update-sources')
    update_sources_parser.set_defaults(func=lambda args: update_sources())


    args = parser.parse_args()
    if 'func' in vars(args):
        args.func(args)


if __name__ == "__main__":
    main()
