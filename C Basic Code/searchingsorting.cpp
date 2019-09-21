#include<stdio.h>
void menu();
int main()
{
	int n,i,flag1=0,flag2=0,choice,el,quit=0,l,u,mid,t,k; //flag1 for binary unsorted and flag 2 for search 
	printf("All types of searching and sorting\n");
	printf("Enter size of the array you want to work upon\n");
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++)
	{
		A[i]=0;
	}
	printf("Lets enter the array elements\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the %d element\n",i+1);
		scanf("%d",&A[i]);
	}
	do
	{
	menu();
	printf("Enter your choice\n");
	scanf("%d",&choice);
	printf("\n\n");
	switch(choice)
	{
		case 1: printf("Linear Searching\n");
				printf("Enter the element that you want to search\n");
				scanf("%d",&el);
				for(i=0;i<n;i++)
				{
					if(el==A[i])
					{
						flag2=1;
						break;
					}
				}
				if(flag2==0)
				{
					printf("Element not found\n");
				}
				else
				{
					printf("Element found at %d position",i+1);
				}
				flag2=0;
			break;
		case 2: printf("Binary Sorting\n");
			if(flag1==0)
			{
				printf("The array can be unsorted!\nPlease sort the array to continue\n");
			}
			else
			{
				l=0;
				u=n-1;
				printf("Enter the element that you want to search\n");
				scanf("%d",&el);		
				while(l<=u)
				{
					mid=(l+u)/2;
					if(A[mid]<el)
					l=mid+1;
					else if(A[mid]>el)
					u=mid-1;
					else
					{
					flag2=1;
					}
				}
				if(flag2==0)
				{
					printf("Element not found\n");
				}
				else
				{
					printf("Element found at %d\n",mid+1);
				}
			}
			break;
		case 3: printf("Insertion sorting\n");
			for(i=0;i<n;i++)
			{
				t=A[i];
				k=i-1;
				while((t<A[k])&&(k>=0))
				{
					A[k+1]=A[k];
					k--;
				}		
				A[k+1]=t;		
			}
			flag1=1;
			break;
		case 4: 
			
			flag1=1;
			break;
		case 5:printf("Bubble Sorting\n");
			for(i=0;i<n;i++)
			{
				for(k=i+1;k<n;k++)
				{
					if(A[k]<A[i])
					{
						A[k]=t;
						A[k]=A[i];
						A[i]=t;	
					}
				}
			}
			flag1=1;
			break;
		case 6: printf("Lets view the Array\n");
		for(i=0;i<n;i++)
		{
			printf("Element at %d position is %d\n",i+1,A[i]);
		}
		break;
		case 7: quit=1;
		break;
		default: printf("Wrong Choice maen\n");
	}
	}while(quit!=1);
	return 0;
}
void menu()
{
	printf("\t\t\t Options\n\n");
	printf("1: Linear Search\n");
	printf("2: Binary Search\n");
	printf("3: Insertion Sort\n");
	printf("4: Bubble Sort\n");
	printf("5: Selection Sort\n");
	printf("6: View_Array\n");
	printf("7: Quit\n");
}
