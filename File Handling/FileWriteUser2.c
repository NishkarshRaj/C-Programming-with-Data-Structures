#include<stdio.h>
int main()
{
	char s[100];
	printf("File Handling Writing with User Input\n");
	FILE *nish;
	nish = fopen("Nishkarsh.txt","a+");
	printf("Enter a string: ");
	//scanf("%s",&s); //Takes string upto first space,,, Nishkarsh for Nishkarsh Raj Khare input
	scanf("%[^\n]%*c",&s);
	fputs(s,nish); 
	fputs("\n",nish);
	fclose(nish);
}
