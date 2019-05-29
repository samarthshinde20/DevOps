#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(void){
	int i;
	int status;
	int ret=fork();
	if(ret==0){
		for(i=0;i<=10;i++){
			printf("\nChild : %d",i);
			sleep(1);
		}
		printf("\nChild is terminated ");
		_exit(7);
	}
	else{
		for(i=0;i<=20;i++){
			printf("\nParent : %d",i);
			sleep(1);
			if(i==10){
				wait(&status);
				printf("\nexit value of child is : %d",WEXITSTATUS(status));
			}
		}
	}
	printf("\nMain exited \n");
	return 0;
}

