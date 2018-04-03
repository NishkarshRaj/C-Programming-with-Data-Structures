#include<stdio.h>
int main()
{
	char *c;
	char a='a';
	printf("\t\tSize of char on 64 bit computer is%d\n ",sizeof(c));
	c=&a;
	printf("\t\tValue of c%d\n ",*c);
	printf("\t\tValue of c%c\n ",*c);
	printf("\t\tPointer address%d\n ",c);
	return 0;
}
