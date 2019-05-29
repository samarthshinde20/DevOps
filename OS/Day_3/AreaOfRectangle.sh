#!/bin/bash
clear
echo "Length : "
read len
echo "Breadth : "
read bred
result=`expr $len \* $bred`
echo "Area : $result"
exit
