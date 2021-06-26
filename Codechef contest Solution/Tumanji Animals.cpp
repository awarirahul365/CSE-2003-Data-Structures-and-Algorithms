#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long int func(vector<long long int> &vect)
{
    unordered_map<long long int,long long int>mp;
    for(long long int i=0;i<vect.size();i++)
    {
        mp[vect[i]]++;
    }
    long long int ansele=-1;
    long long int res=-1;
    unordered_map<long long int,long long int>::iterator itr;
    for(itr=mp.begin();itr!=mp.end();itr++)
    {
        int num=itr->second;
        if(num>ansele)
        {
            res=itr->first;
            ansele=itr->second;
        }
    }
    return res;
}
int main() {
	
	long long int n;
	cin>>n;
	vector<long long int>vect;
	for(long long int i=0;i<n;i++)
	{
	    long long int p;
	    cin>>p;
	    vect.push_back(p);
	}
	long long int outp;
	outp=func(vect);
	cout<<outp;
}
