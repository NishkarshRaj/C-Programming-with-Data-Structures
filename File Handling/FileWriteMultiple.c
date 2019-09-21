#include<stdio.h>
int main()
{
	char s[100];
	int i=0;
	printf("File Handling Writing with User Input\n");
	FILE *nish;
	nish = fopen("Nishkarsh.txt","a+");
	for(i=0;i<10;i++)
	{
	printf("Enter a string: ");
	scanf("%[^\n]%*c",&s);
	fputs(s,nish); 
	fputs("\n",nish);
	}
	fclose(nish);
}
