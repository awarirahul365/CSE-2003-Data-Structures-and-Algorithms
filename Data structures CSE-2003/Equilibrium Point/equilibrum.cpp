#include<iostream>
using namespace std;
void eqbrm(int arr[],int n)
{
	int flag=0;
	int totalsum=0;
	for(int i=0;i<n;i++)
	{
		totalsum=totalsum+arr[i];
	}
	int left_sum=0;
	for(int i=0;i<n;i++)
	{
		if(left_sum==totalsum-arr[i])
		{
			flag=1;
			break;
		}
		left_sum=left_sum+arr[i];
		totalsum=totalsum-arr[i];
	}
	if(flag==1)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
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
	eqbrm(arr,n);
}
