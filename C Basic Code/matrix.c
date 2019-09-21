#include<stdio.h>
int main()
{
	int A[3][4],r,c;
	printf("Two Dimensional Array\n\n");
	printf("Lets enter the values\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<4;c++)
		{
			printf("Enter the values of %d row and %d column ",r,c);
			scanf("%d",A[r][c]);
			printf("\n");
		}
	}
	printf("Lets see the matrix\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<4;c++)
		{	
			printf("%d ",A[r][c]);
		}
		printf("\n");
	}
	return 0;
}
