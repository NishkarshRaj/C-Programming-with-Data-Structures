#include<stdio.h>
int fibonacci(int n);
int main()
{
	int n,sum;
	printf("Recursion Programme to print sum of fibonacci numbers until range given\n");
	printf("Enter the range of series\n");
	scanf("%d",&n);
	sum=fibonacci(n);
	printf("sum of %d numbers of fibonacci series is %d\n",n,sum);
	return 0;
}
int fibonacci(int n)
{
	int sum;
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	{
	sum=fibonacci(n-1)+fibonacci(n-2);
	}
	return sum;
}
