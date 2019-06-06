#include<stdio.h>
int main()
{
	int i,j,a=10;
	i=a++;
	j=++a;
	printf("i=%d and j= %d",i,j);
	i=++a + a++;
	j=a++ + ++a;
	printf("i=%d and j=%d",i,j);
	return 0;
}
