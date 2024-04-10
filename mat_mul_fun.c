#include<stdio.h>
int read(int x[10][10],int m,int n);
int mul(int a[10][10],int b[10][10], int c[10][10],int r1,int c2,int r2);
int write(int x[10][10],int m,int n);
int main()
{
	int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2;
	printf("Enter rows and columns of matrix1:\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter rows and columns of matrix2:\n");
	scanf("%d%d",&r2,&c2);
	
	if(c1==r2)
	{
		printf("\nEnter elements of matrix1:\n");
		read(a,r1,c1);
		printf("Enter elements of matrix2:\n");
		read(b,r2,c2);
		printf("After multiplying a & b matrices\n");
		mul(a,b,c,r1,c2,r2);
		write(c,r1,c2);
	}
	else
		printf("\nMultiplication is not possible\n");
}
int read(int x[10][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&x[i][j]);
}
int mul(int a[10][10],int b[10][10], int c[10][10], int r1,int c2,int r2)
{
	int i,j,k;
	for(i=0;i<r1;i++)
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(k=0;k<r2;k++)
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
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



