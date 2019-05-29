#!/bin/bash
clear
echo -n "Radius : "
read rad
PI=3.14
result=`echo "$PI * $rad * $rad" | bc`
echo "Area : $result"
exit
