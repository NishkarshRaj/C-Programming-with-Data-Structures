#include<stdio.h>
int main()
{
	int x,y,i,num,rev=0,d;
	printf("Programme to find number of palindromes in a given range\n\n");
	printf("Enter Two numbers to set range\n\n");
	scanf("%d%d",&x,&y);
	for(i=x;i<=y;i++)
	{
		num=i;
		while(num>0)
		{
			d=num%10;
			rev=(rev*10)+d;
			num=num/10;
		}
		if(rev==i)
		{
			printf("Number is Palindrome %d\n",i);
		}
		rev=0; d=1;
	}
	return 0;
}
