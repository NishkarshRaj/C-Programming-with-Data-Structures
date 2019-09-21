#include<stdio.h>
struct WWE
{
	int id;
	float salary;
};
struct WWE_superstar
{
	char name[25];
	char sex[7];
	float weight;
	struct WWE sup;
};
int main()
{
	int i,n;
	printf("\t\t\t\tFirst Structure programme\n");
	printf("Enter number of superstars\n");
	scanf("%d",&n);
	struct WWE_superstar superstar[n];
	printf("Enter details about WWE Superstars\n\n");
	for(i=0;i<n;i++)
	{
		printf("Entry about Superstar %d in terms of stardom\n\n",i+1);
		printf("Enter name of superstar \n");
		scanf("%s",&superstar[i].name);
		printf("Enter sex of superstar \n");
		scanf("%s",&superstar[i].sex);
		printf("Enter weight of superstar \n");
		scanf("%f",&superstar[i].weight);
		printf("Enter ID of the superstar \n");
		scanf("%d",&superstar[i].sup.id);
		printf("Enter salary of the superstar in US Million dollars \n");
		scanf("%f",&superstar[i].sup.salary);
		printf("\n");
	}
	printf("Lets see the details\n\n");
	for(i=0;i<n;i++)
	{
		printf("Name of the superstar %d is %s\n",i+1,superstar[i].name);
		printf("Sex of the superstar %d is %s\n",i+1,superstar[i].sex);
		printf("Weight of the superstar %d is %f\n",i+1,superstar[i].weight);
		printf("ID of the superstar %d is %d\n",i+1,superstar[i].sup.id);
		printf("Salary of the superstar %d is %f\n",i+1,superstar[i].sup.salary);
	}	
	return 0;
}
