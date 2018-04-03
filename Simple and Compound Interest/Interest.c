#include<stdio.h>
#include<math.h>
int main()
{
	int SI,CI,Principal,r,t,n,c,s; //n is the number of times rate is applied in one time period
	float k,z;
	printf("\t\t\tProgramme To Calculate SI and CI\n");
	printf("\t\t\tEnter 1 To calculate Simple Interest\n");
	printf("\t\t\tEnter 2 to calculate Compound Interest\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1: printf("Lets check Simple Interest\n");
				printf("Enter Principal, rate(in percent) and time\n");
				scanf("%d%d%d",&Principal,&r,&t);
				SI= (Principal*r*t)/100;
				printf("The Simple Interest is%d ",SI);
				break;
		case 2: printf("Lets Calculate Compound Interest\n");
				printf("Enter Principal,rate,time,ratetime\n");
				scanf("%d%d%d%d",&Principal,&r,&t,&n);
			    k=1+(r/n);
			    s=n*t;
			    z=pow(k,s);
			    CI=Principal*z;
			    printf("The Compound Interst is%d ",CI);
				break;
				default:printf("Sorry wrong choice");		
	}
	return 0;
}
