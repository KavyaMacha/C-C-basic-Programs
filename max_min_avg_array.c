#include<stdio.h>
int main()
{
	int a[50],i,n,sum=0,max=0,min=0;
	printf("enter the n of ele");
	scanf("%d",&n);
	printf("enter the array of elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum=max=min=a[0];
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
			if(min>a[i])
			min=a[i];
			if(max<a[i]);
			max=a[i];
	}
	float avg=sum/n;
	printf("min=%d\n",min);
	printf("max=%d\n",max);
	printf("avg=%.2f\n",avg);
}
