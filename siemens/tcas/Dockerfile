FROM christimperley/repairbox:ctf-base
MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV PROGRAM_NAME tcas
ENV EXECUTABLE tcas
ENV SOURCE_FILE tcas.c

# Mount bug files to /experiment
ADD tests.txt /experiment/tests.txt
ADD tcas.c /experiment/tcas.c
RUN sudo chown -R docker /experiment

# Generate the manifest and oracle (generic)
RUN generate-pythia-manifest && \
    ./compile.sh "./${EXECUTABLE}" && \
    pythia generate "./${EXECUTABLE}" && \
    rm -f "./${EXECUTABLE}" && \
    mkdir fixed && \
    mv "${SOURCE_FILE}" fixed
