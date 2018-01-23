import flask
from bugzoo.server.daemon import Daemon

daemon = None
app = flask.Flask(__name__)

@app.route('/hello', methods=['GET'])
def hello():
    jsn = "Hello world"
    return flask.jsonify(jsn)


def run(port: int = 6060) -> None:
    global daemon
    daemon = Daemon()
    app.run(port=port)


def main() -> None:
    run()
