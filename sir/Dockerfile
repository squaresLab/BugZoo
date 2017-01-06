FROM ubuntu:16.04
MAINTAINER Chris Timperley "christimperley@gmail.com"

# install Java 8 OpenJDK, ant and jq
RUN apt-get update && apt-get install -y openjdk-8-jdk jq
ENV JAVA_HOME /usr/lib/jvm/java-8-openjdk-amd64
RUN apt-get install -y ant

# install the essential packages we need to build most of the objects
RUN apt-get update && apt-get install -y build-essential gcc moreutils

# mount the dependencies directory
ADD dependencies /tmp/dependencies

# install the mts executable
RUN mkdir mts &&\
    cd /tmp/dependencies &&\
    tar -xf mts.tar.gz -C /mts &&\
    mv /mts/mts/* /mts &&\
    rmdir /mts/mts
RUN cd /mts && ant build
RUN sed -i 's#^MTS_PATH=\${0%\/\*}#MTS_PATH="/mts"#g' /mts/bin/bsh/mts
RUN cp /mts/bin/bsh/mts /usr/local/bin/mts

# install the tsl executable
RUN cd /tmp/dependencies &&\
    tar -xf tsl.tar.gz &&\
    cd tsl &&\
    make build &&\
    cp tsl /usr/local/bin/tsl &&\
    cd /tmp/dependencies &&\
    rm -rf /tmp/dependencies/tsl

# install the mapping generator and test helpers
RUN mv /tmp/dependencies/generate-test-runner /usr/local/bin
RUN mv /tmp/dependencies/generate-oracle /usr/local/bin
RUN mv /tmp/dependencies/run-test-with-num /usr/local/bin
RUN mv /tmp/dependencies/run-test-with-id /usr/local/bin
RUN mv /tmp/dependencies/run-test-suite /usr/local/bin

# install Pythia
RUN apt-get install -y wget zip python3-setuptools
RUN cd /tmp &&\
    wget -q https://github.com/ChrisTimperley/Pythia/archive/master.zip &&\
    unzip master.zip &&\
    (cd Pythia-master && python3 setup.py install) &&\
    rm -rf Pythia-master master.zip

# clean image
RUN apt-get clean && rm -rf /var/lib/apt/lists* /tmp/* /var/tmp/*

ENV COMPILE_PARAMETERS --save-temps

# Add the problem.json template file and the generic compilation script
ADD problem.json.template /experiment/problem.json
ADD compile.sh /experiment/compile.sh
