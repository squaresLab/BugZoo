FROM christimperley/repairbox:sir
MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV PROGRAM_NAME grep
ENV UNIVERSE_FILE /experiment/testplans.alt/v0/v0_1.tsl.universe
ENV EXECUTABLE source/grep.exe
ENV SOURCE_FILE source/grep.c
ENV PREPROCESSED_FILE source/grep.i

# Mount bug files to /experiment
ADD grep.tar.gz /experiment
RUN sudo chown -R docker /experiment
WORKDIR /experiment

# Move extracted archive contents into /experiment and dispose of unnecessary
# files
RUN mv grep/* . && rmdir grep && \
    rm -rf build.properties info

# Generate the Pythia script
RUN pythia build-manifest-from-mts . ${UNIVERSE_FILE} ${EXECUTABLE}

# TODO: Fix bug in each of the universe files
#RUN sed -i "76 s#QUOTE}#QUOTE}\"#" testplans.alt/$PROGRAM_VER/v0.cov.universe.esc
