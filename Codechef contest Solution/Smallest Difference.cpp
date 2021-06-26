#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void func(vector<int> &vect)
{
    int a=INT_MAX;
    int b=INT_MAX;
    int pres=INT_MAX;
    for(int i=0;i<vect.size();i++)
    {
        for(int j=0;j<vect.size();j++)
        {
            if(i==j)
            {
                continue;
            }
            else 
            {
                int diff=abs(vect[j]-vect[i]);
                if(diff<pres)
                {
                    pres=diff;
                }
            }
        }
    }
    vector<pair<int,int> >vp;
    for(int i=0;i<vect.size();i++)
    {
        for(int j=0;j<vect.size();j++)
        {
            if(i==j)
            {
                continue;
            }
            else 
            {
                int d=abs(vect[j]-vect[i]);
                if(d==pres)
                {
                    vp.push_back(make_pair(vect[j],vect[i]));
                }
            }
        }
    }
    sort(vp.begin(),vp.end());
    cout<<vp[0].first<<" "<<vp[0].second<<endl;
}
int main() {
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        vector<int>vect;
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int p;
            cin>>p;
            vect.push_back(p);
        }
        func(vect);
    }
}
