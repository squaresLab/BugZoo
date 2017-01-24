FROM ubuntu:16.04
MAINTAINER Chris Timperley "christimperley@gmail.com"

# Create docker user
RUN apt-get update && \
    apt-get install --no-install-recommends -y sudo && \
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
    sudo apt-get install --no-install-recommends -y wget zip python3-setuptools && \
    cd /tmp &&\
    wget -q https://github.com/ChrisTimperley/Pythia/archive/master.zip &&\
    unzip master.zip &&\
    (cd Pythia-master && sudo python3 setup.py install) &&\
    cd / && \
    sudo apt-get clean && \
    sudo apt-get autoremove && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# install GenProg
ENV GENPROG_VERSION 1600682
RUN sudo apt-get update && \
    sudo -u docker /bin/bash -c "sudo apt-get install -y opam build-essential jq m4" && \
    echo "yes" >> /tmp/yes.txt && \
    sudo -u docker /bin/bash -c "opam init -y < /tmp/yes.txt" && \
    sudo -u docker /bin/bash -c "eval \$(opam config env) && opam install -y cil yojson" && \
    git clone https://bitbucket.org/ChrisTimperley/GP3 /tmp/genprog && \
    cd /tmp/genprog/src && \
    sudo -u docker /bin/bash -c "eval \$(opam config env) && make && sudo make install" && \
    sudo apt-get purge -y opam ocaml m4 && \
    sudo apt-get autoremove && \
    sudo apt-get clean && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
