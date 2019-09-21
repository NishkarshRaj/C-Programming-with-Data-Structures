#include<stdio.h>
int main()
{
	int num,c;
	printf("\t\t\t\t\tProgramme to check whether Even number\n\n");
	printf("\t\tBy Modulus method\n");
	printf("\t\tBy Conditional operator\n");
	printf("Enter Your Choice\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1: printf("By Modulus Method\nEnter a Number\n");
		scanf("%d",&num);
		if(num%2==0)
		{
			printf("The number is even %d",num);
		}
		else
		{
			printf("The number is odd %d",num);
		}
			break;
		case 2: printf("By Conditional Operator\nEnter a number\n");
		scanf("%d",&num);
		(num%2==0)?printf("Even"):printf("Odd");
			break;
		default:printf("Sorry Wrong Choice! Goodbye\n");
	}
	return 0;
}
