#!/usr/bin/env python
import os
import shutil
import subprocess
import multiprocessing

NASTY_REVISIONS = [
    "1f49902999",
    "147382033a",
    "e7a1d5004e",
    "0a1cc5f01c",
    "51a4ae6576",
    "eeba0b5681",
    "fefe9fc5c7",
    "0169020e49",
    "eeba0b5681",
    "2568672691",
    "c4eb5f2387",
    "032d140fd6",
    "c1322d2505",
    "f5a9e17f9c",
    "ff63c09e6f"
]


def cmd(cmd):
    subprocess.check_call(cmd, shell=True)


if __name__ == "__main__":
    bug_rev = os.environ.get('BUG_REVISION')

    with open('/experiment/manifest.txt', 'r') as f:
        buggy_files = [l.strip() for l in f]

    # handle nasty scenarios
    if bug_rev in NASTY_REVISIONS:
        # recreate source
        shutil.rmtree('/experiment/src')
        cmd('git clone https://github.com/php/php-src /experiment/src')
        cmd('cd /experiment/src && git checkout "{}"'.format(bug_rev))
        
    # apply libxml fix
    cmd('cd /experiment/src && cat ../libxml.patch | patch -p0')
    
    # build configure script
    cmd('cd /experiment/src && ./buildconf')

    # preprocess
    if bug_rev in NASTY_REVISIONS:
        cmd('cd /experiment/src && ./configure CFLAGS="-save-temps=obj"')
        cmd('cd /experiment/src && make -j{}'.format(multiprocessing.cpu_count()))

        for fn in buggy_files:
            source_fn = fn.replace('.c', '.i').replace('.h', '.i')
            source_fn = os.path.join('/experiment/src', source_fn)
            target_fn = os.path.join('/experiment/preprocessed', fn)
            os.remove(target_fn)
            os.rename(source_fn, target_fn)

        cmd('cd /experiment/src && make distclean')

    # configure and build source code
    cmd('cd /experiment/src && ./configure')
    cmd('cd /experiment/src && make -j{}'.format(multiprocessing.cpu_count()))
