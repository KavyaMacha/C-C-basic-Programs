#include<stdio.h>
int main()
{
	int i,n,r,sum=0,temp;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;	
		
	}
	if (temp==sum)
	{
		printf("is a asn");
	}
	else
	{
		printf("is not a asn");
	}
}
