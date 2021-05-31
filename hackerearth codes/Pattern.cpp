/*printing pattern Z*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int dec=n-2;
	for(int i=0;i<n;i++)
	{
		if(i==0 || i==n-1)
		{
			for(int j=0;j<n;j++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
		else
		{
			for(int k=0;k<dec;k++)
			{
				cout<<" ";
			}
			cout<<"*";
			for(int m=dec+1;m<n;m++)
			{
				cout<<" ";
			}
			cout<<endl;
			dec--;
		}
	}
}
