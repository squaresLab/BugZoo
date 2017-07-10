RUN git clone https://github.com/ArduPilot/ardupilot source && \
    cd source && \
    git submodule update --init --recursive && \
    sudo chown -R $(whoami):$(whoami) /experiment

RUN sudo apt-get update && \
    sudo apt-get install -y libtool \
                            automake \
                            pkg-config \
                            autoconf \
                            gcc \
                            g++ \
                            libexpat1-dev \
                            python-matplotlib \
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
                            flightgear && \
    sudo pip install future pymavlink MAVProxy && \
    sudo pip install --upgrade pexpect

RUN git clone git://github.com/tridge/jsbsim && \
    cd jsbsim && \
    ./autogen.sh --enable-libraries && \
    make -j

ENV PATH "${PATH}:/experiment/jsbsim/src"
ENV PATH "${PATH}:/experiment/source/Tools/autotest"
ENV PATH "${PATH}:/usr/lib/ccache:${PATH}"
ENV PATH "/usr/games:${PATH}"
