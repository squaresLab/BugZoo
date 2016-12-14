FROM repairbox:sir
MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV OBJECT_ARCHIVE sed.tar.gz
ENV EXECUTABLE source/sed.exe
#ENV SOURCE_FILE source/allfile.c
#ENV PREPROCESSED_FILE source/allfile.i

# Mount bug files to /experiment
ADD . /experiment
WORKDIR /experiment

# Unextract archive contents into /experiment
RUN tar -xf ${OBJECT_ARCHIVE} && mv sed/* . && rmdir sed && rm ${OBJECT_ARCHIVE}

# Dispose of redundant file
RUN rm -f build.properties

# Generate the Pythia script
RUN pythia build-manifest-from-mts . testplans.alt/v1/v0_2.universe ${EXECUTABLE}
