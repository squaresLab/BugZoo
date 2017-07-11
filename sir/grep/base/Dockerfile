FROM christimperley/repairbox:sir
MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV PROGRAM_NAME grep
ENV UNIVERSE_FILE /experiment/testplans.alt/v0/v0_1.tsl.universe
ENV EXECUTABLE source/grep.exe
ENV SOURCE_FILE grep.c
ENV PREPROCESSED_FILE grep.i

# Mount bug files to /experiment
ADD tests.pythia.json /experiment
ADD grep.tar.gz /experiment
RUN sudo chown -R docker /experiment
WORKDIR /experiment

# Move extracted archive contents into /experiment and dispose of unnecessary
# files
RUN mv grep/* . && rmdir grep && \
    rm -rf build.properties info
