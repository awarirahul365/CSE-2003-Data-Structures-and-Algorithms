#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void func(int n,int m,int k,vector<int> &vect)
{
    unordered_map<int,int>mp;
    for(int i=0;i<vect.size();i++)
    {
        int num=vect[i];
        if(num<=n)
        {
            mp[num]++;
        }
    }
    unordered_map<int,int>::iterator itr;
    vector<int>res;
    for(itr=mp.begin();itr!=mp.end();itr++)
    {
        int c=itr->second;
        if(c>1)
        {
            res.push_back(itr->first);
        }
    }
    if(res.size()==0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<res.size()<<" ";
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
}
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k;
	    cin>>n>>m>>k;
	    vector<int>vect;
	    for(int i=0;i<k;i++)
	    {
	        int p;
	        cin>>p;
	        vect.push_back(p);
	    }
	    func(n,m,k,vect);
	}
}
