#include <stdio.h>
int main() 
{
   char *names[6] = {"kavya","divya","praneeth","ramesh",
   "sumith","pranavi"};
   int i = 0;
   names[3]="mahathi";
   for(i = 0; i < 6; i++) 
   {
      printf("Value of names[%d] = %s %u\n", i, names[i], &names[i]); // or *(names+i)
   }
   return 0;
}
