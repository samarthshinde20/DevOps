#!/bin/bash
clear
echo -n "Table of "
read num
i=1
while [ $i -lt 11 ]
do
res=`expr $i \* $num`
echo "$res"
i=`expr $i + 1`
done
exit
