/*
#include<stdio.h>
void main()
{
	int a[]={1,2,3,4,5};
	printf("Address of a:%u\n",a);
	printf("Address of a:%u\n",&a[0]);
	int *p;
	p=a;
	printf("Address of a:%u\n",p);
}*/
#include<stdio.h>
void main()
{
	int arr[]={5,10,15,20,25,30};
	int i, *ptr;
	ptr = &arr[0];
	for(i=0;i<6;i++)
 	{
		printf("arr[%d] = %d ",i,*ptr);
		printf("address = %u\n",ptr);
		ptr++;
	}
} 
