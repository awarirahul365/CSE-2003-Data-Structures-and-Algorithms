#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long int func(long long int b,long long int h)
{
    long long int height=pow(h,2);
    long long int res;
    res=b/height;
    if(res<=18)
    {
        return 1;
    }
    else if(res>=19 && res<=24)
    {
        return 2;
    }
    else if(res>=25 && res<=29)
    {
        return 3;
    }
    else
    {
        return 4;
    }
}
int main() {
	
	long long int t;
	cin>>t;
	long long int ans;
	for(long long int i=0;i<t;i++)
	{
	    long long int b;
	    long long int h;
	    cin>>b>>h;
	    ans=func(b,h);
	    cout<<ans<<endl;
	}
}
