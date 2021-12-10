#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void func(string str,int n)
{
    int ans=2*n;
    int counta=0;
    int countb=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='1' && i%2!=0)
        {
            countb++;
        }
        if(str[i]=='1' && i%2==0)
        {
            counta++;
        }
    }
    int chanceleftb;
    int chancelefta;
    if(n%2==0)
    {
        chancelefta=n/2;
        chanceleftb=n/2;
    }
    else
    {
        chanceleftb=(n/2)+1;
        chancelefta=n/2;
    }
    for(int i=n;i<str.length();i++)
    {
        if(i%2==0)
        {
            if(str[i]=='1')
            {
                counta++;
            }
            chancelefta--;
        }
        if(i%2!=0)
        {
            if(str[i]=='1')
            {
                countb++;
            }
            chanceleftb--;
        }
        if(counta>countb+chanceleftb)
        {
            ans=i+1;
            break;
        }
        if(countb>counta+chancelefta)
        {
            ans=i+1;
            break;
        }
    }
    cout<<ans<<endl;
}
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    func(str,n);
	}
}
