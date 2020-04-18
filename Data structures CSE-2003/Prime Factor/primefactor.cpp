#include<iostream>
#include<vector>
using namespace std;
int isprime(int m)
{
	int flag=0;
	for(int j=2;j<(m/2)+1;j++)
	{
		if(m%j==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		return m;
	}
	else
	{
		return 0;
	}
}
int func(int n,int temp[])
{
	int d=0;
	int obj;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			obj=isprime(i);
			if(obj!=0)
			{
				temp[d]=obj;
				d++;
			}
			else
			{
				continue;	
			}
		}
	}
	return d;
	
}
int main()
{
	int t;
	cout<<"Enter test cases ";
	cin>>t;
	int n;
	int temp[10000];
	vector<int>vect;
	vector<vector<int> > imp;
	int out;
	for(int i=0;i<t;i++)
	{
		cout<<"Enter number ";
		cin>>n;
		out=func(n,temp);
		for(int j=0;j<out;j++)
		{
			vect.push_back(temp[j]);
		}
		imp.push_back(vect);
		vect.clear();
	}
	for(int i=0;i<imp.size();i++)
	{
		for(int j=0;j<imp[i].size();j++)
		{
			cout<<imp[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
}
