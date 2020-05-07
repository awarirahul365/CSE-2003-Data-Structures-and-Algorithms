#include<iostream>
using namespace std;
void subsum(int arr[],int n)
{
	int maxsum=arr[0];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			sum=arr[j]+sum;
			if(sum>maxsum)
			{
				maxsum=sum;	
			}	
		}
		sum=0;
	}
	cout<<maxsum;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	subsum(arr,n);
	
}
