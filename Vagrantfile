# -*- mode: ruby -*-
dir = File.dirname(__FILE__)

Vagrant.configure(2) do |config|
  config.vm.box = "box-cutter/fedora22"
  config.vm.provision :shell, path: "shell/fedora-setup.sh"
end
