FROM christimperley/repairbox:ctf-schedule-base

ENV SCENARIO_NAME ctf-schedule-one

# Add the mutant file
ADD schedule.c /experiment/source/schedule.c
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
