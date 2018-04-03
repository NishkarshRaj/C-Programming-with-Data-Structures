#include<stdio.h>
int main()
{
	int n;
	printf("\t\t\t Programme To Print Fibonacci Series upto range specified by the user");
	printf("\t\t\t Enter the number to set range");
	scanf("%d",&n);
	Fibonacci(n);
	return 0;
}
void Fibonacci(int n)
{
	int i,a=0,b=1,c;
	printf("%d\t%d\t",a,b);
	for(i=0,i<(n-2);i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
}
