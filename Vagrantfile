# -*- mode: ruby -*-
dir = File.dirname(__FILE__)

Vagrant.configure(2) do |config|
  config.vm.box = "box-cutter/fedora22"
  config.vm.provision :shell, path: "shell/fedora22.sh", privileged: false

  # sym-linked benchmarks directory
  config.vm.synced_folder "./benchmarks", "/home/vagrant/benchmarks"
  #config.vm.synced_folder "./benchmarks", "/home/vagrant/benchmarks",
  #  type: "smb", mount_options: ["vers=3.02", "mfsymlinks"]

  # allow symbolic links in the shared directory; Vagrant must be run in a
  # shell with admin rights
  # http://stackoverflow.com/questions/24200333/symbolic-links-and-synced-folders-in-vagrant
  #config.vm.provider "virtualbox" do |v|
  #  v.customize ["setextradata", :id, "VBoxInternal2/SharedFoldersEnableSymlinksCreate/v-root", "1"]
  #end
end
