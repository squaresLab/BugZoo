FROM otomato/ubuntu32:14.04
MAINTAINER Chris Timperley "christimperley@gmail.com"

# Install essential packages required by all bug scenarios
RUN apt-get update
RUN apt-get install -y gcc software-properties-common make m4
RUN add-apt-repository ppa:avsm/ppa && apt-get update

# Create the repair user and award them sudo privileges
RUN useradd --password repair repair
RUN echo 'repair  ALL=(ALL) NOPASSWD:ALL' >> /etc/sudoers

# Switch to the repair user to install OCaml and OPAM
USER repair
WORKDIR /home/repair
ENV HOME /home/repair
ENV OPAMYES 1

RUN sudo -u repair sh -c "sudo apt-get install -y ocaml ocaml-native-compilers camlp4-extra opam"
#RUN sudo -u repair sh -c "wget https://raw.github.com/ocaml/opam/master/shell/opam_installer.sh -q -O - | sh -s /usr/local/bin"
RUN opam init -a -y /home/repair/.opam

# Update the environmental variables to those otherwise produced by calling:
# eval $(opam config env)
ENV CAML_LD_LIBRARY_PATH home/repair/.opam/4.02.1/lib/stublibs
ENV MANPATH /home/repair/.opam/4.02.1/man:$MANPATH
ENV PERL5LIB /home/repair/.opam/4.02.1/lib/perl5
ENV OCAML_TOPLEVEL_PATH /home/repair/.opam/4.02.1/lib/toplevel
ENV PATH /home/repair/.opam/4.02.1/bin:$PATH

# Install the prerequisite OPAM packages
RUN opam update
RUN opam install -y depext ocamlfind yojson cil

# Download and install the latest version of GenProg 3; leave no mess
RUN git clone https://bitbucket.org/ChrisTimperley/GP3 genprog --depth 1 && \
  pushd genprog/src && make && sudo make install
CMD ["pushd /home/repair/genprog; git pull; make clean && make && popd && rm -rf /home/repair/genprog"]

# Install CCache to help speed things up
RUN sudo apt-get install ccache
ENV PATH /usr/lib/ccache:$PATH

# Tidy up temporary files
RUN apt-get clean
RUN rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
