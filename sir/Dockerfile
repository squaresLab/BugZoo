FROM ubuntu:16.04
MAINTAINER Chris Timperley "christimperley@gmail.com"

# Create docker user
RUN apt-get update && \
    apt-get install -y sudo && \
    useradd -ms /bin/bash docker && \
    echo 'docker ALL=(ALL) NOPASSWD:ALL' >> /etc/sudoers && \
    adduser docker sudo && \
    mkdir /experiment && \
    chown -R docker /experiment && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
USER docker

# install essential packages, including Java
RUN apt-get update && \
    apt-get install -y openjdk-8-jdk jq ant build-essential gcc moreutils wget zip python3-setuptools && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
ENV JAVA_HOME /usr/lib/jvm/java-8-openjdk-amd64

# mount the dependencies directory
ADD dependencies /tmp/dependencies

# install the mts executable
RUN mkdir mts &&\
    cd /tmp/dependencies &&\
    tar -xf mts.tar.gz -C /mts &&\
    mv /mts/mts/* /mts &&\
    rmdir /mts/mts && \
    cd /mts && ant build && \
    sed -i 's#^MTS_PATH=\${0%\/\*}#MTS_PATH="/mts"#g' /mts/bin/bsh/mts && \
    cp /mts/bin/bsh/mts /usr/local/bin/mts

# install the tsl executable
RUN cd /tmp/dependencies &&\
    tar -xf tsl.tar.gz &&\
    cd tsl &&\
    make build &&\
    cp tsl /usr/local/bin/tsl &&\
    cd /tmp/dependencies &&\
    rm -rf /tmp/dependencies/tsl

# install Pythia
ENV PYTHIA_VERSION 9b1256a
RUN cd /tmp &&\
    wget -q https://github.com/ChrisTimperley/Pythia/archive/master.zip &&\
    unzip master.zip &&\
    (cd Pythia-master && python3 setup.py install) &&\
    rm -rf Pythia-master master.zip

ENV COMPILE_PARAMETERS --save-temps

# Add the problem.json template file and the generic compilation script
ADD problem.json.template /experiment/problem.json
ADD compile.sh /experiment/compile.sh
ADD test.sh /experiment/test.sh
