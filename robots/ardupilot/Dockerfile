RUN sudo apt-get update && \
    sudo apt-get install -y libtool \
                            automake \
                            pkg-config \
                            autoconf \
                            gcc \
                            g++ \
                            libtool \
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
                            flightgear \
                            python-pexpect && \
    sudo pip install future pymavlink MAVProxy && \
    sudo pip install --upgrade pexpect && \
    sudo apt-get clean && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

RUN git clone git://github.com/tridge/jsbsim && \
    cd jsbsim && \
    ./autogen.sh --enable-libraries && \
    make -j

RUN sudo apt-get update && \
    sudo apt-get install -y flightgear && \
    sudo apt-get clean && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

ENV PATH "${PATH}:/experiment/jsbsim/src"
ENV PATH "${PATH}:/experiment/source/Tools/autotest"
ENV PATH "${PATH}:/usr/lib/ccache:${PATH}"
ENV PATH "/usr/games:${PATH}"

ENV ARDUPILOT_REVISION 7173025
RUN git clone https://github.com/ArduPilot/ardupilot source && \
    cd source && \
    git checkout "${ARDUPILOT_REVISION}" && \
    git submodule update --init --recursive && \
    sudo chown -R $(whoami):$(whoami) /experiment

# for now, we can just install Houston to the base image
ENV HOUSTON_REVISION 188aeed
RUN git clone https://github.com/ChrisTimperley/Houston /tmp/houston && \
    cd /tmp/houston && \
    git checkout "${HOUSTON_REVISION}" && \
    sudo ./setup.py install && \
    sudo rm -rf /tmp/houston

RUN sudo pip install  future \
                      MAVProxy \
                      dronekit \
                      statistics \
                      geopy \
		                  flask
