#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    unordered_map<string,long long int>mp;
	    for(int i=0;i<3*n;i++)
	    {
	        string str;
	        long long int code;
	        cin>>str>>code;
	        if(mp.find(str)==mp.end())
	        {
	            mp[str]=code;
	        }
	        else
	        {
	            mp[str]=mp[str]+code;
	        }
	    }
	    vector<long long int>vect;
	    unordered_map<string,long long int>::iterator itr;
	    for(itr=mp.begin();itr!=mp.end();itr++)
	    {
	        vect.push_back(itr->second);
	    }
	    sort(vect.begin(),vect.end());
	    for(int i=0;i<vect.size();i++)
	    {
	        cout<<vect[i]<<" ";
	    }
	    cout<<endl;
	}
}
