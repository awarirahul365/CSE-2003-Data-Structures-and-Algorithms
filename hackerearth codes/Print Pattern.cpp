#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int blankspace=0;
	for(int i=n;i>=1;i--)
	{
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
		for(int k=0;k<blankspace;k++)
		{
			cout<<" ";
		}
		for(int m=0;m<i;m++)
		{
			cout<<"*";
		}
		blankspace=blankspace+2;
		cout<<endl;
	}

}
