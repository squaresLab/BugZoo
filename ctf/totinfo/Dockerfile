FROM christimperley/repairbox:ctf-base
MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV PROGRAM_NAME totinfo
ENV EXECUTABLE totinfo
ENV SOURCE_FILE totinfo.c

# utilities
ADD generate-pythia-manifest /usr/bin/generate-pythia-manifest

# Mount bug files to /experiment
ADD tests.txt /experiment/tests.txt
ADD inputs /experiment/inputs
ADD source /experiment/source
WORKDIR /experiment
RUN sudo chown -R docker /experiment

# Generate manifest
RUN generate-pythia-manifest
