from typing import Iterator, Tuple
import os
import json
import urllib
import urllib.parse

import git
import yaml
import shutil

from .build import BuildManager
from ..core.build import BuildInstructions
from ..core.tool import Tool
from ..core.source import Source, SourceContents, RemoteSource, LocalSource
from ..core.errors import NameInUseError


class SourceManager(object):
    """
    TODO: we *could* cache the contents of all of the sources to disk, avoiding
        the need to scan for them at startup. Although that might be cool, it
        seems like overengineering and may create compatibility headaches in
        the future.
    """
    def __init__(self,
                 installation: 'BugZoo'):
        self.__installation = installation
        self.__path = os.path.join(installation.path, 'sources')
        # TODO
        self.__registry_fn = os.path.join(self.__path, '.bugzoo.yml')
        self.__sources = {}
        self.__contents = {}
        self.refresh()

    def refresh(self) -> None:
        """
        Reloads all sources that are registered with this server.
        """
        for source in self:
            self.unload(source)

        if not os.path.exists(self.__registry_fn):
            return

        # TODO add version
        with open(self.__registry_fn, 'r') as f:
            registry = json.load(f)
        assert isinstance(registry, list)

        for source_description in registry:
            source = Source.from_dict(source_description)
            self.load(source)

    def save(self) -> None:
        """
        Saves the contents of the source manager to disk.
        """
        d = [s.to_dict() for s in self.__sources]
        with open(self.__registry_fn, 'w') as f:
            json.dump(d, f, indent=2)

    def unload(self, source: Source) -> None:
        """
        Unloads a registered source, causing all of its associated bugs, tools,
        and blueprints to also be unloaded. If the given source is not loaded,
        this function will do nothing.
        """
        try:
            contents = self.contents(source)
            del self.__contents[source.name]
            del self.__sources[source.name]

            for bug in contents.bugs:
                self.__installation.bugs.remove(bug)
            for blueprint in contents.blueprints:
                self.__installation.build.remove(blueprint)
            for tool in contents.tools:
                self.__installation.tools.remove(tool)
        except KeyError:
            pass

    # TODO: reimplement
    def update(self, source: Source) -> None:
        raise NotImplementedError

        #origin = self.__repo.remotes.origin
        #origin.pull()

    def load(self, source: Source) -> None:
        """
        Attempts to load all resources (i.e., bugs, tools, and blueprints)
        provided by a given source. If the given source has already been
        loaded, then that resources for that source are unloaded and
        reloaded.
        """
        self.unload(source)

        tools = []
        bugs = []
        blueprints = []

        def parse_blueprint(manifest_path: str, d: dict) -> BuildInstructions:
            root_dir = os.path.dirname(manifest_path)
            return BuildInstructions(os.path.dirname(manifest_path),
                                     d['tag'],
                                     d.get('context', '.'),
                                     d.get('arguments', {}),
                                     d.get('file', 'Dockerfile'),
                                     d.get('depends-on', None))

        def read_blueprint_file(manifest_path: str) -> BuildInstructions:
            with open(manifest_path, 'r') as f:
                return parse_blueprint(manifest_path, yaml.load(f))

        def read_bug_file(manifest_path: str
                          ) -> Tuple[Bug, BuildInstructions]:
            with open(manifest_path, 'r') as f:
                d = yaml.load(f)
                blueprint = parse_blueprint(manifest_path, d['build'])
                bug = Bug(yml['bug'],
                          yml.get('dataset', None),
                          yml.get('program', None),
                          source.name,
                          yml['source-location'],
                          [Language[lang] for lang in yml['languages']],
                          TestSuite.from_dict(yml['test-harness']),
                          Compiler.from_dict(yml['compiler']))
                return (bug, blueprint)

        # find all tools
        manifest_fn = os.path.join(source.location, '.bugzoo.yml')
        if os.path.exists(manifest_fn):
            with open(manifest_fn, 'r') as f:
                manifest = yaml.load(f)
                # TODO we actually ignore dataset manifests :-)
                if d['type'] == 'tool':
                    blueprint = parse_blueprint(d['build-instructions'])
                    tool = Tool(d['name'],
                                d.get('environment', {}),
                                blueprint.tag)
                    tools[tool.name] = tool
                    blueprints[blueprint.tag] = blueprint

        # find all blueprints
        glob_pattern = '{}/**/*.dependency.y*ml'.format(source.location)
        for fn in glob.iglob(glob_pattern, recursive=True):
            if fn.endswith('.yml') or fn.endswith('.yaml'):
                blueprint = read_blueprint_file(fn)
                blueprints[blueprint.tag] = blueprint

        # find all bugs
        glob_pattern = '{}/**/*.bug.y*ml'.format(ABS_PATH_TODO_ADD)
        for fn in glob.iglob(glob_pattern, recursive=True):
            if fn.endswith('.yml') or fn.endswith('.yaml'):
                bug, blueprint = read_bug_file(fn)
                bug[bug.tag] = bug
                blueprints[blueprint.tag] = blueprint

        # register contents
        for bug in bugs:
            self.__installation.bugs.add(bug)
        for tool in tools:
            self.__installation.tools.add(tool)
        for blueprints in blueprints:
            self.__installation.build.add(blueprint)

        # record contents of source
        contents = SourceContents([b.name for b in blueprints],
                                  [b.name for b in bugs],
                                  [t.name for t in tools])
        self.__contents[source.name] = contents

    def contents(source: Source) -> SourceContents:
        """
        Returns a summary of the bugs, tools, and blueprints provided by a
        given source.
        """
        return self.__contents[source.name]

    def add(self, name: str, path_or_url: str) -> Source:
        """
        Attempts to register a source provided by a given URL or local path
        under a given name.

        Returns:
            a description of the registered source.

        Raises:
            NameInUseError: if an existing source is already registered under
                the given name.
            IOError: if no directory exists at the given path.
            IOError: if downloading the remote source failed. (FIXME)
        """
        if name in self.__sources:
            raise NameInUseError(name)

        is_url = False
        try:
            scheme = urllib.parse.urlparse(path_or_url).scheme
            is_url = scheme in ['http', 'https']
        except ValueError:
            pass

        if is_url:
            url = path_or_url

            # convert url to a local path
            path = url.replace('https://', '')
            path = path.replace('/', '_')
            path = path.replace('.', '_')
            path = os.path.join(self.__path, path)

            # download from remote to local
            shutil.rmtree(path, ignore_errors=True)
            try:
                # TODO shallow clone
                repo = git.Repo.clone_from(url, path)
                sha = repo.head.object.hexsha
                version = repo.git.rev_parse(sha, short=8)
            except: # TODO determine error type
                shutil.rmtree(path, ignore_errors=True)
                raise IOError("failed to download remote source to local installation: '{}' -> '{}'".format(url, path))
            source = RemoteSource(name, url, path, version)

        else:
            path = os.path.abspath(path_or_url)
            if not os.path.isdir(path):
                raise IOError("no directory found at path: {}".format(path))
            source = LocalSource(name, path)

        self.load(source)
        self.save()

    def remove(self, source: Source) -> None:
        """
        Unregisters a given source with this server. If the given source is a
        remote source, then its local copy will be removed from disk.

        Raises:
            KeyError: if the given source is not registered with this server.
        """
        self.unload(source)
        if isinstance(source, RemoteSource):
            shutil.rmtree(source.location, ignore_errors=True)
        self.save()

    def __iter__(self) -> Iterator[Source]:
        """
        Returns an iterator over the sources registered with this server.
        """
        return self.__sources.values().__iter__()
