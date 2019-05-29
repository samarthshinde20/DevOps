#!/bin/bash
clear
echo -n "Num1 : "
read num1
echo -n "Num2 : "
read num2
result=`expr $num1 + $num2`
echo "Result is $result"
exit
