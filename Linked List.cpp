#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct employee
{
	char name[25];
	int emp_id;
	employee *next;
}emp;
int main()
{
	employee *head,*ptr,*ptr1,*ptr2;
	int i,x,n,quit=0,k=0,freq1=0,ch,num,flag=0,el,number,rec=0;
	printf("Program on Linked List\n\n");
	printf("Enter number of entries you want to make\n");
	scanf("%d",&n);
	printf("Lets enter record number 1\n");
	head=(emp*)malloc(sizeof(emp));
	printf("Enter name of employee 1\n");
	scanf("%s",&(head->name));
	printf("Enter Id of employee 1\n");
	scanf("%d",&(head->emp_id));
	head->next=NULL;
	ptr=head;
	for(i=2;i<=n;i++)
	{
		ptr->next=(emp*)malloc(sizeof(emp));
		ptr=ptr->next;
		printf("Enter name of employee %d\n",i);
		scanf("%s",&(ptr->name));
		printf("Enter id of employee %d\n",i);
		scanf("%d",&(ptr->emp_id));
		ptr->next=NULL;
	}
	for(ptr=head;ptr!=NULL;ptr=ptr->next)
		{
			freq1++;
		}
		do
		{
			printf("\t\t\tOption Menu\n\n");
			printf("1: Traversal of nodes\n");
			printf("2: Insert at Beginning\n");
			printf("3: Insert at end\n");
			printf("4: Insert at Any position\n");
			printf("5: Search an Element by ID\n");
			printf("6: Search an element by ID and return Address\n");
			printf("7: Deletion of first node\n");
			printf("8: Deletion Of Last Node\n");
			printf("9: Deletion of any node\n");
			printf("10: Quit\n");
			printf("Enter your choice\n\n");
			scanf("%d",&ch);
			switch(ch)
			{
			case 1: printf("Traversal and number of nodes\n");
			for(ptr=head;ptr!=NULL;ptr=ptr->next)
			{
				k++;
				printf("Name of %d Employee is %s\n",k,ptr->name);
				printf("ID of %d Employee is %d\n",k,ptr->emp_id);
			}
			k=0;
			break;
			case 2: printf("Insertion at beginning\n");
			if(freq1==0)
			{
				printf("No node exists! Enter First element\n");
				head=(emp*)malloc(sizeof(emp));
				printf("Enter name of the employee\n");
				scanf("%s",&(head->name));
				printf("Enter id of employee\n");
				scanf("%d",&(head->emp_id));
				head->next=NULL;
				ptr=head;
			}
			printf("How many nodes do you want to enter?\n");
			scanf("%d",&num);
			for(i=1;i<=num;i++)
			{
			 	ptr=(emp*)malloc(sizeof(emp));
			 	printf("Enter the name of employee\n");
			 	scanf("%s",&(ptr->name));
			 	printf("Enter ID of employee\n");
			 	scanf("%d",&(ptr->emp_id));
			 	ptr->next=head;
			 	head=ptr;
			}
			break;
			case 3: printf("Insertion at End\n");
				if(head==NULL)
				{
					printf("TESTING\n");
					printf("Empty Linked List!Enter first node\n");
					ptr=(emp*)malloc(sizeof(emp));
					printf("Enter name of the employee\n");
					scanf("%s",&(ptr->name));
					printf("Enter id of employee\n");
					scanf("%d",&(ptr->emp_id));
					ptr->next=NULL;
					head=ptr;
				}
				else
				{
					ptr2=(emp*)malloc(sizeof(emp));
					printf("Enter name of the employee\n");
					scanf("%s",&(ptr2->name));
					printf("Enter id of employee\n");
					scanf("%d",&(ptr2->emp_id));
					for(ptr1=head;ptr1!=NULL;ptr=ptr1,ptr1=ptr1->next);
					ptr->next=ptr2;
					ptr2->next=NULL;
				}
				break;
			case 4: printf("Insertion at any point\n");
				printf("Enter position you want to enter where 1 implies at beginning\n");
				scanf("%d",&number);
				for(x=1,ptr=head;x<number;x++,ptr1=ptr,ptr=ptr->next);
					ptr2=(emp*)malloc(sizeof(emp));
					printf("Enter name of the employee\n");
					scanf("%s",&(ptr2->name));
					printf("Enter id of employee\n");
					scanf("%d",&(ptr2->emp_id));
					ptr2->next=ptr1->next;
					ptr1->next=ptr2;
				break;
		
			case 5: printf("Enter an Employee ID for comparision\n");
			scanf("%d",&el);
			for(ptr=head;ptr!=NULL;ptr=ptr->next)
			{
				if(el==ptr->emp_id)
				{
				flag=1;
				break;}
								}					
								if(flag==0)
								{
									printf("Element not found\n");
								}
								else
								{
									printf("Element found\n");
								}
			break;
			case 6: printf("Search and return Address\n");
			 printf("Enter an Employee ID for comparision\n");
			scanf("%d",&el);
			for(ptr=head;ptr!=NULL;ptr=ptr->next)
			{
				rec++;
				if(el==ptr->emp_id)
				{
				flag=1;
				break;}
								}					
								if(flag==0)
								{
									printf("Element not found\n");
								}
								else
								{
									printf("Element found at record number %d\n",rec);
									printf("Name of searched Employee %s\n",ptr->name);
									printf("ID of searched Employee %d\n",ptr->emp_id);
								}
				break;
			case 7: printf("Deletion of First Node\n");
				ptr=head;
				head=head->next;
				free(ptr); 
				break;
			case 8: printf("Deletion of last node\n");
			for(ptr=head;ptr->next!=NULL;ptr1=ptr,ptr=ptr->next);
			ptr1->next=NULL;
			free(ptr);
			break;
			case 9: printf("Deletion at any point\n");
				printf("Enter position you want to delete where 1 implies at beginning\n");
				scanf("%d",&number);
				for(x=1,ptr=head;x<number;x++,ptr1=ptr,ptr=ptr->next);
				ptr1->next=ptr->next;
				free(ptr);
				break;
			case 10: quit=1;
			break;
			default: printf("Wrong Choice\n");
			}
		}while(quit!=1);
	return 0;
}
