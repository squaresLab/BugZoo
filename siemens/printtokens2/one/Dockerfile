FROM christimperley/repairbox:ctf-printtokens2-base

ENV SCENARIO_NAME ct-printtokens2-one

# Add the mutant file
ADD print_tokens2.c /experiment/source/print_tokens2.c
RUN sudo chown -R docker /experiment

# Preprocess
RUN cd source && \
    gcc -o ${EXECUTABLE} ${SOURCE_FILE} ${GCC_LIBS} -save-temps && \
    mv ${SOURCE_FILE%.c}.i ../${SOURCE_FILE} && \
    cd .. && \
    rm -rf source 

# Generate map
RUN ./compile.sh ./${EXECUTABLE} && \
    pythia map ${EXECUTABLE} && \
    rm ${EXECUTABLE}

# Generate problem description
RUN generate-description
