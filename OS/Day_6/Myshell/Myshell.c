#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<string.h>
int main(void){
	char *args[30];
	char *cptr=NULL;
	char str[132];
	int status,i=0,err;
	while(1){
		printf("cmd> ");
		gets(str);
		cptr==strtok(str," ");
		args[i++]=cptr;
		do{
			cptr=strtok(NULL," ");
			args[i++]=cptr;
		}while(cptr!=NULL);
		if(strcmp(args[0],"exit")==0)
			_exit(0);
		if(strcmp(args[0],"cd")==0){
			chdir(args[1]);
		}
		else{
			int ret=fork();
			if(ret==0){
				err=execvp(args[0],args);
				if(err==-1){
					perror("execvp() faied !!!");
					_exit(1);
				}
			}
			else{
				wait(&status);
			}
		}
	}
	return 0;
}
