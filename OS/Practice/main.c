#include<stdio.h>
#include "emp.h"
#include "function.h"
enum menuChoice{EXIT,ACCEPT,DISPLAY,WRITE,READ,EDIT,DELETE};
int main(void)
{
	int choice;
	emp e1;
	while((choice=menu())!=0)
	{
		switch(choice)
		{
			case EXIT:break;
			case ACCEPT:acceptRecord(&e1);
									break;
			case DISPLAY:printRecord(&e1);
									 break;
			case WRITE:writeIntoFile(&e1);
								 break;
			case READ:readFromFile();
								break;
			case EDIT:editFromFile();
								break;
			case DELETE:deleteFromFile();
									break;
			default:break;
		}
	}
	return 0;
}
