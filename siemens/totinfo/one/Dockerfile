FROM christimperley/repairbox:ctf-totinfo-base

ENV SCENARIO_NAME ct-totinfo-one

# Add the mutant file
ADD tot_info.c /experiment/source/tot_info.c
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
