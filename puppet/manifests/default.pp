exec { "apt-get update":
  path => "/usr/bin"
}

package { "git":
  ensure => present,
  require => Exec["apt-get update"]
}

package { "lefence": ensure => present }
