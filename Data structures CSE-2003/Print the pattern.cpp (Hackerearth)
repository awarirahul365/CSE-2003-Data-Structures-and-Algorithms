#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int count=1;
	int level=1;
	for(int i=1;i<=num;i++)
	{
		if(level%2!=0 && i==1)
		{
			cout<<count<<endl;
			count++;
		}
		else if(level%2!=0 && i!=1)
		{
			int limit=count+level-1;
			for(int j=0;j<i;j++)
			{
				cout<<limit<<" ";
				limit--;
			}
			cout<<endl;
			count=count+level;
		}
		else
		{
			for(int j=0;j<i;j++)
			{
				cout<<count<<" ";
				count++;
			}
			cout<<endl;
		}
		level++;
	}
}
