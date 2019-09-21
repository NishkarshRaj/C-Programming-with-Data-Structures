#include<stdio.h>
int main()
{
	char s[100];
	printf("File Handling Writing with User Input\n");
	FILE *nish;
	nish = fopen("Nishkarsh.csv","a+");
	printf("Enter a string: ");
	scanf("%[^\n]%*c",&s);
	fputs(s,nish); 
	fputs(",\n",nish);
	fclose(nish);
}
