#include<stdio.h>
int main()
{
	int i,n,num,m,k=1,l=1,num1,j;
	float z,sinx,x1=0,x2=0;
	printf("\t\t\tPrint the Sinx series\n\n");
	printf("Enter an odd number to set range \n");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("The number is even maen!\n");
	}
	else
	{
		printf("Enter number to calculate sin of number \n");
		scanf("%d",&num);
		if(n%4==1)
		{
			for(i=1;i<=n;i=+4)
			{
				for(m=1;m<=i;m++)
				{
					k=k*num;
				}
				for(num1=num;num1>0;num1--)
				{
					l=l*num1;
				}
				z=k/l;
				x1=x1+z;
				k=1;
				l=1;
			}
			for(j=3;j<=n-2;j+=4)
			{
				for(m=1;m<=j;m++)
				{
					k=k*num;
				}
				for(num1=num;num1>0;num1--)
				{
					l=l*num1;
				}
				z=k/l;
				x2=x2+z;
				k=1;
				l=1;
			}
		}
		else if(n%4==3)
		{
					for(i=1;i<=-2;i=+4)
			{
				for(m=1;m<=i;m++)
				{
					k=k*num;
				}
				for(num1=num;num1>0;num1--)
				{
					l=l*num1;
				}
				z=k/l;
				x1=x1+z;
				k=1;
				l=1;
			}
			for(j=3;j<=n+2;j+=4)
			{
				for(m=1;m<=j;m++)
				{
					k=k*num;
				}
				for(num1=num;num1>0;num1--)
				{
					l=l*num1;
				}
				z=k/l;
				x2=x2+z;
				k=1;
				l=1;
			}
		}
		sinx=x1-x2;
		printf("Sinx of number is %f",&sinx);
	}
	return 0;
}
