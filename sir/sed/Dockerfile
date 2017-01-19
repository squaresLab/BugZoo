FROM christimperley/repairbox:sir
MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV PROGRAM_NAME sed
ENV OBJECT_ARCHIVE sed.tar.gz
ENV EXECUTABLE source/sed.exe
ENV SOURCE_FILE source/sed.c
ENV PREPROCESSED_FILE source/sed.i

# Mount bug files to /experiment
ADD sed.tar.gz /experiment
RUN sudo chown -R docker /experiment
WORKDIR /experiment

# Move extracted archive contents into /experiment and dispose of unnecessary
# files
RUN mv sed/* . && rmdir sed && \
    rm -rf build.properties info

# Generate the Pythia script
RUN pythia build-manifest-from-mts . testplans.alt/v1/v0_2.universe ${EXECUTABLE}
