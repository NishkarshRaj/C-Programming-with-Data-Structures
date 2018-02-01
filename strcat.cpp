#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int i;
	char a[20],b[20],c[40];
	printf("Strings Basic function==Strcat\n");
	printf("Enter two strings\n");
	gets(a);
	gets(b);
	strcpy(c,strcat(a,b));
	printf("%s",c);
	return 0;
}
