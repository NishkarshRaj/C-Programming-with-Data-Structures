#include<stdio.h>
int main()
{
	int n,*j,**k;
	j=&n;
	k=&j;
	printf("\t\t\t\t\tPOINTERS\n\n");
	printf("Enter any integer value\n");
	scanf("%d",&n);
	printf("Value of number is %d\n",n);
	printf("Address of number is %u\n",&n);
	printf("Size of number integer in 64 bits is %d\n\n",sizeof(n));
	printf("Lets take this to a new level\n\n");
	printf("Address of j is %u\n",k);
	printf("Address of k is %u\n",&k);
	
	return 0;
}
