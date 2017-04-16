FROM christimperley/repairbox:ctf-base
MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV PROGRAM_NAME totinfo
ENV EXECUTABLE totinfo
ENV SOURCE_FILE tot_info.c

# utilities
ADD generate-pythia-manifest /usr/bin/generate-pythia-manifest

# Mount bug files to /experiment
ADD tests.txt /experiment/tests.txt
ADD inputs /experiment/inputs
ADD source /experiment/source
WORKDIR /experiment
RUN sudo chown -R docker /experiment

# Preprocess original version of the code
RUN cd source && \
    gcc -o totinfo tot_info.c -lm -save-temps && \
    mv tot_info.i ../tot_info.c && \
    mv totinfo ../totinfo

# Generate manifest and oracle
RUN generate-pythia-manifest && \
    pythia generate ${EXECUTABLE}
