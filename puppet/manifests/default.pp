# set default execution path
Exec {
  path => ['/bin/', '/usr/bin/', '/usr/local/sbin', '/usr/sbin', '/sbin']
}

Package {
  ensure => present
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
exec { "opam":
  require => Exec["ocaml"],
  command => "apt-get install -y --force-yes opam",
  unless => "which opam"
}
exec { "opam init":
  require => Exec["opam"],
  command => "opam init -y; echo 'eval $(opam config env)' > /etc/profile.d/opam.sh; bash -c 'source ~/.profile'",
  unless => "bash -c 'test -f /etc/profile.d/opam.sh'"
}
exec { "opam update": require => Exec["opam init"] }

# install OPAM packages
exec { "ocamlfind":
  require => Exec["opam update"],
  command => "opam install -y ocamlfind"
}
exec { "yojson":
  command => "opam install -y yojson",
  require => Exec["opam update"]
}
exec { "cil":
  command => "opam install -y cil",
  require => [Exec["ocamlfind"], Exec["opam update"]]
}
