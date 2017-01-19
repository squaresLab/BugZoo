FROM christimperley/repairbox:ubuntu64
MAINTAINER Chris Timperley "christimperley@gmail.com"

# install essential packages, including Java
RUN sudo apt-get update && \
    sudo apt-get install -y openjdk-8-jdk jq ant build-essential gcc moreutils wget zip python3-setuptools && \
    sudo apt-get clean && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
ENV JAVA_HOME /usr/lib/jvm/java-8-openjdk-amd64

# mount the dependencies directory
ADD dependencies /tmp/dependencies

# install the mts executable
RUN sudo mkdir /mts &&\
    cd /tmp/dependencies &&\
    sudo tar -xf mts.tar.gz -C /mts &&\
    sudo mv /mts/mts/* /mts &&\
    sudo rmdir /mts/mts && \
    cd /mts && sudo ant build && \
    sudo sed -i 's#^MTS_PATH=\${0%\/\*}#MTS_PATH="/mts"#g' /mts/bin/bsh/mts && \
    sudo cp /mts/bin/bsh/mts /usr/local/bin/mts

# install the tsl executable
RUN cd /tmp/dependencies &&\
    sudo tar -xf tsl.tar.gz &&\
    cd tsl &&\
    sudo make build &&\
    sudo cp tsl /usr/local/bin/tsl &&\
    sudo rm -rf /tmp/dependencies/tsl

# install Pythia
ENV PYTHIA_VERSION 9b1256a
RUN cd /tmp &&\
    wget -q https://github.com/ChrisTimperley/Pythia/archive/master.zip &&\
    unzip master.zip &&\
    (cd Pythia-master && sudo python3 setup.py install) &&\
    cd / && sudo rm -rf /tmp/*

# reclaim ownership or /usr/local/bin
RUN sudo chown -R docker /usr/local/bin

ENV COMPILE_PARAMETERS --save-temps

# Add the problem.json template file and the generic compilation script
ADD problem.json.template /experiment/problem.json
ADD compile.sh /experiment/compile.sh
ADD test.sh /experiment/test.sh
RUN sudo chown -R docker /experiment
