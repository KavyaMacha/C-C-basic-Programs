/* Write a C program to delete an element from 1D array

Sample 1:
Enter size of the array:6                                                                                               
Enter array elements:18 24 31 9 21 46                                                                                   
Enter the element to be deleted:9                                                                                       
Array elements after deleting 9
18 24 31 21 46                                                                           
*/
#include<stdio.h>
void main()
{
    int i,d,index,n,a[10];
    printf("Enter size of the array:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be deleted:");
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        if(d==a[i])
        {
            index=i;
            break;
        }
    }
    printf("Array elements after deleting %d\n",d);
    for(i=index;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
}

