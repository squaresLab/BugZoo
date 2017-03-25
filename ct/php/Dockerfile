# * manifest
# * mutated files
# * preprocessed mutant files
# * preprocessed fix files?
FROM christimperley/repairbox:ubuntu64

#ADD test.sh /workspace/test.sh
#ADD compile.sh /workspace/compile.sh

# install PHP oracle and build deps
RUN sudo apt-get update && \
    sudo apt-get install -y php5 automake autoconf bison libxml2-dev && \
    sudo apt-get clean && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

RUN git clone https://github.com/php/php-src source
ARG PHP_REVISION
ENV PHP_REVISION ${PHP_REVISION}
RUN cd source && \
    git reset --hard ${PHP_REVISION}

# build PHP
RUN cd source && \ 
    ./buildconf && ./configure && make -j$(nproc)

# find the passing tests
RUN cd source && \
    php ./run-tests.php -p sapi/cli/php -g PASS > tests.txt

# add the mutated files (should be provided as a diff / patch)
ADD manifest.txt /experiment/manifest.txt
ADD mutated /experiment/mutated

# create preprocessed versions of each of the files within the patch
RUN cp -r mutated/* source && \
    cd source && \
    make clean && make EXTRA_CFLAGS="-save-temps" -j$(nproc)
