#include<stdio.h>
int SUM(int n);
int main()
{
	int n,sum;
	printf("Recursion Programme to find sum of n natural numbers\n");
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	sum=SUM(n);
	printf("Sum of %d natural numbers is %d\n",n,sum);
	return 0;
}
int SUM(int n)
{
	int sum;
	if(n>=0)
	sum=n+SUM(n-1);
	return sum;
}
