#!/bin/bash

if [ -f "./config.log" ]; then
	echo 'Remove file ./config.log'
	sudo rm -r ./config.log
fi

if [ -f "./config.status" ]; then
	echo 'Remove file ./config.status'
	sudo rm -r ./config.status
fi

if [ -f "./Makefile.in" ]; then
	echo 'Remove file ./Makefile.in'
	sudo rm -r ./Makefile.in
fi

if [ -f "./aclocal.m4" ]; then
	echo 'Remove file ./aclocal.m4'
	sudo rm -r ./aclocal.m4
fi

if [ -d "./autom4te.cache" ]; then
	echo 'Remove file ./autom4te.cache'
	sudo rm -r ./autom4te.cache
fi

if [ -f "./compile" ]; then
	echo 'Remove file ./compile'
	sudo rm -r ./compile
fi

if [ -f "./Makefile" ]; then
	echo 'Remove file ./Makefile'
	sudo rm -r ./Makefile
fi

if [ -f "./configure" ]; then
	echo 'Remove file ./configure'
	sudo rm -r ./configure
fi

if [ -d "./COPYING" ]; then
	echo 'Remove dir ./COPYING'
	sudo rm -r ./COPYING
fi

if [ -f "./depcomp" ]; then
	echo 'Remove file ./depcomp'
	sudo rm -r ./depcomp
fi

if [ -d "./INSTALL" ]; then
	echo 'Remove dir ./INSTALL'
	sudo rm -r ./INSTALL
fi

if [ -f "./install-sh" ]; then
	echo 'Remove file ./install-sh'
	sudo rm -r ./install-sh
fi

if [ -f "./missing" ]; then
	echo 'Remove file ./missing'
	sudo rm -r ./missing
fi


if [ -d "./AUTHORS" ]; then
	echo 'Remove ./AUTHORS'
	sudo rm -r ./AUTHORS
fi

if [ -d "./ChangeLog" ]; then
	echo 'Remove ./ChangeLog'
	sudo rm -r ./ChangeLog
fi

if [ -d "./NEWS" ]; then
	echo 'Remove ./NEWS'
	sudo rm -r ./NEWS
fi

if [ -d "./README" ]; then
	echo 'Remove ./README'
	sudo rm -r ./README
fi


