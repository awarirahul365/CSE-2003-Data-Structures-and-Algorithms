#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void func(string str,long long int l,long long int h)
{
    vector<int>vectzero;
    int i=0;
    while(i<str.length())
    {
        if(str[i]=='0')
        {
            int j;
            int count=0;
            for(j=i;j<str.length();j++)
            {
                if(str[j]=='0')
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            vectzero.push_back(count);
            i=j;
        }
        else
        {
            i++;
        }
    }
    if(vectzero.size()==0 && h>0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        bool flag=false;
        for(int m=0;m<vectzero.size();m++)
        {
            if(vectzero[m]<h)
            {
                h=min(h,2*(h-vectzero[m]));
            }
            else if(vectzero[m]>=h)
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
int main() {
    
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int l,h;
        cin>>l>>h;
        string str;
        cin>>str;
        func(str,l,h);
    }
}
