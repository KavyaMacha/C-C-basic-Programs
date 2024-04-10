#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("file1.txt","w");
	fputs("how r u",fp);
	fclose(fp);
}
