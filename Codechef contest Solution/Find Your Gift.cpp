#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void func(string str,int n)
{
    stack<char>stc;
    for(int i=0;i<str.length();i++)
    {
        if(stc.empty())
        {
            stc.push(str[i]);
        }
        else
        {
            char ch=str[i];
            char tp=stc.top();
            if(ch!=tp)
            {
                stc.push(ch);
            }
        }
    }
    string res="";
    while(!stc.empty())
    {
        res=res+stc.top();
        stc.pop();
    }
    reverse(res.begin(),res.end());
    char prev='?';
    int xcod=0;
    int ycod=0;
    for(int i=0;i<res.length();i++)
    {
        if(prev=='?')
        {
            prev=res[i];
            if(res[i]=='L')
            {
                xcod--;
            }
            else if(res[i]=='R')
            {
                xcod++;
            }
            else if(res[i]=='U')
            {
                ycod++;
            }
            else if(res[i]=='D')
            {
                ycod--;
            }
        }
        else if(prev=='L' && res[i]=='U')
        {
            prev=res[i];
            ycod++;
        }
        else if(prev=='U' && res[i]=='L')
        {
            prev=res[i];
            xcod--;
        }
        else if(prev=='L' && res[i]=='D')
        {
            prev=res[i];
            ycod--;
        }
        else if(prev=='D' && res[i]=='L')
        {
            prev=res[i];
            xcod--;
        }
        else if(prev=='R' && res[i]=='U')
        {
            prev=res[i];
            ycod++;
        }
        else if(prev=='U' && res[i]=='R')
        {
            prev=res[i];
            xcod++;
        }
        else if(prev=='R' && res[i]=='D')
        {
            prev=res[i];
            ycod--;
        }
        else if(prev=='D' && res[i]=='R')
        {
            prev=res[i];
            xcod++;
        }
        else 
        {
            prev=res[i];
            continue;
        }
    }
    cout<<xcod<<" "<<ycod<<endl;
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
