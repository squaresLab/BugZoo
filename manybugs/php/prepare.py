#!/usr/bin/env python
import os
import shutil
import subprocess
import multiprocessing

NASTY_REVISIONS = [
    "0a1cc5f01c",
    "51a4ae6576",
    "eeba0b5681",
    "fefe9fc5c7",
    "0169020e49",
    "eeba0b5681"
]

if __name__ == "__main__":
    bug_rev = os.environ.get('BUG_REVISION')

    # recreate source for certain troublesome commits
    if bug_rev in NASTY_REVISIONS:
        shutil.rmtree('/experiment/src')
        subprocess.check_call('git clone https://github.com/php/php-src /experiment/src', shell=True)
        subprocess.check_call('cd /experiment/src && git checkout "{}"'.format(bug_rev), shell=True)

    # apply libxml fix
    subprocess.check_call('cd /experiment/src && cat ../libxml.patch | patch -p0', shell=True)
    
    # recompile
    subprocess.check_call('cd /experiment/src && ./buildconf', shell=True)
    subprocess.check_call('cd /experiment/src && ./configure', shell=True)
    subprocess.check_call('cd /experiment/src && make -j{}'.format(multiprocessing.cpu_count()), shell=True)
