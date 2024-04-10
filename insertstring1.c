#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20];
	int i,j,pos,l1,l2;
	printf("enter the str");
	gets(s1);
	l1=strlen(s1);
	printf("enter the s2");
	gets(s2);
	l2=strlen(s2);
	printf("enter the pos");
	scanf("%d",&pos);
	pos=pos-1;
	for(i=l1-1;i>=pos;i--)
	{
		s1[i+l1]=s1[i];
	}
	for(j=pos;j<pos+l2;j++)
	{
		s1[j]=s2[j-pos];
	}
	printf("after inserting the strring is %s",s1);
}
