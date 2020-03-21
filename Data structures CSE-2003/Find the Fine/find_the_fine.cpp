#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    int t;
    int fine=0;
    cin>>t;
    vector<int>cars;
    vector<int>pay;
    vector<int>store;
    vector<int>res;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cin>>d;
        for(int j=0;j<n;j++)
        {
            int inp1;
            cin>>inp1;
            cars.push_back(inp1);
        }
        for(int k=0;k<n;k++)
        {
            int inp2;
            cin>>inp2;
            pay.push_back(inp2);
        }
        if(d%2!=0)
        {
            for(int i=0;i<cars.size();i++)
            {
                if(cars[i]%2==0)
                {
                    store.push_back(i);
                }
            }
        }
        else
        {
            for(int j=0;j<cars.size();j++)
            {
                if(cars[j]%2!=0)
                {
                    store.push_back(j);
                }
            }
        }
        for(int p=0;p<store.size();p++)
        {
            fine=fine+pay[store[p]];
        }
        res.push_back(fine);
        fine=0;
        cars.clear();
        pay.clear();
        store.clear();
    }
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i];
        cout<<"\n";
    }


}
