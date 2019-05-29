#include<stdio.h>
#include<unistd.h>
int main(void){
	int ret=fork();
	if(ret==0){
		printf("\nret : %d",ret);
	  printf("\nPID : %d",getpid());
	  printf("\nPPID : %d",getppid());
	  printf("\n%d\n",ret);
	  return 0;
 }
 else{
	 printf("\nret : %d",ret);
	 printf("\nPID : %d",getpid());
	 printf("\nPPID : %d",getppid());
	 return 0;
 }
}
		
