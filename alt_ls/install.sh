#!/bin/bash

#system directories
sys_local="/usr/local"
sys_local_src="$sys_local/src"
sys_local_lib="$sys_local/lib"
sys_local_bin="$sys_local/bin"

#relevant files
bin_file="alt_ls"
bash_file="alt_ls"
#program lib directory
prog_dir="alt_ls"


#create folder in /usr/local/lib/alt_ls
if [ -d $sys_local_lib/$prog_dir ]; then
	echo "Directory already exits"
else
	mkdir $sys_local_lib/$prog_dir

	if [ $? -eq 0 ]; then 
		echo "created $src_dir"
	else
		echo "failed to create $sys_local_lib/prog_dir"
		exit 1
	fi
fi

#copy main.o from build/ to /usr/local/lib/alt_ls
cp build/alt_ls $sys_local_lib/$prog_dir/

if [ -f $sys_local_lib/$prog_dir/$bin_file -a $? -eq 0 ]; then 
	echo "added $bin_file to $sys_local/$prog_dir"
else
	echo "failed to add $bin_file to $sys_local/$prog_dir"
	exit 1
fi


#copy alt_cd from ./ to /usr/local/bin
cp ./$bash_file $sys_local_bin/

if [ -f $sys_local_bin/$bash_file -a $? -eq 0 ]; then
	echo "added $bash_file to $sys_local_bin"
else
	echo "failed to add $bash_file to $bin_dir"
	exit 1
fi


#add program to path
export PATH=$PATH:/$sys_local_bin/

if [ $? -eq 0 ]; then 
	echo "installation successful !!!"
	source ~/.bashrc
else
	echo "installation failed!"
fi