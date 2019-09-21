#include<stdio.h>
#include<conio.h>
int main()
{
	int freq=0,i,j,choice;
	char str[25],str1[25],str2[25];
	printf("Pirated version of strlen\n\n");
	printf("Enter a string\n");
	gets(str);
	printf("\t\t\tOPTION MENU\n");
	printf("1:Lenght of string\n");
	printf("2:String Compare\n");
	printf("3:String Copy\n");
	printf("4:String Concatenation\n");
	printf("Enter your choice\n");
	scanf("%d",choice);
	switch(choice)
	{
		case 1: 
			freq=len1(str);
			printf("Lenght of the string is %d",freq);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default: printf("Wrong choice User\n\n");
	}
	return 0;
}
int len1(char str[25])
{
	int i,freq=0;
	for(i=0;str[i]!='\0';i++)
	{
		freq++;
	}
	return freq;
}
