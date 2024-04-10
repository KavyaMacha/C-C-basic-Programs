//wacp for armstrong number
#include<stdio.h>
int main()
{
	int n,temp,r,sum=0;
	printf("enter the 3 digit number");
	scanf("%d",&n);
	temp=n;
	while(n!=0);
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("%d is armstrong number",n);
	}
	else
	{
		printf("%d is not armstrong number",n);
	}
	return 0;
}
