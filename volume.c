#include<stdio.h>
int main()
{
	int c,r,h,volume;
	printf("\t\t\t\t\tEnter Programme to Calculate Volumes\n\n");
	printf("\t\t\t 1: Volume of sphere\n");
	printf("\t\t\t 2: Volume of cylinder\n");
	printf("\t\t\t 3: Volume of cone\n");
	printf("Enter Your choice\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1: printf("Volume of Sphere\n");
		printf("Enter the radii\n");
		scanf("%d",&r);
		volume=(4*3.14*r*r*r)/3;
		printf("volume of sphere is %d",volume);
			break;
		case 2: printf("Volume of Cylinder\n");
		printf("Enter the radii and height\n");
		scanf("%d%d",&r,&h);
		volume=3.14*r*r*h;
		printf("Volume of sphere is %d",volume);
			break;
		case 3: printf("Volume of Cone\n");
		printf("Enter the radii and height\n");
		scanf("%d%d",&r,&h);
		volume=(3.14*r*r*h)/3;
		printf("Volume of cone is %d",volume);
			break;
		default: printf("Sorry wrong choice\n");	
	}
	return 0;
}
