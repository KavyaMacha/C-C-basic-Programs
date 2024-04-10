#include<stdio.h>
int read(int x[10][10],int m,int n);
int add(int a[10][10],int b[10][10],int c[10][10],int m,int n);
int write(int x[10][10],int m,int n);

int main()
{
	int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2;
	printf("Enter rows and columns of matrix1:\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter rows and columns of matrix2:\n");
	scanf("%d%d",&r2,&c2);
	
	if((r1==r2)&&(c1==c2))
	{
		printf("Enter elements of matrix1:\n");
		read(a,r1,c1);//calling read function to read matrix a
		printf("Enter elements of matrix2:\n");
		read(b,r2,c2);//calling read function to read matrix b
		printf("after adding a & b matrices\n");
		add(a,b,c,r1,c1);//calling addition function
		write(c,r1,c1);//calling write function to display the resultant matrix
	}
	else
		printf("\nAddition is not possible\n");
}

int read(int x[10][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		scanf("%d",&x[i][j]);
}

int add(int a[10][10],int b[10][10],int c[10][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		c[i][j]=a[i][j]+b[i][j];
}

int write(int c[10][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
			printf("%d\t",c[i][j]);
	}
}


