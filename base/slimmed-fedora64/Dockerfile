#
# Docker configuration for a stable, consistent automated repair environment,
# based on Fedora.
#
FROM fedora:latest
USER root
MAINTAINER Chris Timperley "christimperley@gmail.com"

# Create user and add to sudoers list
RUN useradd --password repair repair
RUN dnf install -y sudo
RUN gpasswd wheel -a repair
RUN echo 'repair  ALL=(ALL) NOPASSWD:ALL' >> /etc/sudoers

# Install basic package requirements
RUN dnf install -y gcc \
  make \
  git \
  m4 \
  jq \
  perl-devel \
  perl-CPAN \
  glibc-devel \
  psmisc \
  wget \
  patch \
  tar \
  unzip \
  which \
  ccache

# Setup CCache
ENV PATH /usr/lib/ccache:$PATH

# Switch to the repair user to install OCaml and OPAM
USER repair
WORKDIR /home/repair
ENV HOME /home/repair
ENV OPAMYES 1

RUN sudo -u repair sh -c "sudo dnf install -y ocaml"
RUN sudo -u repair sh -c "wget https://raw.github.com/ocaml/opam/master/shell/opam_installer.sh -q -O - | sh -s /usr/local/bin"
RUN opam init -a -y /home/repair/.opam

# Update the environmental variables to those otherwise produced by calling:
# eval $(opam config env)
# This feels like a hideous hack, but without it, the environmental variables
# within Docker are otherwise unaffected
ENV CAML_LD_LIBRARY_PATH home/repair/.opam/4.02.1/lib/stublibs
ENV MANPATH /home/repair/.opam/4.02.1/man:$MANPATH
ENV PERL5LIB /home/repair/.opam/4.02.1/lib/perl5
ENV OCAML_TOPLEVEL_PATH /home/repair/.opam/4.02.1/lib/toplevel
ENV PATH /home/repair/.opam/4.02.1/bin:$PATH

# Install the prerequisite OPAM packages
RUN opam update &&\
    opam install -y depext &&\
    opam install -y ocamlfind &&\
    opam install -y yojson &&\
    opam install -y cil &&\
    opam install -y core

# Download and install GenProg 3, before ensuring it is in its most up-to-date
# form
ENV GenProgVersion ce62daf66baf34477caf3d75ec335d82b89ad2c3
#RUN git clone https://bitbucket.org/ChrisTimperley/GP3 genprog --depth 1 && \
#    $(cd genprog/src && sudo make install) &&\
#    rm genprog -rf
