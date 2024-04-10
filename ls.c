//ls
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<stdlib.h>
//#include<sys/wait.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
	int pid;
	pid=fork();
	if(pid<0)
	{
		printf("\n Fork Failed\n");
		exit(-1);
	}
	else if(pid==0)
	{
		execlp("/bin/ls","ls","-l","NULL");
	}
	else
	{
		wait(NULL);
		printf("\nchild complete");
		exit(0);
	}
	
	
	
}
