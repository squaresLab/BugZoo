FROM squareslab/repairbox:rbox
MAINTAINER Chris Timperley "christimperley@gmail.com"

RUN mkdir -p /experiment/local-root
RUN sudo chown -R docker /experiment

RUN sudo dpkg --add-architecture i386
RUN sudo apt-get update && \
    sudo apt-get install -y gcc-multilib \
                            g++-multilib \
                            m4:i386 \
                            moreutils

# Install necessary packages
#RUN sudo apt-get update && \
#    sudo apt-get install -y libxml2-dev && \
#    sudo apt-get clean && \
#    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
