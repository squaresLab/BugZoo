FROM squareslab/repairbox:manybugs-base

ARG scenario
ENV SCENARIO_NAME ${scenario}
ENV TEST_TIMEOUT 10
ENV OLD_LOCATION /root/mountpoint-genprog/genprog-many-bugs/${SCENARIO_NAME}

# necessary to link shared libraries
# https://ubuntuforums.org/showthread.php?t=975334
ENV LD_LIBRARY_PATH "/usr/local/lib:${LD_LIBRARY_PATH}"

ADD doc.patch /experiment/doc.patch

RUN sudo apt-get update && \
    sudo apt-get install --no-install-recommends -y \
                            automake \
                            autoconf \
                            libtool \
                            python \
                            subversion \
                            pkg-config \
                            bison \
                            flex \
                            psmisc \
                            libgtk2.0-dev \
                            libpcap-dev \
                            libwww-perl
