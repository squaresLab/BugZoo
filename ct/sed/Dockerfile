FROM christimperley/repairbox:sir-sed-v1
MAINTAINER Chris Timperley "christimperley@gmail.com"

ARG FAULT_ID
ENV FAULT_ID ${FAULT_ID}
ENV SCENARIO_NAME "ct-${PROGRAM_NAME}-${FAULT_ID}"

ADD ${SOURCE_FILE} /experiment/source/${SOURCE_FILE}
RUN sudo chown -R docker source && \
    cd source && \
    make build && \
    cd .. && \
    pythia map "${EXECUTABLE}"

# Preprocess the source code file and remove all others
RUN sed -i 's#\$(COMPILE_PARAMETERS)#$(COMPILE_PARAMETERS) -save-temps#' source/Makefile && \
    (cd source && make build) && \
    mv "source/${PREPROCESSED_FILE}" "source/${SOURCE_FILE}" && \
    rm -f source/*.exe source/*.i source/*.o source/*.s && \
    sed -i 's# -save-temps##' source/Makefile

# Copy the preprocessed source code to the preprocessed directory
RUN cp source/*.c preprocessed

# Determine the number of positive and negative tests before generating the
# problem.json file
RUN jq 'keys[]' 'map.pythia.json' | sed 's/\"//g' | \
      grep -oP '(?<=n)\d+' | sort -g | tail -n 1 > /tmp/num_negative && \
    jq 'keys[]' 'map.pythia.json' | sed 's/\"//g' | \
      grep -oP '(?<=p)\d+' | sort -g | tail -n 1 > /tmp/num_positive && \
    sed -i "s/<<PROGRAM_NAME>>/${PROGRAM_NAME}/g" problem.json && \
    sed -i "s/<<SCENARIO_NAME>>/${SCENARIO_NAME}/g" problem.json && \
    sed -i "s/<<POSITIVE_TESTS>>/$(cat /tmp/num_positive)/g" problem.json && \
    sed -i "s/<<NEGATIVE_TESTS>>/$(cat /tmp/num_negative)/g" problem.json && \
    sudo rm /tmp/* -rf
