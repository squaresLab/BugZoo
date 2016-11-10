FROM ubuntu:16.04
MAINTAINER Chris Timperley "christimperley@gmail.com"

# install Java 8 OpenJDK and ant
RUN apt-get update && apt-get install -y openjdk-8-jdk
ENV JAVA_HOME /usr/lib/jvm/java-8-openjdk-amd64
RUN apt-get install -y ant

# install the mts executable
ADD dependencies /tmp/dependencies
RUN mkdir mts &&\
    cd /tmp/dependencies &&\
    tar -xf mts.tar.gz -C /mts &&\
    mv /mts/mts/* /mts &&\
    rmdir /mts/mts
RUN cd /mts && ant build
RUN sed -i 's#^MTS_PATH=\${0%\/\*}#MTS_PATH="/mts"#g' /mts/bin/bsh/mts
RUN cp /mts/bin/bsh/mts /usr/local/bin/mts
