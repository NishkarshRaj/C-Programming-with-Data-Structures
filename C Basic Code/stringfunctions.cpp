#include<stdio.h>
#include<conio.h>
int main()
{
	int choice,i,freq,j;
	char str1[25],str2[25],str3[25],ch;
	printf("Programme to make user defined string functions!\n\n");
	printf("Enter a string\n");
	gets(str1);
	printf("\nTo continue! press Y\n");
	scanf("%c",ch);
	if((ch=='y')||(ch=='Y'))
	{
		printf("\t\tUser Defined String Functions!\n\n");
		printf("Press 1: Length of string\nPress 2: Compare String\nPress 3: String Copy\nPress 4: String Concatenation\n");
		printf("Enter your choice!\n");	
		scanf("%d",choice);
		switch(ch)
		{
			case 1: for(i=0;str1[i]!='\0';i++)
					{
					freq++;
					}
					printf("Length of the string is%d\n",freq);
					break;
			case 2: printf("Give another string for comparision!\n");
					gets(str2);
					for(i=0;str1[i]!='\0';i++)
					{
						if(str1[i]==str2[i])
						{
							continue;
						}
						else
						{	
							printf("The strings are not same!\n");
							break;
						}
				}
					
				break;
			case 3: printf("Lets Copy your String!!\n");
					for(i=0;str1[i]!='\0';i++)
					{
						str2[i]=str1[i];
					}
					str2[i]='\0';
					printf("New String is %s",str2);
				break;
			case 4: printf("To concatenate! Enter another string!\n");
					gets(str2);
					for(i=0;str1[i]!='\0';i++)
					{
						str3[i]=str1[i];
					}
					str3[i]=' ';
					for(j=i+1;str2[j]!='\0';j++,i++)
					{
						str3[i]=str2[j];
					}
					printf("Concatenated String is %s",str3);
				break; 
			default: printf("I hope you know your choice is not within 1-4\n");	
		}
	}
	else
	{
		printf("Thank You for testing me!");
	}
	return 0;
}
