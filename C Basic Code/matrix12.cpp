#include<stdio.h>
int main()
{
	printf("Programme of 5X5 matrix\n");
	int A[5][5],B[5][5],C[5][5],D[5][5],E[25],a=0,r,c,i,j;
	printf("Lets enter elements of Matrix A row wise\n");
	for(r=0;r<5;r++)
	{
		for(c=0;c<5;c++)
		{
			scanf("%d",&A[r][c]);
		}
	}
	printf("Lets enter elements of Matrix B row wise\n");
	for(r=0;r<5;r++)
	{
		for(c=0;c<5;c++)
		{
			scanf("%d",&B[r][c]);
		}
	}
	for(r=0;r<5;r++)
	{
		for(c=0;c<5;c++)
		{
			C[r][c]=A[r][c]+B[r][c];
		}
	}
	for(r=0,j=0;r<5;r++,j++)
	{
		for(c=0,i=0;c<5;c++,i++)
		{
			E[a]+=A[r][c]*B[i][j];
			a++;
		}
	}
	a=0;
	for(r=0;r<5;r++)
	{
		for(c=0;c<5;c++)
		{
			D[r][c]=E[a];
			a++;
		}
	}
	printf("lets see the sum matrix\n");
	for(r=0;r<5;r++)
	{
		for(c=0;c<5;c++)
		{
			printf("%d\t",C[r][c]);
		}
		printf("\n");
	}
	printf("lets see the Multiplied matrix\n");
	for(r=0;r<5;r++)
	{
		for(c=0;c<5;c++)
		{
			printf("%d\t",D[r][c]);
		}
		printf("\n");
	}	
	return 0;
}
