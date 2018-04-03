#include<stdio.h>
int main()
{
	int m,n,k=0;
	printf("Matrix transpose\n\n");
	printf("Enter order of matrix as m,n\n");
	scanf("%d%d",&m,&n);
	int A[m][n],r,c,B[n][m],C[m*n];
	printf("Enter elements of the Matrix\n");
	for(r=0;r<m;r++)
	{
		for(c=0;c<n;c++)
		{
			printf("Enter element of %d row and %d column\n",r+1,c+1);
			scanf("%d",&A[r][c]);
			C[k]=A[r][c];
			k++;
		}
	}
	printf("Lets see our Matrix\n");
	for(r=0;r<m;r++)
	{
		for(c=0;c<n;c++)
		{
			printf("%d\t",A[r][c]);
		}
		printf("\n");
	}
	printf("\n\n");
	k=0;
	for(c=0;c<m;c++)
	{
		for(r=0;r<n;r++)
		{
			B[r][c]=C[k];
			k++;
		}
	}
	printf("Lets See our Transpose Matrix\n");
	for(r=0;r<n;r++)
	{
		for(c=0;c<m;c++)
		{
			printf("%d\t",B[r][c]);
		}
		printf("\n");
	}
	return 0;
}
