#include<iostream>
using namespace std;
int isprime(int m)
{
	int flag=0;
	int f=m/2;
	for(int i=2;i<f+1;i++)
	{
		if(m%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int func(int n){
	int rem;
	int temp;
	int sum=0;
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		sum=sum+rem;
	}
	if(sum<10)
	{
		return sum;
	}
	else
	{
		func(sum);
	}
}
int main()
{
	int t;
	cin>>t;
	int n;
	int res[1000];
	int out[1000];
	for(int i=0;i<t;i++)
	{
		cin>>n;
		res[i]=func(n);
		out[i]=isprime(res[i]);
	}
	for(int i=0;i<t;i++)
	{
		if(out[i]==1)
		{
			cout<<"P"<<endl;
		}
		else if(out[i]==0)
		{
			cout<<"NP"<<endl;
		}
	}
	
	
	
}
