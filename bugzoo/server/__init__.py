from typing import Dict, Any
import flask

from ..manager import BugZoo
from ..core.errors import ImageBuildFailed
from bugzoo.server.code import ErrorCode

daemon = None # type: BugZoo
app = flask.Flask(__name__)


@app.route('/bugs', methods=['GET'])
def list_bugs():
    jsn = [] # type: List[str]
    for bug in daemon.bugs:
        jsn.append(bug.name)
    return flask.jsonify(jsn)


@app.route('/bugs/<uid>', methods=['GET'])
def show_bug(uid: str):
    jsn = {} # type: Dict[Any, Any]
    try:
        bug = daemon.bugs[uid]
        jsn = bug.to_dict()
    except KeyError:
        # not found
        jsn = {'error': {'code': 'BLAH',
                         'message': 'No bug found with given UID.'}}
    return flask.jsonify(jsn)


# TODO return a job ID
@app.route('/bugs/<uid>/build', methods=['POST'])
def build_bug(uid: str):
    try:
        bug = daemon.bugs[uid]
    except KeyError:
        return ErrorCode.BUG_NOT_FOUND.to_response()

    # is the bug already installed?
    # TODO add ability to force rebuild
    if daemon.bugs.is_installed(bug):
        return ErrorCode.BUG_ALREADY_INSTALLED.to_response()

    try:
        daemon.bugs.build(bug)
    except ImageBuildFailed as e:
        return ErrorCode.IMAGE_BUILD_FAILED.to_response()

    return ('', 204)


@app.route('/bugs/<uid>/provision', methods=['POST'])
def provision_bug(uid: str):
    try:
        bug = daemon.bugs[uid]
    except KeyError:
        return ErrorCode.BUG_NOT_FOUND.to_response()

    if not daemon.bugs.is_installed(bug):
        return ErrorCode.IMAGE_NOT_INSTALLED.to_response()

    container = daemon.containers.provision(bug)
    jsn = flask.jsonify(container.to_dict())

    return (jsn, 200)


@app.route('/bugs/<uid>/coverage', methods=['POST'])
def coverage_bug(uid: str):
    try:
        bug = daemon.bugs[uid]
    except KeyError:
        return ErrorCode.BUG_NOT_FOUND.to_response()

    if not daemon.bugs.is_installed(bug):
        return ErrorCode.IMAGE_NOT_INSTALLED.to_response()

    try:
        coverage = daemon.bugs.coverage(bug)
    except:
        return ErrorCode.FAILED_TO_COMPUTE_COVERAGE.to_response()

    jsn = flask.jsonify(coverage.to_dict())
    return (jsn, 200)


@app.route('/containers/<id_container>/test/<id_test>', methods=['POST'])
def test_container(id_container: str, id_test: str):
    try:
        container = daemon.containers[id_container]
    except KeyError:
        return ErrorCode.CONTAINER_NOT_FOUND.to_response()

    try:
        bug = daemon.bugs[container.bug]
    except KeyError:
        return ErrorCode.BUG_NOT_FOUND.to_response()

    try:
        test = bug.harness[id_test]
    except KeyError:
        return ErrorCode.TEST_NOT_FOUND.to_response()

    outcome = daemon.containers.test(container, test)

    jsn = flask.jsonify(outcome.to_dict())
    return (jsn, 200)


@app.route('/bugs/<uid>/installed', methods=['GET'])
def is_installed_bug(uid: str):
    try:
        bug = daemon.bugs[uid]
    except KeyError:
        return ErrorCode.BUG_NOT_FOUND.to_response()

    status = daemon.bugs.is_installed(bug)
    return (flask.jsonify(status), 200)


@app.route('/containers', methods=['GET'])
def list_containers():
    jsn = []
    for container in daemon.containers:
        jsn.append(container.uid)
    return flask.jsonify(jsn)


@app.route('/containers/<uid>', methods=['GET'])
def show_container(uid: str):
    try:
        container = daemon.containers[uid]
    except KeyError:
        return ErrorCode.CONTAINER_NOT_FOUND.to_response()

    jsn = flask.jsonify(container.to_dict())
    return (jsn, 200)


@app.route('/containers/<uid>/alive', methods=['GET'])
def is_alive_container(uid: str):
    try:
        container = daemon.containers[uid]
    except KeyError:
        return ErrorCode.CONTAINER_NOT_FOUND.to_response()

    jsn = flask.jsonify(daemon.containers.is_alive(container))
    return (jsn, 200)

@app.route('/containers/<uid>/exec', methods=['POST'])
def exec_container(uid: str):
    try:
        container = daemon.containers[uid]
    except KeyError:
        return ErrorCode.CONTAINER_NOT_FOUND.to_response()

    # TODO: generic bad request error
    args = flask.request.get_json() # type: Dict[str, Any]
    if 'command' not in args:
        return ErrorCode.COMMAND_NOT_SPECIFIED.to_response()

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
def delete_container(uid: str):
    try:
        daemon.containers.delete(uid)
        return ('', 204)
    except KeyError:
        return ErrorCode.CONTAINER_NOT_FOUND.to_response()


@app.route('/containers', methods=['POST'])
def provision_container():
    args = flask.request.get_json()

    if 'bug-uid' not in args:
        return ErrorCode.BUG_NOT_SPECIFIED.to_response()
    bug_uid = args['bug-uid']

    try:
        bug = daemon.bugs[bug_uid]
        c = daemon.containers.provision(bug)
        return (flask.jsonify(c.uid), 201)

    except KeyError:
        return ErrorCode.BUG_NOT_FOUND.to_response()


def run(port: int = 6060) -> None:
    global daemon
    daemon = BugZoo()
    app.run(port=port)


def main() -> None:
    run()
