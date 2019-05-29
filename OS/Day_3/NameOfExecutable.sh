#!/bin/bash
clear
for file in `ls`
do
if [ -e $file -a -x $file ]
then
	echo " $file is a executable"
fi
done
exit
