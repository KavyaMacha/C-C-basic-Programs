/*  
Write a C program to delete the given element and its duplicate elements from given array.

Sample Input & output:
Enter Array size:7                                                                                                                       
Enter array elements                                               
5 3 11 35 5 7 8                                                                                                                     
Enter number to delete:5                                                                                                                       
5 found 2 times and deleted successfully                                                                                
Array elements after deleting 5                                                                                         
3 11 35 7 8

Sample 2:
Enter Array size:6                                                                                                      
Enter array elements                                                                                                    
8 8 9 7 3 8                                                                                                             
Enter number to delete:8                                                                                                
8 found 3 times and deleted successfully                                                                                
Array elements after deleting 8                                                                                         
9 7 3                                                                                                                   

*/ 
#include<stdio.h>
void main()
{
    int n,d,i,j,k,index,c=0;
    printf("Enter Array size:");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number to delete:\n");
    scanf("%d",&d);
    
    for(i=0;i<n;i++)
    {
        if(d==a[i])
        {
            c++;
        }
    }
    printf("%d found %d times and deleted successfully\n",d,c);
    
    printf("Array elements after deleting %d\n",d);
    for(i=0;i<n;i++)
    {
        if(d==a[i])
        {
            for(j=i,k=0;j<n-1;j++,k++)
            {
                a[j]=a[j+1];
            }
            n--;
            i--;
        }    
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
}

