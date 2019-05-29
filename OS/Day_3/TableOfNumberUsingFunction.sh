#!/bin/bash
function Table()
{
	echo  "Table of $1"
	for val in {1..10..1}
	do
		res=`echo "$1 * $val" | bc`
			echo "$res"
	done
}
clear
Table $1
exit

