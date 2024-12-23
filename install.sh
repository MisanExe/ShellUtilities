#!/bin/bash

# run installation for both alt_ls and alt_cd



#ensure script is run as superuser or with permission
if [ $UID -ne 0 ]; then 
	echo "please run script as root or using  sudo ./<script>"
	exit 1
fi

echo "running install script"

cd alt_ls 
./install.sh

#check result
if [ $? -eq 0 ]; then 
	echo "***********installed alt_ls***********"
	cd ../alt_cd
else
	echo "failed install"
	exit 1
fi

#run install for alt_cd
./install.sh

#check result
if [ $? -eq 0 ]; then 
	echo "***********installed alt_cd***********"
else
	echo "failed install"
	exit 1
fi
