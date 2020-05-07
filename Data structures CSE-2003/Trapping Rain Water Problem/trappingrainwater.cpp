#include<iostream>
using namespace std;
void func(int arr[],int n)
{
	int sum=0;
	int res;
	for(int i=1;i<n-1;i++)
	{
		int leftmax=arr[i];
		for(int j=0;j<i;j++)
		{
			int num;
			num=arr[j];
			if(num>leftmax)
			{
				leftmax=num;
			}
		}
		int rightmax=arr[i];
		for(int k=i+1;k<n;k++)
		{
			int num2;
			num2=arr[k];
			if(num2>rightmax)
			{
				rightmax=num2;
			}
		}
		res=min(leftmax,rightmax)-arr[i];
		sum=sum+res;
	}
	cout<<sum;
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
	func(arr,n);
}
