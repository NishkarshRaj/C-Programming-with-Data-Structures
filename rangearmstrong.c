#include<stdio.h>
int main()
{
	int n,i,num,p=0,k,d;
	printf("Enter the number to set the range\n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(num=i ;num>0;num=num/10)
		{
			d=num%10;
			k=d*d*d;
			p=p+k;
		}
		if(p==i)
		{
			printf("Number is Armstrong  %d\n",i);
		}
		k=1;
		p=0;
	}
	return 0;
}
