#include <stdio.h>
int main() 
{
	printf("File Handling\n");
   	FILE *fp; //Create a FILE* pointer
   	//Open The file with physical name and assign to logical name
   	fp = fopen("Nish.txt", "w+");
   	//Print using fprintf
   	fprintf(fp, "This is the First Line\n");
   	//Print using the fputs
   	fputs("This is the Second Line\n", fp);
   	//Close the file
   	fclose(fp);
   	return 0;
}
