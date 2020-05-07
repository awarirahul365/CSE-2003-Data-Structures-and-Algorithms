#include<iostream>
using namespace std;
void kadalgo(int arr[],int n)
{
	int maxend=arr[0];
	int maxsub=maxend;
	for(int i=1;i<n;i++)
	{
		int num=arr[i];
		if((maxend+num)>num)
		{
			maxend=maxend+num;
		}
		else if(maxend<num)
		{
			maxend=num;
		}
		if(maxend>maxsub)
		{
			maxsub=maxend;
		}
	}
	cout<<maxsub;
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
	kadalgo(arr,n);
}
