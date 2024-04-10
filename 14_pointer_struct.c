#include<stdio.h>
#include<string.h>
struct Student
{
	char name[20];
	int rno;
	int age;
};
void main()
{
	struct Student S;
	struct Student *sptr;
	sptr = &S;
	
	
	printf("Enter student details:\n");
	gets(S.name);
	scanf("%d",&S.rno);
	scanf("%d",&S.age);

	printf("student 1 details using pointer:\n");
	printf("Name= %s \nRoll no.= %d\nage= %d\n", 
	sptr->name, sptr->rno, sptr->age);
	/*
	printf("Name= %s \nRoll no.= %d\nage= %d\n", 
	(*sptr).name, (*sptr).rno, (*sptr).age);
	*/
	
	
	
}

