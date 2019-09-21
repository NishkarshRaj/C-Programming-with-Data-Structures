#include<stdio.h>
int main()
{
	int a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3;
	float x,y,z,k;
	printf("\t\t\t\t\tCrammer's Rule!!\n\n\n\n");
	printf("Enter Coffecient matrix as a1,a2,a3 in one column, b1,b2,b3 in second column and c1,c2,c3 in third column\n");
	printf("a1x + b1y + c1z = d1\na2x + b2y + c2z = d2\na3x + b3y + c3z = d3\n");
	scanf("%d%d%d%d%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2,&b3,&c1,&c2,&c3);
	printf("Enter value of value matrix d1 d2 and d2\n");
	scanf("%d%d%d",&d1,&d2,&d3);
	printf("\n\n");
	printf("x= del(x)/del\ny= del(y)/del\nz= del(z)/del\n");
	k=(a1*(b2*c3-c2*b3))-(b1*(a2*c3-c2*a3))+(c1*(a2*b3-b2*a3));
	x=(d1*(b2*c3-c2*b3))-(b1*(d2*c3-c2*d3))+(c1*(d2*b3-b2*d3))/k;
	y=(a1*(d2*c3-c2*d3))-(d1*(a2*c3-c2*a3))+(c1*(a2*d3-d2*a3))/k;
	z=(a1*(b2*d3-d2*b3))-(b1*(a2*d3-d2*a3))+(d1*(a2*b3-b2*a3))/k;
	printf("Value of x=%f\nValue of y=%f\nValue of z=%f\n",x,y,z);
	return 0;
}
