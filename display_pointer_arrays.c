#include<stdio.h>
void main()
{
	int i,n,*p,a[10];
	p=&a[0];
	printf("array size:\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",p+i);
		
	}
	for(i=0;i<=n;i++)
	{
		printf("%d\t",*(p+i));
		
	}
}
