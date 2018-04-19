#!/bin/bash

# $1 - project name
# $2 - version


if [ -f "./remove_tmp.sh" ]; then
	echo 'Run script ./remove_tmp.sh'
	sudo ./remove_tmp.sh
fi

if [ ! -d "./NEWS" ]; then
	echo 'Create dir ./NEWS'
	sudo mkdir ./NEWS
fi

if [ ! -d "./README" ]; then
	echo 'Create dir ./README'
	sudo mkdir ./README
fi

if [ ! -d "./AUTHORS" ]; then
	echo 'Create dir ./AUTHORS'
	sudo mkdir ./AUTHORS
fi

if [ ! -d "./ChangeLog" ]; then
	echo 'Create dir ./ChangeLog'
	sudo mkdir ./ChangeLog
fi

echo 'Run aclocal...'
sudo aclocal

echo 'Run automake...'
sudo automake --add-missing

echo 'Run autoconf...'
sudo autoconf

echo 'Run configure...'
sudo ./configure

echo 'Build your project'
sudo make

echo 'Install your project'
sudo make install

