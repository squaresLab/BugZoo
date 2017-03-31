FROM christimperley/repairbox:ct-base

ENV MAKE_TIMEOUT 600
ENV TEST_TIMEOUT 300
ENV PROGRAM_NAME openssl
ENV TOP /experiment/source

ADD test-by-name.sh /experiment/test-by-name.sh

RUN git clone https://github.com/openssl/openssl source
