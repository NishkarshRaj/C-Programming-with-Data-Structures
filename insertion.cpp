#include<stdio.h>
int main()
{
	int n,i,k,temp;
	printf("Programme of Insertion Sorting\n");
	printf("Enter number of elements\n");
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the %d element\t",i+1);
		scanf("%d",&A[i]);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		temp=A[i];
		k=i-1;
		while(temp<A[k]&&k>=0)
		{
			A[k+1]=A[k];
			k--;
		}
		A[k+1]=temp;
	}
	printf("Lets see the Sorted Array\n");
	for(i=0;i<n;i++)
	{
		printf("%d element is %d\n",i+1,A[i]);
	}
	return 0;
}
