#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void func(vector<int> &vect)
{
    unordered_set<int>s;
    for(int i=1;i<vect.size()-1;i++)
    {
        int j;
        for(j=0;j<i;j++)
        {
            if(vect[j]>=vect[i])
            {
                break;
            }
        }
        if(j==i)
        {
            s.insert(vect[i]);
        }
    }
    vector<int>v;
    for(int i=1;i<vect.size()-1;i++)
    {
        int j;
        for(j=i+1;j<vect.size();j++)
        {
            if(vect[j]<=vect[i])
            {
                break;
            }
        }
        if(j==vect.size())
        {
            v.push_back(vect[i]);
        }
    }
    int res=-1;
    for(int i=0;i<v.size();i++)
    {
        if(s.find(v[i])!=s.end())
        {
            res=v[i];
            break;
        }
    }
    cout<<res<<endl;
}
int main() {
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int>vect;
        for(int j=0;j<n;j++)
        {
            int p;
            cin>>p;
            vect.push_back(p);
        }
        func(vect);
    }
}
