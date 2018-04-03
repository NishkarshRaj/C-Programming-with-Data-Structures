#include<stdio.h>
int main()
{
	int m,n,k,l,r,c,i,j,a=0;
	printf("Enter the order of matrix A and B as r1,c1,r2,c2\n");
	scanf("%d%d%d%d",&m,&n,&k,&l);
	int A[m][n],B[k][l],C[m*l],D[m][l];
	printf("Enter %d elements row wise for Matrix A\n",m*n);
	for(r=0;r<m;r++)
	{
		for(c=0;c<n;c++)
		{
			scanf("%d",&A[r][c]);	
		}	
	}	
	printf("Enter %d elements row wise for Matrix B\n",k*l);
	for(r=0;r<k;r++)
	{
		for(c=0;c<l;c++)
		{
			scanf("%d",&B[r][c]);	
		}	
	}
	printf("Lets see the Matrix A\n");
		for(r=0;r<m;r++)
	{
		for(c=0;c<n;c++)
		{
			printf("%d  ",A[r][c]);	
		}	
		printf("\n");
	}	
	printf("Lets See matrix B\n");
	for(r=0;r<k;r++)
	{
		for(c=0;c<l;c++)
		{
			printf("%d  ",B[r][c]);	
		}	
		printf("\n");
	}
	printf("Lets perform Matrix multiplication\n");
	for(r=0,j=0;r<m,j<l;j++,r++)
	{
		for(c=0,i=0;c<n,i<k;c++,i++)
		{
			C[a]=A[r][c]*B[i][j];
			a++;
		}
	}
	a=0;
	for(r=0;r<m;r++)
	{
		for(c=0;c<l;c++)
		{
			D[r][c]=C[a];
			a++;
		}
	}
	printf("Lets see multiplied matrix\n");
	for(r=0;r<m;r++)
	{
		for(c=0;c<l;c++)
		{
			printf("%d  ",D[r][c]);
		}
		printf("\n");
	}
	return 0;
}

