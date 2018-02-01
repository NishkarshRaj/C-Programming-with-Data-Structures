#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int i;
	char a[20];
	printf("Strings Basic function==Strlen\n");
	printf("Enter a string\n");
	gets(a);
	i=strlen(a);
	printf("%d",i);
	return 0;
}
