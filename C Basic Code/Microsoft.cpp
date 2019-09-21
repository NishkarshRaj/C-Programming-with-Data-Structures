#include<stdio.h>
int main()
{
	int size,i,j,c,num;
	printf("\t\tProgramme to check number of specific digits 0-9 (MICROSOFT Interview)\n");
	printf("Enter the number of digits\n");
	scanf("%d",&size);
	printf("Enter values upto given size %d",size);
	int A[10];
	for(j=0;j<=9;j++)
	{
		A[j]=0;
	}
	for(i=0;i<=size-1;i++)
	{
		c=scanf("%d",&num);
		A[c]++;
	}
	printf("\n");
	for(j=0;j<=9;j++)
	{
	printf("Number of digits of %d\t are %d\n",j,A[j]);
	}
	return 0;
}
