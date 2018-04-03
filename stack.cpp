#include<stdio.h>
#include<stdlib.h>
typedef struct customer
{
	char name[30];
	int cust_id;
	customer *next;
}cust;
int main()
{
	struct customer *top=NULL,*ptr,*temp;
	int choice,quit=0,i,flag=0;
	printf("Programme of Stack using Linked lists\n");
	do
	{
	printf("\t\t\tOption Menu\n\n");
	printf("1: Create\n");
	printf("2: Push\n");
	printf("3: Pop\n");
	printf("4: Peek\n");
	printf("5: Traversal\n");
	printf("6: quit\n");
	printf("Enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: if(top!=NULL)
			{
				 printf("Cannot create nodes exist already\n");
			}
			else
			{
		ptr=(cust*)malloc(sizeof(cust));
		printf("Enter Id of Customer\n");
		scanf("%d",&(ptr->cust_id));
		printf("Enter name of customer\n");
		scanf("%s",&(ptr->name));
		ptr->next=NULL;
		top=ptr;
		flag=1;
		}
			break;
		case 2:	temp=(cust*)malloc(sizeof(cust));
		printf("Enter Id of Customer\n");
		scanf("%d",&(temp->cust_id));
		printf("Enter name of customer\n");
		scanf("%s",&(temp->name));
		temp->next=top;
		top=temp;
			break;
		case 3: temp=top;
		top=top->next;
		free(temp);
			break;
		case 4: printf("Name at the top is %s\n",top->name);
				printf("ID at top is %d\n",top->cust_id);
			break;
		case 5: if(flag==0)
		{
			printf("Stack does not exists\n");
		}
		 printf("Traversal of nodes\n");
		for(ptr=top;ptr!=NULL;ptr=ptr->next)
		{
			i=1;
			printf("ID of the %d customer is %d\n",i,ptr->cust_id);
			printf("Name of %d customer is %s\n",i,ptr->name);
			i++;
		}
		i=0;
		break;
		case 6: quit=1;
			break;
		default: printf("Wrong choice\n");
	}
}while(quit!=1);
	return 0;
}

