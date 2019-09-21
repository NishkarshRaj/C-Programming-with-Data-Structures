#include<stdio.h>
int main()
{
	int range,i,j,k,l;
	printf("Programme to Create number triange of given range\n\n");
	printf("Enter Range maen\n");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		for(j=1;j<=range-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		for(l=i-1;l>=1;l--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
