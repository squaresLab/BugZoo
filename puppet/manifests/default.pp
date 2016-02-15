# set default execution path
Exec {
  path => ['/bin/', '/usr/bin/']
}

exec { "apt-get update": }

package { "python-software-properties":
  ensure  => present,
  require => Exec["apt-get update"]
}

package { "make":
  ensure  => present,
  require => Exec["apt-get update"]
}

package { "git":
  ensure  => present,
  require => Exec["apt-get update"]
}

package { "m4":
  ensure  => present,
  require => Exec["apt-get update"]
}

exec { "ppa:ocaml+opam":
  command =>"add-apt-repository --yes ppa:avsm/ocaml42+opam120; apt-get update",
  require => Package["python-software-properties"]
}

# install ocaml-4.02.1
exec { "ocaml":
  require => [Exec["ppa:ocaml+opam"], Package["m4"]],
  command => "apt-get install -y --force-yes ocaml"
}

# install and initialise OPAM 1.2.2, before updating package listings
exec { "opam":
  require => Exec["ocaml"],
  command => "apt-get install -y --force-yes opam; opam init -y; echo 'eval $(opam config env)' >> ~/.profile; source ~/.profile"
}
exec { "opam update": require => Exec["opam"] }

# install OPAM packages
exec { "ocamlfind":
  require => Exec["opam update"],
  command => "opam install -y ocamlfind"
}
exec { "yojson":
  path    => "/usr/bin",
  command => "opam install -y yojson",
  require => Exec["opam update"]
}
exec { "cil":
  path    => "/usr/bin",
  command => "opam install -y cil",
  require => [Exec["ocamlfind"], Exec["opam update"]]
}
