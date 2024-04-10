#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int wc=0,cc=0,lc=0;
	fp=fopen("file4.txt","r");
	if(fp==NULL)
	{
		printf("error in opening the file");
	}
	while((ch=fgetc(fp))!=EOF)
	{
		cc++;
		if(ch=='\n' || ch=='\0')
			lc++;
		if(ch==' '|| ch=='\t' || ch=='\n'|| ch=='\0')
			wc++;	
	}
	if(cc>0)
	{
		wc++;
		lc++;
	}
	printf("Total characters = %d\n", cc);
    printf("Total words      = %d\n", wc);
    printf("Total lines      = %d\n", lc);
	fclose(fp);
}
