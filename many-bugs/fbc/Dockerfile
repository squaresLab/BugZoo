FROM christimperley/repairbox:manybugs64
MAINTAINER Chris Timperley "christimperley@gmail.com"

ADD compile-helper.sh /experiment
RUN mkdir /experiment/local-root
RUN sudo chown -R docker /experiment

RUN sudo dpkg --add-architecture i386
RUN sudo apt-get update && \
    sudo apt-get install -y gcc-multilib \
                            g++-multilib \
                            libz-dev:i386 \
                            libncurses-dev:i386

# Install necessary packages
#RUN sudo apt-get update && \
#    sudo apt-get install -y libxml2-dev && \
#    sudo apt-get clean && \
#    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
