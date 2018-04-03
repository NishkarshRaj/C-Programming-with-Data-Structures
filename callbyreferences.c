#include<stdio.h>
int main()
{
	int a,b;
	printf("\t\t\tCall by Reference \n\n");
	printf("Lets learn it by swapping!!\n");
	printf("Enter two integer values\n");
	scanf("%d%d",&a,&b);
	printf("Values of a and b before passing is %d %d\n",a,b);
	swap(&a,&b);
	printf("Values of a and b after swapping is %d %d\n",a,b);
	return 0;
}
void swap(int *x,int *y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}
