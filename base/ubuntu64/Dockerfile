FROM ubuntu:14.04
MAINTAINER Chris Timperley "christimperley@gmail.com"

# Create docker user
RUN apt-get update && \
    apt-get install --no-install-recommends -y sudo && \
    useradd -ms /bin/bash docker && \
    echo 'docker ALL=(ALL) NOPASSWD:ALL' >> /etc/sudoers && \
    adduser docker sudo && \
    apt-get clean && \
    mkdir -p /home/docker && \
    sudo chown -R docker /home/docker && \
    rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
USER docker

# reclaim ownership or /usr/local/bin
RUN sudo chown -R docker /usr/local/bin

# install Pythia and 
ENV PYTHIA_VERSION 9429848
RUN sudo apt-get update && \
    sudo apt-get install -y wget zip python3-setuptools software-properties-common && \
    cd /tmp &&\
    wget -q https://github.com/ChrisTimperley/Pythia/archive/master.zip &&\
    unzip master.zip &&\
    (cd Pythia-master && sudo python3 setup.py install) &&\
    cd / && \
    sudo apt-get clean && \
    sudo apt-get autoremove -y && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# install dependencies for KLEE
RUN sudo apt-get update && \
    sudo apt-get install --no-install-recommends -y build-essential \
                                                    curl \
                                                    libcap-dev \
                                                    git \
                                                    cmake \
                                                    libncurses5-dev && \
    sudo apt-get autoremove -y && \
    sudo apt-get clean && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

# install LLVM
RUN echo "deb http://llvm.org/apt/trusty/ llvm-toolchain-trusty-3.4 main" > /tmp/llvm.list && \
    echo "deb-src http://llvm.org/apt/trusty/ llvm-toolchain-trusty-3.4 main" >> /tmp/llvm.list && \
    sudo mv /tmp/llvm.list /etc/apt/sources.list.d/ && \
    wget -O - http://llvm.org/apt/llvm-snapshot.gpg.key | sudo apt-key add - && \
    sudo apt-get update && \
    sudo apt-get install -y clang-3.4 \
                            llvm-3.4 \
                            llvm-3.4-dev \
                            llvm-3.4-tools && \ 
    sudo apt-get autoremove -y && \
    sudo apt-get clean && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
ENV PATH "${PATH}:/usr/lib/llvm-3.4/bin"

# install Z3 solver
RUN cd /tmp && \
    wget -q https://github.com/Z3Prover/z3/archive/z3-4.5.0.tar.gz  && \
    tar -xvf z3*.tar.gz && \
    cd z3-z3-4.5.0 && \
    python scripts/mk_make.py &&  \
    cd build && make -j4 && sudo make install

# install uclibc
RUN cd / && \
    sudo mkdir -p /opt/uclibc && sudo chown -R docker /opt/uclibc && \
    cd /opt && git clone https://github.com/klee/klee-uclibc.git uclibc && \
    cd uclibc && \
    ./configure --make-llvm-lib && \
    make -j4

# install KLEE (for now we retain the source, but do we need to?)
RUN sudo mkdir -p /opt/klee && sudo chown -R docker /opt/klee && \
    cd /opt/klee && git clone https://github.com/klee/klee.git source && \
    mkdir build && cd build && \
    cmake \
      -DENABLE_SOLVER_Z3=ON \
      -DENABLE_POSIX_RUNTIME=ON \
      -DENABLE_KLEE_UCLIBC=ON \
      -DKLEE_UCLIBC_PATH=/opt/uclibc \
      -DENABLE_UNIT_TESTS=OFF \
      -DENABLE_SYSTEM_TESTS=OFF \
      /opt/klee/source && \
    make -j4 && sudo make install && \
    cd / && rm -rf /tmp/*

# install wllvm
RUN cd /tmp && \
    wget https://bootstrap.pypa.io/get-pip.py && \
    sudo python get-pip.py && \
    sudo pip install wllvm && \
    cd / && rm -rf /tmp/*

# Create the experiment directory and set it as the work dir
RUN sudo mkdir -p /experiment && sudo chown -R docker /experiment
WORKDIR /experiment

# install GenProg
ENV GENPROG_VERSION c7543dd
RUN sudo add-apt-repository ppa:avsm/ppa && \
    sudo apt-get update && \
    sudo -u docker /bin/bash -c "sudo apt-get install -y opam build-essential jq m4" && \
    echo "yes" >> /tmp/yes.txt && \
    cd /home/docker && \
    sudo -u docker /bin/bash -c "opam init -y < /tmp/yes.txt" && \
    sudo -u docker /bin/bash -c "eval \$(opam config env) && opam install -y cil yojson" && \
    git clone https://bitbucket.org/ChrisTimperley/GP3 /tmp/genprog && \
    cd /tmp/genprog/src && \
    sudo -u docker /bin/bash -c "eval \$(opam config env) && make && sudo make install" && \
    sudo apt-get purge -y opam ocaml m4 && \
    sudo apt-get autoremove -y && \
    sudo apt-get clean && \
    sudo rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
