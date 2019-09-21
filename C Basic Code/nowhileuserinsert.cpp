#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char s[20];
	printf("Enter strings bitch\n");
	while(strlen(gets(s))>0)
	{
		printf("%d fuck is %s\n",++i,s);
	}
	return 0;
}
