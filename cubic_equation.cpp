#include<stdio.h>
int main()
{	
	int i,a,b,c,d,j,k,l,A[50],z=0,n,m,k1,l1,j1;
	printf("Programme to solve cubic equations\n\n");
	printf("Enter a,b,c,d which are part of equation ax^3+bx^2+cx+d\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(d>0)
	{
		for(i=1;i<=d;i++)
		{
			if(d%i==0)
			{
				A[z]=i;
				z++;
			}
			n=z;			
		}

	for(i=0;i<n;i++)
	{
		k=A[i]; k1=-k;
		j=k*k*k;	j1=-j;
		l=k*k;	l1=-l;
		if(a*j+b*l+c*k+d==0)
		{
			printf("Root of cubic equation is %d\n",A[i]);
		}
		else if(a*j1+b*l1+c*k1+d==0)
		{
			printf("Root of cubic equation is %d\n",k1);
		}
	}
}	
else
{
		for(i=1;i<=-d;i++)
		{
			if(d%i==0)
			{
				A[z]=i;
				z++;
			}
			n=z;			
		}
	printf("Factors of d are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
	for(i=0;i<n;i++)
	{
		k=A[i]; k1=-k;
		j=k*k*k;	j1=-j;
		l=k*k;	l1=-l;
		if(a*j+b*l+c*k+d==0)
		{
			printf("Root of cubic equation is %d\n",A[i]);
		}
		else if(a*j1+b*l1+c*k1+d==0)
		{
			printf("Root of cubic equation is %d\n",-A[i]);
		}
	}	
}
	return 0;
}
