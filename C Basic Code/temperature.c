#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float s,A;
	printf("enter values of a,b,c");
	scanf("%d %d %d", &a,&b,&c);
	s= (a+b+c)/2;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area Of Triangle is %f", A);
	return 0;
}
