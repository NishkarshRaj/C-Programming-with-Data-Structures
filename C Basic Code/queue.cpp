#include<stdio.h>
#include<string.h>
int isfull(int top,int maxsize);
int isempty(int top);
int main()
{
	char rep[5];
	int rear=-1,front=-1,n,maxsize,i,num,choice,flag,el,k;
	printf("Programme of Queue\n\n");
	printf("Enter the max size of the queue\n");
	scanf("%d",&maxsize);
	int queue[maxsize];
	printf("Enter the size of the queue you want to begin with\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element number %d ",i+1);
		scanf("%d",&queue[i]);
	}
	front=0;
	rear=n-1;
	printf("\n\n\t\t\tOption Menu\n\n");
	printf("1) peek\n");
	printf("2) Enqueue\n");
	printf("3) Dequeue\n");
	printf("4) Traversal\n");	
	do{
		printf("Enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("The element at the front is %d\n",queue[front]);
			break;
		case 2: printf("Lets Enqueue the elements\n");
		printf("Enter the number of elements you want to Enqueue\n");
		scanf("%d",&num);
		for(i=0;i<num;i++)
		{
			flag=isfull(rear,maxsize);
			if(flag==1)
			{
				printf("Sorry cannot enter element as Queue is full\n");
			}
			else
			{
				printf("Enter the value of the element\n");
				scanf("%d",&el);
				rear=rear+1;
				queue[rear]=el;
			}
		}
			break;
		case 3: printf("Lets delete the elements\nEnter the number of elements you want to remove\n");
		scanf("%d",&num);
		for(i=0;i<num;i++)
		{
			flag=isempty(rear);
			if(flag==1)
			printf("Sorry the queue is empty cannot remove element\n");
			else
			{
				el=queue[front];
				front+=1;
				printf("Element removed is %d\n",el);
			}
		}
			break;
		case 4: printf("Lets see the queue\n"); 
		for(i=0;i<rear;i++)
		{
			printf("The %d element is %d\n",i+1,queue[i]);
		}
			break;
		default: printf("Wrong choice mate\n\n");			
	}
	printf("Enter your choice as yes or no\n");
	scanf("%s",&rep);
	}while(strcmp(rep,"yes")==0);
	return 0;
}
int isempty(int rear)
{
	if(rear==-1)
	return 1;
	else
	return 0;
}
int isfull(int rear,int maxsize)
{
	if(rear==maxsize-1)
	return 1;
	else
	return 0;
}

