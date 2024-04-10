/*Write a C program to compute mean, variance, Standard Deviation of n elements
in single dimension array.

Sample Output:
Enter the number of integers:6                                                                                          
Enter the integers:12 14 21 15 10 18                                                                                                                      
mean = 15.00                                                                                                            
variance = 13.33                                                                                                        
deviation = 3.65

*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0,a[100];
    float mean,var=0,value,dev=0,sum1=0;
    printf("Enter the number of integers:");
    scanf("%d",&n);
    printf("Enter the integers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    mean=sum/n;
    for(i=0;i<n;i++)
    {
        sum1=sum1+pow((a[i]-mean),2);
    }
    var=sum1/n;
    dev=sqrt(var);
    printf("mean = %.2f\n",mean);
    printf("variance = %.2f\n",var);
    printf("deviation = %.2f\n",dev);
}
