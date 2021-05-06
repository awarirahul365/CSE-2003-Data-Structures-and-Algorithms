#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void func(int n)
{
	set<int>s;
	while(true)
	{
		int rem=n%10;
		if(rem==0)
		{
			while(n>0)
			{
				int r=n%10;
				if(r!=0)
				{
					break;
				}
				else
				{
					n=n/10;
				}
			}
			if(s.find(n)!=s.end())
			{
				break;
			}
			else
			{
				s.insert(n);
				n=n+1;
			}
		}
		else
		{
			if(s.find(n)!=s.end())
			{
				break;
			}
			else
			{
				s.insert(n);
				n=n+1;
			}
		}
	}
	set<int>::iterator itr;
	for(itr=s.begin();itr!=s.end();itr++)
	{
	    cout<<(*itr)<<" ";
	}
	cout<<endl;
	cout<<s.size()<<endl;
}
int main()
{
	int n;
	cin>>n;
	func(n);
}
