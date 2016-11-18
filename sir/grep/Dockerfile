FROM repairbox:sir
MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV UNIVERSE_FILE /experiment/testplans.alt/v0/v0_1.tsl.universe
ENV EXECUTABLE source/grep.exe
ENV SOURCE_FILE source/grep.c
ENV PREPROCESSED_FILE source/grep.i

# Mount bug files to /experiment
ADD . /experiment
WORKDIR /experiment

# Unextract archive contents into /experiment
RUN tar -xf grep.tar.gz && mv grep/* . && rmdir grep && rm grep.tar.gz

# TODO: Fix bug in each of the universe files
#RUN sed -i "76 s#QUOTE}#QUOTE}\"#" testplans.alt/$PROGRAM_VER/v0.cov.universe.esc
