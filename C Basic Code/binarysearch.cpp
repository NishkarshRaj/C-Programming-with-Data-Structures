#include<stdio.h>
int main()
{
	int n,l,u,mid,el,i,flag=0;
	printf("Enter number of elements you want to enter\n\n");
	scanf("%d",&n);
	int A[n];
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the %d element\n",i+1);
		scanf("%d",&A[i]);
	}
	l=0;
	u=n-1;
	mid=(l+u)/2;
	printf("Enter the element you want to search\n");
	scanf("%d",&el);
	while(l<=u)
	{
		//mid=(l+u)/2;
		if(A[mid]<el)
		{
			l=mid+1;
		}
		else if(A[mid>el])
		{
			u=mid-1;
		}
		else if(A[mid]==el)
		{
			flag=1;
			break;
		}
		mid=(l+u)/2;
	}
	if(flag==0)
	{
		printf("Element not found\n");
	}
	else
	{
		printf("Element found at %d \n",mid+1);
	}
	return 0;
}
