#include<stdio.h>
int main()
{
	int n,i,k,c;
	printf("\t\t\tEnter number of rows\n\n\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(k=0;k<=i;k++)
		{
			c=fact(i)/(fact(k)*fact(i-k));
			printf("%d",c);
			printf("\t");
		}
		printf("\n");
	}
	return 0;
}
int fact(int num)
{
	int r=1;
	while(num>0)
	{
		r=r*num;
		num--;
	}
	return r;
}
