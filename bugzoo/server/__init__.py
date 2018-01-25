import flask
from bugzoo.server.daemon import Daemon
from bugzoo.server.code import ErrorCode

daemon: Daemon = None
app = flask.Flask(__name__)


@app.route('/bugs', methods=['GET'])
def list_bugs():
    jsn = []
    for bug in daemon.bugs:
        jsn.append(bug.uid)
    return flask.jsonify(jsn)


@app.route('/bugs/<uid>', methods=['GET'])
def show_bug(uid: str):
    jsn = {}
    try:
        bug = daemon.bugs[uid]
        jsn = bug.to_dict()
    except KeyError:
        # not found
        jsn = {'error': {'code': 'BLAH',
                         'message': 'No bug found with given UID.'}}
    return flask.jsonify(jsn)


@app.route('/bugs/<uid>/build', methods=['POST'])
def build_bug(uid: str):
    try:
        bug = daemon.bugs[uid]
    except KeyError:
        return ErrorCode.BUG_NOT_FOUND.to_response()

    # is the bug already installed?
    if bug.installed:
        return ErrorCode.BUG_ALREADY_INSTALLED.to_response()

    bug.install()
    return ('', 204)


@app.route('/containers', methods=['GET'])
def list_containers():
    jsn = []
    for container in daemon.containers:
        jsn.append(container.uid)
    return flask.jsonify(jsn)


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
    daemon = Daemon()
    app.run(port=port)


def main() -> None:
    run()
