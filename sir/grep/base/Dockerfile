MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV PROGRAM_NAME grep
ENV EXECUTABLE source/grep.exe
ENV SOURCE_FILE grep.c
ENV PREPROCESSED_FILE grep.i

# Mount bug files to /experiment
ADD tests.pythia.json /experiment
ADD grep.tar.gz /experiment
RUN sudo chown -R docker /experiment
WORKDIR /experiment
RUN mv grep/versions.alt /experiment && \
    mv grep/inputs /experiment && \
    rm -rf grep
