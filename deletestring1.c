#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    int i,n,l,pos;
    printf("Enter the string:");
    gets(str);
    printf("Enter the position:");
    scanf("%d",&pos);
    pos=pos-1;
    printf("Enter the number of characters to be deleted:");
    scanf("%d",&n);
    l=strlen(str);
    for(i=pos+n;i<=l;i++)
    //for(i=pos;i<l;i++)
    {
        str[i-n]=str[i];
    }
    //str[i]='\0';
    printf("The string after deletion is %s",str);
}
