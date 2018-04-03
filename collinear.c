#include<stdio.h>
int main()
{
	int x1,x2,x3,y1,y2,y3;
	printf("\t\t\t\tProgramme to check collinearity of three points\n\n");
	printf("Enter three points\n");
	printf("Enter points as x1, x2, x3, y1, y2, y3\n");
	scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
	if((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))==0)
	{
		printf("The points are collinear");
	}
	else
	{
		printf("Points are non collinear");
	}
	return 0;
}
