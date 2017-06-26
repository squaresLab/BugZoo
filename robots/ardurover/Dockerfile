# TODO: optimise!
RUN git clone https://github.com/ArduPilot/ardupilot source && \
    cd source && \
    git submodule update --init --recursive

# install build tools
RUN sudo apt-get update && \
    sudo apt-get install -y libtool \
                            automake \
                            autoconf \
                            gcc \
                            g++ \
                            libexpat1-dev

RUN git clone git://github.com/tridge/jsbsim && \
    cd jsbsim && \
    ./autogen.sh --enable-libraries && \
    make -j

RUN sudo apt-get install -y python-matplotlib \
                            python-serial \
                            python-wxgtk2.8 \
                            python-wxtools \
                            python-lxml \
                            python-scipy \
                            python-opencv \
                            ccache \
                            gawk \
                            python-pip \
                            python-pexpect && \
    sudo pip install future pymavlink MAVProxy && \
    sudo pip install --upgrade pexpect

ENV PATH "${PATH}:/experiment/jsbsim/src"
ENV PATH "${PATH}:/experiment/source/Tools/autotest"
ENV PATH "${PATH}:/usr/lib/ccache:${PATH}"

# 3D visualisation
RUN sudo apt-get install -y flightgear
ENV PATH "/usr/games:${PATH}"

RUN sudo apt-get install -y pkg-config

ADD prepare.sh /experiment/prepare.sh
ADD original-test-harness.py /experiment/original-test-harness.py
RUN sudo chown -R $(whoami):$(whoami) /experiment

# TODO: tidy
RUN sudo apt-get install -y doxygen
RUN sudo apt-get install -y graphviz

# build documentation
RUN cd source/docs && \
    ./build-libs.sh && \
    ./build-apmrover2.sh

ADD validate.sh /experiment/validate.sh
RUN sudo chown -R $(whoami):$(whoami) .
