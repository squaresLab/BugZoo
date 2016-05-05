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

# Install ocaml and opam
sudo dnf install -y ocaml
#wget http://download.opensuse.org/repositories/home:ocaml/Fedora_22/home:ocaml.repo \
#  -O /etc/yum.repos.d/home:ocaml.repo
#sudo yum install -y opam

#sudo yum copr enable jonludlam/opam
#sudo yum copr enable cottsay/gringo
#yum install -y aspcud

if ! [ -f /usr/local/bin/opam]; then
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

#exec { "opam config":
#  require => [Exec["opam init"], User['vagrant']],
#  command => "echo 'eval $(opam config env)' >> /home/vagrant/.profile && touch /home/vagrant/.opamrc && . /home/vagrant/.profile",
#  unless => "bash -c 'test -f /home/vagrant/.opamrc'",
#  logoutput => on_failure,
#  user => "vagrant"
#}
## install OPAM packages
#exec { "ocamlfind":
#  require => [Exec["opam update"], User['vagrant']],
#  command => "opam install -y ocamlfind --root=/home/vagrant/.opam",
#  user => "vagrant"
#}
#exec { "yojson":
#  command => "opam install -y yojson --root=/home/vagrant/.opam",
#  require => [Exec["opam update"], User['vagrant']],
#  user => "vagrant"
#}
#exec { "cil":
#  command => "opam install -y cil --root=/home/vagrant/.opam",
#  require => [Exec["ocamlfind"], Exec["opam update"], User['vagrant']],
#  user => "vagrant"
#}
#
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
