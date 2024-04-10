#include<stdio.h>
#define MAX 5
int top=-1;
int stack[MAX];
int count=0;
void push(int v)
{
	if(count==MAX-1)
	{
		printf("stack overflown\n");
	}
	else
	{
		top++;
		stack[top]=v;
	}
}
int pop()
{
	if(top==-1)
	{
		printf("stack underflown\n");
		return -1;
	}
	else
	{
		return stack[top--];	
	}
}
int peek()
{
	return stack[top];
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d ",stack[i]);
	}
	printf("\n");
}
int main()
{
	int ch,x;
	printf("1.PUSH\n");
	printf("2.POP\n");
	printf("3.DISPLAY\n");
	printf("4.PEEK\n");
	printf("5.EXIT\n");
	while(1)
	{
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the element to push");
				scanf("%d",&x);
				push(x);
				break;
			case 2:
				x=pop();
				if(x!=-1)
					printf("popped element=%d\n",x);
				break;
			case 3:
				display();
				break;		
			case 4:
				printf("peek=%d\n",peek());
				break;
			case 5:
				return 0;
				break;
			default:
				printf("INVALID  OPTION\n");
					
		}	
	}
	
}
