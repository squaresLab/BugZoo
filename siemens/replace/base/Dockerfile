MAINTAINER Chris Timperley "christimperley@gmail.com"

ENV PROGRAM_NAME "replace"
ENV EXECUTABLE "replace"
ENV SOURCE_FILE "replace.c"
ENV GCC_LIBS ""

# utilities
ADD generate-pythia-manifest /usr/bin/generate-pythia-manifest

# Mount bug files to /experiment
ADD tests.txt /experiment/tests.txt
ADD inputs /experiment/inputs
ADD source /experiment/source
RUN sudo chown -R docker /experiment

# Preprocess original version of the code (GENERIC)
RUN mkdir -p fixed && \
    cp source/* fixed && \
    cd source && \
    gcc -o "${EXECUTABLE}" "${SOURCE_FILE}" ${GCC_LIBS} -save-temps && \
    rm *.s *.o && \
    mv "${EXECUTABLE}" "../${EXECUTABLE}"

# Generate manifest and oracle
RUN generate-pythia-manifest && \
    pythia generate "${EXECUTABLE}" && \
    rm "${EXECUTABLE}"
