#include<stdio.h>
#include "emp.h"
void acceptRecord(emp *e)
{
	printf("\nenter id name and salary");
	scanf("%d %s %f",&e->empId,e->empName,&e->empSalary);
}
void printRecord(emp *e)
{
	printf("\nempId : %d \nempName :  %s \nSalary : %f",e->empId,e->empName,e->empSalary);
}
