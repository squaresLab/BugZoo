FROM ubuntu:16.04
MAINTAINER Chris Timperley "christimperley@gmail.com"

# Create docker user
RUN apt-get update && \
    apt-get install -y sudo && \
    useradd -ms /bin/bash docker && \
    echo 'docker ALL=(ALL) NOPASSWD:ALL' >> /etc/sudoers && \
    adduser docker sudo && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
USER docker

# reclaim ownership or /usr/local/bin
RUN sudo chown -R docker /usr/local/bin

# install Pythia
ENV PYTHIA_VERSION 9429848
RUN sudo apt-get update && \
    sudo apt-get install -y wget zip python3-setuptools && \
    cd /tmp &&\
    wget -q https://github.com/ChrisTimperley/Pythia/archive/master.zip &&\
    unzip master.zip &&\
    (cd Pythia-master && sudo python3 setup.py install) &&\
    cd / && \
    sudo apt-get clean && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
