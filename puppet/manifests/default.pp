# set default execution path
Exec {
  path => ['/bin/', '/usr/bin/', '/usr/local/sbin', '/usr/sbin', '/sbin']
}

Package {
  ensure => present
}

user { 'vagrant':
  ensure => 'present',
  gid => '1000',
  uid => '1000',
  shell => '/bin/bash',
  home => '/home/vagrant'
}

exec { "apt-get update": }

package { "python-software-properties":
  require => Exec["apt-get update"]
}

package { "make":
  require => Exec["apt-get update"]
}

package { "git":
  require => Exec["apt-get update"]
}

package { "vim":
  require => Exec["apt-get update"]
}

package { "m4":
  require => Exec["apt-get update"]
}

package { "libglib2.0-dev":
  require => Exec["apt-get update"]
}

package { "libgmp3-dev":
  require => Exec["apt-get update"]
}

exec { "ppa:ocaml+opam":
  command =>"add-apt-repository --yes ppa:avsm/ocaml42+opam120; apt-get update",
  require => Package["python-software-properties"]
}

# install ocaml-4.02.1
exec { "ocaml":
  require => [Exec["ppa:ocaml+opam"], Package["m4"]],
  command => "apt-get install -y --force-yes ocaml",
  unless => "which ocaml"
}

# install and initialise OPAM 1.2.2, before updating package listings
# 
# This section of code illustrates Puppet at its very worst!
# Ideally, we would like to be able to execute opam commands using the
# vagrant user, rather than the root, as is usually the case when executing
# commands in Puppet. Despite specifying the user at the top of the manifest,
# and explicitly starting the commands should be run with that user, opam
# simply ignores this and continues to run as root.
#
# As an annoying workaround, for all opam commands, we manually specify the
# root directory of the opam config files as the vagrant users home directory.
exec { "opam":
  require => Exec["ocaml"],
  command => "apt-get install -y --force-yes opam",
  unless => "which opam"
}
exec { "opam init":
  require => [Exec["opam"], User['vagrant']],
  command => "opam init -y --root=/home/vagrant/.opam",
  unless => "bash -c 'test -f /home/vagrant/.opam'",
  logoutput => on_failure,
  user => "vagrant"
}
exec { "opam config":
  require => [Exec["opam init"], User['vagrant']],
  command => "echo 'eval $(opam config env)' > /home/vagrant/.opamrc && . /home/vagrant/.profile",
  unless => "bash -c 'test -f /home/vagrant/.opamrc'",
  logoutput => on_failure,
  user => "vagrant"
}
exec { "opam update":
  require => [Exec["opam config"], User['vagrant']],
  command => "opam update --root=/home/vagrant/.opam",
  user => "vagrant"
}

# install OPAM packages
exec { "ocamlfind":
  require => [Exec["opam update"], User['vagrant']],
  command => "opam install -y ocamlfind --root=/home/vagrant/.opam",
  user => "vagrant"
}
exec { "yojson":
  command => "opam install -y yojson --root=/home/vagrant/.opam",
  require => [Exec["opam update"], User['vagrant']],
  user => "vagrant"
}
exec { "cil":
  command => "opam install -y cil --root=/home/vagrant/.opam",
  require => [Exec["ocamlfind"], Exec["opam update"], User['vagrant']],
  user => "vagrant"
}
