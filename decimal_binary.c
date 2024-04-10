#include<stdio.h>
void main()
{
	int n,n1,temp=1,rem;
	long bin;
	printf("enter number");
	scanf("%d",&n);
	if(n>0 && n<=255)
	{
		n1=n;
		while(n!=0)
		{
			rem=n%2;
			n=n/2;
			bin=bin+temp*rem;
			temp=temp*10;
		}
		printf("the binary equivalent of a given positive integer %d is %ld",n1,bin);
	}
	else
	{
		printf("%d is out of range",n1);
	}
}
