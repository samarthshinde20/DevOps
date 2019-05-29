#!/bin/bash
clear
echo "Positional Parameters are : $#"
for file in $*
do
	sum=`expr $sum + $file`
done
echo "$sum"
exit
