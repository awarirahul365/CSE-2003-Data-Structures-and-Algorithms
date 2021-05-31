#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int r,c;
		cin>>r>>c;
		int level=1;
		for(int i=0;i<r;i++)
		{
			if(level%2!=0)
			{
				for(int j=0;j<c;j++)
				{
					if(j%2==0)
					{
						cout<<'*';
					}
					else
					{
						cout<<'.';
					}
				}
				cout<<endl;
			}
			else
			{
				for(int j=0;j<c;j++)
				{
					if(j%2==0)
					{
						cout<<'.';
					}
					else
					{
						cout<<'*';
					}
				}
				cout<<endl;
			}
			level++;
		}
		cout<<endl;
	}
}
