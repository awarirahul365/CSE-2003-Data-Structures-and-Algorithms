#include<iostream>
#include<cmath>
using namespace std;
int isprime(int temp)
{
	int flag=1;
	for(int i=2;i<=(temp/2);i++)
	{
		if(temp%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int func(int n){
	//for count
	int con=0;
	int rem;
	int temp=n;
	while(n>0)
	{
		rem=n%10;
		con=con+1;
		n=n/10;
	}
	int rem1;
	int div;
	int p;
	int out[con];
	for(int i=0;i<con;i++)
	{
		rem1=temp%10;
		div=temp/10;
		p=pow(10,con-1);
		temp=rem1*p+div;
		out[i]=isprime(temp);
	}
	int sum=0;
	for(int i=0;i<con;i++)
	{
		sum=sum+out[i];
	}
	if(sum==con)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
int main()
{
	int t;
	cout<<"Enter test cases ";
	cin>>t;
	int n;
	int arr[1000];
	for(int i=0;i<t;i++)
	{
		cout<<"Enter the number ";
		cin>>n;
		arr[i]=func(n);
	}
	for(int i=0;i<t;i++)
	{
		cout<<arr[i]<<endl;
	}
}
