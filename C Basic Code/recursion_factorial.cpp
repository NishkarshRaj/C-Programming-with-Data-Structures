#include<stdio.h>
int factorial(int n);
int main()
{
	int n,fact;
	printf("Recursion Programme to find Factorial of a number\n");
	printf("Enter the number Whose Factorial you need\n");
	scanf("%d",&n);
	fact=factorial(n);
	printf("Factorial of %d is %d\n",n,fact);
	return 0;
}
int factorial(int n)
{
	int f;
	if(n!=1)
	{
	f=n*factorial(n-1);
	}
	else
	{
		return 1;
	}
	return f;
}
