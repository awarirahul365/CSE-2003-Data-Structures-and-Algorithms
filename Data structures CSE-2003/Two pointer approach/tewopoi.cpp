#include<iostream>
using namespace std;
void func(int arr[],int n,int num)
{
	int start=0;
	int end=n-1;
	int flag=0;
	while(start<end)
	{
		int val;
		val=arr[start]+arr[end];
		if(val==num)
		{
			flag=1;
			break;
		}
		else if(val>num)
		{
			end--;
		}
		else if(val<num)
		{
			start++;
		}
	}
	if(flag==1)
	{
		cout<<"Found";
	}
	else
	{
		cout<<"Not Found";
	}
}
int main()
{
	int n;
	cin>>n;
	int num;
	cin>>num;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	func(arr,n,num);
}
