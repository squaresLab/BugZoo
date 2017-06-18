RUN cd source && \
    git checkout 3534d0a0ebd448e12d85ce4b1ea041a6882c7b66
RUN mkdir /experiment/fixed && \
    mkdir /experiment/faulty
ADD test.sh /experiment/test.sh
ADD bug.json /experiment/bug.json
#ADD GCS_Mavlink.before.cpp /experiment/source/ArduCopter/GCS_Mavlink.cpp
#ADD GCS_Mavlink.before.cpp /experiment/faulty
#ADD GCS_Mavlink.after.cpp /experiment/fixed
RUN sudo chown -R $(whoami):$(whoami) /experiment && \
    /experiment/prepare.sh && \
    rm -f /experiment/prepare.sh
