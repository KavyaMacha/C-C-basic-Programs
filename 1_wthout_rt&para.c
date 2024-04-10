#include<stdio.h>
void product()
{
	int a,b,p;
	printf("enter the values:\n");
	scanf("%d%d",&a,&b);
	p=a*b;
	printf("product=%d\n",p);
}
void main()
{
	printf("start of main\n");
	product();
	printf("end of main\n");
	
}
