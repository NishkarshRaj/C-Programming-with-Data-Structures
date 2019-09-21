#include<stdio.h>
int main()
{
	int val,b=0,e,mid,i,n,arr[50],loc=0;
	printf("Enter the size of the array");
	scanf("%d",&n);
	printf("\n Enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the elment u want 2 find");
	scanf("%d",&val);
	e=n-1;
	while(loc!=val&&b<=e)
	{
		mid=(b+e)/2;
		if(arr[mid]==val)
		loc=val;
		else
		if(arr[mid]<val)
		e=mid-1;
		else
		b=mid+1;
	}
    if(loc==val)
    printf("Element found");
    else
    printf("Element not found");
}
