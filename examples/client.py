import time

import bugzoo.client


client = bugzoo.client.Client()
bug = client.bugs['manybugs:python:69223-69224']
test = bug.harness['p1']
container = client.containers.provision(bug)
try:
    r = client.containers.exec(container, "echo 'hello world'")
    outcome = client.containers.test(container, test)
    print(outcome)
finally:
    del client.containers[container.uid]
