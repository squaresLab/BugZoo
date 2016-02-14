# -*- mode: ruby -*-
Vagrant.configure(2) do |config|
  config.vm.box = "hashicorp/precise32"

  # Install Puppet modules
  config.vm.provision :shell do |shell|
    shell.inline = "puppet module install puppetlabs/vcsrepo --force --modulepath '/vagrant/puppet/modules'"
  end

  # Install Puppet manifests
  config.vm.provision :puppet do |puppet|
    puppet.manifests_path = "puppet/manifests"
    puppet.module_path = "puppet/modules"
    puppet.manifest_file = "default.pp"
    puppet.options = "--verbose --debug"
  end
end
