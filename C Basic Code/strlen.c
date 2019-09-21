#include<stdio.h>
#include<conio.h>
int main()
{
	int freq=0,i;
	char str[25];
	printf("Pirated version of strlen\n\n");
	printf("Enter a string\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		freq++;
	}
	printf("Length of the string is %d\n",freq);
	return 0;
}
