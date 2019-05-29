#!/bin/bash
clear
echo "Positional parameters are : $#"
if [ $# -ne 2 ]
then
	echo "Invalid Parameters"
	exit
else
	sum=`expr $1 + $2`
	echo "sum : $sum"
fi
exit
