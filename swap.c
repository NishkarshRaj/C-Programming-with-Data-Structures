#include<stdio.h>
int main()
{
	int a,b,*n,*m;
	printf("\t\tProgram to Swap by call by value and call by reference\n");
	printf("\t\tLets do by call by value\n");
	printf("Enter Values of a and b\n");
	scanf("%d%d",&a,&b);
	CBV(a,b);
	printf("New values of a and b are %d\n%d\n",a,b);
		printf("\t\tLets do by call by reference\n");
	
	CBV(&a,&b);
	printf("New values of a and b are %d%d\n",*m,*n);
	return 0;
}
int CBV(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Value of a and b are %d%d\n",a,b);
}
int CBR(int *m ,int *n)
{
	*n=*n+*m;
	*m=*n-*m;
	*n=*n-*m;
	printf("Value of m and n are %d%d\n",*m,*n);
}
