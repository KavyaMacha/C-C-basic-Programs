#include<stdio.h>
struct Employee 
{ 
	char name[40]; 
	int age; 
	float bs; 
};
int main() 
{  
	struct Employee e; 
	FILE *fp=fopen("employee_data.txt","r"); 
	if (fp == NULL) 
	{ 
		puts("Cannot open file"); 
		return 0; 
	} 
	while(fscanf(fp, "%s %d %f", e.name, &e.age, &e.bs ) != EOF) 
	{
		printf ( "%s %d %f\n", e.name, e.age, e.bs ) ; 
	}
	fclose(fp);
}
