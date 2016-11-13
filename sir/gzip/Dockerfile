FROM repairbox:sir
MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV OBJECT_ARCHIVE gzip.tar.gz
ENV EXECUTABLE source/gzip.exe
ENV SOURCE_FILE source/allfile.c
ENV PREPROCESSED_FILE source/allfile.i

# Mount bug files to /experiment
ADD . /experiment
WORKDIR /experiment

# Unextract archive contents into /experiment
RUN tar -xf ${OBJECT_ARCHIVE} && mv gzip/* . && rmdir gzip && rm gzip.tar.gz

# TODO: Fix bug in each of the universe files
#RUN sed -i "76 s#QUOTE}#QUOTE}\"#" testplans.alt/$PROGRAM_VER/v0.cov.universe.esc
