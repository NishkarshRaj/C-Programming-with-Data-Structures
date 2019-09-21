#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int i;
	char a[20],b[20];
	printf("Strings Basic function==Strcpy\n");
	printf("Enter two string\n");
	gets(a);
	gets(b);
	strcpy(a,b);
	printf("%s",a);
	return 0;
}
