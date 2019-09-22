#include <stdio.h>
int main() 
{
	int i =0;
   FILE *fp;
   char buff[255];
   fp = fopen("R3.txt", "r");
   while(i<50)
   {
   fgets(buff, 255, (FILE*)fp);
   printf("%s\n", buff );
   i++;
	}
   fclose(fp);
   return 0;
}
