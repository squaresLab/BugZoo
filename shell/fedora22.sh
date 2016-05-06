#!/bin/bash
#
# NOTE: ocamlfind isn't available when executing sudo; could installing opam
#   to /usr/bin/ fix this?
sudo dnf install -y puppet

# Since Puppet is refusing to work, let's just install things using a shell
# script.
sudo dnf install -y make
sudo dnf upgrade -y vim-minimal
sudo dnf install -y vim
sudo dnf install -y git
sudo dnf install -y m4
sudo dnf install -y ncurses-devel
sudo dnf install -y pkgconfig
sudo dnf install -y perl-devel
sudo dnf install -y perl-CPAN
sudo dnf install -y glibc-devel.i686
sudo dnf install -y libstdc++-devel.i686
sudo dnf install -y glibc-static
sudo dnf install -y ElectricFence.x86_64
sudo dnf install -y ElectricFence.i686

sudo dnf install -y SDL-devel.i686
sudo dnf install -y SDL-devel.x86_64
sudo dnf install -y SDL_ttf.i686
sudo dnf install -y SDL_ttf.x86_64
sudo dnf install -y SDL_ttf-devel.i686
sudo dnf install -y SDL_ttf-devel.x86_64

# Install ocaml and opam
sudo dnf install -y ocaml
if ! [ -f /usr/local/bin/opam ] ; then
  sudo wget https://raw.github.com/ocaml/opam/master/shell/opam_installer.sh \
    -O - | sh -s /usr/local/bin
  opam config setup -a
fi

opam update
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
