#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include "emp.h"
#include "function.h"
#include<fcntl.h>
#define EMPDB "empdb.db"
#define TEMPEMPDB "tempempdb.db"
int menu(void)
{
	int choice;
	printf("\n0.exit");
  printf("\n1.Accept");
  printf("\n2.Display");
  printf("\n3.Write");
  printf("\n4.Read");
	printf("\n5.Edit");
	printf("\n6.Delete");
	scanf("%d",&choice);
	return choice;
}
void writeIntoFile(emp *e)
{
	int fd=open(EMPDB,O_CREAT|O_RDWR|O_APPEND,0644);
	if(fd==-1)
	{
		printf("File opening failed ");
		_exit(1);
	}
	write(fd,e,sizeof(emp));
	close(fd);
}
void readFromFile(void)
{
	emp e1;
	int fd=open(EMPDB,O_RDWR);
	if(fd==-1)
	{
		printf("opening failed !!");
		_exit(1);
	}
	while(read(fd,&e1,sizeof(emp))!=0)
	{
		printRecord(&e1);
	}
	close(fd);
}
int editFromFile(void)
{
	int empId;
	int flag=0;
	emp e1;
	int fd;
	unsigned long int offset=sizeof(emp);
	printf("Enter empid : ");
	scanf("%d",&empId);
	fd=open(EMPDB,O_RDWR);
	if(fd==-1)
	{
		printf("Opening failed ");
		_exit(1);
	}
	while(read(fd,&e1,sizeof(emp))!=0)
	{
		if(empId==e1.empId)
		{
			printRecord(&e1);
			acceptRecord(&e1);
			lseek(fd,-offset,1);
			write(fd,&e1,sizeof(emp));
			flag=1;
			break;
		}
	}
	close(fd);
	return flag;
}
void deleteFromFile(void)
{
	int empId;
	int fs;
	int fd;
	emp e1;
	printf("Enter empId : ");
	scanf("%d",&empId);
	fs=open(EMPDB,O_RDWR);
	fd=open(TEMPEMPDB,O_CREAT|O_RDWR,0644);
	if(fs==-1 || fd==-1)
	{
		printf("Opening failed ");
		_exit(1);
	}
	while(read(fs,&e1,sizeof(emp))!=0)
	{
		if(empId != e1.empId)
		{
			write(fd,&e1,sizeof(emp));
		}
	}
	close(fd);
	close(fs);
	unlink(EMPDB);
	rename(TEMPEMPDB,EMPDB);
}
