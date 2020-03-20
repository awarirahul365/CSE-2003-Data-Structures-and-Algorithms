#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    cin>>t;
    vector<int>temp;
    vector<int>res;
    vector<vector<int> >imp;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int inp;
            cin>>inp;
            temp.push_back(inp);
        }
        for(int k=0;k<n;k++)
        {
            if(k!=(n-1))
            {
                temp.erase(temp.begin());
                int larg;
                larg=*max_element(temp.begin(),temp.end());
                res.push_back(larg);
                larg=0;
            }
            else if(k==(n-1))
            {
                res.push_back(-1);
            }
        }
        imp.push_back(res);
        temp.clear();
        res.clear();
    }
    for(int u=0;u<imp.size();u++)
    {
        for(int v=0;v<imp[u].size();v++)
        {
            cout<<imp[u][v]<<" ";
        }
        cout<<"\n";
    }


}
