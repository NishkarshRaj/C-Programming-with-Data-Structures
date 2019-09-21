#include<stdio.h>
int main()
{
	int a1,a2,a3,a4,i,j,a5,a6,a7,a8,k,l;
	printf("\t\t\t\tBasic Increment programme\n");
	printf("\t\tEnter value of a number\n");
	scanf("%d",&a1);
	a2=a1; a3=a1; a4=a1; a5=a1; a6=a1; a7=a1; a8=a1;
	printf("Value of a++%d\n ",a1++);
	printf("Value of ++a%d\n ",++a2);
	i=a3++;
	printf("Value of i=a++%d\n ",i);
	j=++a4;
	printf("Value of i=++a%d\n ",j);
	k= (a5++)+(++a6);
	l= (++a8)+(a7++);
	printf("Value of a++ + ++a%d\n",k);
	printf("Value of ++a + a++%d\n",l);
	
	
	return 0;
	
}
