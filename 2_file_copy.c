#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("file4.txt","r");
	fp2=fopen("copyfile.txt","w");
	if(fp1==NULL || fp2==NULL)
	{   
		puts("Cannot open file");
		exit(0);
	}
	while((ch=fgetc(fp1))!=EOF)
	{
		if(ch>='a'&&ch<='z')
		  ch=ch-32;
		fputc(ch,fp2);
	}
	printf("File is copied\n");
	fclose(fp1);
    fclose(fp2);       
}
