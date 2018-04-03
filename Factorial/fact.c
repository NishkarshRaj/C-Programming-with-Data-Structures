#include<stdio.h>
int main()
{
	int n,p=1;
	printf("\t\t\tEnter a number to find its factorial!!\n\n");
	scanf("%d",&n);
	while(n>0)
	{
		p=p*n;
		n--;
	}
	printf("Factorial of a number is =%d ",p);
	return 0;
}
