#include<stdio.h>
int main()
{
	int A[10],size,i,k;
	printf("\tMicrosoft Interview Programme\n\n");
	printf("Enter number of values you want to give\n");
	scanf("%d",&size);
	int B[size];
	for(i=0;i<10;i++)
	{
		A[i]=0;
	}
	printf("Enter values only as digits 0-9\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",B[i]);
		k=B[i];
		for(i=0;i<=9;i++)
		{
			if(k==i);
			A[i]++;	
		}
	}
	printf("Lets see the result\n");
	for(i=0;i<10;i++)
	{
		printf("Number of %d = %d\n",i,A[i]);
	}
	return 0;
}
