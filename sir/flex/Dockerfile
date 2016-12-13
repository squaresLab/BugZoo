FROM repairbox:sir
MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV OBJECT_ARCHIVE flex.tar.gz
ENV EXECUTABLE source/flex
ENV SOURCE_FILE source/allfile.c
ENV PREPROCESSED_FILE source/allfile.i

# Mount bug files to /experiment
ADD . /experiment
WORKDIR /experiment

# Unextract archive contents into /experiment
RUN tar -xf ${OBJECT_ARCHIVE} && mv flex/* . && rmdir flex && rm flex.tar.gz

# Generate the Pythia script
RUN pythia build-manifest-from-mts . testplans.alt/v1/v0.tsl.universe ${EXECUTABLE}

# Dispose of redundant files
RUN rm -f build.properties
