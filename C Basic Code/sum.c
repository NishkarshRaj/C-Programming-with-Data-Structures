#include<stdio.h>
int main()
{
	int number,sum;
	printf("\t\tProgramme to find sum of first n natural numbers using recursion\n");
	printf("\t\tEnter the number\n");
	scanf("%d",&number);
	sum=SUM(number);
	printf("\tSum of first n natural number is%d",sum);
	return 0;
}
int SUM(int num)
{
	int s;
	if(num>0)
	{
	s=num+SUM(num-1);
	return s;
	}
	else
	{
		return s;
	}

}
