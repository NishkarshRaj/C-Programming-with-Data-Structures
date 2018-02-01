#include<stdio.h>
int main()
{
	int range,i,j,a=1;
	printf("Forming right angled triangle of given range\n");
	printf("Enter range\n\n");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",a++);
		}
		printf("\n");
	}
	return 0;
}
