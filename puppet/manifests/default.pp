exec { "apt-get update":
  path => "/usr/bin"
}

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

# OCaml dependecies
package { "m4":
  ensure  => present,
  require => Exec["apt-get update"]
}

# Install ocaml-4.02.1 and opam-1.2.2
exec { "ppa:ocaml+opam":
  command =>"add-apt-repository --yes ppa:avsm/ocaml42+opam120; apt-get update",
  path    => "/usr/bin",
  require => Package["python-software-properties"]
}

#exec { "ocaml":
#  command => "apt-get install ocaml --force-yes -y",
#  path    => "/usr/bin",
#  require => Exec["ppa:ocaml+opam"]
#}

#exec { "opam":
#  command => "apt-get install opam --force-yes -y",
#  path    => "/usr/bin",
#  require => Exec["ocaml"]
#}

# Perform initial opam config
