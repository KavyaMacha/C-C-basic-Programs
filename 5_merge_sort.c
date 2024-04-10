
/*C program that sorts the given array of integers 
using merge sort in ascending order*/
#include<stdio.h>
void mergesort(int a[],int l,int h);
void merge(int a[],int l,int mid,int h);
void main()
{
	int n,i;
	printf("Enter number of elements:");
	scanf("%d", &n); 
	int a[n],l=0,h=n-1;
	printf("Enter %d integers:\n", n); 
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]); 
	
	mergesort(a,l,h);
	
	printf("The sorted elements are:\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
void mergesort(int a[],int l,int h)
{
	int mid;
	if(l<h)
	{
		mid=(l+h)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,h);
		merge(a,l,mid,h);
	}
}
void merge(int a[],int l,int mid,int h)
{
	int b[h];
	int i,j,k;
	i=l;
	j=mid+1;
	k=l;
	while(i<=mid && j<=h)
	{
		if(a[i]<=a[j])
			b[k++]=a[i++];
		else
			b[k++]=a[j++];
	}

	while(j<=h)
		b[k++]=a[j++];
	while(i<=mid)
		b[k++]=a[i++];
		
	for(i=l;i<=h;i++)
	{
		a[i]=b[i];
	}
}
