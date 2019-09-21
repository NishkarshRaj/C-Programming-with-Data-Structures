#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,choice,freq=0,freq1=0,flag=0;
	char str[25],str1[25],str2[25];
	printf("User Defined versions of String Built in functions\n\n");
	printf("\t\t\t\t\tOption Menu\n\n");
	printf("1) Strcat\n");
	printf("2) Strcpy\n");
	printf("3) Strcmp\n");
	printf("4) Strlen\n");
	printf("Enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: 	printf("Pirated version of strcat\n\n");
	printf("Enter a string\n");
	gets(str);
	printf("Enter the second string\n");
	gets(str1);
	for(i=0;str[i]!='\0';i++)
	{
		str2[i]=str[i];
	}
	str2[i]=' ';
	i++;
	for(j=0;str1[j]!='\0';j++,i++)
	{
		str2[i]=str1[j];
	}
	printf("New string is %s",str2);
			break;
		case 2:	printf("Pirated version of strcpy\n\n");
	printf("Enter a string\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		str1[i]=str[i];
	}
	str1[i]='\0';
	printf("The new string is %s",str1);
			break;
		case 3: 	printf("Pirated version of strcmp\n\n");
	printf("Enter a string\n");
	gets(str);
	printf("Enter another string\n");
	gets(str1);
	for(i=0;str[i]!='\0';i++)
		{
			freq++;
		}
	for(i=0;str1[i]!='\0';i++)
	{
		freq1++;
	}
	if(freq1>=freq)
	{
		for(i=0;str1[i]!='\0';i++)
		{
			if(str[i]!=str1[i])
			{
				flag=1;
				break;
			}
		}	
				
			if(flag==0)
			{
				printf("Strings are same\n");
			}
			else
			{
				printf("strings are not same\n");
			}
	}
	else
	{
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]!=str1[i])
			{
				flag=1;
				break;
			}
		}	
				
			if(flag==0)
			{
				printf("Strings are same\n");
			}
			else
			{
				printf("strings are not same\n");
			}
	}
			break;
		case 4:	printf("Pirated version of strlen\n\n");
	printf("Enter a string\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		freq++;
	}
	printf("Length of the string is %d\n",freq);
			break;
		default: printf("Wrong Choice\n");
	}
	return 0;
	}
