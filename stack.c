#include<stdio.h>
#include<string.h>
int main()
{
	char rep[5];
	int top=-1,n,maxsize,i,num,choice,flag,el,k;
	printf("Programme of Stack\n\n");
	printf("Enter the max size of the Stack\n");
	scanf("%d",&maxsize);
	int stack[maxsize];
	printf("Enter the size of the Stack you want to begin with\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element number %d ",i+1);
		scanf("%d",&stack[i]);
	}
	top=n-1;
	printf("\n\n\t\t\tOption Menu\n\n");
	printf("1) peek\n");
	printf("2) PUSH\n");
	printf("3) POP\n");
	printf("4) Traversal\n");	
	do{
		printf("Enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("The element at the top is %d\n",stack[top]);
			break;
		case 2: printf("Lets push the elements\n");
		printf("Enter the number of elements you want to Push\n");
		scanf("%d",&num);
		for(i=0;i<num;i++)
		{
			flag=isfull(top,maxsize);
			if(flag==1)
			{
				printf("Sorry cannot enter element as Stack is full\n");
			}
			else
			{
				printf("Enter the value of the element\n");
				scanf("%d",&el);
				top=top+1;
				stack[top]=el;
			}
		}
			break;
		case 3: printf("Lets delete the elements\nEnter the number of elements you want to remove\n");
		scanf("%d",&num);
		for(i=0;i<num;i++)
		{
			flag=isempty(top);
			if(flag==1)
			printf("Sorry the stack is empty cannot remove element\n");
			else
			{
				el=stack[top];
				top=top-1;
				printf("Element removed is %d\n",el);
			}
		}
			break;
		case 4: printf("Lets see the stack\n"); 
		for(i=0;i<top;i++)
		{
			printf("The %d element is %d\n",i+1,stack[i]);
		}
			break;
		default: printf("Wrong choice mate\n\n");			
	}
	printf("Enter your choice as yes or no\n");
	scanf("%s",&rep);
	}while(strcmp(rep,"yes")==0);
	return 0;
}
int isempty(int top)
{
	if(top==-1)
	return 1;
	else
	return 0;
}
int isfull(int top,int maxsize)
{
	if(top==maxsize-1)
	return 1;
	else
	return 0;
}

