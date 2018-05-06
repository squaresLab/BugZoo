from typing import Iterator, Tuple, List
import os
import json
import urllib
import urllib.parse
import logging
import warnings
import shutil
import glob

import git
import yaml

from .build import BuildManager
from ..exceptions import NameInUseError, BadManifestFile
from ..compiler import Compiler
from ..testing.base import TestSuite
from ..core.language import Language
from ..core.bug import Bug
from ..core.build import BuildInstructions
from ..core.tool import Tool
from ..core.source import Source, SourceContents, RemoteSource, LocalSource

logger = logging.getLogger(__name__)

__all__ = ['SourceManager']


class SourceManager(object):
    """
    TODO: we *could* cache the contents of all of the sources to disk, avoiding
        the need to scan for them at startup. Although that might be cool, it
        seems like overengineering and may create compatibility headaches in
        the future.
    """
    def __init__(self, installation: 'BugZoo') -> None:
        self.__installation = installation
        self.__path = os.path.join(installation.path, 'sources')
        # TODO
        self.__registry_fn = os.path.join(self.__path, 'registry.yml')
        self.__sources = {}
        self.__contents = {}
        self.refresh()

    def __iter__(self) -> Iterator[Source]:
        """
        Returns an iterator over the sources registered with this server.
        """
        return self.__sources.values().__iter__()

    def __getitem__(self, name: str) -> Source:
        """
        Attempts to fetch the description of a given source.

        Parameters:
            name: the name of the source.

        Returns:
            a description of the source.

        Raises:
            KeyError: if no source is found with the given name.
        """
        return self.__sources[name]

    def refresh(self) -> None:
        """
        Reloads all sources that are registered with this server.
        """
        logger.info('refreshing sources')
        for source in list(self):
            self.unload(source)

        if not os.path.exists(self.__registry_fn):
            return

        # TODO add version
        with open(self.__registry_fn, 'r') as f:
            registry = yaml.load(f)
        assert isinstance(registry, list)

        for source_description in registry:
            source = Source.from_dict(source_description)
            self.load(source)

        logger.info('refreshed sources')

    def update(self) -> None:
        """
        Ensures that all remote sources are up-to-date.
        """
        for source_old in self:
            if isinstance(source_old, RemoteSource):
                repo = git.Repo(source_old.location)
                origin = repo.remotes.origin
                origin.pull()

                sha = repo.head.object.hexsha
                version = repo.git.rev_parse(sha, short=8)

                if version != source_old.version:
                    source_new  = RemoteSource(source_old.name,
                                               source_old.location,
                                               source_old.url,
                                               version)
                    logger.info("updated source: %s [%s -> %s]", source_old.name,
                                                                 source_old.version,
                                                                 source_new.version)
                    self.load(source_new)

                else:
                    logger.debug("no updates for source: %s", source_old.name)

        # write to disk
        # TODO local directory may be corrupted if program terminates between
        #   repo being updated and registry being saved; could add a "fix"
        #   command to recalculate versions for remote sources
        self.save()

    def save(self) -> None:
        """
        Saves the contents of the source manager to disk.
        """
        logger.info('saving registry to: %s', self.__registry_fn)
        d = [s.to_dict() for s in self]

        os.makedirs(self.__path, exist_ok=True)
        with open(self.__registry_fn, 'w') as f:
            yaml.dump(d, f, indent=2, default_flow_style=False)
        logger.info('saved registry to: %s', self.__registry_fn)

    def unload(self, source: Source) -> None:
        """
        Unloads a registered source, causing all of its associated bugs, tools,
        and blueprints to also be unloaded. If the given source is not loaded,
        this function will do nothing.
        """
        logger.info('unloading source: %s', source.name)
        try:
            contents = self.contents(source)
            del self.__contents[source.name]
            del self.__sources[source.name]

            for name in contents.bugs:
                bug = self.__installation.bugs[name]
                self.__installation.bugs.remove(bug)
            for name in contents.blueprints:
                blueprint = self.__installation.build[name]
                self.__installation.build.remove(blueprint)
            for name in contents.tools:
                tool = self.__installation.tools[name]
                self.__installation.tools.remove(tool)
        except KeyError:
            pass
        logger.info('unloaded source: %s', source.name)

    def __parse_blueprint(self, source: Source, fn: str, d: dict) -> BuildInstructions:
        return BuildInstructions(os.path.dirname(fn),
                                 d['tag'],
                                 d.get('context', '.'),
                                 d.get('file', 'Dockerfile'),
                                 d.get('arguments', {}),
                                 d.get('depends-on', None),
                                 source.name)

    def __parse_bug(self, source: Source, fn: str, d: dict) -> Bug:
        name = d['name']

        if 'coverage' in d and 'files-to-instrument' in d['coverage']:
            files_to_instrument = d['coverage']['files-to-instrument']
        else:
            files_to_instrument = []
        logger.info('"coverage.files-to-instrument" for %s: %s',
                           name,
                           files_to_instrument)

        return Bug(name,
                   d['image'],
                   d.get('dataset', None),
                   d.get('program', None),
                   source.name,
                   d['source-location'],
                   [Language[lang] for lang in d['languages']],
                   TestSuite.from_dict(d['test-harness']),
                   Compiler.from_dict(d['compiler']),
                   files_to_instrument=files_to_instrument)

    def __parse_tool(self, source: Source, fn: str, d: dict) -> Tool:
        return Tool(d['name'],
                    d['image'],
                    d.get('environment', {}),
                    source.name)

    def __parse_file(self,
                     source: Source,
                     fn: str,
                     bugs: List[Bug],
                     blueprints: List[BuildInstructions],
                     tools: List[Tool]
                     ) -> None:
        with open(fn, 'r') as f:
            yml = yaml.load(f)

        # TODO check version
        if 'version' not in yml:
            logger.warning("no version specified in manifest file: %s", fn)

        for description in yml.get('bugs', []):
            logger.debug("parsing bug: %s", json.dumps(description))
            try:
                bug = self.__parse_bug(source, fn, description)
                logger.debug("parsed bug: %s", bug.name)
                bugs.append(bug)
            except KeyError as e:
                logger.error("missing property in bug description: %s", str(e))

        for description in yml.get('blueprints', []):
            logger.debug("parsing blueprint: %s", json.dumps(description))
            try:
                blueprint = self.__parse_blueprint(source, fn, description)
                logger.debug("parsed blueprint for image: %s",
                                    blueprint.name)
                blueprints.append(blueprint)
            except KeyError as e:
                logger.error("missing property in blueprint description: %s", str(e))

        for description in yml.get('tools', []):
            logger.debug("parsing tool: %s", json.dumps(description))
            try:
                tool = self.__parse_tool(source, fn, description)
                logger.debug("parsed tool: %s", tool.name)
                tools.append(tool)
            except KeyError as e:
                logger.error("missing property in tool description: %s", str(e))

    def load(self, source: Source) -> None:
        """
        Attempts to load all resources (i.e., bugs, tools, and blueprints)
        provided by a given source. If the given source has already been
        loaded, then that resources for that source are unloaded and
        reloaded.
        """
        logger.info('loading source %s at %s', source.name, source.location)
        if source.name in self.__sources:
            self.unload(source)

        bugs = []
        blueprints = []
        tools = []

        # find and parse all bugzoo files
        glob_pattern = '{}/**/*.bugzoo.y*ml'.format(source.location)
        for fn in glob.iglob(glob_pattern, recursive=True):
            if fn.endswith('.yml') or fn.endswith('.yaml'):
                logger.debug('found manifest file: %s', fn)
                self.__parse_file(source, fn, bugs, blueprints, tools)
                logger.debug('parsed manifest file: %s', fn)

        # register contents
        for bug in bugs:
            self.__installation.bugs.add(bug)
        for blueprint in blueprints:
            self.__installation.build.add(blueprint)
        for tool in tools:
            self.__installation.tools.add(tool)

        # record contents of source
        contents = SourceContents([b.name for b in blueprints],
                                  [b.name for b in bugs],
                                  [t.name for t in tools])
        self.__sources[source.name] = source
        self.__contents[source.name] = contents
        logger.info("loaded source: %s", source.name)

    def contents(self, source: Source) -> SourceContents:
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
        logger.info("adding source: %s -> %s", name, path_or_url)
        if name in self.__sources:
            logger.info("name already used by existing source: %s", name)
            raise NameInUseError(name)

        is_url = False
        try:
            scheme = urllib.parse.urlparse(path_or_url).scheme
            is_url = scheme in ['http', 'https']
            logger.debug("source determined to be remote: %s", path_or_url)
        except ValueError:
            logger.debug("source determined to be local: %s", path_or_url)

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
                logger.debug("cloning repository %s to %s", url, path)
                repo = git.Repo.clone_from(url, path)
                logger.debug("cloned repository %s to %s", url, path)

                sha = repo.head.object.hexsha
                version = repo.git.rev_parse(sha, short=8)
            except: # TODO determine error type
                shutil.rmtree(path, ignore_errors=True)
                logger.error("failed to download remote source to local: %s -> %s", url, path)
                raise IOError("failed to download remote source to local installation: '{}' -> '{}'".format(url, path))
            source = RemoteSource(name, path, url, version)

        else:
            path = os.path.abspath(path_or_url)
            if not os.path.isdir(path):
                raise IOError("no directory found at path: {}".format(path))
            source = LocalSource(name, path)

        self.load(source)
        self.save()
        logger.info('added source: %s', name)

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
