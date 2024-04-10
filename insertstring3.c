#include<string.h>
void main()
{
    char str1[20],str2[20];
    int l1,l2,n,i,j,k;
    printf("Enter the string 1:");
    gets(str1);
    l1=strlen(str1);
    printf("Enter the string 2:");
    gets(str2);
    l2=strlen(str2);
    printf("Enter the position where the string is to be inserted:");
    scanf("%d",&n);
    n=n-1;
    for(i=l1-1;i>=n;i--)
    {
        str1[i+l2]=str1[i];
    }
    for(j=n,k=0;j<n+l2 && k<l2 ;j++,k++)
    {
        str1[j]=str2[k];
    }
    //str2[l2+1]='\0';
    printf("After inserting the string is %s",str1);  
    
}
