#include<stdio.h> 
int main() 
{ 
//Needed because fputs takes only string or *string as input
    char result[50]; 
    int num;
	scanf("%d",&num); 
    sprintf(result, "%d", num); 
    printf("The string for the num is %s", result);  
} 

