import flask
from bugzoo.server.daemon import Daemon

daemon: Daemon = None
app = flask.Flask(__name__)

@app.route('/hello', methods=['GET'])
def hello():
    jsn = "Hello world"
    return flask.jsonify(jsn)


@app.route('/bugs', methods=['GET'])
def list_bugs():
    jsn = []
    for bug in daemon.bugs:
        jsn.append(bug.uid)
    return flask.jsonify(jsn)


@app.route('/containers', methods=['GET'])
def list_containers():
    jsn = []
    for container in daemon.containers:
        jsn.append(container.uid)
    return flask.jsonify(jsn)


@app.route('/containers', methods=['POST'])
def provision_container():
    jsn = []
    bug = "TODO"
    daemon.containers.provision(bug)


def run(port: int = 6060) -> None:
    global daemon
    daemon = Daemon()
    app.run(port=port)


def main() -> None:
    run()
