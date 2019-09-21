#include<stdio.h>
int calsum(int x,int y, int z);
int main()
{
	int a,b,c,sum;
	printf("Function call by value programme!\n");
	printf("Enter any three numbers!\n");
	scanf("%d%d%d",&a,&b,&c);
	sum=calsum(a,b,c);
	printf("Sum is %d",sum);
	return 0;
}
int calsum(int x,int y, int z)
{
	return x+y+z;
}
