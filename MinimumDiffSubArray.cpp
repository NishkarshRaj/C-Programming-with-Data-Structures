#include<iostream>
using namespace std;
int main()
{
	int n,i,j,temp;
	cout<<"Enter number of values N: ";
	cin>>n; 
	int arr[n],s1[n],s2[n],sum1=0,sum2=0;
	cout<<"Enter the values"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		s1[i]=0;
		s2[i]=0;
	}
	//Sorting the array
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[j+1]>arr[j])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	j=0;
	temp=1;
	sum1=arr[0];
	s1[0]=arr[0];
	//logic
	for(i=1;i<n;i++)
	{
		if(sum1>sum2)
		{
			s2[j++] = arr[i];
			sum2 = sum2 + arr[i];
		}
		else
		{
			s1[temp++]=arr[i];
			sum1 = sum1 + arr[i];
		}
	}
	//Display final two sets
	for(i=0;i<j;i++)
	{
		cout<<s2[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<temp;i++)
	{
		cout<<s1[i]<<" ";
	}
}

