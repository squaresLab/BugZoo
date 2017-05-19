FROM squareslab/repairbox:rbox
MAINTAINER Chris Timperley "christimperley@gmail.com"

RUN sudo apt-get update && \
    sudo apt-get install -y --force-yes gcc-multilib psmisc zlib1g-dev && \
    sudo apt-get clean && \
    sudo apt-get autoremove && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# download Libtiff source code
RUN git clone https://github.com/vadz/libtiff src
