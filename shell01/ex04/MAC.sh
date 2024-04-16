ifconfig | grep ether | sed "s/ *ether/ether/" | cut -d" " -f2
