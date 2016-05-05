#!/bin/bash
sudo dnf update
sudo dnf install -y puppet

# Since Puppet is refusing to work, let's just install things using a shell
# script.
sudo dnf install -y python-software-properties
sudo dnf install -y make
sudo dnf install -y git
sudo dnf install -y m4
sudo dnf install -y ncurses-devel
sudo dnf install -y pkgconfig
sudo dnf install -y perl-devel
sudo dnf install -y perl-CPAN

# Install ocaml and opam
sudo dnf install -y ocaml
if ! [ -f /usr/local/bin/opam ] ; then
  sudo wget https://raw.github.com/ocaml/opam/master/shell/opam_installer.sh \
    -O - | sh -s /usr/local/bin
  opam update
fi

opam install -y depext
opam install -y ocamlfind
opam install -y yojson
opam install -y cil

#sudo dnf install -y libgmp3-dev
#sudo dnf install -y m4 libglib2.0-dev libgmp3-dev

# Atris requirements
#opam install -y SDL*

## Required by various benchmarks
## Atris
#package { 'libsdl1.2debian': require => Package['make'] }
#package { 'libsdl1.2-dev': require => Package['make'] }
#package { 'libsdl-ttf2.0-0': require => Package['make'] }
#package { 'libsdl-ttf2.0-dev': require => Package['make'] }
#package { 'libsdl-ttf-gst': require => Package['make'] }
#
## required by PHP
#package { "libxml2-dev": require => Exec["apt-get update"] }
