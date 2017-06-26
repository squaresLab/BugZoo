RUN cd source && \
    git checkout 3534d0a0ebd448e12d85ce4b1ea041a6882c7b66
RUN mkdir /experiment/fixed && \
    mkdir /experiment/faulty
ADD missions /experiment/missions
ADD test-harness.py /experiment/test-harness.py
ADD test.sh /experiment/test.sh
ADD bug.json /experiment/bug.json
ADD bug.patch /experiment/bug.patch
RUN sudo chown -R $(whoami):$(whoami) /experiment && \
    cd /experiment/source && \
    cat /experiment/bug.patch | patch -p0 -f && \
    /experiment/prepare.sh && \
    rm -f /experiment/prepare.sh
