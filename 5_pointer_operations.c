#include<stdio.h>
void main()
{
	int a=10,*p=&a;
	printf("Value of a:%d\n",a);
	printf("Address of a:%u\n",p);
	p=p+2;
	printf("Address after addition of 2:%u\n",p);
	p=p-4;
	printf("Address after subtraction of 4:%u\n",p);
	p++;
	printf("Address after incrementation:%u\n",p);
	p--;
	printf("Address after decrementation:%u\n",p);
}
