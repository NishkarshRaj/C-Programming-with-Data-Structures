#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	printf("Alphabetically sort the strings\n\n");
	char str[10][25],temp[25];
	printf("Enter 10 words\n");
	for(i=0;i<10;i++)
	{
		gets(str[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
		}
	}
	printf("The Sorted strings are\n");
	for(i=0;i<10;i++)
	{
		printf("%s\n",str[i]);
	}
	return 0;
}
