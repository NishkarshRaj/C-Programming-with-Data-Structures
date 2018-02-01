#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int i;
	char a[20],b[20],c[20];
	printf("Strings Basic function==Strcmp\n");
	printf("Enter two strings\n");
	gets(a);
	gets(b);
	i=strcmp(a,b);
	printf("%d",i);
	return 0;
}
