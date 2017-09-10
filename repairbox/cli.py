#!/usr/bin/env python3
import argparse

from repairbox.manager import RepairBoxManager

def list_sources() -> None:
    for src in RepairBoxManager.sources.sources:
        print("- {}".format(src.url))

def add_source(src: str) -> None:
    RepairBoxManager.sources.add(src)
    print('added source: {}'.format(src))


def main():
    #with open(os.path.join(os.path.dirname(__file__), "banner.txt"), "r") as f:
    #    desc = f.read()

    src = RepairBoxManager.sources['https://github.com/squaresLab/ardubugs']
    bug = src.bugs['ardubugs:copter:027552e']
    bug.build()

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


    args = parser.parse_args()
    if 'func' in vars(args):
        args.func(args)


if __name__ == "__main__":
    main()
