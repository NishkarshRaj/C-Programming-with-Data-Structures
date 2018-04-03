#include<stdio.h>
int main()
{
	int n,num,sum=0,i=1,k=1,d,freq=0;
	printf("Hello! This is a program to check Armstrong number \n ");
	printf("Enter a number of your choice \n\n");
	scanf("%d",&n);
	num=n;
    
	while(num>0)
	{
		freq++;
		num=num/10;
	}
	
	num=n;
	
	while(num>0)
	{
		d=num%10;
		while(i<=freq)
		{
			k=k*d;
			i++;
		}
		sum=sum+k;
		k=1;
		i=1;
		num=num/10;
		}
		if(sum==n)
		{
			printf("Your Number is an armstrong number");
		}
		else
		{
			printf("Your number is not armstrong maen!");
		}
	return 0;
}
