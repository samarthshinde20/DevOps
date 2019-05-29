#ifndef _EMP_H
#define _EMP_H
typedef struct
{
	int empId;
	char empName[132];
	float empSalary;
}emp;
void acceptRecord(emp *e);
void printRecord(emp *e);
#endif
