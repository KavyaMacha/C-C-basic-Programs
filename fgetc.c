#include<stdio.h>
void main()
{
	//FILE  *fp;
	char ch;
	FILE  *fp=fopen("file1.txt","r");
	if(fp==NULL)
	{
		printf("file cannot be opened");
	}
	else
	//fp=fopen("file1.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	
}
