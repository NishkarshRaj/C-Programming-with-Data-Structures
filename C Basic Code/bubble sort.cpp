#include<stdio.h>
int main()
{
	int n,i,j,temp;
	printf("Programme of Bubble Sorting\n");
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
		for(j=0;j<n;j++)
		{
			if(A[j+1]<A[j])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	printf("Lets see the Sorted Array\n");
	for(i=0;i<n;i++)
	{
		printf("%d element is %d\n",i+1,A[i]);
	}
	return 0;
}
