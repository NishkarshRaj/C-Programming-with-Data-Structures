#include<stdio.h>
int main()
{
	int a=0,b=1,c,range,i;
	printf("Fibonacci Programme\n");
	printf("Enter the range of Fibonacci series you want to generate\n");
	scanf("%d",&range);
	printf("%d\t%d\t",a,b);
	for(i=0;i<range-2;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
	}
	return 0;
}
