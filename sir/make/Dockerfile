FROM christimperley/repairbox:sir
MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV PROGRAM_NAME make
ENV OBJECT_ARCHIVE make.tar.gz
ENV EXECUTABLE source/make.exe
ENV SOURCE_FILE source/make.c
ENV PREPROCESSED_FILE source/make.i

# Mount bug files to /experiment
ADD . /experiment
WORKDIR /experiment

# Unextract archive contents into /experiment
RUN tar -xf ${OBJECT_ARCHIVE} && mv ${PROGRAM_NAME}/* . && rmdir ${PROGRAM_NAME} && rm ${OBJECT_ARCHIVE}

# Dispose of redundant files
RUN rm -f build.properties

# Generate the Pythia script
#RUN pythia build-manifest-from-mts . testplans.alt/v1/v0.tsl.universe ${EXECUTABLE}
