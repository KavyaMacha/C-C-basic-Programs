#include<stdio.h>
struct Student
{
	int rno;
	char *name;
	struct Student *link;
};
void main()
{
	struct Student node1;
	//student 1 creation
	node1.rno=601;
	node1.name="Ram";
	node1.link=NULL;
	printf("Student 1 details: %d %s %d\n",node1.rno,node1.name,node1.link);
	
	//student 2 creation
	struct Student node2;
	node2.rno=602;
	node2.name="laxman";
	node2.link=NULL;
	node1.link=&node2; //linking node 1 and node 2
	
	printf("Student 1 (after creating student 2): %d %s %d\n",node1.rno,node1.name,node1.link);
	printf("Student 2: %d %s %d\n",node1.link->rno,node1.link->name,node1.link->link); 
}
