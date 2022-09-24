ifconfig -a | grep 'ether ' | sed 's/ether //' | cut -c 2- | sed 's/ //'
