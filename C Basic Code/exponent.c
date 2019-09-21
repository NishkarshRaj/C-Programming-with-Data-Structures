#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("\t\tEnter a number to calculate exponent of num 2 by num1\n");
	scanf("%d%d",&a,&b);
	c=exponent(a,b);
	printf("The exponent of num2 on num1 is %d",c);
	return 0;
}
int exponent(int a,int b)
{
	int k;
	k=pow(a,b);
	return k;
}
