#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t;
    vector<int>temp;
    vector<int>odd;
    vector<int>even;
    vector<int>oddreverse;
    vector<int>res;
    vector<vector<int> >imp;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int inp;
            cin>>inp;
            temp.push_back(inp);
        }
        //odd elements and even elements
        for(int k=0;k<n;k++)
        {
            if(temp[k]%2!=0)
            {
                odd.push_back(temp[k]);
            }
            else
            {
                even.push_back(temp[k]);
            }
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        for(int g=0;g<odd.size();g++)
        {
            oddreverse.push_back(odd[odd.size()-g-1]);
        }
        for(int p=0;p<oddreverse.size();p++)
        {
            res.push_back(oddreverse[p]);
        }
        for(int q=0;q<even.size();q++)
        {
            res.push_back(even[q]);
        }
        imp.push_back(res);
        temp.clear();
        odd.clear();
        oddreverse.clear();
        even.clear();
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
