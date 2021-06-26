#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void func(int x,int m,int d)
{
    int cheftime=x*m;
    int uppertime=x+d;
    int ans=min(cheftime,uppertime);
    cout<<ans<<endl;
}
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int x,m,d;
	    cin>>x>>m>>d;
	    func(x,m,d);
	}
}
