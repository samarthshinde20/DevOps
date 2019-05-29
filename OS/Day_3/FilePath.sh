#!/bin/bash
clear
echo -n "Path : "
read filePath
if [ -e $filePath ]
then
	if [ -d $filePath ]
	then
	echo "Contents of $filePath are : "
	ls -l $filePath
	elif [ -f $filePath ]
	then
	echo "Contents of $filePath are : "
	cat $filePath
	else
	echo "$filePath is neither file nor directory !!"
	fi
else
echo "$filePath is invalid"
fi
exit
