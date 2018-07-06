from typing import Dict, Any, Iterator, Optional
from functools import wraps
from contextlib import contextmanager
import argparse
import os
import signal
import subprocess
import logging
import sys
import threading
import time

import flask
import docker
import psutil
import git

from ..version import __version__
from ..core.bug import Bug
from ..core.patch import Patch
from ..compiler import CompilationOutcome
from ..manager import BugZoo
from ..exceptions import *
from ..client import Client
from ..mgr.container import ContainerManager
from ..mgr.coverage import CoverageManager
from ..util import indent, report_resource_limits, report_system_resources

logger = logging.getLogger(__name__)  # type: logging.Logger
log_to_file = None  # type: Optional[logging.handlers.WatchedFileHandler]

# FIXME let's avoid storing the actual server in a global var
daemon = None  # type: Any
app = flask.Flask(__name__)
app.logger.setLevel(logging.ERROR)
app.logger.disabled = True
logging.getLogger('werkzeug').disabled = True


def throws_errors(func):
    """
    Wraps a function responsible for implementing an API endpoint such that
    any server errors that are thrown are automatically transformed into
    appropriate HTTP responses.
    """
    @wraps(func)
    def wrapper(*args, **kwargs):
        response = func(*args, **kwargs)

        # if no status code is provided, assume 400
        if isinstance(response, BugZooException):
            err_jsn = flask.jsonify(response.to_dict())
            return err_jsn, 400

        if isinstance(response, tuple) \
           and isinstance(response[0], BugZooException):
            err = response[0] # type: BugZooException
            err_jsn = flask.jsonify(err.to_dict())
            return (err_jsn, *response[1:])

        return response

    return wrapper


@contextmanager
def ephemeral(*,
              port: int = 6060,
              verbose: bool = False
              ) -> Iterator[Client]:
    """
    Launches an ephemeral server instance that will be immediately
    close when no longer in context.

    Parameters:
        port: the port that the server should run on.
        verbose: if set to True, the server will print its output to the
            stdout, otherwise it will remain silent.

    Returns:
        a client for communicating with the server.
    """
    url = "http://127.0.0.1:{}".format(port)
    cmd = ["bugzood", "--debug", "-p", str(port)]
    try:
        stdout = None if verbose else subprocess.DEVNULL
        stderr = None if verbose else subprocess.DEVNULL
        proc = subprocess.Popen(cmd,
                                preexec_fn=os.setsid,
                                stdout=stdout,
                                stderr=stderr)
        yield Client(url)
    finally:
        os.killpg(proc.pid, signal.SIGTERM)


@app.route('/status', methods=['GET'])
def get_status():
    """
    Used to indicate that the server is healthy and ready to go.
    """
    return '', 204


@app.route('/shutdown', methods=['POST'])
def shutdown():
    daemon.containers.clear()
    if log_to_file:
        log_to_file.flush()

    def self_destruct() -> None:
        wait_time = 3
        for i in range(3, 0, -1):
            logger.info("Closing server in %d seconds...", i)
            time.sleep(1.0)
        os.kill(os.getpid(), signal.SIGTERM)
    threading.Thread(target=self_destruct).run()

    return '', 202


@app.route('/bugs', methods=['GET'])
def list_bugs():
    jsn = [] # type: List[str]
    for bug in daemon.bugs:
        jsn.append(bug.name)
    return flask.jsonify(jsn)


@app.route('/bugs/<path:uid>', methods=['GET', 'PUT'])
@throws_errors
def interact_with_bug(uid: str):
    if flask.request.method == 'GET':
        jsn = {} # type: Dict[Any, Any]
        try:
            bug = daemon.bugs[uid]
            jsn = bug.to_dict()
            return flask.jsonify(jsn), 200
        except KeyError:
            return BugNotFound(uid), 404

    if flask.request.method == 'PUT':
        try:
            bug = Bug.from_dict(flask.request.json)
        # FIXME improve error handling
        except Exception as ex:
            return UnexpectedServerError.from_exception(ex), 500

        daemon.bugs.register(bug)
        return '', 204


# TODO return a job ID
@app.route('/bugs/<path:uid>/build', methods=['POST'])
@throws_errors
def build_bug(uid: str):
    try:
        bug = daemon.bugs[uid]
    except KeyError:
        return BugNotFound(uid), 404

    # is the bug already installed?
    # TODO add ability to force rebuild
    if daemon.bugs.is_installed(bug):
        return BugAlreadyBuilt(uid), 409

    try:
        daemon.bugs.build(bug)
    except ImageBuildFailed as err:
        return err, 500

    return ('', 204)


@app.route('/bugs/<path:uid>/provision', methods=['POST'])
@throws_errors
def provision_bug(uid: str):
    try:
        bug = daemon.bugs[uid]
    except KeyError:
        return BugNotFound(uid), 404

    if not daemon.bugs.is_installed(bug):
        return ImageNotInstalled(bug.image), 400

    container = daemon.containers.provision(bug)
    jsn = flask.jsonify(container.to_dict())

    return (jsn, 200)


@app.route('/bugs/<uid>/coverage', methods=['GET'])
@throws_errors
def coverage_bug(uid: str):
    msg_prefix_fail = "Failed to fetch coverage information for snapshot, {}"
    msg_prefix_fail = msg_prefix_fail.format(uid)
    logger.info("Fetching coverage information for snapshot: %s",
                uid)
    try:
        bug = daemon.bugs[uid]
    except KeyError:
        logger.exception("%s: snapshot not found.",  msg_prefix_fail)
        return BugNotFound(uid), 404

    if not daemon.bugs.is_installed(bug):
        logger.error("%s: snapshot not installed.", msg_prefix_fail)
        return ImageNotInstalled(bug.image), 400

    try:
        coverage = daemon.bugs.coverage(bug)
    # TODO: work on this
    except Exception:
        logger.error("%s: failed to compute coverage.", msg_prefix_fail)
        return FailedToComputeCoverage("unknown reason"), 500

    logger.debug("Converting coverage information to JSON.")
    jsn = flask.jsonify(coverage.to_dict())
    logger.debug("Converted coverage information to JSON.")
    return (jsn, 200)


@app.route('/containers/<id_container>/test/<id_test>', methods=['POST'])
@throws_errors
def test_container(id_container: str, id_test: str):
    try:
        container = daemon.containers[id_container]
    except KeyError:
        return ContainerNotFound(id_container), 404

    try:
        bug = daemon.bugs[container.bug]
    except KeyError:
        return BugNotFound(container.bug), 500

    try:
        test = bug.harness[id_test]
    except KeyError:
        return TestNotFound(id_test), 404

    outcome = daemon.containers.test(container, test)

    jsn = flask.jsonify(outcome.to_dict())
    return (jsn, 200)


@app.route('/containers/<uid>/instrument', methods=['POST'])
@throws_errors
def instrument_container(uid: str):
    mgr_ctr = daemon.containers  # type: ContainerManager
    mgr_cov = daemon.coverage  # type: CoverageManager
    try:
        container = mgr_ctr[uid]
    except KeyError:
        return ContainerNotFound(uid), 404

    logger.debug("instrumenting container: %s", container.uid)
    mgr_cov.instrument(container)
    logger.debug("instrumented container: %s", container.uid)
    return ('', 204)


@app.route('/containers/<uid>/read-coverage', methods=['POST'])
@throws_errors
def read_coverage(uid: str):
    logger.debug("reading coverage for container (%s).", uid)
    mgr_ctr = daemon.containers  # type: ContainerManager
    mgr_cov = daemon.coverage  # type: CoverageManager
    try:
        container = mgr_ctr[uid]
    except KeyError:
        logger.exception("failed to read coverage for container (%s): container not found.")  # noqa: pycodestyle
        return ContainerNotFound(uid), 404

    try:
        lines = mgr_cov.extract(container)
        logger.debug("read coverage for container (%s).",
                     container.uid)
    except Exception:
        logger.exception("failed to read coverage for container (%s).",
                         container.uid)
        raise
    jsn = flask.jsonify(lines.to_dict())
    return (jsn, 200)


@app.route('/containers/<id_container>/coverage', methods=['POST'])
@throws_errors
def coverage_container(id_container: str):
    try:
        container = daemon.containers[id_container]
    except KeyError:
        return ContainerNotFound(id_container), 404

    try:
        bug = daemon.bugs[container.bug]
    except KeyError:
        return BugNotFound(container.bug), 500

    instrument = \
        flask.request.args.get('instrument', 'yes') == 'yes'

    if instrument:
        logger.debug("instrumenting container before computing coverage")
    else:
        logger.debug("skipping instrumentation step")

    try:
        coverage = daemon.coverage.coverage(container,
                                            instrument=instrument)
    except Exception as err:
        logger.exception("failed to compute coverage for container [%s]: %s",
                     id_container, err)
        return FailedToComputeCoverage("unknown reason"), 500

    jsn = flask.jsonify(coverage.to_dict())
    return (jsn, 200)


@app.route('/bugs/<uid>/installed', methods=['GET'])
@throws_errors
def is_installed_bug(uid: str):
    try:
        bug = daemon.bugs[uid]
    except KeyError:
        return BugNotFound(uid), 404

    status = daemon.bugs.is_installed(bug)
    return (flask.jsonify(status), 200)


@app.route('/files/<id_container>/<path:filepath>', methods=['GET'])
@throws_errors
def interact_with_file(id_container: str, filepath: str):
    try:
        container = daemon.containers[id_container]
    except KeyError:
        return ContainerNotFound(id_container), 404

    if flask.request.method == 'GET':
        try:
            return daemon.files.read(container, filepath)
        except KeyError:
            return FileNotFound(filepath), 404


@app.route('/containers', methods=['GET'])
def list_containers():
    jsn = []
    for container in daemon.containers:
        jsn.append(container.uid)
    return flask.jsonify(jsn)


@app.route('/containers', methods=['DELETE'])
@throws_errors
def clear_containers():
    daemon.containers.clear()
    return '', 204


@app.route('/containers/<uid>', methods=['GET', 'PATCH'])
@throws_errors
def interact_with_container(uid: str):
    try:
        container = daemon.containers[uid]
    except KeyError:
        return ContainerNotFound(uid), 404

    if flask.request.method == 'GET':
        jsn = flask.jsonify(container.to_dict())
        return (jsn, 200)
    if flask.request.method == 'PATCH':
        # TODO send character encoding in headers
        s = flask.request.data.decode('utf-8')
        patch = Patch.from_unidiff(s)
        outcome = daemon.containers.patch(container, patch)
        if outcome:
            return '', 204
        else:
            return '', 400


@app.route('/containers/<uid>/persist/<path:name_image>', methods=['PUT'])
@throws_errors
def persist(uid: str, name_image: str):
    logger.info("persisting container (%s) to image (%s)",
                uid, name_image)
    try:
        container = daemon.containers[uid]
    except KeyError:
        logger.exception("failed to persist container (%s) to image (%s): container not found.",  # noqa: pycodestyle
                         uid, name_image)
        return ContainerNotFound(uid), 404

    try:
        daemon.containers.persist(container, name_image)
        logger.info("persisted container (%s) to image (%s)",
                    uid, name_image)
        return '', 204
    except ImageAlreadyExists as err:
        logger.exception("failed to persist container (%s) to image (%s): image already exists.",  # noqa: pycodestyle
                         uid, name_image)
        return err, 409
    except BugZooException as err:
        logger.exception("failed to persist container (%s) to image (%s).",
                         uid, name_image)
        return err, 400
    # TODO handle unexpected exceptions
    except Exception as err:
        logger.exception("failed to persist container (%s) to image (%s): unexpected error.",  # noqa: pycodestyle
                         uid, name_image)
        return '', 501


@app.route('/containers/<uid>/alive', methods=['GET'])
@throws_errors
def is_alive_container(uid: str):
    try:
        container = daemon.containers[uid]
    except KeyError:
        return ContainerNotFound(uid), 404

    jsn = flask.jsonify(daemon.containers.is_alive(container))
    return (jsn, 200)


@app.route('/containers/<uid>/build', methods=['POST'])
@throws_errors
def build_container(uid: str):
    verbose = \
        flask.request.args.get('verbose', default='no', type=str) == 'yes'
    mgr_ctr = daemon.containers  # type: ContainerManager
    try:
        container = mgr_ctr[uid]
    except KeyError:
        return ContainerNotFound(uid), 404

    logger.debug("building project in container: %s", container.uid)
    outcome = mgr_ctr.compile(container, verbose=verbose)
    logger.debug("built project in container: %s", container.uid)
    jsn = flask.jsonify(outcome.to_dict())
    return (jsn, 200)


@app.route('/containers/<uid>/exec', methods=['POST'])
@throws_errors
def exec_container(uid: str):
    try:
        container = daemon.containers[uid]
    except KeyError:
        return ContainerNotFound(uid), 404

    # TODO: generic bad request error
    args = flask.request.get_json() # type: Dict[str, Any]
    if 'command' not in args:
        return ArgumentNotSpecified("command"), 400

    cmd = args['command']
    context = args.get('context')
    stdout = args.get('stdout', True)
    stderr = args.get('stderr', False)
    time_limit = args.get('time-limit')
    if isinstance(time_limit, int):
        time_limit = float(time_limit)

    assert isinstance(cmd, str)
    assert context is None or isinstance(context, str)
    assert isinstance(stdout, bool)
    assert isinstance(stderr, bool)
    assert time_limit is None or \
        isinstance(time_limit, int) or \
        isinstance(time_limit, float)

    response = daemon.containers.command(container,
                                         cmd=cmd,
                                         context=context,
                                         stdout=stdout,
                                         stderr=stderr,
                                         block=True,
                                         verbose=False,
                                         time_limit=time_limit)

    jsn = flask.jsonify(response.to_dict())
    return (jsn, 200)


# TODO: deal with race condition
@app.route('/containers/<uid>', methods=['DELETE'])
@throws_errors
def delete_container(uid: str):
    try:
        daemon.containers.delete(uid)
        return ('', 204)
    except KeyError:
        return ContainerNotFound(uid), 404


@app.route('/containers', methods=['POST'])
@throws_errors
def provision_container():
    args = flask.request.get_json()

    if 'bug-uid' not in args:
        return ArgumentNotSpecified("bug"), 400
    bug_uid = args['bug-uid']

    try:
        bug = daemon.bugs[bug_uid]
    except KeyError:
        return BugNotFound(bug_uid), 404

    c = daemon.containers.provision(bug)
    return (flask.jsonify(c.uid), 201)


@app.route('/docker/images/<path:name>', methods=['DELETE'])
@throws_errors
def docker_images(name: str):
    try:
        daemon.docker.images.remove(name, force=True)
        return '', 204
    except Exception as ex:
        return UnexpectedServerError.from_exception(ex), 500


def run(*,
    port: int = 6060,
    host: str = '0.0.0.0',
    debug: bool = True,
    log_filename: Optional[str] = None,
    log_level: str = 'info'
    ) -> None:
    global daemon, log_to_file

    if not log_filename:
        log_filename = "bugzood.log"
        log_filename = os.path.join(os.getcwd(), log_filename)

    log_formatter = \
        logging.Formatter('%(asctime)s:%(name)s:%(levelname)s: %(message)s',
                          '%Y-%m-%d %H:%M:%S')
    logging.getLogger('werkzeug').setLevel(logging.ERROR)

    if log_level != 'none':
        log_level_num = ({
            'none': logging.NOTSET,
            'error': logging.ERROR,
            'warning': logging.WARNING,
            'debug': logging.DEBUG,
            'info': logging.INFO,
            'critical': logging.CRITICAL
        })[log_level]  # type: int

        log_to_file = \
            logging.handlers.WatchedFileHandler(log_filename, mode='w')
        log_to_file.setLevel(log_level_num)
        log_to_file.setFormatter(log_formatter)

        log_to_stdout = logging.StreamHandler()
        log_to_stdout.setLevel(max(log_level_num, logging.INFO))
        log_to_stdout.setFormatter(log_formatter)

        log_main = logging.getLogger('bugzoo')  # type: logging.Logger
        log_main.setLevel(log_level_num)
        log_main.addHandler(log_to_stdout)
        log_main.addHandler(log_to_file)

        log_werkzeug = logging.getLogger('werkzeug')
        log_werkzeug.addHandler(log_to_stdout)
        log_werkzeug.addHandler(log_to_file)

    if log_level in ['info', 'debug']:
        log_werkzeug.setLevel(logging.INFO)
    else:
        log_werkzeug.setLevel(logging.ERROR)

    logger.info("BugZoo version: %s", __version__)
    logger.info("DockerPy version: %s", docker.__version__)
    logger.info("psutil version: %s", psutil.__version__)
    logger.info("Flask version: %s", flask.__version__)
    logger.info("GitPython version: %s", git.__version__)

    try:
        logger.info("launching BugZoo daemon")
        daemon = BugZoo()
        logger.info("launched BugZoo daemon")
        report_resource_limits(logger)
        report_system_resources(logger)
        app.run(port=port, host=host, debug=debug, threaded=True)
    finally:
        if daemon:
            daemon.shutdown()


def main() -> None:
    desc = 'bugzood: a RESTful HTTP server for BugZoo'
    parser = argparse.ArgumentParser(description=desc)
    parser.add_argument('-p', '--port',
                        type=int,
                        default=6060,
                        help='the port that should be used by this server.')
    parser.add_argument('--log-level',
                        type=str,
                        choices=['none',
                                 'info',
                                 'error',
                                 'warning',
                                 'debug',
                                 'critical'],
                        default='info')
    parser.add_argument('--log-file',
                        type=str,
                        help='the path to the file where logs should be written.')  # noqa: pycodestyle
    parser.add_argument('--host',
                        type=str,
                        default='0.0.0.0',
                        help='the IP address of the host.')
    parser.add_argument('--debug',
                        action='store_true',
                        help='enables debugging mode.')
    args = parser.parse_args()
    run(port=args.port,
        host=args.host,
        log_filename=args.log_file,
        log_level=args.log_level,
        debug=args.debug)
