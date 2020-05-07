#include<iostream>
using namespace std;
int majele(int arr[],int n)
{
	int con=1;
	int index=0;
	for(int i=1;i<n;i++)
	{
		if(arr[index]==arr[i])
		{
			con=con+1;
		}
		else
		{
			con=con-1;
		}
		if(con==0)
		{
			index=i;
			con=1;
		}
	}
	int check=arr[index];
	int fincon=0;
	for(int i=0;i<n;i++)
	{
		if(check==arr[i])
		{
			fincon=fincon+1;
		}
	}
	if(fincon<=(n/2))
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int t;
	cin>>t;
	int n;
	int out[1000];
	for(int i=0;i<t;i++)
	{
		cin>>n;
		int arr[n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		out[i]=majele(arr,n);
	}
	for(int i=0;i<t;i++)
	{
		cout<<out[i]<<endl;
	}
}
