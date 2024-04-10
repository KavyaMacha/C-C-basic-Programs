#include<stdio.h>
void main()
{
   int a=10 ;
   float b=9.8;
   char c='y' ;
   void *ptr ;
   ptr = &a ;//int
   printf("a = %d, address of integer variable a = %u\n",*(int*)ptr, ptr) ;
   ptr = &b ;//float
   printf("b = %.2f, address of float variable b = %u\n",*(float*)ptr, ptr) ;
   ptr = &c ;//char
   printf("c = %c, address of character variable c = %u\n",*(char*)ptr, ptr) ;
}
