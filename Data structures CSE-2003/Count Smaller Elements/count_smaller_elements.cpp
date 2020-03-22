#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr;
    int t;
    int n;
    vector<int>storage;
    vector<vector<int> >imp;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int m;
            cin>>m;
            arr.push_back(m);
        }
        int temp;
        temp=n;
        int p=0;
        int mark=0;
        while(p<temp)
        {
            if(p!=n-1)
            {
                int check=arr[p];
                for(int j=p;j<n;j++)
                {
                    if(check>arr[j])
                    {
                        mark=mark+1;
                    }
                }
                check=0;
            }
            else if(p==n-1)
            {
                mark=0;
            }
            storage.push_back(mark);
            p++;
            mark=0;
        }
        imp.push_back(storage);
        storage.clear();
        arr.clear();
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
