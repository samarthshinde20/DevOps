#!/bin/bash
function Addition()
{
	res=`expr $1 + $2`
		echo "Result : $res"
}
function Substraction()
{
  res=`expr $1 - $2`
   echo "Result : $res"
}
function Multiplication()
{
  res=`expr $1 \* $2`
   echo "Result : $res"
}
function Division()
{
 res=`expr $1 / $2`
		echo "Result : $res"
}
while [ 1 ]
do
	clear
	echo "0.exit"
  echo "1.Addition"
  echo "2.Substraction"
  echo "3.Multiplication"
  echo "4.Division"
echo -n "Choice : "
read choice
if [ $choice -eq 0 ]
then
 exit
else
echo -n "Num1 : "
read num1
echo "Num2 : "
read num2
case $choice in
1)
	res=$(Addition $num1 $num2)
	echo "$res"
	;;
2)
	res=$(Substraction $num1 $num2)
	echo "$res"
	;;
3)
	res=$(Multiplication $num1 $num2)
	echo "$res"
	;;
4)
	res=$(Division $num1 $num2)
	echo "$res"
	;;
esac
echo "press enter to continue "
read enter
fi
done
exit
