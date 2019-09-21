#include<stdio.h>
int main()
{
	int value,pos,array[100],n,i,choice,el,flag=0,j,temp;
	printf("Programmes on Array!\n");
	printf("Enter number of elements in an array\n");
	scanf("%d",&n);
	for(i=0;i<100;i++)
	{
		array[i]=0;
	}
	printf("Enter the Elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&n);
	}
	printf("Lets see the original array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	printf("Now you have four choices\n");
	printf("1: Insert an element\n");
	printf("2: Delete an element\n");
	printf("3: Search an element\n");
	printf("4: Sort array in ascending order\n");
	printf("Enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("Insert an element\n");
				printf("Enter value and position you want\n");
				scanf("%d%d",&value,&pos);
				if(array[pos-1]==0)
				{
					array[pos-1]=value;
				}
				else
				{
					for(i=n-1;i>=pos-1;i--)
					{
						array[i+1]=array[i];
					}
					array[pos-1]=value;
				}
				printf("Lets see the new array");
				for(i=0;i<n;i++)
				{
					printf("%d\t",array[i]);
				}
			break;
		case 2: printf("Delete an element\n");
				printf("Enter position of whose element you want to delete\n");
				scanf("%d",&pos);
				for(i=pos-1;i<n;i++)
				{
					array[i]=array[i+1];
				}
				array[n-1]=0;
				printf("Lets see the new array");
				for(i=0;i<n;i++)
				{
					printf("%d\t",array[i]);
				}
			break;
		case 3: printf("Search an element of array\n");
				printf("Enter element you want to search\n");
				scanf("%d",&el);
				for(i=0;i<n;i++)
				{
					if(array[i]==el)
					{
						printf("Element is found at %d position\n",i+1);
						flag=1;
					}
				}
				if(flag==0)
				{
					printf("element not found\n");
				}
			break;
		case 4:	printf("Ascending order sorting\n");
				for(i=0;i<n;i++)
				{
					for(j=i+1;j<n;j++)
					{
						if(array[j]<array[i])
						{
							temp=array[i];
							array[i]=array[j];
							array[j]=temp;
						}
					}
				}
				printf("Lets see the new array");
				for(i=0;i<n;i++)
				{
					printf("%d\t",array[i]);
				}
			break;
		default: printf("Wrong Choice\n");	
	}
	return 0;
}
