#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int i,k;
	char str[100],str1[100];
	printf("Rot13 algorithm program using Ceaser Cipher\n");
	printf("Enter a string\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		k=str[i];
		if((k>=97)&&(k<=122))
		{
			if(k<110)
			{
				str1[i]=(char)k+13;
			}
			else if(k>110)
			{
				str1[i]=(char)k-13;
			}
		}
		else if((k>=65)&&(k<=90))
		{
			if(k<78)
			{
				str1[i]=(char)k+13;
			}
			else if(k>78)
			{
				str1[i]=(char)k-13;
			}
		}
		else if(k==32)
		{
			str1[i]=' ';
		}
		else
		{
			str1[i]=str[i];
		}
	}
	printf("New string is %s \n",str1);
}
