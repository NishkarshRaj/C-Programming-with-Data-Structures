#include<stdio.h>
int main()
{
	int ch,age; char sex;
	printf("Programme to check whether a driver is insured!!\n\n");
	printf("Enter 1 if married?\n");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("Driver is Insured\n");
	}
	else
	{
		printf("Enter Age and Sex as M or F\n\n");
		scanf("%d%c",&age,&sex);
		if((sex=='M')&&(age>30))
		printf("Driver is Insured\n");
		else if((sex=='F')&&(age>25))
		printf("Driver is Insured\n");
		else
		printf("Driver is not Insured\n");
		
	}
	
return 0;
}
