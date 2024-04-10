#include<stdio.h>
void main()
{
	int a=10;
	int *p;
	p=&a;
	printf("Value of a:%d\n",a);
	printf("Address of a:%x\n",&a);
	printf("Value of p(Address of a):%x\n",p);
	printf("Value at address p:%d\n",*p);
	printf("Value of a:%d\n",*(&a));
}
