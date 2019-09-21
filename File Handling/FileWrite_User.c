#include<stdio.h>
int main()
{
	char s[100];
	printf("File Handling Writing with User Input\n");
	FILE *nish;
	nish = fopen("Nishkarsh.txt","w+"); //recreates file thus overwrites :( needs append
	printf("Enter a string: ");
	scanf("%s",&s); //Takes string upto first space,,, Nishkarsh for Nishkarsh Raj Khare input
	fputs(s,nish);
	fclose(nish);
}
