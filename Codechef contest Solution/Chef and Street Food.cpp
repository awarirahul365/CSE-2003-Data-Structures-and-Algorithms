#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int func(int s,int p,int v)
{
    int existingstores=s;
    int chefstore=s+1;
    int spilt=p/chefstore;
    int chefprofit=spilt*v;
    return chefprofit;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int ans=0;
	    for(int i=0;i<n;i++)
	    {
	        int s,p,v;
	        cin>>s>>p>>v;
	        int outp=func(s,p,v);
	        ans=max(ans,outp);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
