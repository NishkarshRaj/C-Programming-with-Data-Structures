#include<stdio.h>
#include<conio.h>
int main()
{
	int freq=0,freq1=0,i,flag=0;
	char str[25],str1[25];
	printf("Pirated version of strcmp\n\n");
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
	return 0;
}
	
