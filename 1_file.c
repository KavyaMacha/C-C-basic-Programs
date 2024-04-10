#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("file4.txt","r");
	if(fp==NULL)
	{
		printf("error in opening the file");
	}
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
}
