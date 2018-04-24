import time

import bugzoo.client
from bugzoo.core.patch import Patch


patch = Patch.from_unidiff("""
--- LICENSE	2013-07-11 21:35:15.000000000 +0000
+++ LICENSE	2018-04-24 01:50:43.049424303 +0000
@@ -6,10 +6,7 @@
 as a successor of a language called ABC.  Guido remains Python's
 principal author, although it includes many contributions from others.
 
-In 1995, Guido continued his work on Python at the Corporation for
-National Research Initiatives (CNRI, see http://www.cnri.reston.va.us)
-in Reston, Virginia where he released several versions of the
-software.
+PATCHING WORKS!
 
 In May 2000, Guido and the Python core development team moved to
 BeOpen.com to form the BeOpen PythonLabs team.  In October of the same
""".lstrip())

client = bugzoo.client.Client()
bug = client.bugs['manybugs:python:69223-69224']
test = bug.harness['p1']
container = client.containers.provision(bug)
try:
    r = client.containers.exec(container, "echo 'hello world'")
    outcome = client.containers.test(container, test)
    print(outcome)

    # read a file
    contents = client.files.read(container, "setup.py")
    print(contents)

    # patch a file
    outcome = client.containers.patch(container, patch)
    outcome_text = "yes" if outcome else "no"
    print("applied patch? {}".format(outcome_text))

    # get the contents of the patched file
    contents = client.files.read(container, "LICENSE")
    print(contents)

    # persist the container
    client.containers.persist(container, "hulk/foobarblah")

    # delete the newly persisted Docker image
    client.docker.delete_image("hulk/foobarblah")
finally:
    del client.containers[container.uid]
