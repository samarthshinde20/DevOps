#include<stdio.h>
#include<unistd.h>
int main(void){
	int ret=fork();
	int i;
	if(ret==0){
		for(i=0; i<=20; i++){
			printf("\nChile :  %d",i);
			sleep(1);
		}
		return 0;
	}
	else{
		for(i=0;i<=20;i++){
			printf("\nParent :  %d",i);
			sleep(1);
		}
		return 0;
	}
}
