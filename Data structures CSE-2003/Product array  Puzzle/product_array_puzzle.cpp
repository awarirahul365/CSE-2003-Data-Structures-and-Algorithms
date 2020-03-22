#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    int t;
    vector<int>arr;
    vector<int>storage;
    vector<vector<int> >imp;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int k=0;k<n;k++)
        {
            int h;
            cin>>h;
            arr.push_back(h);
        }
        int temp=n;
        int p=0;
        int prod=1;
        while(p<temp)
        {
            for(int j=0;j<n;j++)
            {
                if(j!=p)
                {
                    prod=prod*arr[j];
                }
            }
            storage.push_back(prod);
            p++;
            prod=1;
        }
        p=0;
        prod=1;
        imp.push_back(storage);
        storage.clear();
        arr.clear();
    }
    for(int i=0;i<imp.size();i++)
    {
        for(int j=0;j<imp[i].size();j++)
        {
            cout<<imp[i][j]<<" ";
        }
        cout<<"\n";
    }
}
