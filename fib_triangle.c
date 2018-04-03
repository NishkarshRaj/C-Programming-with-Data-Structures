#include<stdio.h>
int main()
{
	int n,i,j,a=0,b=1,c;
	printf("\t\t\t\tDisplay Fibonacci Triangle!!\n\n");
	printf("Enter your desired range!!  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=i;j++)
	{
		c=a+b;
		printf("%d",c);
		a=b;
		b=c;
		printf(" ");
	}
	a=0;
	b=1;
	printf("\n\n");
    }
    return 0;
}
