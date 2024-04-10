#include<stdio.h>
void main()
{
	int a[20],i,n,max,j;
	printf("enter the size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		max=i;
		for(j=i+1;j<n;j++)
		{
			if(a[max]<a[j])
			max=j;
		}
		int temp=a[i];
		a[i]=a[max];
		a[max]=temp;
}
	printf("after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
