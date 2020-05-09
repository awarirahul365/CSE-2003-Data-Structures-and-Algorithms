#include<iostream>
using namespace std;
int sectrp(int arr[],int a,int b,int check)
{
	int flag=0;
	while(a<b)
	{
		int c;
		c=arr[a]+arr[b];
		if(c==check)
		{
			flag=1;
			break;
		}
		else if(c<check)
		{
			a++;	
		}
		else if(c>check)
		{
			b--;
		}
	}
	if(flag==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void trplet(int arr[],int n, int sum)
{
	int elem;
	int obj;
	for(int i=0;i<n;i++)
	{
		elem=sum-arr[i];
		obj=sectrp(arr,i+1,n-1,elem);
		cout<<obj<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	int sum;
	cin>>sum;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	trplet(arr,n,sum);
}
