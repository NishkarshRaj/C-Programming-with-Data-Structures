#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char rep[5];
	int n,i,k;
	float x0,x1,j,f=0,f1=0;
	printf("Program for Newton Raphson Method\n\n");
	printf("Enter the order of the polynomial n where polynomial is\na0+a1x1+a2x2...+anxn\n");
	scanf("%d",&n);
	int A[n+1]; //coefficient are order+1
	printf("Enter the coefficients of x as a0,a1,...an\n");
	for(i=0;i<n+1;i++)
	{
		printf("Coefficient a%d is ",i);
		scanf("%d",&A[i]);
	}
	do
	{
		printf("Enter initial guess value\n");
		scanf("%f",&x0);
		for(i=0,k=0;i<n+1;i++,k++)
		{
			j=pow(x0,k);
			f=f+A[i]*j;
		}
		if(f==0)
		{
			printf("The root of the equation is %f\n",x0);
		}
		else
		{
			for(i=1,k=0;i<n+1;i++,k++)
			{
				j=pow(x0,k);
				f1=f1+i*j*A[i];
			}
			x1=x0-(f/f1);
			printf("If you continue put initial guess as %f\n",x1);
		}
		printf("Do you want to continue! If yes enter yes\n");
		scanf("%s",&rep);
	}while(strcmpi(rep,"yes")==0);
	return 0;
}
