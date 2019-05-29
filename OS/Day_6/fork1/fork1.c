#include<stdio.h>
#include<unistd.h>
int main(void){
	printf("Main function is started !!!\n");
	printf("PID : %d\n",getpid());
	printf("PPID : %d\n",getppid());
	fork();
	printf("PID : %d\n",getpid());
  printf("PPID : %d\n",getppid());
	printf("Main function stoped !!!!\n");
	return 0;
}
