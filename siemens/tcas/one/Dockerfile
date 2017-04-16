FROM christimperley/repairbox:ctf-tcas-base

ENV SCENARIO_NAME ct-tcas-one

ADD tcas.c /experiment/tcas.c
RUN sudo chown -R docker /experiment

# Generate map
RUN gcc -save-temps -o ${EXECUTABLE} ${SOURCE_FILE} && \
    pythia map ${EXECUTABLE} && \
    mv "${SOURCE_FILE%.c}.i" "${SOURCE_FILE}" && \
    rm ${EXECUTABLE} *.o *.s

# Generate problem description
RUN generate-description
