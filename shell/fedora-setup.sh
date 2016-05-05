#!/bin/bash
sudo dnf update
sudo dnf install -y puppet

# Since Puppet is refusing to work, let's just install things using a shell
# script.
sudo dnf install -y python-software-properties
sudo dnf install -y make
sudo dnf install -y git
sudo dnf install -y m4

# Install ocaml and opam
sudo dnf install -y ocaml
wget http://download.opensuse.org/repositories/home:ocaml/Fedora_22/home:ocaml.repo \
  -O /etc/yum.repos.d/home:ocaml.repo
sudo yum install -y opam

#sudo dnf install -y libgmp3-dev
#sudo dnf install -y m4 libglib2.0-dev libgmp3-dev
