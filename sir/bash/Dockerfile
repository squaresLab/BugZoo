FROM repairbox:sir
MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV OBJECT_ARCHIVE bash.tar.gz
ENV EXECUTABLE source/bash
#ENV SOURCE_FILE source/allfile.c
#ENV PREPROCESSED_FILE source/allfile.i

# Mount bug files to /experiment
ADD . /experiment
WORKDIR /experiment

# Unextract archive contents into /experiment
RUN tar -xf ${OBJECT_ARCHIVE} && mv bash/* . && rmdir bash && rm bash.tar.gz

# Dispose of redundant files
RUN rm -f build.properties

# Generate the Pythia script
#RUN pythia build-manifest-from-mts . testplans.alt/v1/v0.tsl.universe ${EXECUTABLE}
