#include<stdio.h>
int main()
{
	int A[10],i,value,pos,c;
	for(i=0;i<10;i++)
	{
		A[i]=0;
	}
	printf("Enter Initial values\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Which position do you want to enter the value into \n");
	scanf("%d",&pos);
	printf("Enter the value \n");
	scanf("%d",&value);
	if(A[pos-1]==0)
	{
		A[pos-1]=value;
	}
	else
	{
		if(A[9]==0)
		{
			for(c=9;c>pos;c--)
			{
			A[c+1]=A[c];
			}
			A[pos-1]=value;
	}
	else
	{
		for(i=0;i<10;i++)
		{
			if(A[i]==0)
			break;
		}
		for(c=i;c>pos;c--)
			{
			A[c+1]=A[c];
			}
			A[pos-1]=value;
		
	}
	}
	printf("The redesigned Array is\n");
	for(i=0;i<=9;i++)
	{
		printf("%d\n",A[i]);
	}
	return 0;
}
