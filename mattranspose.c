/* Write a C program to find the Transpose of a matrix.

Sample input & output:
Enter order of matrix:3 2                                                                                               
Enter 6 matrix elements:1 2 3 4 5 6                                                                                     
The original matrix                                                                                                     
1 2                                                                                                               
3 4                                                                                                               
5 6                                                                                                               
The transpose of matrix                                                                                                 
1 3 5                                                                                                       
2 4 6

*/
#include<stdio.h>
int main()
{
	int i,j,m,n,mat[10][10];
	printf("Enter order of matrix:\n");
	scanf("%d%d",&m,&n);
	printf("Enter %d matrix elements:\n",m*n);
	printf("The original matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
    }
    printf("the transpose of the matrix\n");
    for(j=0;j<n;j++)
    {
    	for(i=0;i<m;i++)
    	{
    		 printf(" %d",mat[i][j]);
		}
		printf("\n");
	}
}
